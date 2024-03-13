#include "../../common/scanner.h"
#include "tree_sitter/array.h"

#include <string.h>

/// The default capacity of strings
#define STRING_CAP 16

typedef Array(char) String;

typedef Array(String) Vector;

/// Create a new String instance
#define String() { ts_calloc(STRING_CAP + 1, sizeof(char)), 0, STRING_CAP }

static inline uint32_t max(uint32_t a, uint32_t b) {
    return a > b ? a : b;
}

static inline bool string_equals(String *a, String b) {
    return strcmp(a->contents, b.contents) == 0;
}

static inline void string_push(String *string, char data) {
    if (string->capacity == string->size) {
        uint32_t cap = max(STRING_CAP, string->size << 1);
        void *tmp = ts_realloc(string->contents, (cap + 1) * sizeof *string->contents);
        if (tmp == NULL) abort();
        string->contents = (char *)tmp;
        memset(string->contents + string->size, 0, (cap + 1 - string->size) * sizeof *string->contents);
        string->capacity = cap;
    }
    array_push(string, data);
}

static String scan_tag_name(TSLexer *lexer) {
    String tag_name = String();
    if (is_valid_name_start_char(lexer->lookahead)) {
        string_push(&tag_name, (char)lexer->lookahead);
        advance(lexer);
    }
    while (is_valid_name_char(lexer->lookahead)) {
        string_push(&tag_name, (char)lexer->lookahead);
        advance(lexer);
    }
    return tag_name;
}

static bool scan_start_tag_name(Vector *tags, TSLexer *lexer) {
    String tag_name = scan_tag_name(lexer);
    if (tag_name.size == 0) {
        array_delete(&tag_name);
        return false;
    }

    lexer->result_symbol = START_TAG_NAME;
    array_push(tags, tag_name);
    return true;
}

static bool scan_end_tag_name(Vector *tags, TSLexer *lexer) {
    String tag_name = scan_tag_name(lexer);
    if (tag_name.size == 0) {
        array_delete(&tag_name);
        return false;
    }
    if (tags->size > 0 && string_equals(array_back(tags), tag_name)) {
        array_pop(tags);
        lexer->result_symbol = END_TAG_NAME;
    } else {
        lexer->result_symbol = ERRONEOUS_END_NAME;
    }
    array_delete(&tag_name);
    return true;
}

static bool scan_self_closing_tag_delimiter(Vector *tags, TSLexer *lexer) {
    advance(lexer);
    if (lexer->lookahead == '>') {
        advance(lexer);
        if (tags->size > 0) {
            array_pop(tags);
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
    Vector *tags = (Vector *)payload;

    if (in_error_recovery(valid_symbols))
        return false;

    if (valid_symbols[PI_TARGET])
        return scan_pi_target(lexer, valid_symbols);

    if (valid_symbols[PI_CONTENT])
        return scan_pi_content(lexer);

    if (valid_symbols[CHAR_DATA] && scan_char_data(lexer))
        return true;

    if (valid_symbols[CDATA] && scan_cdata(lexer))
        return true;

    switch (lexer->lookahead) {
        case '<':
            lexer->mark_end(lexer);
            advance(lexer);
            if (lexer->lookahead == '!') {
                advance(lexer);
                return scan_comment(lexer);
            }
            break;
        case '/':
            if (valid_symbols[SELF_CLOSING_TAG_DELIMITER])
                return scan_self_closing_tag_delimiter(tags, lexer);
            break;
        case '\0':
            break;
        default:
            if (valid_symbols[START_TAG_NAME])
                return scan_start_tag_name(tags, lexer);
            if (valid_symbols[END_TAG_NAME])
                return scan_end_tag_name(tags, lexer);
    }

    return false;
}

void *tree_sitter_xml_external_scanner_create() {
    Vector *tags = (Vector *)ts_calloc(1, sizeof(Vector));
    if (tags == NULL) abort();
    array_init(tags);
    return tags;
}

void tree_sitter_xml_external_scanner_destroy(void *payload) {
    Vector *tags = (Vector *)payload;
    for (uint32_t i = 0; i < tags->size; ++i) {
        array_delete(&tags->contents[i]);
    }
    array_delete(tags);
    ts_free(tags->contents);
    ts_free(tags);
}

unsigned tree_sitter_xml_external_scanner_serialize(void *payload, char *buffer) {
    Vector *tags = (Vector *)payload;
    uint32_t tag_count = tags->size > UINT16_MAX ? UINT16_MAX : tags->size;
    uint32_t serialized_tag_count = 0, size = sizeof tag_count;

    memcpy(&buffer[size], &tag_count, size);
    size += sizeof tag_count;

    for (; serialized_tag_count < tag_count; ++serialized_tag_count) {
        String tag = tags->contents[serialized_tag_count];
        uint32_t name_length = tag.size;
        if (name_length > UINT8_MAX) {
            name_length = UINT8_MAX;
        }
        if (size + 2 + name_length >= TREE_SITTER_SERIALIZATION_BUFFER_SIZE) {
            break;
        }
        buffer[size++] = (char)name_length;
        strncpy(&buffer[size], tag.contents, name_length);
        size += name_length;
    }

    memcpy(&buffer[0], &serialized_tag_count, sizeof serialized_tag_count);
    return size;
}

void tree_sitter_xml_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {
    if (length == 0) return;

    Vector *tags = (Vector *)payload;
    array_clear(tags);

    uint32_t size = 0, tag_count = 0, serialized_tag_count = 0;

    memcpy(&serialized_tag_count, &buffer[size], sizeof serialized_tag_count);
    size += sizeof serialized_tag_count;

    memcpy(&tag_count, &buffer[size], sizeof tag_count);
    size += sizeof tag_count;

    array_reserve(tags, tag_count);
    if (tag_count > 0) {
        uint32_t iter = 0;
        for (; iter < serialized_tag_count; ++iter) {
            String tag = tags->contents[iter];
            tag.size = tag.capacity = (unsigned)buffer[size++];
            tag.contents = (char *)ts_calloc(1, (tag.size + 1) * sizeof(char));
            strncpy(tag.contents, &buffer[size], tag.size);
            size += tag.size;
            array_push(tags, tag);
        }
        // add zero tags if we didn't read enough, this is because the
        // buffer had no more room but we held more tags.
        for (; iter < tag_count; ++iter) {
            String tag = String();
            array_push(tags, tag);
        }
    }
}
