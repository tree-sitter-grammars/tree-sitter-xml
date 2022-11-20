#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 148
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 54
#define ALIAS_COUNT 2
#define TOKEN_COUNT 28
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 8

enum {
  anon_sym_PERCENT_LBRACK = 1,
  aux_sym_intent_def_token1 = 2,
  anon_sym_RBRACK = 3,
  anon_sym_AT_LBRACK = 4,
  aux_sym_slot_def_token1 = 5,
  anon_sym_TILDE_LBRACK = 6,
  anon_sym_import = 7,
  aux_sym_import_token1 = 8,
  aux_sym_comment_token1 = 9,
  anon_sym_QMARK = 10,
  sym_word = 11,
  anon_sym_POUND = 12,
  anon_sym_STAR_LBRACK = 13,
  anon_sym_PERCENT = 14,
  sym_number = 15,
  anon_sym_LPAREN = 16,
  anon_sym_COMMA = 17,
  anon_sym_RPAREN = 18,
  anon_sym_COLON = 19,
  anon_sym_DQUOTE = 20,
  aux_sym_string_token1 = 21,
  anon_sym_SQUOTE = 22,
  aux_sym_string_token2 = 23,
  sym_escape = 24,
  sym__eol = 25,
  sym__indent = 26,
  sym__space = 27,
  sym_source = 28,
  sym__definition = 29,
  sym_intent_def = 30,
  sym_slot_def = 31,
  sym_alias_def = 32,
  sym_import = 33,
  sym_comment = 34,
  sym_intent_body = 35,
  sym_slot_body = 36,
  sym_alias_body = 37,
  sym_slot_ref = 38,
  sym_alias_ref = 39,
  sym_variation = 40,
  sym_probability = 41,
  sym_arguments = 42,
  sym_argument = 43,
  sym_string = 44,
  aux_sym_source_repeat1 = 45,
  aux_sym_intent_body_repeat1 = 46,
  aux_sym_intent_body_repeat2 = 47,
  aux_sym_slot_body_repeat1 = 48,
  aux_sym_slot_body_repeat2 = 49,
  aux_sym_alias_body_repeat1 = 50,
  aux_sym_arguments_repeat1 = 51,
  aux_sym_string_repeat1 = 52,
  aux_sym_string_repeat2 = 53,
  alias_sym_intent = 54,
  alias_sym_slot = 55,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_PERCENT_LBRACK] = "%[",
  [aux_sym_intent_def_token1] = "alias",
  [anon_sym_RBRACK] = "]",
  [anon_sym_AT_LBRACK] = "@[",
  [aux_sym_slot_def_token1] = "slot_def_token1",
  [anon_sym_TILDE_LBRACK] = "~[",
  [anon_sym_import] = "import",
  [aux_sym_import_token1] = "file",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_QMARK] = "\?",
  [sym_word] = "word",
  [anon_sym_POUND] = "#",
  [anon_sym_STAR_LBRACK] = "*[",
  [anon_sym_PERCENT] = "%",
  [sym_number] = "number",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COLON] = ":",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_string_token2] = "string_token2",
  [sym_escape] = "escape",
  [sym__eol] = "_eol",
  [sym__indent] = "_indent",
  [sym__space] = "_space",
  [sym_source] = "source",
  [sym__definition] = "_definition",
  [sym_intent_def] = "intent_def",
  [sym_slot_def] = "slot_def",
  [sym_alias_def] = "alias_def",
  [sym_import] = "import",
  [sym_comment] = "comment",
  [sym_intent_body] = "intent_body",
  [sym_slot_body] = "slot_body",
  [sym_alias_body] = "alias_body",
  [sym_slot_ref] = "slot_ref",
  [sym_alias_ref] = "alias_ref",
  [sym_variation] = "variation",
  [sym_probability] = "probability",
  [sym_arguments] = "arguments",
  [sym_argument] = "argument",
  [sym_string] = "string",
  [aux_sym_source_repeat1] = "source_repeat1",
  [aux_sym_intent_body_repeat1] = "intent_body_repeat1",
  [aux_sym_intent_body_repeat2] = "intent_body_repeat2",
  [aux_sym_slot_body_repeat1] = "slot_body_repeat1",
  [aux_sym_slot_body_repeat2] = "slot_body_repeat2",
  [aux_sym_alias_body_repeat1] = "alias_body_repeat1",
  [aux_sym_arguments_repeat1] = "arguments_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_string_repeat2] = "string_repeat2",
  [alias_sym_intent] = "intent",
  [alias_sym_slot] = "slot",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_PERCENT_LBRACK] = anon_sym_PERCENT_LBRACK,
  [aux_sym_intent_def_token1] = aux_sym_intent_def_token1,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_AT_LBRACK] = anon_sym_AT_LBRACK,
  [aux_sym_slot_def_token1] = aux_sym_slot_def_token1,
  [anon_sym_TILDE_LBRACK] = anon_sym_TILDE_LBRACK,
  [anon_sym_import] = anon_sym_import,
  [aux_sym_import_token1] = aux_sym_import_token1,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [sym_word] = sym_word,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_STAR_LBRACK] = anon_sym_STAR_LBRACK,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [sym_number] = sym_number,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_string_token2] = aux_sym_string_token2,
  [sym_escape] = sym_escape,
  [sym__eol] = sym__eol,
  [sym__indent] = sym__indent,
  [sym__space] = sym__space,
  [sym_source] = sym_source,
  [sym__definition] = sym__definition,
  [sym_intent_def] = sym_intent_def,
  [sym_slot_def] = sym_slot_def,
  [sym_alias_def] = sym_alias_def,
  [sym_import] = sym_import,
  [sym_comment] = sym_comment,
  [sym_intent_body] = sym_intent_body,
  [sym_slot_body] = sym_slot_body,
  [sym_alias_body] = sym_alias_body,
  [sym_slot_ref] = sym_slot_ref,
  [sym_alias_ref] = sym_alias_ref,
  [sym_variation] = sym_variation,
  [sym_probability] = sym_probability,
  [sym_arguments] = sym_arguments,
  [sym_argument] = sym_argument,
  [sym_string] = sym_string,
  [aux_sym_source_repeat1] = aux_sym_source_repeat1,
  [aux_sym_intent_body_repeat1] = aux_sym_intent_body_repeat1,
  [aux_sym_intent_body_repeat2] = aux_sym_intent_body_repeat2,
  [aux_sym_slot_body_repeat1] = aux_sym_slot_body_repeat1,
  [aux_sym_slot_body_repeat2] = aux_sym_slot_body_repeat2,
  [aux_sym_alias_body_repeat1] = aux_sym_alias_body_repeat1,
  [aux_sym_arguments_repeat1] = aux_sym_arguments_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_string_repeat2] = aux_sym_string_repeat2,
  [alias_sym_intent] = alias_sym_intent,
  [alias_sym_slot] = alias_sym_slot,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_PERCENT_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_intent_def_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_slot_def_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_TILDE_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_import_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [sym_word] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_escape] = {
    .visible = true,
    .named = true,
  },
  [sym__eol] = {
    .visible = false,
    .named = true,
  },
  [sym__indent] = {
    .visible = false,
    .named = true,
  },
  [sym__space] = {
    .visible = false,
    .named = true,
  },
  [sym_source] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_intent_def] = {
    .visible = true,
    .named = true,
  },
  [sym_slot_def] = {
    .visible = true,
    .named = true,
  },
  [sym_alias_def] = {
    .visible = true,
    .named = true,
  },
  [sym_import] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_intent_body] = {
    .visible = true,
    .named = true,
  },
  [sym_slot_body] = {
    .visible = true,
    .named = true,
  },
  [sym_alias_body] = {
    .visible = true,
    .named = true,
  },
  [sym_slot_ref] = {
    .visible = true,
    .named = true,
  },
  [sym_alias_ref] = {
    .visible = true,
    .named = true,
  },
  [sym_variation] = {
    .visible = true,
    .named = true,
  },
  [sym_probability] = {
    .visible = true,
    .named = true,
  },
  [sym_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_argument] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_intent_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_intent_body_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_slot_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_slot_body_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_alias_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat2] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_intent] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_slot] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_content = 1,
  field_id = 2,
  field_key = 3,
  field_value = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_content] = "content",
  [field_id] = "id",
  [field_key] = "key",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [4] = {.index = 1, .length = 1},
  [5] = {.index = 2, .length = 2},
  [6] = {.index = 4, .length = 2},
  [7] = {.index = 6, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_id, 1},
  [1] =
    {field_content, 1},
  [2] =
    {field_key, 0},
    {field_value, 2},
  [4] =
    {field_key, 0},
    {field_value, 3},
  [6] =
    {field_key, 0},
    {field_value, 4},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [2] = {
    [1] = alias_sym_intent,
  },
  [3] = {
    [1] = alias_sym_slot,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 40,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 43,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 74,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 58,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 104,
  [109] = 103,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 112,
  [145] = 126,
  [146] = 119,
  [147] = 117,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(30);
      if (lookahead == '\t') ADVANCE(63);
      if (lookahead == '\n') ADVANCE(71);
      if (lookahead == '\r') ADVANCE(64);
      if (lookahead == ' ') ADVANCE(63);
      if (lookahead == '"') ADVANCE(62);
      if (lookahead == '#') ADVANCE(50);
      if (lookahead == '%') ADVANCE(52);
      if (lookahead == '\'') ADVANCE(67);
      if (lookahead == '(') ADVANCE(58);
      if (lookahead == ')') ADVANCE(60);
      if (lookahead == ',') ADVANCE(59);
      if (lookahead == '0') ADVANCE(53);
      if (lookahead == ':') ADVANCE(61);
      if (lookahead == '?') ADVANCE(40);
      if (lookahead == '\\') ADVANCE(65);
      if (lookahead == ']') ADVANCE(33);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(54);
      if (lookahead != 0) ADVANCE(63);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(71);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(71);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(73);
      if (lookahead == '"') ADVANCE(62);
      if (lookahead == '#') ADVANCE(50);
      if (lookahead == '%') ADVANCE(52);
      if (lookahead == '\'') ADVANCE(67);
      if (lookahead == '(') ADVANCE(58);
      if (lookahead == ')') ADVANCE(60);
      if (lookahead == ',') ADVANCE(59);
      if (lookahead == ':') ADVANCE(61);
      if (lookahead == '?') ADVANCE(40);
      if (lookahead == ']') ADVANCE(33);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(71);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(73);
      if (lookahead == '*') ADVANCE(43);
      if (lookahead == '@') ADVANCE(41);
      if (lookahead == '~') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\t') ADVANCE(49);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(71);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(73);
      if (lookahead == '@') ADVANCE(41);
      if (lookahead == '~') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\t') ADVANCE(49);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(71);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(73);
      if (lookahead == '~') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\t') ADVANCE(49);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(72);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(73);
      if (lookahead == '*') ADVANCE(43);
      if (lookahead == '~') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(49);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(6);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(8);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(62);
      if (lookahead == '\\') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 11:
      if (lookahead == '\'') ADVANCE(67);
      if (lookahead == '\\') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(68);
      END_STATE();
    case 12:
      if (lookahead == '/') ADVANCE(39);
      END_STATE();
    case 13:
      if (lookahead == '[') ADVANCE(31);
      END_STATE();
    case 14:
      if (lookahead == '[') ADVANCE(34);
      END_STATE();
    case 15:
      if (lookahead == '[') ADVANCE(36);
      END_STATE();
    case 16:
      if (lookahead == 'm') ADVANCE(18);
      END_STATE();
    case 17:
      if (lookahead == 'o') ADVANCE(19);
      END_STATE();
    case 18:
      if (lookahead == 'p') ADVANCE(17);
      END_STATE();
    case 19:
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 20:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 21:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 22:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(70);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(22);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(23);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(24);
      END_STATE();
    case 26:
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '?' &&
          lookahead != ']') ADVANCE(35);
      END_STATE();
    case 27:
      if (lookahead != 0 &&
          lookahead != '?' &&
          lookahead != ']') ADVANCE(32);
      END_STATE();
    case 28:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(38);
      END_STATE();
    case 29:
      if (eof) ADVANCE(30);
      if (lookahead == '\n') ADVANCE(71);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(9);
      if (lookahead == '"') ADVANCE(62);
      if (lookahead == '#') ADVANCE(39);
      if (lookahead == '%') ADVANCE(13);
      if (lookahead == '\'') ADVANCE(67);
      if (lookahead == '(') ADVANCE(58);
      if (lookahead == ')') ADVANCE(60);
      if (lookahead == ',') ADVANCE(59);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '0') ADVANCE(55);
      if (lookahead == ':') ADVANCE(61);
      if (lookahead == '?') ADVANCE(40);
      if (lookahead == '@') ADVANCE(14);
      if (lookahead == ']') ADVANCE(33);
      if (lookahead == 'i') ADVANCE(16);
      if (lookahead == '~') ADVANCE(15);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(56);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_PERCENT_LBRACK);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_intent_def_token1);
      if (lookahead != 0 &&
          lookahead != '?' &&
          lookahead != ']') ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_AT_LBRACK);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_slot_def_token1);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '?' &&
          lookahead != ']') ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_TILDE_LBRACK);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_import_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '[') ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(49);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(49);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '[') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(49);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(49);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(49);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(49);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(49);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(49);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_word);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_STAR_LBRACK);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(44);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(21);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(71);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'u') ADVANCE(48);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          ('t' <= lookahead && lookahead <= 'v')) ADVANCE(70);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'u') ADVANCE(25);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          ('t' <= lookahead && lookahead <= 'v')) ADVANCE(70);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_string_token2);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'u') ADVANCE(25);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          ('t' <= lookahead && lookahead <= 'v')) ADVANCE(70);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_escape);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym__eol);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym__indent);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == ' ') ADVANCE(73);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 29},
  [2] = {.lex_state = 29},
  [3] = {.lex_state = 29},
  [4] = {.lex_state = 29},
  [5] = {.lex_state = 29},
  [6] = {.lex_state = 29},
  [7] = {.lex_state = 29},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 29},
  [10] = {.lex_state = 29},
  [11] = {.lex_state = 29},
  [12] = {.lex_state = 29},
  [13] = {.lex_state = 29},
  [14] = {.lex_state = 29},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 29},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 29},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 7},
  [23] = {.lex_state = 29},
  [24] = {.lex_state = 29},
  [25] = {.lex_state = 29},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 29},
  [28] = {.lex_state = 29},
  [29] = {.lex_state = 29},
  [30] = {.lex_state = 29},
  [31] = {.lex_state = 29},
  [32] = {.lex_state = 29},
  [33] = {.lex_state = 29},
  [34] = {.lex_state = 29},
  [35] = {.lex_state = 29},
  [36] = {.lex_state = 29},
  [37] = {.lex_state = 5},
  [38] = {.lex_state = 5},
  [39] = {.lex_state = 5},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 5},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 11},
  [50] = {.lex_state = 11},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 5},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 29},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 10},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 11},
  [64] = {.lex_state = 10},
  [65] = {.lex_state = 2},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 29},
  [68] = {.lex_state = 10},
  [69] = {.lex_state = 29},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 5},
  [72] = {.lex_state = 2},
  [73] = {.lex_state = 2},
  [74] = {.lex_state = 4},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 29},
  [77] = {.lex_state = 29},
  [78] = {.lex_state = 29},
  [79] = {.lex_state = 29},
  [80] = {.lex_state = 29},
  [81] = {.lex_state = 29},
  [82] = {.lex_state = 29},
  [83] = {.lex_state = 29},
  [84] = {.lex_state = 2},
  [85] = {.lex_state = 29},
  [86] = {.lex_state = 29},
  [87] = {.lex_state = 5},
  [88] = {.lex_state = 29},
  [89] = {.lex_state = 2},
  [90] = {.lex_state = 2},
  [91] = {.lex_state = 29},
  [92] = {.lex_state = 29},
  [93] = {.lex_state = 2},
  [94] = {.lex_state = 29},
  [95] = {.lex_state = 2},
  [96] = {.lex_state = 2},
  [97] = {.lex_state = 29},
  [98] = {.lex_state = 5},
  [99] = {.lex_state = 29},
  [100] = {.lex_state = 2},
  [101] = {.lex_state = 29},
  [102] = {.lex_state = 29},
  [103] = {.lex_state = 2},
  [104] = {.lex_state = 29},
  [105] = {.lex_state = 29},
  [106] = {.lex_state = 3},
  [107] = {.lex_state = 29},
  [108] = {.lex_state = 29},
  [109] = {.lex_state = 2},
  [110] = {.lex_state = 2},
  [111] = {.lex_state = 29},
  [112] = {.lex_state = 29},
  [113] = {.lex_state = 29},
  [114] = {.lex_state = 29},
  [115] = {.lex_state = 29},
  [116] = {.lex_state = 27},
  [117] = {.lex_state = 29},
  [118] = {.lex_state = 29},
  [119] = {.lex_state = 27},
  [120] = {.lex_state = 26},
  [121] = {.lex_state = 29},
  [122] = {.lex_state = 29},
  [123] = {.lex_state = 29},
  [124] = {.lex_state = 28},
  [125] = {.lex_state = 29},
  [126] = {.lex_state = 29},
  [127] = {.lex_state = 27},
  [128] = {.lex_state = 26},
  [129] = {.lex_state = 3},
  [130] = {.lex_state = 29},
  [131] = {.lex_state = 29},
  [132] = {.lex_state = 29},
  [133] = {.lex_state = 29},
  [134] = {.lex_state = 29},
  [135] = {.lex_state = 29},
  [136] = {.lex_state = 29},
  [137] = {.lex_state = 26},
  [138] = {.lex_state = 29},
  [139] = {.lex_state = 29},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 29},
  [142] = {.lex_state = 29},
  [143] = {.lex_state = 29},
  [144] = {.lex_state = 29},
  [145] = {.lex_state = 29},
  [146] = {.lex_state = 27},
  [147] = {.lex_state = 29},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [sym_word] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym_string_token1] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [aux_sym_string_token2] = ACTIONS(1),
    [sym_escape] = ACTIONS(1),
    [sym__eol] = ACTIONS(1),
    [sym__space] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(140),
    [sym__definition] = STATE(2),
    [sym_intent_def] = STATE(25),
    [sym_slot_def] = STATE(25),
    [sym_alias_def] = STATE(25),
    [sym_import] = STATE(2),
    [sym_comment] = STATE(2),
    [aux_sym_source_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_PERCENT_LBRACK] = ACTIONS(5),
    [anon_sym_AT_LBRACK] = ACTIONS(7),
    [anon_sym_TILDE_LBRACK] = ACTIONS(9),
    [anon_sym_import] = ACTIONS(11),
    [aux_sym_comment_token1] = ACTIONS(13),
    [sym__eol] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(5), 1,
      anon_sym_PERCENT_LBRACK,
    ACTIONS(7), 1,
      anon_sym_AT_LBRACK,
    ACTIONS(9), 1,
      anon_sym_TILDE_LBRACK,
    ACTIONS(11), 1,
      anon_sym_import,
    ACTIONS(13), 1,
      aux_sym_comment_token1,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(19), 1,
      sym__eol,
    STATE(25), 3,
      sym_intent_def,
      sym_slot_def,
      sym_alias_def,
    STATE(3), 4,
      sym__definition,
      sym_import,
      sym_comment,
      aux_sym_source_repeat1,
  [33] = 9,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 1,
      anon_sym_PERCENT_LBRACK,
    ACTIONS(26), 1,
      anon_sym_AT_LBRACK,
    ACTIONS(29), 1,
      anon_sym_TILDE_LBRACK,
    ACTIONS(32), 1,
      anon_sym_import,
    ACTIONS(35), 1,
      aux_sym_comment_token1,
    ACTIONS(38), 1,
      sym__eol,
    STATE(25), 3,
      sym_intent_def,
      sym_slot_def,
      sym_alias_def,
    STATE(3), 4,
      sym__definition,
      sym_import,
      sym_comment,
      aux_sym_source_repeat1,
  [66] = 3,
    ACTIONS(43), 1,
      sym__indent,
    STATE(6), 1,
      aux_sym_slot_body_repeat2,
    ACTIONS(41), 7,
      ts_builtin_sym_end,
      anon_sym_PERCENT_LBRACK,
      anon_sym_AT_LBRACK,
      anon_sym_TILDE_LBRACK,
      anon_sym_import,
      aux_sym_comment_token1,
      sym__eol,
  [82] = 3,
    ACTIONS(47), 1,
      sym__indent,
    STATE(5), 1,
      aux_sym_alias_body_repeat1,
    ACTIONS(45), 7,
      ts_builtin_sym_end,
      anon_sym_PERCENT_LBRACK,
      anon_sym_AT_LBRACK,
      anon_sym_TILDE_LBRACK,
      anon_sym_import,
      aux_sym_comment_token1,
      sym__eol,
  [98] = 3,
    ACTIONS(52), 1,
      sym__indent,
    STATE(6), 1,
      aux_sym_slot_body_repeat2,
    ACTIONS(50), 7,
      ts_builtin_sym_end,
      anon_sym_PERCENT_LBRACK,
      anon_sym_AT_LBRACK,
      anon_sym_TILDE_LBRACK,
      anon_sym_import,
      aux_sym_comment_token1,
      sym__eol,
  [114] = 3,
    ACTIONS(57), 1,
      sym__indent,
    STATE(7), 1,
      aux_sym_intent_body_repeat2,
    ACTIONS(55), 7,
      ts_builtin_sym_end,
      anon_sym_PERCENT_LBRACK,
      anon_sym_AT_LBRACK,
      anon_sym_TILDE_LBRACK,
      anon_sym_import,
      aux_sym_comment_token1,
      sym__eol,
  [130] = 7,
    ACTIONS(60), 1,
      anon_sym_AT_LBRACK,
    ACTIONS(62), 1,
      anon_sym_TILDE_LBRACK,
    ACTIONS(64), 1,
      sym_word,
    ACTIONS(66), 1,
      anon_sym_STAR_LBRACK,
    ACTIONS(68), 1,
      sym__space,
    STATE(21), 1,
      sym_probability,
    STATE(19), 3,
      sym_slot_ref,
      sym_alias_ref,
      aux_sym_intent_body_repeat1,
  [154] = 3,
    ACTIONS(72), 1,
      sym__indent,
    STATE(5), 1,
      aux_sym_alias_body_repeat1,
    ACTIONS(70), 7,
      ts_builtin_sym_end,
      anon_sym_PERCENT_LBRACK,
      anon_sym_AT_LBRACK,
      anon_sym_TILDE_LBRACK,
      anon_sym_import,
      aux_sym_comment_token1,
      sym__eol,
  [170] = 3,
    ACTIONS(76), 1,
      sym__indent,
    STATE(7), 1,
      aux_sym_intent_body_repeat2,
    ACTIONS(74), 7,
      ts_builtin_sym_end,
      anon_sym_PERCENT_LBRACK,
      anon_sym_AT_LBRACK,
      anon_sym_TILDE_LBRACK,
      anon_sym_import,
      aux_sym_comment_token1,
      sym__eol,
  [186] = 1,
    ACTIONS(78), 8,
      ts_builtin_sym_end,
      anon_sym_PERCENT_LBRACK,
      anon_sym_AT_LBRACK,
      anon_sym_TILDE_LBRACK,
      anon_sym_import,
      aux_sym_comment_token1,
      sym__eol,
      sym__indent,
  [197] = 1,
    ACTIONS(80), 8,
      ts_builtin_sym_end,
      anon_sym_PERCENT_LBRACK,
      anon_sym_AT_LBRACK,
      anon_sym_TILDE_LBRACK,
      anon_sym_import,
      aux_sym_comment_token1,
      sym__eol,
      sym__indent,
  [208] = 1,
    ACTIONS(82), 8,
      ts_builtin_sym_end,
      anon_sym_PERCENT_LBRACK,
      anon_sym_AT_LBRACK,
      anon_sym_TILDE_LBRACK,
      anon_sym_import,
      aux_sym_comment_token1,
      sym__eol,
      sym__indent,
  [219] = 1,
    ACTIONS(84), 8,
      ts_builtin_sym_end,
      anon_sym_PERCENT_LBRACK,
      anon_sym_AT_LBRACK,
      anon_sym_TILDE_LBRACK,
      anon_sym_import,
      aux_sym_comment_token1,
      sym__eol,
      sym__indent,
  [230] = 6,
    ACTIONS(86), 1,
      anon_sym_AT_LBRACK,
    ACTIONS(89), 1,
      anon_sym_TILDE_LBRACK,
    ACTIONS(92), 1,
      sym_word,
    ACTIONS(95), 1,
      sym__eol,
    ACTIONS(97), 1,
      sym__space,
    STATE(15), 3,
      sym_slot_ref,
      sym_alias_ref,
      aux_sym_intent_body_repeat1,
  [251] = 1,
    ACTIONS(100), 8,
      ts_builtin_sym_end,
      anon_sym_PERCENT_LBRACK,
      anon_sym_AT_LBRACK,
      anon_sym_TILDE_LBRACK,
      anon_sym_import,
      aux_sym_comment_token1,
      sym__eol,
      sym__indent,
  [262] = 6,
    ACTIONS(60), 1,
      anon_sym_AT_LBRACK,
    ACTIONS(62), 1,
      anon_sym_TILDE_LBRACK,
    ACTIONS(102), 1,
      sym_word,
    ACTIONS(104), 1,
      sym__eol,
    ACTIONS(106), 1,
      sym__space,
    STATE(15), 3,
      sym_slot_ref,
      sym_alias_ref,
      aux_sym_intent_body_repeat1,
  [283] = 6,
    ACTIONS(60), 1,
      anon_sym_AT_LBRACK,
    ACTIONS(62), 1,
      anon_sym_TILDE_LBRACK,
    ACTIONS(102), 1,
      sym_word,
    ACTIONS(106), 1,
      sym__space,
    ACTIONS(108), 1,
      sym__eol,
    STATE(15), 3,
      sym_slot_ref,
      sym_alias_ref,
      aux_sym_intent_body_repeat1,
  [304] = 6,
    ACTIONS(60), 1,
      anon_sym_AT_LBRACK,
    ACTIONS(62), 1,
      anon_sym_TILDE_LBRACK,
    ACTIONS(102), 1,
      sym_word,
    ACTIONS(106), 1,
      sym__space,
    ACTIONS(110), 1,
      sym__eol,
    STATE(15), 3,
      sym_slot_ref,
      sym_alias_ref,
      aux_sym_intent_body_repeat1,
  [325] = 1,
    ACTIONS(112), 7,
      ts_builtin_sym_end,
      anon_sym_PERCENT_LBRACK,
      anon_sym_AT_LBRACK,
      anon_sym_TILDE_LBRACK,
      anon_sym_import,
      aux_sym_comment_token1,
      sym__eol,
  [335] = 5,
    ACTIONS(60), 1,
      anon_sym_AT_LBRACK,
    ACTIONS(62), 1,
      anon_sym_TILDE_LBRACK,
    ACTIONS(114), 1,
      sym_word,
    ACTIONS(116), 1,
      sym__space,
    STATE(17), 3,
      sym_slot_ref,
      sym_alias_ref,
      aux_sym_intent_body_repeat1,
  [353] = 6,
    ACTIONS(118), 1,
      anon_sym_TILDE_LBRACK,
    ACTIONS(120), 1,
      sym_word,
    ACTIONS(122), 1,
      anon_sym_STAR_LBRACK,
    ACTIONS(124), 1,
      sym__space,
    STATE(45), 1,
      sym_probability,
    STATE(37), 2,
      sym_alias_ref,
      aux_sym_slot_body_repeat1,
  [373] = 1,
    ACTIONS(126), 7,
      ts_builtin_sym_end,
      anon_sym_PERCENT_LBRACK,
      anon_sym_AT_LBRACK,
      anon_sym_TILDE_LBRACK,
      anon_sym_import,
      aux_sym_comment_token1,
      sym__eol,
  [383] = 1,
    ACTIONS(128), 7,
      ts_builtin_sym_end,
      anon_sym_PERCENT_LBRACK,
      anon_sym_AT_LBRACK,
      anon_sym_TILDE_LBRACK,
      anon_sym_import,
      aux_sym_comment_token1,
      sym__eol,
  [393] = 1,
    ACTIONS(130), 7,
      ts_builtin_sym_end,
      anon_sym_PERCENT_LBRACK,
      anon_sym_AT_LBRACK,
      anon_sym_TILDE_LBRACK,
      anon_sym_import,
      aux_sym_comment_token1,
      sym__eol,
  [403] = 5,
    ACTIONS(60), 1,
      anon_sym_AT_LBRACK,
    ACTIONS(62), 1,
      anon_sym_TILDE_LBRACK,
    ACTIONS(132), 1,
      sym_word,
    ACTIONS(134), 1,
      sym__space,
    STATE(18), 3,
      sym_slot_ref,
      sym_alias_ref,
      aux_sym_intent_body_repeat1,
  [421] = 1,
    ACTIONS(136), 7,
      ts_builtin_sym_end,
      anon_sym_PERCENT_LBRACK,
      anon_sym_AT_LBRACK,
      anon_sym_TILDE_LBRACK,
      anon_sym_import,
      aux_sym_comment_token1,
      sym__eol,
  [431] = 1,
    ACTIONS(138), 7,
      ts_builtin_sym_end,
      anon_sym_PERCENT_LBRACK,
      anon_sym_AT_LBRACK,
      anon_sym_TILDE_LBRACK,
      anon_sym_import,
      aux_sym_comment_token1,
      sym__eol,
  [441] = 1,
    ACTIONS(140), 7,
      ts_builtin_sym_end,
      anon_sym_PERCENT_LBRACK,
      anon_sym_AT_LBRACK,
      anon_sym_TILDE_LBRACK,
      anon_sym_import,
      aux_sym_comment_token1,
      sym__eol,
  [451] = 1,
    ACTIONS(142), 7,
      ts_builtin_sym_end,
      anon_sym_PERCENT_LBRACK,
      anon_sym_AT_LBRACK,
      anon_sym_TILDE_LBRACK,
      anon_sym_import,
      aux_sym_comment_token1,
      sym__eol,
  [461] = 1,
    ACTIONS(144), 7,
      ts_builtin_sym_end,
      anon_sym_PERCENT_LBRACK,
      anon_sym_AT_LBRACK,
      anon_sym_TILDE_LBRACK,
      anon_sym_import,
      aux_sym_comment_token1,
      sym__eol,
  [471] = 1,
    ACTIONS(146), 7,
      ts_builtin_sym_end,
      anon_sym_PERCENT_LBRACK,
      anon_sym_AT_LBRACK,
      anon_sym_TILDE_LBRACK,
      anon_sym_import,
      aux_sym_comment_token1,
      sym__eol,
  [481] = 1,
    ACTIONS(148), 7,
      ts_builtin_sym_end,
      anon_sym_PERCENT_LBRACK,
      anon_sym_AT_LBRACK,
      anon_sym_TILDE_LBRACK,
      anon_sym_import,
      aux_sym_comment_token1,
      sym__eol,
  [491] = 1,
    ACTIONS(150), 7,
      ts_builtin_sym_end,
      anon_sym_PERCENT_LBRACK,
      anon_sym_AT_LBRACK,
      anon_sym_TILDE_LBRACK,
      anon_sym_import,
      aux_sym_comment_token1,
      sym__eol,
  [501] = 1,
    ACTIONS(152), 7,
      ts_builtin_sym_end,
      anon_sym_PERCENT_LBRACK,
      anon_sym_AT_LBRACK,
      anon_sym_TILDE_LBRACK,
      anon_sym_import,
      aux_sym_comment_token1,
      sym__eol,
  [511] = 1,
    ACTIONS(154), 7,
      ts_builtin_sym_end,
      anon_sym_PERCENT_LBRACK,
      anon_sym_AT_LBRACK,
      anon_sym_TILDE_LBRACK,
      anon_sym_import,
      aux_sym_comment_token1,
      sym__eol,
  [521] = 5,
    ACTIONS(118), 1,
      anon_sym_TILDE_LBRACK,
    ACTIONS(156), 1,
      sym_word,
    ACTIONS(158), 1,
      sym__eol,
    ACTIONS(160), 1,
      sym__space,
    STATE(39), 2,
      sym_alias_ref,
      aux_sym_slot_body_repeat1,
  [538] = 5,
    ACTIONS(118), 1,
      anon_sym_TILDE_LBRACK,
    ACTIONS(156), 1,
      sym_word,
    ACTIONS(160), 1,
      sym__space,
    ACTIONS(162), 1,
      sym__eol,
    STATE(39), 2,
      sym_alias_ref,
      aux_sym_slot_body_repeat1,
  [555] = 5,
    ACTIONS(164), 1,
      anon_sym_TILDE_LBRACK,
    ACTIONS(167), 1,
      sym_word,
    ACTIONS(170), 1,
      sym__eol,
    ACTIONS(172), 1,
      sym__space,
    STATE(39), 2,
      sym_alias_ref,
      aux_sym_slot_body_repeat1,
  [572] = 2,
    ACTIONS(177), 1,
      sym_word,
    ACTIONS(175), 4,
      anon_sym_AT_LBRACK,
      anon_sym_TILDE_LBRACK,
      sym__eol,
      sym__space,
  [582] = 2,
    ACTIONS(181), 1,
      sym_word,
    ACTIONS(179), 4,
      anon_sym_AT_LBRACK,
      anon_sym_TILDE_LBRACK,
      sym__eol,
      sym__space,
  [592] = 2,
    ACTIONS(185), 1,
      sym_word,
    ACTIONS(183), 4,
      anon_sym_AT_LBRACK,
      anon_sym_TILDE_LBRACK,
      sym__eol,
      sym__space,
  [602] = 2,
    ACTIONS(189), 1,
      sym_word,
    ACTIONS(187), 4,
      anon_sym_AT_LBRACK,
      anon_sym_TILDE_LBRACK,
      sym__eol,
      sym__space,
  [612] = 5,
    ACTIONS(191), 1,
      anon_sym_DQUOTE,
    ACTIONS(193), 1,
      anon_sym_SQUOTE,
    ACTIONS(195), 1,
      sym__space,
    STATE(89), 1,
      sym_argument,
    STATE(110), 1,
      sym_string,
  [628] = 4,
    ACTIONS(118), 1,
      anon_sym_TILDE_LBRACK,
    ACTIONS(197), 1,
      sym_word,
    ACTIONS(199), 1,
      sym__space,
    STATE(38), 2,
      sym_alias_ref,
      aux_sym_slot_body_repeat1,
  [642] = 2,
    ACTIONS(203), 1,
      sym_word,
    ACTIONS(201), 4,
      anon_sym_AT_LBRACK,
      anon_sym_TILDE_LBRACK,
      sym__eol,
      sym__space,
  [652] = 5,
    ACTIONS(191), 1,
      anon_sym_DQUOTE,
    ACTIONS(193), 1,
      anon_sym_SQUOTE,
    ACTIONS(205), 1,
      sym__space,
    STATE(84), 1,
      sym_argument,
    STATE(110), 1,
      sym_string,
  [668] = 5,
    ACTIONS(191), 1,
      anon_sym_DQUOTE,
    ACTIONS(193), 1,
      anon_sym_SQUOTE,
    ACTIONS(207), 1,
      sym__space,
    STATE(51), 1,
      sym_argument,
    STATE(110), 1,
      sym_string,
  [684] = 4,
    ACTIONS(209), 1,
      anon_sym_SQUOTE,
    ACTIONS(211), 1,
      aux_sym_string_token2,
    ACTIONS(213), 1,
      sym_escape,
    STATE(50), 1,
      aux_sym_string_repeat2,
  [697] = 4,
    ACTIONS(215), 1,
      anon_sym_SQUOTE,
    ACTIONS(217), 1,
      aux_sym_string_token2,
    ACTIONS(220), 1,
      sym_escape,
    STATE(50), 1,
      aux_sym_string_repeat2,
  [710] = 4,
    ACTIONS(223), 1,
      anon_sym_COMMA,
    ACTIONS(225), 1,
      anon_sym_RPAREN,
    ACTIONS(227), 1,
      sym__space,
    STATE(65), 1,
      aux_sym_arguments_repeat1,
  [723] = 2,
    ACTIONS(177), 1,
      sym_word,
    ACTIONS(175), 3,
      anon_sym_TILDE_LBRACK,
      sym__eol,
      sym__space,
  [732] = 4,
    ACTIONS(229), 1,
      anon_sym_LPAREN,
    ACTIONS(231), 1,
      sym__eol,
    ACTIONS(233), 1,
      sym__space,
    STATE(136), 1,
      sym_arguments,
  [745] = 4,
    ACTIONS(235), 1,
      anon_sym_RBRACK,
    ACTIONS(237), 1,
      anon_sym_QMARK,
    ACTIONS(239), 1,
      anon_sym_POUND,
    STATE(102), 1,
      sym_variation,
  [758] = 4,
    ACTIONS(191), 1,
      anon_sym_DQUOTE,
    ACTIONS(193), 1,
      anon_sym_SQUOTE,
    ACTIONS(241), 1,
      sym__space,
    STATE(90), 1,
      sym_string,
  [771] = 4,
    ACTIONS(243), 1,
      anon_sym_COMMA,
    ACTIONS(246), 1,
      anon_sym_RPAREN,
    ACTIONS(248), 1,
      sym__space,
    STATE(56), 1,
      aux_sym_arguments_repeat1,
  [784] = 4,
    ACTIONS(191), 1,
      anon_sym_DQUOTE,
    ACTIONS(193), 1,
      anon_sym_SQUOTE,
    STATE(84), 1,
      sym_argument,
    STATE(110), 1,
      sym_string,
  [797] = 2,
    ACTIONS(253), 1,
      sym_word,
    ACTIONS(251), 3,
      anon_sym_AT_LBRACK,
      anon_sym_TILDE_LBRACK,
      sym__space,
  [806] = 1,
    ACTIONS(255), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      sym__space,
  [813] = 4,
    ACTIONS(209), 1,
      anon_sym_DQUOTE,
    ACTIONS(257), 1,
      aux_sym_string_token1,
    ACTIONS(259), 1,
      sym_escape,
    STATE(68), 1,
      aux_sym_string_repeat1,
  [826] = 4,
    ACTIONS(223), 1,
      anon_sym_COMMA,
    ACTIONS(261), 1,
      anon_sym_RPAREN,
    ACTIONS(263), 1,
      sym__space,
    STATE(62), 1,
      aux_sym_arguments_repeat1,
  [839] = 4,
    ACTIONS(223), 1,
      anon_sym_COMMA,
    ACTIONS(265), 1,
      anon_sym_RPAREN,
    ACTIONS(267), 1,
      sym__space,
    STATE(56), 1,
      aux_sym_arguments_repeat1,
  [852] = 4,
    ACTIONS(269), 1,
      anon_sym_SQUOTE,
    ACTIONS(271), 1,
      aux_sym_string_token2,
    ACTIONS(273), 1,
      sym_escape,
    STATE(49), 1,
      aux_sym_string_repeat2,
  [865] = 4,
    ACTIONS(269), 1,
      anon_sym_DQUOTE,
    ACTIONS(275), 1,
      aux_sym_string_token1,
    ACTIONS(277), 1,
      sym_escape,
    STATE(60), 1,
      aux_sym_string_repeat1,
  [878] = 4,
    ACTIONS(223), 1,
      anon_sym_COMMA,
    ACTIONS(261), 1,
      anon_sym_RPAREN,
    ACTIONS(263), 1,
      sym__space,
    STATE(56), 1,
      aux_sym_arguments_repeat1,
  [891] = 4,
    ACTIONS(191), 1,
      anon_sym_DQUOTE,
    ACTIONS(193), 1,
      anon_sym_SQUOTE,
    ACTIONS(279), 1,
      sym__space,
    STATE(93), 1,
      sym_string,
  [904] = 4,
    ACTIONS(191), 1,
      anon_sym_DQUOTE,
    ACTIONS(193), 1,
      anon_sym_SQUOTE,
    STATE(61), 1,
      sym_argument,
    STATE(110), 1,
      sym_string,
  [917] = 4,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(283), 1,
      aux_sym_string_token1,
    ACTIONS(286), 1,
      sym_escape,
    STATE(68), 1,
      aux_sym_string_repeat1,
  [930] = 4,
    ACTIONS(191), 1,
      anon_sym_DQUOTE,
    ACTIONS(193), 1,
      anon_sym_SQUOTE,
    STATE(95), 1,
      sym_argument,
    STATE(110), 1,
      sym_string,
  [943] = 1,
    ACTIONS(289), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      sym__space,
  [950] = 2,
    ACTIONS(189), 1,
      sym_word,
    ACTIONS(187), 3,
      anon_sym_TILDE_LBRACK,
      sym__eol,
      sym__space,
  [959] = 4,
    ACTIONS(229), 1,
      anon_sym_LPAREN,
    ACTIONS(291), 1,
      sym__eol,
    ACTIONS(293), 1,
      sym__space,
    STATE(138), 1,
      sym_arguments,
  [972] = 4,
    ACTIONS(229), 1,
      anon_sym_LPAREN,
    ACTIONS(295), 1,
      sym__eol,
    ACTIONS(297), 1,
      sym__space,
    STATE(139), 1,
      sym_arguments,
  [985] = 2,
    ACTIONS(301), 1,
      sym_word,
    ACTIONS(299), 3,
      anon_sym_AT_LBRACK,
      anon_sym_TILDE_LBRACK,
      sym__space,
  [994] = 4,
    ACTIONS(229), 1,
      anon_sym_LPAREN,
    ACTIONS(303), 1,
      sym__eol,
    ACTIONS(305), 1,
      sym__space,
    STATE(131), 1,
      sym_arguments,
  [1007] = 3,
    ACTIONS(72), 1,
      sym__indent,
    STATE(9), 1,
      aux_sym_alias_body_repeat1,
    STATE(28), 1,
      sym_alias_body,
  [1017] = 3,
    ACTIONS(72), 1,
      sym__indent,
    STATE(9), 1,
      aux_sym_alias_body_repeat1,
    STATE(23), 1,
      sym_alias_body,
  [1027] = 3,
    ACTIONS(229), 1,
      anon_sym_LPAREN,
    ACTIONS(303), 1,
      sym__eol,
    STATE(131), 1,
      sym_arguments,
  [1037] = 3,
    ACTIONS(43), 1,
      sym__indent,
    STATE(4), 1,
      aux_sym_slot_body_repeat2,
    STATE(35), 1,
      sym_slot_body,
  [1047] = 3,
    ACTIONS(76), 1,
      sym__indent,
    STATE(10), 1,
      aux_sym_intent_body_repeat2,
    STATE(24), 1,
      sym_intent_body,
  [1057] = 3,
    ACTIONS(43), 1,
      sym__indent,
    STATE(4), 1,
      aux_sym_slot_body_repeat2,
    STATE(32), 1,
      sym_slot_body,
  [1067] = 3,
    ACTIONS(229), 1,
      anon_sym_LPAREN,
    ACTIONS(307), 1,
      sym__eol,
    STATE(113), 1,
      sym_arguments,
  [1077] = 3,
    ACTIONS(72), 1,
      sym__indent,
    STATE(9), 1,
      aux_sym_alias_body_repeat1,
    STATE(20), 1,
      sym_alias_body,
  [1087] = 1,
    ACTIONS(309), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym__space,
  [1093] = 3,
    ACTIONS(229), 1,
      anon_sym_LPAREN,
    ACTIONS(311), 1,
      sym__eol,
    STATE(132), 1,
      sym_arguments,
  [1103] = 3,
    ACTIONS(191), 1,
      anon_sym_DQUOTE,
    ACTIONS(193), 1,
      anon_sym_SQUOTE,
    STATE(100), 1,
      sym_string,
  [1113] = 2,
    ACTIONS(301), 1,
      sym_word,
    ACTIONS(299), 2,
      anon_sym_TILDE_LBRACK,
      sym__space,
  [1121] = 3,
    ACTIONS(43), 1,
      sym__indent,
    STATE(4), 1,
      aux_sym_slot_body_repeat2,
    STATE(31), 1,
      sym_slot_body,
  [1131] = 1,
    ACTIONS(246), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym__space,
  [1137] = 1,
    ACTIONS(313), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym__space,
  [1143] = 3,
    ACTIONS(229), 1,
      anon_sym_LPAREN,
    ACTIONS(315), 1,
      sym__eol,
    STATE(115), 1,
      sym_arguments,
  [1153] = 3,
    ACTIONS(191), 1,
      anon_sym_DQUOTE,
    ACTIONS(193), 1,
      anon_sym_SQUOTE,
    STATE(90), 1,
      sym_string,
  [1163] = 1,
    ACTIONS(317), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym__space,
  [1169] = 3,
    ACTIONS(43), 1,
      sym__indent,
    STATE(4), 1,
      aux_sym_slot_body_repeat2,
    STATE(29), 1,
      sym_slot_body,
  [1179] = 1,
    ACTIONS(319), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym__space,
  [1185] = 3,
    ACTIONS(239), 1,
      anon_sym_POUND,
    ACTIONS(321), 1,
      anon_sym_RBRACK,
    STATE(141), 1,
      sym_variation,
  [1195] = 3,
    ACTIONS(76), 1,
      sym__indent,
    STATE(10), 1,
      aux_sym_intent_body_repeat2,
    STATE(27), 1,
      sym_intent_body,
  [1205] = 2,
    ACTIONS(253), 1,
      sym_word,
    ACTIONS(251), 2,
      anon_sym_TILDE_LBRACK,
      sym__space,
  [1213] = 3,
    ACTIONS(76), 1,
      sym__indent,
    STATE(10), 1,
      aux_sym_intent_body_repeat2,
    STATE(34), 1,
      sym_intent_body,
  [1223] = 1,
    ACTIONS(323), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym__space,
  [1229] = 2,
    ACTIONS(325), 1,
      anon_sym_COMMA,
    ACTIONS(327), 1,
      anon_sym_RPAREN,
  [1236] = 2,
    ACTIONS(329), 1,
      anon_sym_RBRACK,
    ACTIONS(331), 1,
      anon_sym_QMARK,
  [1243] = 2,
    ACTIONS(333), 1,
      anon_sym_RBRACK,
    ACTIONS(335), 1,
      anon_sym_PERCENT,
  [1250] = 2,
    ACTIONS(337), 1,
      anon_sym_RBRACK,
    ACTIONS(339), 1,
      anon_sym_QMARK,
  [1257] = 2,
    ACTIONS(265), 1,
      anon_sym_RPAREN,
    ACTIONS(325), 1,
      anon_sym_COMMA,
  [1264] = 2,
    ACTIONS(341), 1,
      sym__eol,
    ACTIONS(343), 1,
      sym__space,
  [1271] = 1,
    ACTIONS(345), 2,
      anon_sym_RBRACK,
      anon_sym_QMARK,
  [1276] = 2,
    ACTIONS(347), 1,
      anon_sym_RBRACK,
    ACTIONS(349), 1,
      anon_sym_QMARK,
  [1283] = 2,
    ACTIONS(351), 1,
      anon_sym_RBRACK,
    ACTIONS(353), 1,
      anon_sym_PERCENT,
  [1290] = 2,
    ACTIONS(355), 1,
      anon_sym_COLON,
    ACTIONS(357), 1,
      sym__space,
  [1297] = 2,
    ACTIONS(261), 1,
      anon_sym_RPAREN,
    ACTIONS(325), 1,
      anon_sym_COMMA,
  [1304] = 1,
    ACTIONS(359), 1,
      anon_sym_RBRACK,
  [1308] = 1,
    ACTIONS(361), 1,
      sym__eol,
  [1312] = 1,
    ACTIONS(363), 1,
      sym__eol,
  [1316] = 1,
    ACTIONS(365), 1,
      sym__eol,
  [1320] = 1,
    ACTIONS(367), 1,
      aux_sym_intent_def_token1,
  [1324] = 1,
    ACTIONS(369), 1,
      sym_number,
  [1328] = 1,
    ACTIONS(325), 1,
      anon_sym_COMMA,
  [1332] = 1,
    ACTIONS(371), 1,
      aux_sym_intent_def_token1,
  [1336] = 1,
    ACTIONS(373), 1,
      aux_sym_slot_def_token1,
  [1340] = 1,
    ACTIONS(375), 1,
      anon_sym_COLON,
  [1344] = 1,
    ACTIONS(329), 1,
      anon_sym_RBRACK,
  [1348] = 1,
    ACTIONS(377), 1,
      anon_sym_RBRACK,
  [1352] = 1,
    ACTIONS(379), 1,
      aux_sym_import_token1,
  [1356] = 1,
    ACTIONS(381), 1,
      sym__eol,
  [1360] = 1,
    ACTIONS(383), 1,
      anon_sym_RBRACK,
  [1364] = 1,
    ACTIONS(385), 1,
      aux_sym_intent_def_token1,
  [1368] = 1,
    ACTIONS(387), 1,
      aux_sym_slot_def_token1,
  [1372] = 1,
    ACTIONS(389), 1,
      sym__space,
  [1376] = 1,
    ACTIONS(391), 1,
      sym__eol,
  [1380] = 1,
    ACTIONS(315), 1,
      sym__eol,
  [1384] = 1,
    ACTIONS(393), 1,
      sym__eol,
  [1388] = 1,
    ACTIONS(395), 1,
      sym__eol,
  [1392] = 1,
    ACTIONS(397), 1,
      anon_sym_RBRACK,
  [1396] = 1,
    ACTIONS(399), 1,
      sym__eol,
  [1400] = 1,
    ACTIONS(307), 1,
      sym__eol,
  [1404] = 1,
    ACTIONS(401), 1,
      aux_sym_slot_def_token1,
  [1408] = 1,
    ACTIONS(303), 1,
      sym__eol,
  [1412] = 1,
    ACTIONS(311), 1,
      sym__eol,
  [1416] = 1,
    ACTIONS(403), 1,
      ts_builtin_sym_end,
  [1420] = 1,
    ACTIONS(405), 1,
      anon_sym_RBRACK,
  [1424] = 1,
    ACTIONS(407), 1,
      anon_sym_RBRACK,
  [1428] = 1,
    ACTIONS(409), 1,
      sym__eol,
  [1432] = 1,
    ACTIONS(411), 1,
      anon_sym_RBRACK,
  [1436] = 1,
    ACTIONS(413), 1,
      anon_sym_RBRACK,
  [1440] = 1,
    ACTIONS(415), 1,
      aux_sym_intent_def_token1,
  [1444] = 1,
    ACTIONS(417), 1,
      sym_number,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 33,
  [SMALL_STATE(4)] = 66,
  [SMALL_STATE(5)] = 82,
  [SMALL_STATE(6)] = 98,
  [SMALL_STATE(7)] = 114,
  [SMALL_STATE(8)] = 130,
  [SMALL_STATE(9)] = 154,
  [SMALL_STATE(10)] = 170,
  [SMALL_STATE(11)] = 186,
  [SMALL_STATE(12)] = 197,
  [SMALL_STATE(13)] = 208,
  [SMALL_STATE(14)] = 219,
  [SMALL_STATE(15)] = 230,
  [SMALL_STATE(16)] = 251,
  [SMALL_STATE(17)] = 262,
  [SMALL_STATE(18)] = 283,
  [SMALL_STATE(19)] = 304,
  [SMALL_STATE(20)] = 325,
  [SMALL_STATE(21)] = 335,
  [SMALL_STATE(22)] = 353,
  [SMALL_STATE(23)] = 373,
  [SMALL_STATE(24)] = 383,
  [SMALL_STATE(25)] = 393,
  [SMALL_STATE(26)] = 403,
  [SMALL_STATE(27)] = 421,
  [SMALL_STATE(28)] = 431,
  [SMALL_STATE(29)] = 441,
  [SMALL_STATE(30)] = 451,
  [SMALL_STATE(31)] = 461,
  [SMALL_STATE(32)] = 471,
  [SMALL_STATE(33)] = 481,
  [SMALL_STATE(34)] = 491,
  [SMALL_STATE(35)] = 501,
  [SMALL_STATE(36)] = 511,
  [SMALL_STATE(37)] = 521,
  [SMALL_STATE(38)] = 538,
  [SMALL_STATE(39)] = 555,
  [SMALL_STATE(40)] = 572,
  [SMALL_STATE(41)] = 582,
  [SMALL_STATE(42)] = 592,
  [SMALL_STATE(43)] = 602,
  [SMALL_STATE(44)] = 612,
  [SMALL_STATE(45)] = 628,
  [SMALL_STATE(46)] = 642,
  [SMALL_STATE(47)] = 652,
  [SMALL_STATE(48)] = 668,
  [SMALL_STATE(49)] = 684,
  [SMALL_STATE(50)] = 697,
  [SMALL_STATE(51)] = 710,
  [SMALL_STATE(52)] = 723,
  [SMALL_STATE(53)] = 732,
  [SMALL_STATE(54)] = 745,
  [SMALL_STATE(55)] = 758,
  [SMALL_STATE(56)] = 771,
  [SMALL_STATE(57)] = 784,
  [SMALL_STATE(58)] = 797,
  [SMALL_STATE(59)] = 806,
  [SMALL_STATE(60)] = 813,
  [SMALL_STATE(61)] = 826,
  [SMALL_STATE(62)] = 839,
  [SMALL_STATE(63)] = 852,
  [SMALL_STATE(64)] = 865,
  [SMALL_STATE(65)] = 878,
  [SMALL_STATE(66)] = 891,
  [SMALL_STATE(67)] = 904,
  [SMALL_STATE(68)] = 917,
  [SMALL_STATE(69)] = 930,
  [SMALL_STATE(70)] = 943,
  [SMALL_STATE(71)] = 950,
  [SMALL_STATE(72)] = 959,
  [SMALL_STATE(73)] = 972,
  [SMALL_STATE(74)] = 985,
  [SMALL_STATE(75)] = 994,
  [SMALL_STATE(76)] = 1007,
  [SMALL_STATE(77)] = 1017,
  [SMALL_STATE(78)] = 1027,
  [SMALL_STATE(79)] = 1037,
  [SMALL_STATE(80)] = 1047,
  [SMALL_STATE(81)] = 1057,
  [SMALL_STATE(82)] = 1067,
  [SMALL_STATE(83)] = 1077,
  [SMALL_STATE(84)] = 1087,
  [SMALL_STATE(85)] = 1093,
  [SMALL_STATE(86)] = 1103,
  [SMALL_STATE(87)] = 1113,
  [SMALL_STATE(88)] = 1121,
  [SMALL_STATE(89)] = 1131,
  [SMALL_STATE(90)] = 1137,
  [SMALL_STATE(91)] = 1143,
  [SMALL_STATE(92)] = 1153,
  [SMALL_STATE(93)] = 1163,
  [SMALL_STATE(94)] = 1169,
  [SMALL_STATE(95)] = 1179,
  [SMALL_STATE(96)] = 1185,
  [SMALL_STATE(97)] = 1195,
  [SMALL_STATE(98)] = 1205,
  [SMALL_STATE(99)] = 1213,
  [SMALL_STATE(100)] = 1223,
  [SMALL_STATE(101)] = 1229,
  [SMALL_STATE(102)] = 1236,
  [SMALL_STATE(103)] = 1243,
  [SMALL_STATE(104)] = 1250,
  [SMALL_STATE(105)] = 1257,
  [SMALL_STATE(106)] = 1264,
  [SMALL_STATE(107)] = 1271,
  [SMALL_STATE(108)] = 1276,
  [SMALL_STATE(109)] = 1283,
  [SMALL_STATE(110)] = 1290,
  [SMALL_STATE(111)] = 1297,
  [SMALL_STATE(112)] = 1304,
  [SMALL_STATE(113)] = 1308,
  [SMALL_STATE(114)] = 1312,
  [SMALL_STATE(115)] = 1316,
  [SMALL_STATE(116)] = 1320,
  [SMALL_STATE(117)] = 1324,
  [SMALL_STATE(118)] = 1328,
  [SMALL_STATE(119)] = 1332,
  [SMALL_STATE(120)] = 1336,
  [SMALL_STATE(121)] = 1340,
  [SMALL_STATE(122)] = 1344,
  [SMALL_STATE(123)] = 1348,
  [SMALL_STATE(124)] = 1352,
  [SMALL_STATE(125)] = 1356,
  [SMALL_STATE(126)] = 1360,
  [SMALL_STATE(127)] = 1364,
  [SMALL_STATE(128)] = 1368,
  [SMALL_STATE(129)] = 1372,
  [SMALL_STATE(130)] = 1376,
  [SMALL_STATE(131)] = 1380,
  [SMALL_STATE(132)] = 1384,
  [SMALL_STATE(133)] = 1388,
  [SMALL_STATE(134)] = 1392,
  [SMALL_STATE(135)] = 1396,
  [SMALL_STATE(136)] = 1400,
  [SMALL_STATE(137)] = 1404,
  [SMALL_STATE(138)] = 1408,
  [SMALL_STATE(139)] = 1412,
  [SMALL_STATE(140)] = 1416,
  [SMALL_STATE(141)] = 1420,
  [SMALL_STATE(142)] = 1424,
  [SMALL_STATE(143)] = 1428,
  [SMALL_STATE(144)] = 1432,
  [SMALL_STATE(145)] = 1436,
  [SMALL_STATE(146)] = 1440,
  [SMALL_STATE(147)] = 1444,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(116),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(128),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(127),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(129),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(133),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(3),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_slot_body, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alias_body_repeat1, 2),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alias_body_repeat1, 2), SHIFT_REPEAT(26),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_slot_body_repeat2, 2),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_slot_body_repeat2, 2), SHIFT_REPEAT(22),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_intent_body_repeat2, 2),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_intent_body_repeat2, 2), SHIFT_REPEAT(8),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_body, 1),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_intent_body, 1),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_slot_body_repeat2, 4),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_intent_body_repeat2, 4),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alias_body_repeat1, 3),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_slot_body_repeat2, 3),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_intent_body_repeat1, 2), SHIFT_REPEAT(120),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_intent_body_repeat1, 2), SHIFT_REPEAT(119),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_intent_body_repeat1, 2), SHIFT_REPEAT(15),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_intent_body_repeat1, 2),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_intent_body_repeat1, 2), SHIFT_REPEAT(15),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_intent_body_repeat2, 3),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_def, 7),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_def, 5),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_intent_def, 7, .production_id = 2),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__definition, 1),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_intent_def, 5, .production_id = 2),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_def, 6),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_slot_def, 6, .production_id = 3),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_slot_def, 7, .production_id = 3),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_slot_def, 8, .production_id = 3),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 5),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_intent_def, 6, .production_id = 2),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_slot_def, 5, .production_id = 3),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 4),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_slot_body_repeat1, 2), SHIFT_REPEAT(146),
  [167] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_slot_body_repeat1, 2), SHIFT_REPEAT(39),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_slot_body_repeat1, 2),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_slot_body_repeat1, 2), SHIFT_REPEAT(39),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_ref, 4),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias_ref, 4),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_slot_ref, 3, .production_id = 3),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_slot_ref, 3, .production_id = 3),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_slot_ref, 4, .production_id = 3),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_slot_ref, 4, .production_id = 3),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_ref, 3),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias_ref, 3),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_slot_ref, 5, .production_id = 3),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_slot_ref, 5, .production_id = 3),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2),
  [217] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(50),
  [220] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(50),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [243] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(44),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [248] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(118),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_probability, 3),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_probability, 3),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [283] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(68),
  [286] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(68),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, .production_id = 4),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_probability, 4),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_probability, 4),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 3),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 4, .production_id = 6),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 3, .production_id = 5),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 4),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 5, .production_id = 7),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variation, 2, .production_id = 1),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 5),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 3),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 6),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [403] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 4),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_chatito(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
