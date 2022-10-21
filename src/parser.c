#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 147
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
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 40,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 42,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
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
  [85] = 74,
  [86] = 86,
  [87] = 87,
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
  [98] = 98,
  [99] = 69,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 103,
  [106] = 106,
  [107] = 104,
  [108] = 108,
  [109] = 109,
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
  [143] = 111,
  [144] = 125,
  [145] = 134,
  [146] = 132,
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
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 29},
  [9] = {.lex_state = 29},
  [10] = {.lex_state = 29},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 29},
  [13] = {.lex_state = 29},
  [14] = {.lex_state = 29},
  [15] = {.lex_state = 29},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 29},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 29},
  [21] = {.lex_state = 29},
  [22] = {.lex_state = 29},
  [23] = {.lex_state = 29},
  [24] = {.lex_state = 29},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 29},
  [27] = {.lex_state = 29},
  [28] = {.lex_state = 29},
  [29] = {.lex_state = 29},
  [30] = {.lex_state = 29},
  [31] = {.lex_state = 29},
  [32] = {.lex_state = 29},
  [33] = {.lex_state = 29},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 7},
  [36] = {.lex_state = 5},
  [37] = {.lex_state = 5},
  [38] = {.lex_state = 5},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 5},
  [48] = {.lex_state = 29},
  [49] = {.lex_state = 10},
  [50] = {.lex_state = 11},
  [51] = {.lex_state = 29},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 5},
  [58] = {.lex_state = 29},
  [59] = {.lex_state = 11},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 10},
  [63] = {.lex_state = 11},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 5},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 4},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 10},
  [73] = {.lex_state = 2},
  [74] = {.lex_state = 4},
  [75] = {.lex_state = 29},
  [76] = {.lex_state = 29},
  [77] = {.lex_state = 2},
  [78] = {.lex_state = 29},
  [79] = {.lex_state = 29},
  [80] = {.lex_state = 29},
  [81] = {.lex_state = 2},
  [82] = {.lex_state = 29},
  [83] = {.lex_state = 29},
  [84] = {.lex_state = 29},
  [85] = {.lex_state = 5},
  [86] = {.lex_state = 2},
  [87] = {.lex_state = 29},
  [88] = {.lex_state = 2},
  [89] = {.lex_state = 29},
  [90] = {.lex_state = 29},
  [91] = {.lex_state = 29},
  [92] = {.lex_state = 2},
  [93] = {.lex_state = 2},
  [94] = {.lex_state = 2},
  [95] = {.lex_state = 29},
  [96] = {.lex_state = 29},
  [97] = {.lex_state = 29},
  [98] = {.lex_state = 29},
  [99] = {.lex_state = 5},
  [100] = {.lex_state = 29},
  [101] = {.lex_state = 3},
  [102] = {.lex_state = 29},
  [103] = {.lex_state = 29},
  [104] = {.lex_state = 2},
  [105] = {.lex_state = 29},
  [106] = {.lex_state = 29},
  [107] = {.lex_state = 2},
  [108] = {.lex_state = 29},
  [109] = {.lex_state = 2},
  [110] = {.lex_state = 29},
  [111] = {.lex_state = 29},
  [112] = {.lex_state = 26},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 29},
  [115] = {.lex_state = 29},
  [116] = {.lex_state = 29},
  [117] = {.lex_state = 29},
  [118] = {.lex_state = 29},
  [119] = {.lex_state = 29},
  [120] = {.lex_state = 29},
  [121] = {.lex_state = 29},
  [122] = {.lex_state = 29},
  [123] = {.lex_state = 26},
  [124] = {.lex_state = 29},
  [125] = {.lex_state = 29},
  [126] = {.lex_state = 3},
  [127] = {.lex_state = 27},
  [128] = {.lex_state = 29},
  [129] = {.lex_state = 29},
  [130] = {.lex_state = 29},
  [131] = {.lex_state = 27},
  [132] = {.lex_state = 29},
  [133] = {.lex_state = 29},
  [134] = {.lex_state = 27},
  [135] = {.lex_state = 26},
  [136] = {.lex_state = 28},
  [137] = {.lex_state = 29},
  [138] = {.lex_state = 29},
  [139] = {.lex_state = 29},
  [140] = {.lex_state = 29},
  [141] = {.lex_state = 29},
  [142] = {.lex_state = 29},
  [143] = {.lex_state = 29},
  [144] = {.lex_state = 29},
  [145] = {.lex_state = 27},
  [146] = {.lex_state = 29},
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
    [sym_source] = STATE(113),
    [sym__definition] = STATE(2),
    [sym_intent_def] = STATE(2),
    [sym_slot_def] = STATE(2),
    [sym_alias_def] = STATE(2),
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
  [0] = 8,
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
    STATE(3), 7,
      sym__definition,
      sym_intent_def,
      sym_slot_def,
      sym_alias_def,
      sym_import,
      sym_comment,
      aux_sym_source_repeat1,
  [31] = 8,
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
    STATE(3), 7,
      sym__definition,
      sym_intent_def,
      sym_slot_def,
      sym_alias_def,
      sym_import,
      sym_comment,
      aux_sym_source_repeat1,
  [62] = 3,
    ACTIONS(43), 1,
      sym__indent,
    STATE(4), 1,
      aux_sym_alias_body_repeat1,
    ACTIONS(41), 7,
      ts_builtin_sym_end,
      anon_sym_PERCENT_LBRACK,
      anon_sym_AT_LBRACK,
      anon_sym_TILDE_LBRACK,
      anon_sym_import,
      aux_sym_comment_token1,
      sym__eol,
  [78] = 3,
    ACTIONS(48), 1,
      sym__indent,
    STATE(5), 1,
      aux_sym_slot_body_repeat2,
    ACTIONS(46), 7,
      ts_builtin_sym_end,
      anon_sym_PERCENT_LBRACK,
      anon_sym_AT_LBRACK,
      anon_sym_TILDE_LBRACK,
      anon_sym_import,
      aux_sym_comment_token1,
      sym__eol,
  [94] = 3,
    ACTIONS(53), 1,
      sym__indent,
    STATE(10), 1,
      aux_sym_intent_body_repeat2,
    ACTIONS(51), 7,
      ts_builtin_sym_end,
      anon_sym_PERCENT_LBRACK,
      anon_sym_AT_LBRACK,
      anon_sym_TILDE_LBRACK,
      anon_sym_import,
      aux_sym_comment_token1,
      sym__eol,
  [110] = 7,
    ACTIONS(55), 1,
      anon_sym_AT_LBRACK,
    ACTIONS(57), 1,
      anon_sym_TILDE_LBRACK,
    ACTIONS(59), 1,
      sym_word,
    ACTIONS(61), 1,
      anon_sym_STAR_LBRACK,
    ACTIONS(63), 1,
      sym__space,
    STATE(25), 1,
      sym_probability,
    STATE(18), 3,
      sym_slot_ref,
      sym_alias_ref,
      aux_sym_intent_body_repeat1,
  [134] = 3,
    ACTIONS(67), 1,
      sym__indent,
    STATE(4), 1,
      aux_sym_alias_body_repeat1,
    ACTIONS(65), 7,
      ts_builtin_sym_end,
      anon_sym_PERCENT_LBRACK,
      anon_sym_AT_LBRACK,
      anon_sym_TILDE_LBRACK,
      anon_sym_import,
      aux_sym_comment_token1,
      sym__eol,
  [150] = 3,
    ACTIONS(71), 1,
      sym__indent,
    STATE(5), 1,
      aux_sym_slot_body_repeat2,
    ACTIONS(69), 7,
      ts_builtin_sym_end,
      anon_sym_PERCENT_LBRACK,
      anon_sym_AT_LBRACK,
      anon_sym_TILDE_LBRACK,
      anon_sym_import,
      aux_sym_comment_token1,
      sym__eol,
  [166] = 3,
    ACTIONS(75), 1,
      sym__indent,
    STATE(10), 1,
      aux_sym_intent_body_repeat2,
    ACTIONS(73), 7,
      ts_builtin_sym_end,
      anon_sym_PERCENT_LBRACK,
      anon_sym_AT_LBRACK,
      anon_sym_TILDE_LBRACK,
      anon_sym_import,
      aux_sym_comment_token1,
      sym__eol,
  [182] = 6,
    ACTIONS(78), 1,
      anon_sym_AT_LBRACK,
    ACTIONS(81), 1,
      anon_sym_TILDE_LBRACK,
    ACTIONS(84), 1,
      sym_word,
    ACTIONS(87), 1,
      sym__eol,
    ACTIONS(89), 1,
      sym__space,
    STATE(11), 3,
      sym_slot_ref,
      sym_alias_ref,
      aux_sym_intent_body_repeat1,
  [203] = 1,
    ACTIONS(92), 8,
      ts_builtin_sym_end,
      anon_sym_PERCENT_LBRACK,
      anon_sym_AT_LBRACK,
      anon_sym_TILDE_LBRACK,
      anon_sym_import,
      aux_sym_comment_token1,
      sym__eol,
      sym__indent,
  [214] = 1,
    ACTIONS(94), 8,
      ts_builtin_sym_end,
      anon_sym_PERCENT_LBRACK,
      anon_sym_AT_LBRACK,
      anon_sym_TILDE_LBRACK,
      anon_sym_import,
      aux_sym_comment_token1,
      sym__eol,
      sym__indent,
  [225] = 1,
    ACTIONS(96), 8,
      ts_builtin_sym_end,
      anon_sym_PERCENT_LBRACK,
      anon_sym_AT_LBRACK,
      anon_sym_TILDE_LBRACK,
      anon_sym_import,
      aux_sym_comment_token1,
      sym__eol,
      sym__indent,
  [236] = 1,
    ACTIONS(98), 8,
      ts_builtin_sym_end,
      anon_sym_PERCENT_LBRACK,
      anon_sym_AT_LBRACK,
      anon_sym_TILDE_LBRACK,
      anon_sym_import,
      aux_sym_comment_token1,
      sym__eol,
      sym__indent,
  [247] = 6,
    ACTIONS(55), 1,
      anon_sym_AT_LBRACK,
    ACTIONS(57), 1,
      anon_sym_TILDE_LBRACK,
    ACTIONS(100), 1,
      sym_word,
    ACTIONS(102), 1,
      sym__eol,
    ACTIONS(104), 1,
      sym__space,
    STATE(11), 3,
      sym_slot_ref,
      sym_alias_ref,
      aux_sym_intent_body_repeat1,
  [268] = 1,
    ACTIONS(106), 8,
      ts_builtin_sym_end,
      anon_sym_PERCENT_LBRACK,
      anon_sym_AT_LBRACK,
      anon_sym_TILDE_LBRACK,
      anon_sym_import,
      aux_sym_comment_token1,
      sym__eol,
      sym__indent,
  [279] = 6,
    ACTIONS(55), 1,
      anon_sym_AT_LBRACK,
    ACTIONS(57), 1,
      anon_sym_TILDE_LBRACK,
    ACTIONS(100), 1,
      sym_word,
    ACTIONS(104), 1,
      sym__space,
    ACTIONS(108), 1,
      sym__eol,
    STATE(11), 3,
      sym_slot_ref,
      sym_alias_ref,
      aux_sym_intent_body_repeat1,
  [300] = 6,
    ACTIONS(55), 1,
      anon_sym_AT_LBRACK,
    ACTIONS(57), 1,
      anon_sym_TILDE_LBRACK,
    ACTIONS(100), 1,
      sym_word,
    ACTIONS(104), 1,
      sym__space,
    ACTIONS(110), 1,
      sym__eol,
    STATE(11), 3,
      sym_slot_ref,
      sym_alias_ref,
      aux_sym_intent_body_repeat1,
  [321] = 1,
    ACTIONS(112), 7,
      ts_builtin_sym_end,
      anon_sym_PERCENT_LBRACK,
      anon_sym_AT_LBRACK,
      anon_sym_TILDE_LBRACK,
      anon_sym_import,
      aux_sym_comment_token1,
      sym__eol,
  [331] = 1,
    ACTIONS(114), 7,
      ts_builtin_sym_end,
      anon_sym_PERCENT_LBRACK,
      anon_sym_AT_LBRACK,
      anon_sym_TILDE_LBRACK,
      anon_sym_import,
      aux_sym_comment_token1,
      sym__eol,
  [341] = 1,
    ACTIONS(116), 7,
      ts_builtin_sym_end,
      anon_sym_PERCENT_LBRACK,
      anon_sym_AT_LBRACK,
      anon_sym_TILDE_LBRACK,
      anon_sym_import,
      aux_sym_comment_token1,
      sym__eol,
  [351] = 1,
    ACTIONS(118), 7,
      ts_builtin_sym_end,
      anon_sym_PERCENT_LBRACK,
      anon_sym_AT_LBRACK,
      anon_sym_TILDE_LBRACK,
      anon_sym_import,
      aux_sym_comment_token1,
      sym__eol,
  [361] = 1,
    ACTIONS(120), 7,
      ts_builtin_sym_end,
      anon_sym_PERCENT_LBRACK,
      anon_sym_AT_LBRACK,
      anon_sym_TILDE_LBRACK,
      anon_sym_import,
      aux_sym_comment_token1,
      sym__eol,
  [371] = 5,
    ACTIONS(55), 1,
      anon_sym_AT_LBRACK,
    ACTIONS(57), 1,
      anon_sym_TILDE_LBRACK,
    ACTIONS(122), 1,
      sym_word,
    ACTIONS(124), 1,
      sym__space,
    STATE(16), 3,
      sym_slot_ref,
      sym_alias_ref,
      aux_sym_intent_body_repeat1,
  [389] = 1,
    ACTIONS(126), 7,
      ts_builtin_sym_end,
      anon_sym_PERCENT_LBRACK,
      anon_sym_AT_LBRACK,
      anon_sym_TILDE_LBRACK,
      anon_sym_import,
      aux_sym_comment_token1,
      sym__eol,
  [399] = 1,
    ACTIONS(128), 7,
      ts_builtin_sym_end,
      anon_sym_PERCENT_LBRACK,
      anon_sym_AT_LBRACK,
      anon_sym_TILDE_LBRACK,
      anon_sym_import,
      aux_sym_comment_token1,
      sym__eol,
  [409] = 1,
    ACTIONS(130), 7,
      ts_builtin_sym_end,
      anon_sym_PERCENT_LBRACK,
      anon_sym_AT_LBRACK,
      anon_sym_TILDE_LBRACK,
      anon_sym_import,
      aux_sym_comment_token1,
      sym__eol,
  [419] = 1,
    ACTIONS(132), 7,
      ts_builtin_sym_end,
      anon_sym_PERCENT_LBRACK,
      anon_sym_AT_LBRACK,
      anon_sym_TILDE_LBRACK,
      anon_sym_import,
      aux_sym_comment_token1,
      sym__eol,
  [429] = 1,
    ACTIONS(134), 7,
      ts_builtin_sym_end,
      anon_sym_PERCENT_LBRACK,
      anon_sym_AT_LBRACK,
      anon_sym_TILDE_LBRACK,
      anon_sym_import,
      aux_sym_comment_token1,
      sym__eol,
  [439] = 1,
    ACTIONS(136), 7,
      ts_builtin_sym_end,
      anon_sym_PERCENT_LBRACK,
      anon_sym_AT_LBRACK,
      anon_sym_TILDE_LBRACK,
      anon_sym_import,
      aux_sym_comment_token1,
      sym__eol,
  [449] = 1,
    ACTIONS(138), 7,
      ts_builtin_sym_end,
      anon_sym_PERCENT_LBRACK,
      anon_sym_AT_LBRACK,
      anon_sym_TILDE_LBRACK,
      anon_sym_import,
      aux_sym_comment_token1,
      sym__eol,
  [459] = 1,
    ACTIONS(140), 7,
      ts_builtin_sym_end,
      anon_sym_PERCENT_LBRACK,
      anon_sym_AT_LBRACK,
      anon_sym_TILDE_LBRACK,
      anon_sym_import,
      aux_sym_comment_token1,
      sym__eol,
  [469] = 5,
    ACTIONS(55), 1,
      anon_sym_AT_LBRACK,
    ACTIONS(57), 1,
      anon_sym_TILDE_LBRACK,
    ACTIONS(142), 1,
      sym_word,
    ACTIONS(144), 1,
      sym__space,
    STATE(19), 3,
      sym_slot_ref,
      sym_alias_ref,
      aux_sym_intent_body_repeat1,
  [487] = 6,
    ACTIONS(146), 1,
      anon_sym_TILDE_LBRACK,
    ACTIONS(148), 1,
      sym_word,
    ACTIONS(150), 1,
      anon_sym_STAR_LBRACK,
    ACTIONS(152), 1,
      sym__space,
    STATE(47), 1,
      sym_probability,
    STATE(37), 2,
      sym_alias_ref,
      aux_sym_slot_body_repeat1,
  [507] = 5,
    ACTIONS(154), 1,
      anon_sym_TILDE_LBRACK,
    ACTIONS(157), 1,
      sym_word,
    ACTIONS(160), 1,
      sym__eol,
    ACTIONS(162), 1,
      sym__space,
    STATE(36), 2,
      sym_alias_ref,
      aux_sym_slot_body_repeat1,
  [524] = 5,
    ACTIONS(146), 1,
      anon_sym_TILDE_LBRACK,
    ACTIONS(165), 1,
      sym_word,
    ACTIONS(167), 1,
      sym__eol,
    ACTIONS(169), 1,
      sym__space,
    STATE(36), 2,
      sym_alias_ref,
      aux_sym_slot_body_repeat1,
  [541] = 5,
    ACTIONS(146), 1,
      anon_sym_TILDE_LBRACK,
    ACTIONS(165), 1,
      sym_word,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(171), 1,
      sym__eol,
    STATE(36), 2,
      sym_alias_ref,
      aux_sym_slot_body_repeat1,
  [558] = 2,
    ACTIONS(175), 1,
      sym_word,
    ACTIONS(173), 4,
      anon_sym_AT_LBRACK,
      anon_sym_TILDE_LBRACK,
      sym__eol,
      sym__space,
  [568] = 2,
    ACTIONS(179), 1,
      sym_word,
    ACTIONS(177), 4,
      anon_sym_AT_LBRACK,
      anon_sym_TILDE_LBRACK,
      sym__eol,
      sym__space,
  [578] = 2,
    ACTIONS(183), 1,
      sym_word,
    ACTIONS(181), 4,
      anon_sym_AT_LBRACK,
      anon_sym_TILDE_LBRACK,
      sym__eol,
      sym__space,
  [588] = 2,
    ACTIONS(187), 1,
      sym_word,
    ACTIONS(185), 4,
      anon_sym_AT_LBRACK,
      anon_sym_TILDE_LBRACK,
      sym__eol,
      sym__space,
  [598] = 2,
    ACTIONS(191), 1,
      sym_word,
    ACTIONS(189), 4,
      anon_sym_AT_LBRACK,
      anon_sym_TILDE_LBRACK,
      sym__eol,
      sym__space,
  [608] = 5,
    ACTIONS(193), 1,
      anon_sym_DQUOTE,
    ACTIONS(195), 1,
      anon_sym_SQUOTE,
    ACTIONS(197), 1,
      sym__space,
    STATE(93), 1,
      sym_argument,
    STATE(109), 1,
      sym_string,
  [624] = 5,
    ACTIONS(193), 1,
      anon_sym_DQUOTE,
    ACTIONS(195), 1,
      anon_sym_SQUOTE,
    ACTIONS(199), 1,
      sym__space,
    STATE(92), 1,
      sym_argument,
    STATE(109), 1,
      sym_string,
  [640] = 5,
    ACTIONS(193), 1,
      anon_sym_DQUOTE,
    ACTIONS(195), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      sym__space,
    STATE(52), 1,
      sym_argument,
    STATE(109), 1,
      sym_string,
  [656] = 4,
    ACTIONS(146), 1,
      anon_sym_TILDE_LBRACK,
    ACTIONS(203), 1,
      sym_word,
    ACTIONS(205), 1,
      sym__space,
    STATE(38), 2,
      sym_alias_ref,
      aux_sym_slot_body_repeat1,
  [670] = 4,
    ACTIONS(193), 1,
      anon_sym_DQUOTE,
    ACTIONS(195), 1,
      anon_sym_SQUOTE,
    STATE(93), 1,
      sym_argument,
    STATE(109), 1,
      sym_string,
  [683] = 4,
    ACTIONS(207), 1,
      anon_sym_DQUOTE,
    ACTIONS(209), 1,
      aux_sym_string_token1,
    ACTIONS(212), 1,
      sym_escape,
    STATE(49), 1,
      aux_sym_string_repeat1,
  [696] = 4,
    ACTIONS(215), 1,
      anon_sym_SQUOTE,
    ACTIONS(217), 1,
      aux_sym_string_token2,
    ACTIONS(219), 1,
      sym_escape,
    STATE(63), 1,
      aux_sym_string_repeat2,
  [709] = 4,
    ACTIONS(193), 1,
      anon_sym_DQUOTE,
    ACTIONS(195), 1,
      anon_sym_SQUOTE,
    STATE(64), 1,
      sym_argument,
    STATE(109), 1,
      sym_string,
  [722] = 4,
    ACTIONS(221), 1,
      anon_sym_COMMA,
    ACTIONS(223), 1,
      anon_sym_RPAREN,
    ACTIONS(225), 1,
      sym__space,
    STATE(67), 1,
      aux_sym_arguments_repeat1,
  [735] = 4,
    ACTIONS(227), 1,
      anon_sym_LPAREN,
    ACTIONS(229), 1,
      sym__eol,
    ACTIONS(231), 1,
      sym__space,
    STATE(130), 1,
      sym_arguments,
  [748] = 4,
    ACTIONS(227), 1,
      anon_sym_LPAREN,
    ACTIONS(233), 1,
      sym__eol,
    ACTIONS(235), 1,
      sym__space,
    STATE(117), 1,
      sym_arguments,
  [761] = 4,
    ACTIONS(237), 1,
      anon_sym_COMMA,
    ACTIONS(240), 1,
      anon_sym_RPAREN,
    ACTIONS(242), 1,
      sym__space,
    STATE(55), 1,
      aux_sym_arguments_repeat1,
  [774] = 4,
    ACTIONS(221), 1,
      anon_sym_COMMA,
    ACTIONS(245), 1,
      anon_sym_RPAREN,
    ACTIONS(247), 1,
      sym__space,
    STATE(55), 1,
      aux_sym_arguments_repeat1,
  [787] = 2,
    ACTIONS(179), 1,
      sym_word,
    ACTIONS(177), 3,
      anon_sym_TILDE_LBRACK,
      sym__eol,
      sym__space,
  [796] = 4,
    ACTIONS(193), 1,
      anon_sym_DQUOTE,
    ACTIONS(195), 1,
      anon_sym_SQUOTE,
    STATE(77), 1,
      sym_argument,
    STATE(109), 1,
      sym_string,
  [809] = 4,
    ACTIONS(249), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      aux_sym_string_token2,
    ACTIONS(254), 1,
      sym_escape,
    STATE(59), 1,
      aux_sym_string_repeat2,
  [822] = 1,
    ACTIONS(257), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      sym__space,
  [829] = 1,
    ACTIONS(259), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      sym__space,
  [836] = 4,
    ACTIONS(261), 1,
      anon_sym_DQUOTE,
    ACTIONS(263), 1,
      aux_sym_string_token1,
    ACTIONS(265), 1,
      sym_escape,
    STATE(49), 1,
      aux_sym_string_repeat1,
  [849] = 4,
    ACTIONS(261), 1,
      anon_sym_SQUOTE,
    ACTIONS(267), 1,
      aux_sym_string_token2,
    ACTIONS(269), 1,
      sym_escape,
    STATE(59), 1,
      aux_sym_string_repeat2,
  [862] = 4,
    ACTIONS(221), 1,
      anon_sym_COMMA,
    ACTIONS(271), 1,
      anon_sym_RPAREN,
    ACTIONS(273), 1,
      sym__space,
    STATE(56), 1,
      aux_sym_arguments_repeat1,
  [875] = 2,
    ACTIONS(187), 1,
      sym_word,
    ACTIONS(185), 3,
      anon_sym_TILDE_LBRACK,
      sym__eol,
      sym__space,
  [884] = 4,
    ACTIONS(193), 1,
      anon_sym_DQUOTE,
    ACTIONS(195), 1,
      anon_sym_SQUOTE,
    ACTIONS(275), 1,
      sym__space,
    STATE(88), 1,
      sym_string,
  [897] = 4,
    ACTIONS(221), 1,
      anon_sym_COMMA,
    ACTIONS(271), 1,
      anon_sym_RPAREN,
    ACTIONS(273), 1,
      sym__space,
    STATE(55), 1,
      aux_sym_arguments_repeat1,
  [910] = 4,
    ACTIONS(193), 1,
      anon_sym_DQUOTE,
    ACTIONS(195), 1,
      anon_sym_SQUOTE,
    ACTIONS(277), 1,
      sym__space,
    STATE(94), 1,
      sym_string,
  [923] = 2,
    ACTIONS(281), 1,
      sym_word,
    ACTIONS(279), 3,
      anon_sym_AT_LBRACK,
      anon_sym_TILDE_LBRACK,
      sym__space,
  [932] = 4,
    ACTIONS(227), 1,
      anon_sym_LPAREN,
    ACTIONS(283), 1,
      sym__eol,
    ACTIONS(285), 1,
      sym__space,
    STATE(140), 1,
      sym_arguments,
  [945] = 4,
    ACTIONS(227), 1,
      anon_sym_LPAREN,
    ACTIONS(287), 1,
      sym__eol,
    ACTIONS(289), 1,
      sym__space,
    STATE(120), 1,
      sym_arguments,
  [958] = 4,
    ACTIONS(215), 1,
      anon_sym_DQUOTE,
    ACTIONS(291), 1,
      aux_sym_string_token1,
    ACTIONS(293), 1,
      sym_escape,
    STATE(62), 1,
      aux_sym_string_repeat1,
  [971] = 4,
    ACTIONS(295), 1,
      anon_sym_RBRACK,
    ACTIONS(297), 1,
      anon_sym_QMARK,
    ACTIONS(299), 1,
      anon_sym_POUND,
    STATE(100), 1,
      sym_variation,
  [984] = 2,
    ACTIONS(303), 1,
      sym_word,
    ACTIONS(301), 3,
      anon_sym_AT_LBRACK,
      anon_sym_TILDE_LBRACK,
      sym__space,
  [993] = 3,
    ACTIONS(67), 1,
      sym__indent,
    STATE(8), 1,
      aux_sym_alias_body_repeat1,
    STATE(28), 1,
      sym_alias_body,
  [1003] = 3,
    ACTIONS(227), 1,
      anon_sym_LPAREN,
    ACTIONS(305), 1,
      sym__eol,
    STATE(116), 1,
      sym_arguments,
  [1013] = 1,
    ACTIONS(307), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym__space,
  [1019] = 3,
    ACTIONS(53), 1,
      sym__indent,
    STATE(6), 1,
      aux_sym_intent_body_repeat2,
    STATE(30), 1,
      sym_intent_body,
  [1029] = 3,
    ACTIONS(71), 1,
      sym__indent,
    STATE(9), 1,
      aux_sym_slot_body_repeat2,
    STATE(20), 1,
      sym_slot_body,
  [1039] = 3,
    ACTIONS(227), 1,
      anon_sym_LPAREN,
    ACTIONS(309), 1,
      sym__eol,
    STATE(139), 1,
      sym_arguments,
  [1049] = 1,
    ACTIONS(311), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym__space,
  [1055] = 3,
    ACTIONS(67), 1,
      sym__indent,
    STATE(8), 1,
      aux_sym_alias_body_repeat1,
    STATE(27), 1,
      sym_alias_body,
  [1065] = 3,
    ACTIONS(193), 1,
      anon_sym_DQUOTE,
    ACTIONS(195), 1,
      anon_sym_SQUOTE,
    STATE(81), 1,
      sym_string,
  [1075] = 3,
    ACTIONS(227), 1,
      anon_sym_LPAREN,
    ACTIONS(313), 1,
      sym__eol,
    STATE(124), 1,
      sym_arguments,
  [1085] = 2,
    ACTIONS(303), 1,
      sym_word,
    ACTIONS(301), 2,
      anon_sym_TILDE_LBRACK,
      sym__space,
  [1093] = 3,
    ACTIONS(299), 1,
      anon_sym_POUND,
    ACTIONS(315), 1,
      anon_sym_RBRACK,
    STATE(122), 1,
      sym_variation,
  [1103] = 3,
    ACTIONS(71), 1,
      sym__indent,
    STATE(9), 1,
      aux_sym_slot_body_repeat2,
    STATE(31), 1,
      sym_slot_body,
  [1113] = 1,
    ACTIONS(317), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym__space,
  [1119] = 3,
    ACTIONS(67), 1,
      sym__indent,
    STATE(8), 1,
      aux_sym_alias_body_repeat1,
    STATE(26), 1,
      sym_alias_body,
  [1129] = 3,
    ACTIONS(71), 1,
      sym__indent,
    STATE(9), 1,
      aux_sym_slot_body_repeat2,
    STATE(24), 1,
      sym_slot_body,
  [1139] = 3,
    ACTIONS(227), 1,
      anon_sym_LPAREN,
    ACTIONS(283), 1,
      sym__eol,
    STATE(140), 1,
      sym_arguments,
  [1149] = 1,
    ACTIONS(240), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym__space,
  [1155] = 1,
    ACTIONS(319), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym__space,
  [1161] = 1,
    ACTIONS(321), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym__space,
  [1167] = 3,
    ACTIONS(193), 1,
      anon_sym_DQUOTE,
    ACTIONS(195), 1,
      anon_sym_SQUOTE,
    STATE(88), 1,
      sym_string,
  [1177] = 3,
    ACTIONS(71), 1,
      sym__indent,
    STATE(9), 1,
      aux_sym_slot_body_repeat2,
    STATE(29), 1,
      sym_slot_body,
  [1187] = 3,
    ACTIONS(53), 1,
      sym__indent,
    STATE(6), 1,
      aux_sym_intent_body_repeat2,
    STATE(23), 1,
      sym_intent_body,
  [1197] = 3,
    ACTIONS(53), 1,
      sym__indent,
    STATE(6), 1,
      aux_sym_intent_body_repeat2,
    STATE(22), 1,
      sym_intent_body,
  [1207] = 2,
    ACTIONS(281), 1,
      sym_word,
    ACTIONS(279), 2,
      anon_sym_TILDE_LBRACK,
      sym__space,
  [1215] = 2,
    ACTIONS(323), 1,
      anon_sym_RBRACK,
    ACTIONS(325), 1,
      anon_sym_QMARK,
  [1222] = 2,
    ACTIONS(327), 1,
      sym__eol,
    ACTIONS(329), 1,
      sym__space,
  [1229] = 2,
    ACTIONS(271), 1,
      anon_sym_RPAREN,
    ACTIONS(331), 1,
      anon_sym_COMMA,
  [1236] = 2,
    ACTIONS(333), 1,
      anon_sym_RBRACK,
    ACTIONS(335), 1,
      anon_sym_QMARK,
  [1243] = 2,
    ACTIONS(337), 1,
      anon_sym_RBRACK,
    ACTIONS(339), 1,
      anon_sym_PERCENT,
  [1250] = 2,
    ACTIONS(341), 1,
      anon_sym_RBRACK,
    ACTIONS(343), 1,
      anon_sym_QMARK,
  [1257] = 1,
    ACTIONS(345), 2,
      anon_sym_RBRACK,
      anon_sym_QMARK,
  [1262] = 2,
    ACTIONS(347), 1,
      anon_sym_RBRACK,
    ACTIONS(349), 1,
      anon_sym_PERCENT,
  [1269] = 2,
    ACTIONS(245), 1,
      anon_sym_RPAREN,
    ACTIONS(331), 1,
      anon_sym_COMMA,
  [1276] = 2,
    ACTIONS(351), 1,
      anon_sym_COLON,
    ACTIONS(353), 1,
      sym__space,
  [1283] = 2,
    ACTIONS(331), 1,
      anon_sym_COMMA,
    ACTIONS(355), 1,
      anon_sym_RPAREN,
  [1290] = 1,
    ACTIONS(357), 1,
      anon_sym_RBRACK,
  [1294] = 1,
    ACTIONS(359), 1,
      aux_sym_slot_def_token1,
  [1298] = 1,
    ACTIONS(361), 1,
      ts_builtin_sym_end,
  [1302] = 1,
    ACTIONS(363), 1,
      sym__eol,
  [1306] = 1,
    ACTIONS(365), 1,
      sym__eol,
  [1310] = 1,
    ACTIONS(367), 1,
      sym__eol,
  [1314] = 1,
    ACTIONS(283), 1,
      sym__eol,
  [1318] = 1,
    ACTIONS(331), 1,
      anon_sym_COMMA,
  [1322] = 1,
    ACTIONS(369), 1,
      sym__eol,
  [1326] = 1,
    ACTIONS(309), 1,
      sym__eol,
  [1330] = 1,
    ACTIONS(323), 1,
      anon_sym_RBRACK,
  [1334] = 1,
    ACTIONS(371), 1,
      anon_sym_RBRACK,
  [1338] = 1,
    ACTIONS(373), 1,
      aux_sym_slot_def_token1,
  [1342] = 1,
    ACTIONS(375), 1,
      sym__eol,
  [1346] = 1,
    ACTIONS(377), 1,
      anon_sym_RBRACK,
  [1350] = 1,
    ACTIONS(379), 1,
      sym__space,
  [1354] = 1,
    ACTIONS(381), 1,
      aux_sym_intent_def_token1,
  [1358] = 1,
    ACTIONS(383), 1,
      anon_sym_RBRACK,
  [1362] = 1,
    ACTIONS(385), 1,
      sym__eol,
  [1366] = 1,
    ACTIONS(305), 1,
      sym__eol,
  [1370] = 1,
    ACTIONS(387), 1,
      aux_sym_intent_def_token1,
  [1374] = 1,
    ACTIONS(389), 1,
      sym_number,
  [1378] = 1,
    ACTIONS(391), 1,
      anon_sym_RBRACK,
  [1382] = 1,
    ACTIONS(393), 1,
      aux_sym_intent_def_token1,
  [1386] = 1,
    ACTIONS(395), 1,
      aux_sym_slot_def_token1,
  [1390] = 1,
    ACTIONS(397), 1,
      aux_sym_import_token1,
  [1394] = 1,
    ACTIONS(399), 1,
      anon_sym_COLON,
  [1398] = 1,
    ACTIONS(401), 1,
      sym__eol,
  [1402] = 1,
    ACTIONS(403), 1,
      sym__eol,
  [1406] = 1,
    ACTIONS(313), 1,
      sym__eol,
  [1410] = 1,
    ACTIONS(405), 1,
      anon_sym_RBRACK,
  [1414] = 1,
    ACTIONS(407), 1,
      sym__eol,
  [1418] = 1,
    ACTIONS(409), 1,
      anon_sym_RBRACK,
  [1422] = 1,
    ACTIONS(411), 1,
      anon_sym_RBRACK,
  [1426] = 1,
    ACTIONS(413), 1,
      aux_sym_intent_def_token1,
  [1430] = 1,
    ACTIONS(415), 1,
      sym_number,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 31,
  [SMALL_STATE(4)] = 62,
  [SMALL_STATE(5)] = 78,
  [SMALL_STATE(6)] = 94,
  [SMALL_STATE(7)] = 110,
  [SMALL_STATE(8)] = 134,
  [SMALL_STATE(9)] = 150,
  [SMALL_STATE(10)] = 166,
  [SMALL_STATE(11)] = 182,
  [SMALL_STATE(12)] = 203,
  [SMALL_STATE(13)] = 214,
  [SMALL_STATE(14)] = 225,
  [SMALL_STATE(15)] = 236,
  [SMALL_STATE(16)] = 247,
  [SMALL_STATE(17)] = 268,
  [SMALL_STATE(18)] = 279,
  [SMALL_STATE(19)] = 300,
  [SMALL_STATE(20)] = 321,
  [SMALL_STATE(21)] = 331,
  [SMALL_STATE(22)] = 341,
  [SMALL_STATE(23)] = 351,
  [SMALL_STATE(24)] = 361,
  [SMALL_STATE(25)] = 371,
  [SMALL_STATE(26)] = 389,
  [SMALL_STATE(27)] = 399,
  [SMALL_STATE(28)] = 409,
  [SMALL_STATE(29)] = 419,
  [SMALL_STATE(30)] = 429,
  [SMALL_STATE(31)] = 439,
  [SMALL_STATE(32)] = 449,
  [SMALL_STATE(33)] = 459,
  [SMALL_STATE(34)] = 469,
  [SMALL_STATE(35)] = 487,
  [SMALL_STATE(36)] = 507,
  [SMALL_STATE(37)] = 524,
  [SMALL_STATE(38)] = 541,
  [SMALL_STATE(39)] = 558,
  [SMALL_STATE(40)] = 568,
  [SMALL_STATE(41)] = 578,
  [SMALL_STATE(42)] = 588,
  [SMALL_STATE(43)] = 598,
  [SMALL_STATE(44)] = 608,
  [SMALL_STATE(45)] = 624,
  [SMALL_STATE(46)] = 640,
  [SMALL_STATE(47)] = 656,
  [SMALL_STATE(48)] = 670,
  [SMALL_STATE(49)] = 683,
  [SMALL_STATE(50)] = 696,
  [SMALL_STATE(51)] = 709,
  [SMALL_STATE(52)] = 722,
  [SMALL_STATE(53)] = 735,
  [SMALL_STATE(54)] = 748,
  [SMALL_STATE(55)] = 761,
  [SMALL_STATE(56)] = 774,
  [SMALL_STATE(57)] = 787,
  [SMALL_STATE(58)] = 796,
  [SMALL_STATE(59)] = 809,
  [SMALL_STATE(60)] = 822,
  [SMALL_STATE(61)] = 829,
  [SMALL_STATE(62)] = 836,
  [SMALL_STATE(63)] = 849,
  [SMALL_STATE(64)] = 862,
  [SMALL_STATE(65)] = 875,
  [SMALL_STATE(66)] = 884,
  [SMALL_STATE(67)] = 897,
  [SMALL_STATE(68)] = 910,
  [SMALL_STATE(69)] = 923,
  [SMALL_STATE(70)] = 932,
  [SMALL_STATE(71)] = 945,
  [SMALL_STATE(72)] = 958,
  [SMALL_STATE(73)] = 971,
  [SMALL_STATE(74)] = 984,
  [SMALL_STATE(75)] = 993,
  [SMALL_STATE(76)] = 1003,
  [SMALL_STATE(77)] = 1013,
  [SMALL_STATE(78)] = 1019,
  [SMALL_STATE(79)] = 1029,
  [SMALL_STATE(80)] = 1039,
  [SMALL_STATE(81)] = 1049,
  [SMALL_STATE(82)] = 1055,
  [SMALL_STATE(83)] = 1065,
  [SMALL_STATE(84)] = 1075,
  [SMALL_STATE(85)] = 1085,
  [SMALL_STATE(86)] = 1093,
  [SMALL_STATE(87)] = 1103,
  [SMALL_STATE(88)] = 1113,
  [SMALL_STATE(89)] = 1119,
  [SMALL_STATE(90)] = 1129,
  [SMALL_STATE(91)] = 1139,
  [SMALL_STATE(92)] = 1149,
  [SMALL_STATE(93)] = 1155,
  [SMALL_STATE(94)] = 1161,
  [SMALL_STATE(95)] = 1167,
  [SMALL_STATE(96)] = 1177,
  [SMALL_STATE(97)] = 1187,
  [SMALL_STATE(98)] = 1197,
  [SMALL_STATE(99)] = 1207,
  [SMALL_STATE(100)] = 1215,
  [SMALL_STATE(101)] = 1222,
  [SMALL_STATE(102)] = 1229,
  [SMALL_STATE(103)] = 1236,
  [SMALL_STATE(104)] = 1243,
  [SMALL_STATE(105)] = 1250,
  [SMALL_STATE(106)] = 1257,
  [SMALL_STATE(107)] = 1262,
  [SMALL_STATE(108)] = 1269,
  [SMALL_STATE(109)] = 1276,
  [SMALL_STATE(110)] = 1283,
  [SMALL_STATE(111)] = 1290,
  [SMALL_STATE(112)] = 1294,
  [SMALL_STATE(113)] = 1298,
  [SMALL_STATE(114)] = 1302,
  [SMALL_STATE(115)] = 1306,
  [SMALL_STATE(116)] = 1310,
  [SMALL_STATE(117)] = 1314,
  [SMALL_STATE(118)] = 1318,
  [SMALL_STATE(119)] = 1322,
  [SMALL_STATE(120)] = 1326,
  [SMALL_STATE(121)] = 1330,
  [SMALL_STATE(122)] = 1334,
  [SMALL_STATE(123)] = 1338,
  [SMALL_STATE(124)] = 1342,
  [SMALL_STATE(125)] = 1346,
  [SMALL_STATE(126)] = 1350,
  [SMALL_STATE(127)] = 1354,
  [SMALL_STATE(128)] = 1358,
  [SMALL_STATE(129)] = 1362,
  [SMALL_STATE(130)] = 1366,
  [SMALL_STATE(131)] = 1370,
  [SMALL_STATE(132)] = 1374,
  [SMALL_STATE(133)] = 1378,
  [SMALL_STATE(134)] = 1382,
  [SMALL_STATE(135)] = 1386,
  [SMALL_STATE(136)] = 1390,
  [SMALL_STATE(137)] = 1394,
  [SMALL_STATE(138)] = 1398,
  [SMALL_STATE(139)] = 1402,
  [SMALL_STATE(140)] = 1406,
  [SMALL_STATE(141)] = 1410,
  [SMALL_STATE(142)] = 1414,
  [SMALL_STATE(143)] = 1418,
  [SMALL_STATE(144)] = 1422,
  [SMALL_STATE(145)] = 1426,
  [SMALL_STATE(146)] = 1430,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(131),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(112),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(127),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(126),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(114),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(3),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alias_body_repeat1, 2),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alias_body_repeat1, 2), SHIFT_REPEAT(34),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_slot_body_repeat2, 2),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_slot_body_repeat2, 2), SHIFT_REPEAT(35),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_intent_body, 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_body, 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_slot_body, 1),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_intent_body_repeat2, 2),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_intent_body_repeat2, 2), SHIFT_REPEAT(7),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_intent_body_repeat1, 2), SHIFT_REPEAT(135),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_intent_body_repeat1, 2), SHIFT_REPEAT(134),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_intent_body_repeat1, 2), SHIFT_REPEAT(11),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_intent_body_repeat1, 2),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_intent_body_repeat1, 2), SHIFT_REPEAT(11),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alias_body_repeat1, 3),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_intent_body_repeat2, 4),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_slot_body_repeat2, 4),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_intent_body_repeat2, 3),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_slot_body_repeat2, 3),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_slot_def, 5, .production_id = 3),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_intent_def, 6, .production_id = 2),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_intent_def, 7, .production_id = 2),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_slot_def, 6, .production_id = 3),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_def, 7),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_def, 5),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_def, 6),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_slot_def, 8, .production_id = 3),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_intent_def, 5, .production_id = 2),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_slot_def, 7, .production_id = 3),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 5),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 4),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_slot_body_repeat1, 2), SHIFT_REPEAT(145),
  [157] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_slot_body_repeat1, 2), SHIFT_REPEAT(36),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_slot_body_repeat1, 2),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_slot_body_repeat1, 2), SHIFT_REPEAT(36),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_slot_ref, 5, .production_id = 3),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_slot_ref, 5, .production_id = 3),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_ref, 4),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias_ref, 4),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_slot_ref, 4, .production_id = 3),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_slot_ref, 4, .production_id = 3),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_ref, 3),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias_ref, 3),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_slot_ref, 3, .production_id = 3),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_slot_ref, 3, .production_id = 3),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [209] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(49),
  [212] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(49),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [237] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(45),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [242] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(118),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2),
  [251] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(59),
  [254] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(59),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, .production_id = 4),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_probability, 4),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_probability, 4),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_probability, 3),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_probability, 3),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 4),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 5, .production_id = 7),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 4, .production_id = 6),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 3),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 3, .production_id = 5),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variation, 2, .production_id = 1),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [361] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 5),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 4),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 6),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 3),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
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
