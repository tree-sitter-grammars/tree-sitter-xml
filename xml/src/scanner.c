#include "../../common/scanner.h"

#include <assert.h>
#include <locale.h>
#include <string.h>
#include <wctype.h>

#define MAX(a, b) ((a) > (b) ? (a) : (b))

#define VEC_RESIZE(vec, _cap)                                                                                          \
    if ((_cap) > (vec).cap && (_cap) > 0) {                                                                            \
        void *tmp = realloc((vec).data, (_cap) * sizeof((vec).data[0]));                                               \
        assert(tmp != NULL);                                                                                           \
        (vec).data = tmp;                                                                                              \
        (vec).cap = (_cap);                                                                                            \
    }

#define VEC_GROW(vec, _cap)                                                                                            \
    if ((vec).cap < (_cap)) {                                                                                          \
        VEC_RESIZE((vec), (_cap));                                                                                     \
    }

#define VEC_PUSH(vec, el)                                                                                              \
    if ((vec).cap == (vec).len) {                                                                                      \
        VEC_RESIZE((vec), MAX(16, (vec).len * 2));                                                                     \
    }                                                                                                                  \
    (vec).data[(vec).len++] = (el);

#define VEC_POP(vec)                                                                                                   \
    {                                                                                                                  \
        STRING_FREE(VEC_BACK(vec));                                                                                    \
        (vec).len--;                                                                                                   \
    }

#define VEC_BACK(vec) ((vec).data[(vec).len - 1])

#define VEC_FREE(vec)                                                                                                  \
    {                                                                                                                  \
        if ((vec).data != NULL)                                                                                        \
            free((vec).data);                                                                                          \
        (vec).data = NULL;                                                                                             \
    }

#define VEC_CLEAR(vec)                                                                                                 \
    {                                                                                                                  \
        for (int i = 0; i < (vec).len; i++) {                                                                          \
            STRING_FREE((vec).data[i]);                                                                                \
        }                                                                                                              \
        (vec).len = 0;                                                                                                 \
    }

#define STRING_RESIZE(vec, _cap)                                                                                       \
    void *tmp = realloc((vec).data, ((_cap) + 1) * sizeof((vec).data[0]));                                             \
    assert(tmp != NULL);                                                                                               \
    (vec).data = tmp;                                                                                                  \
    memset((vec).data + (vec).len, 0, (((_cap) + 1) - (vec).len) * sizeof((vec).data[0]));                             \
    (vec).cap = (_cap);

#define STRING_GROW(vec, _cap)                                                                                         \
    if ((vec).cap < (_cap)) {                                                                                          \
        STRING_RESIZE((vec), (_cap));                                                                                  \
    }

#define STRING_PUSH(vec, el)                                                                                           \
    if ((vec).cap == (vec).len) {                                                                                      \
        STRING_RESIZE((vec), MAX(16, (vec).len * 2));                                                                  \
    }                                                                                                                  \
    (vec).data[(vec).len++] = (el);

#define STRING_FREE(vec)                                                                                               \
    {                                                                                                                  \
        if ((vec).data != NULL)                                                                                        \
            free((vec).data);                                                                                          \
        (vec).data = NULL;                                                                                             \
    }

#define STRING_CLEAR(vec)                                                                                              \
    {                                                                                                                  \
        (vec).len = 0;                                                                                                 \
        memset((vec).data, 0, (vec).cap * sizeof(char));                                                               \
    }

typedef struct {
    uint32_t len;
    uint32_t cap;
    char *data;
} String;

typedef struct {
    uint32_t len;
    uint32_t cap;
    String *data;
} TagsVec;

typedef struct {
    TagsVec tags;
} Scanner;

static inline String string_new() { return (String){.len = 0, .cap = 16, .data = calloc(17, sizeof(char))}; }

static unsigned serialize(Scanner *scanner, char *buffer) {
    uint16_t tag_count = scanner->tags.len > UINT16_MAX ? UINT16_MAX : scanner->tags.len;
    uint16_t serialized_tag_count = 0;

    unsigned size = sizeof(tag_count);
    memcpy(&buffer[size], &tag_count, sizeof(tag_count));
    size += sizeof(tag_count);

    for (; serialized_tag_count < tag_count; serialized_tag_count++) {
        String tag = scanner->tags.data[serialized_tag_count];
        unsigned name_length = tag.len;
        if (name_length > UINT8_MAX) {
            name_length = UINT8_MAX;
        }
        if (size + 2 + name_length >= TREE_SITTER_SERIALIZATION_BUFFER_SIZE) {
            break;
        }
        buffer[size++] = (char)name_length;
        strncpy(&buffer[size], tag.data, name_length);
        size += name_length;
    }

    memcpy(&buffer[0], &serialized_tag_count, sizeof(serialized_tag_count));
    return size;
}

static void deserialize(Scanner *scanner, const char *buffer, unsigned length) {
    VEC_CLEAR(scanner->tags);
    if (length > 0) {
        unsigned size = 0;
        uint16_t tag_count = 0;
        uint16_t serialized_tag_count = 0;

        memcpy(&serialized_tag_count, &buffer[size], sizeof(serialized_tag_count));
        size += sizeof(serialized_tag_count);

        memcpy(&tag_count, &buffer[size], sizeof(tag_count));
        size += sizeof(tag_count);

        VEC_RESIZE(scanner->tags, tag_count);
        if (tag_count > 0) {
            unsigned iter = 0;
            for (iter = 0; iter < serialized_tag_count; iter++) {
                String tag = scanner->tags.data[iter];
                uint16_t name_length = (uint8_t)buffer[size++];
                tag.len = name_length;
                tag.cap = name_length;
                tag.data = (char *)calloc(1, sizeof(char) * (name_length + 1));
                strncpy(tag.data, &buffer[size], name_length);
                size += name_length;
                VEC_PUSH(scanner->tags, tag);
            }
            // add zero tags if we didn't read enough, this is because the
            // buffer had no more room but we held more tags.
            for (; iter < tag_count; iter++) {
                String tag = string_new();
                VEC_PUSH(scanner->tags, tag);
            }
        }
    }
}

static String scan_tag_name(TSLexer *lexer) {
    String tag_name = string_new();
    while (iswalnum(lexer->lookahead) || lexer->lookahead == '-' || lexer->lookahead == ':') {
        STRING_PUSH(tag_name, towupper(lexer->lookahead));
        advance(lexer);
    }
    return tag_name;
}

static bool scan_implicit_end_tag(Scanner *scanner, TSLexer *lexer) {
    String *parent = scanner->tags.len == 0 ? NULL : &VEC_BACK(scanner->tags);

    bool is_closing_tag = false;
    if (lexer->lookahead == '/') {
        is_closing_tag = true;
        advance(lexer);
    } else if (parent) {
        VEC_POP(scanner->tags);
        lexer->result_symbol = IMPLICIT_END_TAG;
        return true;
    }

    String next_tag = scan_tag_name(lexer);
    if (next_tag.len == 0) {
        STRING_FREE(next_tag);
        return false;
    }

    if (is_closing_tag) {
        // The tag correctly closes the topmost element on the stack
        if (scanner->tags.len > 0 && strcmp(VEC_BACK(scanner->tags).data, next_tag.data) == 0) {
            STRING_FREE(next_tag);
            return false;
        }

        // Otherwise, dig deeper and queue implicit end tags (to be nice in
        // the case of malformed XML)
        for (unsigned i = scanner->tags.len; i > 0; i--) {
            VEC_POP(scanner->tags);
            lexer->result_symbol = IMPLICIT_END_TAG;
            STRING_FREE(next_tag);
            return true;
        }
    } else if (parent) {
        VEC_POP(scanner->tags);
        lexer->result_symbol = IMPLICIT_END_TAG;
        STRING_FREE(next_tag);
        return true;
    }

    STRING_FREE(next_tag);
    return false;
}

static bool scan_start_tag_name(Scanner *scanner, TSLexer *lexer) {
    String tag = scan_tag_name(lexer);
    if (tag.len == 0) {
        STRING_FREE(tag);
        return false;
    }

    lexer->result_symbol = START_TAG_NAME;
    VEC_PUSH(scanner->tags, tag);
    return true;
}

static bool scan_end_tag_name(Scanner *scanner, TSLexer *lexer) {
    String tag_name = scan_tag_name(lexer);
    if (tag_name.len == 0) {
        STRING_FREE(tag_name);
        return false;
    }
    if (scanner->tags.len > 0 && strcmp(VEC_BACK(scanner->tags).data, tag_name.data) == 0) {
        VEC_POP(scanner->tags);
        lexer->result_symbol = END_TAG_NAME;
    } else {
        lexer->result_symbol = ERRONEOUS_END_NAME;
    }
    STRING_FREE(tag_name);
    return true;
}

static bool scan_self_closing_tag_delimiter(Scanner *scanner, TSLexer *lexer) {
    advance(lexer);
    if (lexer->lookahead == '>') {
        advance(lexer);
        if (scanner->tags.len > 0) {
            VEC_POP(scanner->tags);
            lexer->result_symbol = SELF_CLOSING_TAG_DELIMITER;
        }
        return true;
    }
    return false;
}

/// Check if the lexer is in error recovery mode
static inline bool in_error_recovery(const bool *valid_symbols) {
    return valid_symbols[PI_TARGET] && valid_symbols[PI_CONTENT] && valid_symbols[COMMENT] &&
           valid_symbols[CHAR_DATA] && valid_symbols[CDATA];
}

/// Scan for a CharData node
static bool scan_char_data(TSLexer *lexer) {
    bool advanced_once = false;

    while (!lexer->eof(lexer) && lexer->lookahead != '<' && lexer->lookahead != '&') {
        if (lexer->lookahead == ']') {
            lexer->mark_end(lexer);
            advance(lexer);
            if (lexer->lookahead == ']') {
                advance(lexer);
                if (lexer->lookahead == '>') {
                    advance(lexer);
                    if (advanced_once) {
                        lexer->result_symbol = CHAR_DATA;
                        return false;
                    }
                }
            }
        }
        advanced_once = true;
        advance(lexer);
    }

    if (advanced_once) {
        lexer->mark_end(lexer);
        lexer->result_symbol = CHAR_DATA;
        return true;
    }
    return false;
}

/// Scan for a CData node
static bool scan_cdata(TSLexer *lexer) {
    bool advanced_once = false;

    while (!lexer->eof(lexer)) {
        if (lexer->lookahead == ']') {
            lexer->mark_end(lexer);
            advance(lexer);
            if (lexer->lookahead == ']') {
                advance(lexer);
                if (lexer->lookahead == '>' && advanced_once) {
                    lexer->result_symbol = CDATA;
                    return true;
                }
            }
        }
        advanced_once = true;
        advance(lexer);
    }

    return false;
}

bool tree_sitter_xml_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols) {
    Scanner *scanner = (Scanner *)payload;

    if (in_error_recovery(valid_symbols))
        return false;

    if (valid_symbols[PI_TARGET])
        return scan_pi_target(lexer, valid_symbols);

    if (valid_symbols[PI_CONTENT])
        return scan_pi_content(lexer);

    if (valid_symbols[CHAR_DATA])
        return scan_char_data(lexer);

    if (valid_symbols[CDATA])
        return scan_cdata(lexer);

    switch (lexer->lookahead) {
        case '<':
            lexer->mark_end(lexer);
            advance(lexer);

            if (lexer->lookahead == '!') {
                advance(lexer);
                return scan_comment(lexer, true);
            }

            if (valid_symbols[IMPLICIT_END_TAG]) {
                return scan_implicit_end_tag(scanner, lexer);
            }
            break;

        case '\0':
            if (valid_symbols[IMPLICIT_END_TAG]) {
                return scan_implicit_end_tag(scanner, lexer);
            }
            break;

        case '/':
            if (valid_symbols[SELF_CLOSING_TAG_DELIMITER]) {
                return scan_self_closing_tag_delimiter(scanner, lexer);
            }
            break;

        default:
            if ((valid_symbols[START_TAG_NAME] || valid_symbols[END_TAG_NAME])) {
                return valid_symbols[START_TAG_NAME] ? scan_start_tag_name(scanner, lexer)
                                                     : scan_end_tag_name(scanner, lexer);
            }
    }

    return false;
}

void *tree_sitter_xml_external_scanner_create() {
    Scanner *scanner = (Scanner *)calloc(1, sizeof(Scanner));
    return scanner;
}

void tree_sitter_xml_external_scanner_destroy(void *payload) {
    Scanner *scanner = (Scanner *)payload;
    for (int i = 0; i < scanner->tags.len; i++) {
        STRING_FREE(scanner->tags.data[i]);
    }
    VEC_FREE(scanner->tags);
    free(scanner);
}

unsigned tree_sitter_xml_external_scanner_serialize(void *payload, char *buffer) {
    Scanner *scanner = (Scanner *)payload;
    return serialize(scanner, buffer);
}

void tree_sitter_xml_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {
    Scanner *scanner = (Scanner *)payload;
    deserialize(scanner, buffer, length);
}
