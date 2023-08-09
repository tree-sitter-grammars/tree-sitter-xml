#include <ctype.h>
#include <tree_sitter/parser.h>
#include <wctype.h>

#include "../../common/scanner.h"

void *tree_sitter_xml_external_scanner_create() { return NULL; }

void tree_sitter_xml_external_scanner_destroy(void *payload) {}

void tree_sitter_xml_external_scanner_reset(void *payload) {}

unsigned tree_sitter_xml_external_scanner_serialize(void *payload,
                                                    char *buffer) {
    return 0;
}

void tree_sitter_xml_external_scanner_deserialize(void *payload,
                                                  const char *buffer,
                                                  unsigned length) {}

bool tree_sitter_xml_external_scanner_scan(void *payload, TSLexer *lexer,
                                           const bool *valid_symbols) {
    if (in_xml_error_recovery(valid_symbols)) {
        return false;
    }

    bool next_tok_is_bracket = lexer->lookahead == '<';

    // CharData and Comment can be valid at the same time
    if (valid_symbols[Comment]) {
        bool res = scan_comment(lexer);
        if (!valid_symbols[CharData]) {
            return res;
        }
        if (res) {
            return true;
        }
    }

    if (valid_symbols[PITarget]) {
        return scan_pi_target(lexer);
    }

    if (valid_symbols[PIContent]) {
        return scan_pi_content(lexer);
    }

    if (valid_symbols[CharData] && !next_tok_is_bracket) {
        return scan_char_data(lexer);
    }

    return false;
}
