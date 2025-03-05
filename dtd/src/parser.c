#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 336
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 111
#define ALIAS_COUNT 1
#define TOKEN_COUNT 61
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 3

enum ts_symbol_identifiers {
  sym_Name = 1,
  anon_sym_LT_QMARK = 2,
  anon_sym_xml = 3,
  anon_sym_QMARK_GT = 4,
  anon_sym_LT_BANG_LBRACK = 5,
  anon_sym_IGNORE = 6,
  anon_sym_INCLUDE = 7,
  anon_sym_LBRACK = 8,
  anon_sym_RBRACK_RBRACK_GT = 9,
  anon_sym_LT_BANG = 10,
  anon_sym_ELEMENT = 11,
  anon_sym_GT = 12,
  anon_sym_EMPTY = 13,
  anon_sym_ANY = 14,
  anon_sym_LPAREN = 15,
  anon_sym_POUNDPCDATA = 16,
  anon_sym_PIPE = 17,
  anon_sym_RPAREN = 18,
  anon_sym_STAR = 19,
  anon_sym_QMARK = 20,
  anon_sym_PLUS = 21,
  anon_sym_COMMA = 22,
  anon_sym_ATTLIST = 23,
  sym_StringType = 24,
  sym_TokenizedType = 25,
  anon_sym_NOTATION = 26,
  anon_sym_POUNDREQUIRED = 27,
  anon_sym_POUNDIMPLIED = 28,
  anon_sym_POUNDFIXED = 29,
  anon_sym_ENTITY = 30,
  anon_sym_PERCENT = 31,
  anon_sym_DQUOTE = 32,
  aux_sym_EntityValue_token1 = 33,
  anon_sym_SQUOTE = 34,
  aux_sym_EntityValue_token2 = 35,
  anon_sym_NDATA = 36,
  anon_sym_SEMI = 37,
  sym__S = 38,
  sym_Nmtoken = 39,
  anon_sym_AMP = 40,
  anon_sym_AMP_POUND = 41,
  aux_sym_CharRef_token1 = 42,
  anon_sym_AMP_POUNDx = 43,
  aux_sym_CharRef_token2 = 44,
  aux_sym_AttValue_token1 = 45,
  aux_sym_AttValue_token2 = 46,
  anon_sym_SYSTEM = 47,
  anon_sym_PUBLIC = 48,
  aux_sym_SystemLiteral_token1 = 49,
  aux_sym_SystemLiteral_token2 = 50,
  aux_sym_PubidLiteral_token1 = 51,
  aux_sym_PubidLiteral_token2 = 52,
  anon_sym_version = 53,
  sym_VersionNum = 54,
  anon_sym_encoding = 55,
  sym_EncName = 56,
  anon_sym_EQ = 57,
  sym_PITarget = 58,
  sym__pi_content = 59,
  sym_Comment = 60,
  sym_extSubset = 61,
  sym_TextDecl = 62,
  sym__extSubsetDecl = 63,
  sym_conditionalSect = 64,
  sym__markupdecl = 65,
  sym__DeclSep = 66,
  sym_elementdecl = 67,
  sym_contentspec = 68,
  sym_Mixed = 69,
  sym_children = 70,
  sym__cp = 71,
  sym__choice = 72,
  sym_AttlistDecl = 73,
  sym_AttDef = 74,
  sym__AttType = 75,
  sym__EnumeratedType = 76,
  sym_NotationType = 77,
  sym_Enumeration = 78,
  sym_DefaultDecl = 79,
  sym__EntityDecl = 80,
  sym_GEDecl = 81,
  sym_PEDecl = 82,
  sym_EntityValue = 83,
  sym_NDataDecl = 84,
  sym_NotationDecl = 85,
  sym_PEReference = 86,
  sym__Reference = 87,
  sym_EntityRef = 88,
  sym_CharRef = 89,
  sym_AttValue = 90,
  sym_ExternalID = 91,
  sym_PublicID = 92,
  sym_SystemLiteral = 93,
  sym_PubidLiteral = 94,
  sym__VersionInfo = 95,
  sym__EncodingDecl = 96,
  sym_PI = 97,
  sym__Eq = 98,
  aux_sym_extSubset_repeat1 = 99,
  aux_sym_Mixed_repeat1 = 100,
  aux_sym_Mixed_repeat2 = 101,
  aux_sym__choice_repeat1 = 102,
  aux_sym__choice_repeat2 = 103,
  aux_sym_AttlistDecl_repeat1 = 104,
  aux_sym_NotationType_repeat1 = 105,
  aux_sym_Enumeration_repeat1 = 106,
  aux_sym_EntityValue_repeat1 = 107,
  aux_sym_EntityValue_repeat2 = 108,
  aux_sym_AttValue_repeat1 = 109,
  aux_sym_AttValue_repeat2 = 110,
  anon_alias_sym_content = 111,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_Name] = "Name",
  [anon_sym_LT_QMARK] = "<\?",
  [anon_sym_xml] = "xml",
  [anon_sym_QMARK_GT] = "\?>",
  [anon_sym_LT_BANG_LBRACK] = "<![",
  [anon_sym_IGNORE] = "IGNORE",
  [anon_sym_INCLUDE] = "INCLUDE",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK_RBRACK_GT] = "]]>",
  [anon_sym_LT_BANG] = "<!",
  [anon_sym_ELEMENT] = "ELEMENT",
  [anon_sym_GT] = ">",
  [anon_sym_EMPTY] = "EMPTY",
  [anon_sym_ANY] = "ANY",
  [anon_sym_LPAREN] = "(",
  [anon_sym_POUNDPCDATA] = "#PCDATA",
  [anon_sym_PIPE] = "|",
  [anon_sym_RPAREN] = ")",
  [anon_sym_STAR] = "*",
  [anon_sym_QMARK] = "\?",
  [anon_sym_PLUS] = "+",
  [anon_sym_COMMA] = ",",
  [anon_sym_ATTLIST] = "ATTLIST",
  [sym_StringType] = "StringType",
  [sym_TokenizedType] = "TokenizedType",
  [anon_sym_NOTATION] = "NOTATION",
  [anon_sym_POUNDREQUIRED] = "#REQUIRED",
  [anon_sym_POUNDIMPLIED] = "#IMPLIED",
  [anon_sym_POUNDFIXED] = "#FIXED",
  [anon_sym_ENTITY] = "ENTITY",
  [anon_sym_PERCENT] = "%",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_EntityValue_token1] = "EntityValue_token1",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_EntityValue_token2] = "EntityValue_token2",
  [anon_sym_NDATA] = "NDATA",
  [anon_sym_SEMI] = ";",
  [sym__S] = "_S",
  [sym_Nmtoken] = "Nmtoken",
  [anon_sym_AMP] = "&",
  [anon_sym_AMP_POUND] = "&#",
  [aux_sym_CharRef_token1] = "CharRef_token1",
  [anon_sym_AMP_POUNDx] = "&#x",
  [aux_sym_CharRef_token2] = "CharRef_token2",
  [aux_sym_AttValue_token1] = "AttValue_token1",
  [aux_sym_AttValue_token2] = "AttValue_token2",
  [anon_sym_SYSTEM] = "SYSTEM",
  [anon_sym_PUBLIC] = "PUBLIC",
  [aux_sym_SystemLiteral_token1] = "URI",
  [aux_sym_SystemLiteral_token2] = "URI",
  [aux_sym_PubidLiteral_token1] = "PubidLiteral_token1",
  [aux_sym_PubidLiteral_token2] = "PubidLiteral_token2",
  [anon_sym_version] = "version",
  [sym_VersionNum] = "VersionNum",
  [anon_sym_encoding] = "encoding",
  [sym_EncName] = "EncName",
  [anon_sym_EQ] = "=",
  [sym_PITarget] = "PITarget",
  [sym__pi_content] = "_pi_content",
  [sym_Comment] = "Comment",
  [sym_extSubset] = "extSubset",
  [sym_TextDecl] = "TextDecl",
  [sym__extSubsetDecl] = "_extSubsetDecl",
  [sym_conditionalSect] = "conditionalSect",
  [sym__markupdecl] = "_markupdecl",
  [sym__DeclSep] = "_DeclSep",
  [sym_elementdecl] = "elementdecl",
  [sym_contentspec] = "contentspec",
  [sym_Mixed] = "Mixed",
  [sym_children] = "children",
  [sym__cp] = "_cp",
  [sym__choice] = "_choice",
  [sym_AttlistDecl] = "AttlistDecl",
  [sym_AttDef] = "AttDef",
  [sym__AttType] = "_AttType",
  [sym__EnumeratedType] = "_EnumeratedType",
  [sym_NotationType] = "NotationType",
  [sym_Enumeration] = "Enumeration",
  [sym_DefaultDecl] = "DefaultDecl",
  [sym__EntityDecl] = "_EntityDecl",
  [sym_GEDecl] = "GEDecl",
  [sym_PEDecl] = "PEDecl",
  [sym_EntityValue] = "EntityValue",
  [sym_NDataDecl] = "NDataDecl",
  [sym_NotationDecl] = "NotationDecl",
  [sym_PEReference] = "PEReference",
  [sym__Reference] = "_Reference",
  [sym_EntityRef] = "EntityRef",
  [sym_CharRef] = "CharRef",
  [sym_AttValue] = "AttValue",
  [sym_ExternalID] = "ExternalID",
  [sym_PublicID] = "PublicID",
  [sym_SystemLiteral] = "SystemLiteral",
  [sym_PubidLiteral] = "PubidLiteral",
  [sym__VersionInfo] = "_VersionInfo",
  [sym__EncodingDecl] = "_EncodingDecl",
  [sym_PI] = "PI",
  [sym__Eq] = "_Eq",
  [aux_sym_extSubset_repeat1] = "extSubset_repeat1",
  [aux_sym_Mixed_repeat1] = "Mixed_repeat1",
  [aux_sym_Mixed_repeat2] = "Mixed_repeat2",
  [aux_sym__choice_repeat1] = "_choice_repeat1",
  [aux_sym__choice_repeat2] = "_choice_repeat2",
  [aux_sym_AttlistDecl_repeat1] = "AttlistDecl_repeat1",
  [aux_sym_NotationType_repeat1] = "NotationType_repeat1",
  [aux_sym_Enumeration_repeat1] = "Enumeration_repeat1",
  [aux_sym_EntityValue_repeat1] = "EntityValue_repeat1",
  [aux_sym_EntityValue_repeat2] = "EntityValue_repeat2",
  [aux_sym_AttValue_repeat1] = "AttValue_repeat1",
  [aux_sym_AttValue_repeat2] = "AttValue_repeat2",
  [anon_alias_sym_content] = "content",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_Name] = sym_Name,
  [anon_sym_LT_QMARK] = anon_sym_LT_QMARK,
  [anon_sym_xml] = anon_sym_xml,
  [anon_sym_QMARK_GT] = anon_sym_QMARK_GT,
  [anon_sym_LT_BANG_LBRACK] = anon_sym_LT_BANG_LBRACK,
  [anon_sym_IGNORE] = anon_sym_IGNORE,
  [anon_sym_INCLUDE] = anon_sym_INCLUDE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK_RBRACK_GT] = anon_sym_RBRACK_RBRACK_GT,
  [anon_sym_LT_BANG] = anon_sym_LT_BANG,
  [anon_sym_ELEMENT] = anon_sym_ELEMENT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_EMPTY] = anon_sym_EMPTY,
  [anon_sym_ANY] = anon_sym_ANY,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_POUNDPCDATA] = anon_sym_POUNDPCDATA,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_ATTLIST] = anon_sym_ATTLIST,
  [sym_StringType] = sym_StringType,
  [sym_TokenizedType] = sym_TokenizedType,
  [anon_sym_NOTATION] = anon_sym_NOTATION,
  [anon_sym_POUNDREQUIRED] = anon_sym_POUNDREQUIRED,
  [anon_sym_POUNDIMPLIED] = anon_sym_POUNDIMPLIED,
  [anon_sym_POUNDFIXED] = anon_sym_POUNDFIXED,
  [anon_sym_ENTITY] = anon_sym_ENTITY,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_EntityValue_token1] = aux_sym_EntityValue_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_EntityValue_token2] = aux_sym_EntityValue_token2,
  [anon_sym_NDATA] = anon_sym_NDATA,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym__S] = sym__S,
  [sym_Nmtoken] = sym_Nmtoken,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_AMP_POUND] = anon_sym_AMP_POUND,
  [aux_sym_CharRef_token1] = aux_sym_CharRef_token1,
  [anon_sym_AMP_POUNDx] = anon_sym_AMP_POUNDx,
  [aux_sym_CharRef_token2] = aux_sym_CharRef_token2,
  [aux_sym_AttValue_token1] = aux_sym_AttValue_token1,
  [aux_sym_AttValue_token2] = aux_sym_AttValue_token2,
  [anon_sym_SYSTEM] = anon_sym_SYSTEM,
  [anon_sym_PUBLIC] = anon_sym_PUBLIC,
  [aux_sym_SystemLiteral_token1] = aux_sym_SystemLiteral_token1,
  [aux_sym_SystemLiteral_token2] = aux_sym_SystemLiteral_token1,
  [aux_sym_PubidLiteral_token1] = aux_sym_PubidLiteral_token1,
  [aux_sym_PubidLiteral_token2] = aux_sym_PubidLiteral_token2,
  [anon_sym_version] = anon_sym_version,
  [sym_VersionNum] = sym_VersionNum,
  [anon_sym_encoding] = anon_sym_encoding,
  [sym_EncName] = sym_EncName,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_PITarget] = sym_PITarget,
  [sym__pi_content] = sym__pi_content,
  [sym_Comment] = sym_Comment,
  [sym_extSubset] = sym_extSubset,
  [sym_TextDecl] = sym_TextDecl,
  [sym__extSubsetDecl] = sym__extSubsetDecl,
  [sym_conditionalSect] = sym_conditionalSect,
  [sym__markupdecl] = sym__markupdecl,
  [sym__DeclSep] = sym__DeclSep,
  [sym_elementdecl] = sym_elementdecl,
  [sym_contentspec] = sym_contentspec,
  [sym_Mixed] = sym_Mixed,
  [sym_children] = sym_children,
  [sym__cp] = sym__cp,
  [sym__choice] = sym__choice,
  [sym_AttlistDecl] = sym_AttlistDecl,
  [sym_AttDef] = sym_AttDef,
  [sym__AttType] = sym__AttType,
  [sym__EnumeratedType] = sym__EnumeratedType,
  [sym_NotationType] = sym_NotationType,
  [sym_Enumeration] = sym_Enumeration,
  [sym_DefaultDecl] = sym_DefaultDecl,
  [sym__EntityDecl] = sym__EntityDecl,
  [sym_GEDecl] = sym_GEDecl,
  [sym_PEDecl] = sym_PEDecl,
  [sym_EntityValue] = sym_EntityValue,
  [sym_NDataDecl] = sym_NDataDecl,
  [sym_NotationDecl] = sym_NotationDecl,
  [sym_PEReference] = sym_PEReference,
  [sym__Reference] = sym__Reference,
  [sym_EntityRef] = sym_EntityRef,
  [sym_CharRef] = sym_CharRef,
  [sym_AttValue] = sym_AttValue,
  [sym_ExternalID] = sym_ExternalID,
  [sym_PublicID] = sym_PublicID,
  [sym_SystemLiteral] = sym_SystemLiteral,
  [sym_PubidLiteral] = sym_PubidLiteral,
  [sym__VersionInfo] = sym__VersionInfo,
  [sym__EncodingDecl] = sym__EncodingDecl,
  [sym_PI] = sym_PI,
  [sym__Eq] = sym__Eq,
  [aux_sym_extSubset_repeat1] = aux_sym_extSubset_repeat1,
  [aux_sym_Mixed_repeat1] = aux_sym_Mixed_repeat1,
  [aux_sym_Mixed_repeat2] = aux_sym_Mixed_repeat2,
  [aux_sym__choice_repeat1] = aux_sym__choice_repeat1,
  [aux_sym__choice_repeat2] = aux_sym__choice_repeat2,
  [aux_sym_AttlistDecl_repeat1] = aux_sym_AttlistDecl_repeat1,
  [aux_sym_NotationType_repeat1] = aux_sym_NotationType_repeat1,
  [aux_sym_Enumeration_repeat1] = aux_sym_Enumeration_repeat1,
  [aux_sym_EntityValue_repeat1] = aux_sym_EntityValue_repeat1,
  [aux_sym_EntityValue_repeat2] = aux_sym_EntityValue_repeat2,
  [aux_sym_AttValue_repeat1] = aux_sym_AttValue_repeat1,
  [aux_sym_AttValue_repeat2] = aux_sym_AttValue_repeat2,
  [anon_alias_sym_content] = anon_alias_sym_content,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_Name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xml] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_BANG_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IGNORE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_INCLUDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK_RBRACK_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ELEMENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EMPTY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ANY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDPCDATA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATTLIST] = {
    .visible = true,
    .named = false,
  },
  [sym_StringType] = {
    .visible = true,
    .named = true,
  },
  [sym_TokenizedType] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_NOTATION] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDREQUIRED] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDIMPLIED] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDFIXED] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ENTITY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_EntityValue_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_EntityValue_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_NDATA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [sym__S] = {
    .visible = false,
    .named = true,
  },
  [sym_Nmtoken] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_CharRef_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_AMP_POUNDx] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_CharRef_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_AttValue_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_AttValue_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SYSTEM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PUBLIC] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SystemLiteral_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_SystemLiteral_token2] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_PubidLiteral_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_PubidLiteral_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_version] = {
    .visible = true,
    .named = false,
  },
  [sym_VersionNum] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_encoding] = {
    .visible = true,
    .named = false,
  },
  [sym_EncName] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_PITarget] = {
    .visible = true,
    .named = true,
  },
  [sym__pi_content] = {
    .visible = false,
    .named = true,
  },
  [sym_Comment] = {
    .visible = true,
    .named = true,
  },
  [sym_extSubset] = {
    .visible = true,
    .named = true,
  },
  [sym_TextDecl] = {
    .visible = true,
    .named = true,
  },
  [sym__extSubsetDecl] = {
    .visible = false,
    .named = true,
  },
  [sym_conditionalSect] = {
    .visible = true,
    .named = true,
  },
  [sym__markupdecl] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym__DeclSep] = {
    .visible = false,
    .named = true,
  },
  [sym_elementdecl] = {
    .visible = true,
    .named = true,
  },
  [sym_contentspec] = {
    .visible = true,
    .named = true,
  },
  [sym_Mixed] = {
    .visible = true,
    .named = true,
  },
  [sym_children] = {
    .visible = true,
    .named = true,
  },
  [sym__cp] = {
    .visible = false,
    .named = true,
  },
  [sym__choice] = {
    .visible = false,
    .named = true,
  },
  [sym_AttlistDecl] = {
    .visible = true,
    .named = true,
  },
  [sym_AttDef] = {
    .visible = true,
    .named = true,
  },
  [sym__AttType] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym__EnumeratedType] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_NotationType] = {
    .visible = true,
    .named = true,
  },
  [sym_Enumeration] = {
    .visible = true,
    .named = true,
  },
  [sym_DefaultDecl] = {
    .visible = true,
    .named = true,
  },
  [sym__EntityDecl] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_GEDecl] = {
    .visible = true,
    .named = true,
  },
  [sym_PEDecl] = {
    .visible = true,
    .named = true,
  },
  [sym_EntityValue] = {
    .visible = true,
    .named = true,
  },
  [sym_NDataDecl] = {
    .visible = true,
    .named = true,
  },
  [sym_NotationDecl] = {
    .visible = true,
    .named = true,
  },
  [sym_PEReference] = {
    .visible = true,
    .named = true,
  },
  [sym__Reference] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_EntityRef] = {
    .visible = true,
    .named = true,
  },
  [sym_CharRef] = {
    .visible = true,
    .named = true,
  },
  [sym_AttValue] = {
    .visible = true,
    .named = true,
  },
  [sym_ExternalID] = {
    .visible = true,
    .named = true,
  },
  [sym_PublicID] = {
    .visible = true,
    .named = true,
  },
  [sym_SystemLiteral] = {
    .visible = true,
    .named = true,
  },
  [sym_PubidLiteral] = {
    .visible = true,
    .named = true,
  },
  [sym__VersionInfo] = {
    .visible = false,
    .named = true,
  },
  [sym__EncodingDecl] = {
    .visible = false,
    .named = true,
  },
  [sym_PI] = {
    .visible = true,
    .named = true,
  },
  [sym__Eq] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_extSubset_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_Mixed_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_Mixed_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__choice_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__choice_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_AttlistDecl_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_NotationType_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_Enumeration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_EntityValue_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_EntityValue_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_AttValue_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_AttValue_repeat2] = {
    .visible = false,
    .named = false,
  },
  [anon_alias_sym_content] = {
    .visible = true,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_content = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_content] = "content",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_content, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [2] = {
    [1] = anon_alias_sym_content,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  aux_sym_AttValue_repeat1, 2,
    aux_sym_AttValue_repeat1,
    anon_alias_sym_content,
  aux_sym_AttValue_repeat2, 2,
    aux_sym_AttValue_repeat2,
    anon_alias_sym_content,
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
  [38] = 20,
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
  [85] = 85,
  [86] = 86,
  [87] = 80,
  [88] = 83,
  [89] = 84,
  [90] = 20,
  [91] = 20,
  [92] = 92,
  [93] = 84,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 80,
  [115] = 83,
  [116] = 84,
  [117] = 80,
  [118] = 83,
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
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 273,
  [315] = 285,
  [316] = 286,
  [317] = 273,
  [318] = 285,
  [319] = 286,
  [320] = 273,
  [321] = 285,
  [322] = 286,
  [323] = 249,
  [324] = 284,
  [325] = 287,
  [326] = 288,
  [327] = 249,
  [328] = 284,
  [329] = 287,
  [330] = 288,
  [331] = 249,
  [332] = 284,
  [333] = 287,
  [334] = 288,
  [335] = 335,
};

static TSCharacterRange aux_sym_PubidLiteral_token1_character_set_1[] = {
  {'\n', '\n'}, {'\r', '\r'}, {' ', '!'}, {'#', '%'}, {'\'', ';'}, {'=', '='}, {'?', 'Z'}, {'_', '_'},
  {'a', 'z'},
};

static TSCharacterRange aux_sym_PubidLiteral_token2_character_set_1[] = {
  {'\n', '\n'}, {'\r', '\r'}, {' ', '!'}, {'#', '%'}, {'(', ';'}, {'=', '='}, {'?', 'Z'}, {'_', '_'},
  {'a', 'z'},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(40);
      ADVANCE_MAP(
        '"', 66,
        '#', 70,
        '%', 65,
        '&', 120,
        '\'', 80,
        '(', 48,
        ')', 51,
        '*', 52,
        '+', 54,
        ',', 55,
        '1', 68,
        ';', 82,
        '<', 1,
        '=', 133,
        '>', 47,
        '?', 53,
        'E', 72,
        'I', 69,
        'N', 71,
        '[', 44,
        ']', 73,
        '_', 79,
        '|', 50,
        '\t', 76,
        '\n', 76,
        '\r', 76,
        ' ', 76,
        '-', 78,
        '.', 78,
        ':', 78,
        0xb7, 78,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(74);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      if (lookahead != 0) ADVANCE(67);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '?') ADVANCE(41);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(66);
      if (lookahead == '%') ADVANCE(65);
      if (lookahead == '&') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(67);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(66);
      if (lookahead == '&') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(125);
      END_STATE();
    case 4:
      if (lookahead == '%') ADVANCE(65);
      if (lookahead == '&') ADVANCE(120);
      if (lookahead == '\'') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(81);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '%', 65,
        '(', 48,
        '?', 9,
        'E', 101,
        'I', 84,
        'N', 99,
        '\t', 83,
        '\n', 83,
        '\r', 83,
        ' ', 83,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 6:
      if (lookahead == '&') ADVANCE(120);
      if (lookahead == '\'') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(126);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(36);
      END_STATE();
    case 8:
      if (lookahead == '>') ADVANCE(45);
      END_STATE();
    case 9:
      if (lookahead == '>') ADVANCE(42);
      END_STATE();
    case 10:
      if (lookahead == '?') ADVANCE(9);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 11:
      if (lookahead == 'A') ADVANCE(31);
      END_STATE();
    case 12:
      if (lookahead == 'A') ADVANCE(49);
      END_STATE();
    case 13:
      if (lookahead == 'C') ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == 'D') ADVANCE(11);
      END_STATE();
    case 15:
      if (lookahead == 'D') ADVANCE(64);
      END_STATE();
    case 16:
      if (lookahead == 'D') ADVANCE(63);
      END_STATE();
    case 17:
      if (lookahead == 'D') ADVANCE(62);
      END_STATE();
    case 18:
      if (lookahead == 'E') ADVANCE(29);
      END_STATE();
    case 19:
      if (lookahead == 'E') ADVANCE(15);
      END_STATE();
    case 20:
      if (lookahead == 'E') ADVANCE(16);
      END_STATE();
    case 21:
      if (lookahead == 'E') ADVANCE(17);
      END_STATE();
    case 22:
      if (lookahead == 'F') ADVANCE(23);
      if (lookahead == 'I') ADVANCE(27);
      if (lookahead == 'P') ADVANCE(13);
      if (lookahead == 'R') ADVANCE(18);
      END_STATE();
    case 23:
      if (lookahead == 'I') ADVANCE(33);
      END_STATE();
    case 24:
      if (lookahead == 'I') ADVANCE(30);
      END_STATE();
    case 25:
      if (lookahead == 'I') ADVANCE(20);
      END_STATE();
    case 26:
      if (lookahead == 'L') ADVANCE(25);
      END_STATE();
    case 27:
      if (lookahead == 'M') ADVANCE(28);
      END_STATE();
    case 28:
      if (lookahead == 'P') ADVANCE(26);
      END_STATE();
    case 29:
      if (lookahead == 'Q') ADVANCE(32);
      END_STATE();
    case 30:
      if (lookahead == 'R') ADVANCE(21);
      END_STATE();
    case 31:
      if (lookahead == 'T') ADVANCE(12);
      END_STATE();
    case 32:
      if (lookahead == 'U') ADVANCE(24);
      END_STATE();
    case 33:
      if (lookahead == 'X') ADVANCE(19);
      END_STATE();
    case 34:
      if (lookahead == ']') ADVANCE(8);
      END_STATE();
    case 35:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(83);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xb7) ADVANCE(119);
      END_STATE();
    case 36:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(131);
      END_STATE();
    case 37:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(124);
      END_STATE();
    case 38:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 39:
      if (eof) ADVANCE(40);
      ADVANCE_MAP(
        '"', 66,
        '#', 22,
        '%', 65,
        '\'', 80,
        '(', 48,
        ')', 51,
        '*', 52,
        '+', 54,
        ',', 55,
        '1', 7,
        ';', 82,
        '<', 1,
        '=', 133,
        '>', 47,
        '?', 53,
        '[', 44,
        ']', 34,
        '|', 50,
        '\t', 83,
        '\n', 83,
        '\r', 83,
        ' ', 83,
      );
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_LT_QMARK);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_QMARK_GT);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_LT_BANG_LBRACK);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK_GT);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_LT_BANG);
      if (lookahead == '[') ADVANCE(43);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_POUNDPCDATA);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_TokenizedType);
      if (lookahead == 'R') ADVANCE(85);
      if (lookahead == ':' ||
          lookahead == 0xb7) ADVANCE(115);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_TokenizedType);
      if (lookahead == 'R') ADVANCE(88);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xb7) ADVANCE(115);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_TokenizedType);
      if (lookahead == 'S') ADVANCE(60);
      if (lookahead == ':' ||
          lookahead == 0xb7) ADVANCE(115);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_TokenizedType);
      if (lookahead == 'S') ADVANCE(61);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xb7) ADVANCE(115);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_TokenizedType);
      if (lookahead == ':' ||
          lookahead == 0xb7) ADVANCE(115);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_TokenizedType);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xb7) ADVANCE(115);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_POUNDREQUIRED);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_POUNDIMPLIED);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_POUNDFIXED);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == '.') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(118);
      if (lookahead == '-' ||
          lookahead == ':' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xb7) ADVANCE(119);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == 'D') ADVANCE(56);
      if (lookahead == ':' ||
          lookahead == 0xb7) ADVANCE(115);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == 'F') ADVANCE(23);
      if (lookahead == 'I') ADVANCE(27);
      if (lookahead == 'P') ADVANCE(13);
      if (lookahead == 'R') ADVANCE(18);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == 'M') ADVANCE(108);
      if (lookahead == ':' ||
          lookahead == 0xb7) ADVANCE(115);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == 'N') ADVANCE(107);
      if (lookahead == ':' ||
          lookahead == 0xb7) ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(113);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == ']') ADVANCE(8);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == ':' ||
          lookahead == 0xb7) ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(113);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == ':' ||
          lookahead == 0xb7) ADVANCE(115);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(83);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(118);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xb7) ADVANCE(119);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xb7) ADVANCE(119);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xb7) ADVANCE(115);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_EntityValue_token2);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym__S);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'D') ADVANCE(57);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xb7) ADVANCE(115);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'E') ADVANCE(91);
      if (lookahead == ':' ||
          lookahead == 0xb7) ADVANCE(115);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'E') ADVANCE(100);
      if (lookahead == ':' ||
          lookahead == 0xb7) ADVANCE(115);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'E') ADVANCE(105);
      if (lookahead == ':' ||
          lookahead == 0xb7) ADVANCE(115);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'E') ADVANCE(92);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xb7) ADVANCE(115);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'E') ADVANCE(106);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xb7) ADVANCE(115);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'E') ADVANCE(102);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xb7) ADVANCE(115);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'F') ADVANCE(58);
      if (lookahead == ':' ||
          lookahead == 0xb7) ADVANCE(115);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'F') ADVANCE(59);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xb7) ADVANCE(115);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'I') ADVANCE(109);
      if (lookahead == ':' ||
          lookahead == 0xb7) ADVANCE(115);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'I') ADVANCE(87);
      if (lookahead == 'Y') ADVANCE(60);
      if (lookahead == ':' ||
          lookahead == 0xb7) ADVANCE(115);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'I') ADVANCE(112);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xb7) ADVANCE(115);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'I') ADVANCE(89);
      if (lookahead == 'Y') ADVANCE(61);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xb7) ADVANCE(115);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'K') ADVANCE(86);
      if (lookahead == ':' ||
          lookahead == 0xb7) ADVANCE(115);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'K') ADVANCE(90);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xb7) ADVANCE(115);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'M') ADVANCE(111);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xb7) ADVANCE(115);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'N') ADVANCE(58);
      if (lookahead == ':' ||
          lookahead == 0xb7) ADVANCE(115);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'N') ADVANCE(110);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xb7) ADVANCE(115);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'N') ADVANCE(59);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xb7) ADVANCE(115);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'O') ADVANCE(97);
      if (lookahead == ':' ||
          lookahead == 0xb7) ADVANCE(115);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'O') ADVANCE(98);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xb7) ADVANCE(115);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'S') ADVANCE(60);
      if (lookahead == ':' ||
          lookahead == 0xb7) ADVANCE(115);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'S') ADVANCE(61);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xb7) ADVANCE(115);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'T') ADVANCE(93);
      if (lookahead == ':' ||
          lookahead == 0xb7) ADVANCE(115);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'T') ADVANCE(103);
      if (lookahead == ':' ||
          lookahead == 0xb7) ADVANCE(115);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'T') ADVANCE(94);
      if (lookahead == ':' ||
          lookahead == 0xb7) ADVANCE(115);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'T') ADVANCE(95);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xb7) ADVANCE(115);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'T') ADVANCE(104);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xb7) ADVANCE(115);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'T') ADVANCE(96);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xb7) ADVANCE(115);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == ':' ||
          lookahead == 0xb7) ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(113);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == ':' ||
          lookahead == 0xb7) ADVANCE(115);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xb7) ADVANCE(115);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_Nmtoken);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xb7) ADVANCE(119);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_Nmtoken);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(118);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xb7) ADVANCE(119);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_Nmtoken);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(118);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xb7) ADVANCE(119);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_Nmtoken);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xb7) ADVANCE(119);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '#') ADVANCE(121);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_AMP_POUND);
      if (lookahead == 'x') ADVANCE(123);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_CharRef_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_AMP_POUNDx);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_CharRef_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(124);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_AttValue_token1);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_AttValue_token2);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_SystemLiteral_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(127);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_SystemLiteral_token2);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(128);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_PubidLiteral_token1);
      if (set_contains(aux_sym_PubidLiteral_token1_character_set_1, 9, lookahead)) ADVANCE(129);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_PubidLiteral_token2);
      if (set_contains(aux_sym_PubidLiteral_token2_character_set_1, 9, lookahead)) ADVANCE(130);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_VersionNum);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(131);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_EncName);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      ADVANCE_MAP(
        'A', 1,
        'C', 2,
        'E', 3,
        'I', 4,
        'N', 5,
        'P', 6,
        'S', 7,
        'e', 8,
        'v', 9,
        'x', 10,
      );
      END_STATE();
    case 1:
      if (lookahead == 'N') ADVANCE(11);
      if (lookahead == 'T') ADVANCE(12);
      END_STATE();
    case 2:
      if (lookahead == 'D') ADVANCE(13);
      END_STATE();
    case 3:
      if (lookahead == 'L') ADVANCE(14);
      if (lookahead == 'M') ADVANCE(15);
      if (lookahead == 'N') ADVANCE(16);
      END_STATE();
    case 4:
      if (lookahead == 'G') ADVANCE(17);
      if (lookahead == 'N') ADVANCE(18);
      END_STATE();
    case 5:
      if (lookahead == 'D') ADVANCE(19);
      if (lookahead == 'O') ADVANCE(20);
      END_STATE();
    case 6:
      if (lookahead == 'U') ADVANCE(21);
      END_STATE();
    case 7:
      if (lookahead == 'Y') ADVANCE(22);
      END_STATE();
    case 8:
      if (lookahead == 'n') ADVANCE(23);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 10:
      if (lookahead == 'm') ADVANCE(25);
      END_STATE();
    case 11:
      if (lookahead == 'Y') ADVANCE(26);
      END_STATE();
    case 12:
      if (lookahead == 'T') ADVANCE(27);
      END_STATE();
    case 13:
      if (lookahead == 'A') ADVANCE(28);
      END_STATE();
    case 14:
      if (lookahead == 'E') ADVANCE(29);
      END_STATE();
    case 15:
      if (lookahead == 'P') ADVANCE(30);
      END_STATE();
    case 16:
      if (lookahead == 'T') ADVANCE(31);
      END_STATE();
    case 17:
      if (lookahead == 'N') ADVANCE(32);
      END_STATE();
    case 18:
      if (lookahead == 'C') ADVANCE(33);
      END_STATE();
    case 19:
      if (lookahead == 'A') ADVANCE(34);
      END_STATE();
    case 20:
      if (lookahead == 'T') ADVANCE(35);
      END_STATE();
    case 21:
      if (lookahead == 'B') ADVANCE(36);
      END_STATE();
    case 22:
      if (lookahead == 'S') ADVANCE(37);
      END_STATE();
    case 23:
      if (lookahead == 'c') ADVANCE(38);
      END_STATE();
    case 24:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 25:
      if (lookahead == 'l') ADVANCE(40);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_ANY);
      END_STATE();
    case 27:
      if (lookahead == 'L') ADVANCE(41);
      END_STATE();
    case 28:
      if (lookahead == 'T') ADVANCE(42);
      END_STATE();
    case 29:
      if (lookahead == 'M') ADVANCE(43);
      END_STATE();
    case 30:
      if (lookahead == 'T') ADVANCE(44);
      END_STATE();
    case 31:
      if (lookahead == 'I') ADVANCE(45);
      END_STATE();
    case 32:
      if (lookahead == 'O') ADVANCE(46);
      END_STATE();
    case 33:
      if (lookahead == 'L') ADVANCE(47);
      END_STATE();
    case 34:
      if (lookahead == 'T') ADVANCE(48);
      END_STATE();
    case 35:
      if (lookahead == 'A') ADVANCE(49);
      END_STATE();
    case 36:
      if (lookahead == 'L') ADVANCE(50);
      END_STATE();
    case 37:
      if (lookahead == 'T') ADVANCE(51);
      END_STATE();
    case 38:
      if (lookahead == 'o') ADVANCE(52);
      END_STATE();
    case 39:
      if (lookahead == 's') ADVANCE(53);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_xml);
      END_STATE();
    case 41:
      if (lookahead == 'I') ADVANCE(54);
      END_STATE();
    case 42:
      if (lookahead == 'A') ADVANCE(55);
      END_STATE();
    case 43:
      if (lookahead == 'E') ADVANCE(56);
      END_STATE();
    case 44:
      if (lookahead == 'Y') ADVANCE(57);
      END_STATE();
    case 45:
      if (lookahead == 'T') ADVANCE(58);
      END_STATE();
    case 46:
      if (lookahead == 'R') ADVANCE(59);
      END_STATE();
    case 47:
      if (lookahead == 'U') ADVANCE(60);
      END_STATE();
    case 48:
      if (lookahead == 'A') ADVANCE(61);
      END_STATE();
    case 49:
      if (lookahead == 'T') ADVANCE(62);
      END_STATE();
    case 50:
      if (lookahead == 'I') ADVANCE(63);
      END_STATE();
    case 51:
      if (lookahead == 'E') ADVANCE(64);
      END_STATE();
    case 52:
      if (lookahead == 'd') ADVANCE(65);
      END_STATE();
    case 53:
      if (lookahead == 'i') ADVANCE(66);
      END_STATE();
    case 54:
      if (lookahead == 'S') ADVANCE(67);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_StringType);
      END_STATE();
    case 56:
      if (lookahead == 'N') ADVANCE(68);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_EMPTY);
      END_STATE();
    case 58:
      if (lookahead == 'Y') ADVANCE(69);
      END_STATE();
    case 59:
      if (lookahead == 'E') ADVANCE(70);
      END_STATE();
    case 60:
      if (lookahead == 'D') ADVANCE(71);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_NDATA);
      END_STATE();
    case 62:
      if (lookahead == 'I') ADVANCE(72);
      END_STATE();
    case 63:
      if (lookahead == 'C') ADVANCE(73);
      END_STATE();
    case 64:
      if (lookahead == 'M') ADVANCE(74);
      END_STATE();
    case 65:
      if (lookahead == 'i') ADVANCE(75);
      END_STATE();
    case 66:
      if (lookahead == 'o') ADVANCE(76);
      END_STATE();
    case 67:
      if (lookahead == 'T') ADVANCE(77);
      END_STATE();
    case 68:
      if (lookahead == 'T') ADVANCE(78);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_ENTITY);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_IGNORE);
      END_STATE();
    case 71:
      if (lookahead == 'E') ADVANCE(79);
      END_STATE();
    case 72:
      if (lookahead == 'O') ADVANCE(80);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_PUBLIC);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_SYSTEM);
      END_STATE();
    case 75:
      if (lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 76:
      if (lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_ATTLIST);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_ELEMENT);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_INCLUDE);
      END_STATE();
    case 80:
      if (lookahead == 'N') ADVANCE(83);
      END_STATE();
    case 81:
      if (lookahead == 'g') ADVANCE(84);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_version);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_NOTATION);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_encoding);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 39, .external_lex_state = 2},
  [2] = {.lex_state = 39, .external_lex_state = 2},
  [3] = {.lex_state = 39, .external_lex_state = 2},
  [4] = {.lex_state = 39, .external_lex_state = 2},
  [5] = {.lex_state = 39, .external_lex_state = 2},
  [6] = {.lex_state = 39, .external_lex_state = 2},
  [7] = {.lex_state = 39, .external_lex_state = 2},
  [8] = {.lex_state = 39, .external_lex_state = 2},
  [9] = {.lex_state = 39, .external_lex_state = 2},
  [10] = {.lex_state = 39, .external_lex_state = 2},
  [11] = {.lex_state = 39, .external_lex_state = 2},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 39},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 39},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 39},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 39},
  [23] = {.lex_state = 39},
  [24] = {.lex_state = 39},
  [25] = {.lex_state = 39},
  [26] = {.lex_state = 39},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 6},
  [29] = {.lex_state = 39},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 6},
  [32] = {.lex_state = 39},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 6},
  [35] = {.lex_state = 39},
  [36] = {.lex_state = 39, .external_lex_state = 2},
  [37] = {.lex_state = 39, .external_lex_state = 2},
  [38] = {.lex_state = 39, .external_lex_state = 2},
  [39] = {.lex_state = 39, .external_lex_state = 2},
  [40] = {.lex_state = 39, .external_lex_state = 2},
  [41] = {.lex_state = 39, .external_lex_state = 2},
  [42] = {.lex_state = 39, .external_lex_state = 2},
  [43] = {.lex_state = 39},
  [44] = {.lex_state = 39, .external_lex_state = 2},
  [45] = {.lex_state = 39, .external_lex_state = 2},
  [46] = {.lex_state = 39, .external_lex_state = 2},
  [47] = {.lex_state = 39},
  [48] = {.lex_state = 39, .external_lex_state = 2},
  [49] = {.lex_state = 39, .external_lex_state = 2},
  [50] = {.lex_state = 39},
  [51] = {.lex_state = 39, .external_lex_state = 2},
  [52] = {.lex_state = 39, .external_lex_state = 2},
  [53] = {.lex_state = 39, .external_lex_state = 2},
  [54] = {.lex_state = 39, .external_lex_state = 2},
  [55] = {.lex_state = 39, .external_lex_state = 2},
  [56] = {.lex_state = 39, .external_lex_state = 2},
  [57] = {.lex_state = 39, .external_lex_state = 2},
  [58] = {.lex_state = 39},
  [59] = {.lex_state = 39},
  [60] = {.lex_state = 39, .external_lex_state = 2},
  [61] = {.lex_state = 39, .external_lex_state = 2},
  [62] = {.lex_state = 39},
  [63] = {.lex_state = 39},
  [64] = {.lex_state = 39},
  [65] = {.lex_state = 39},
  [66] = {.lex_state = 39},
  [67] = {.lex_state = 39},
  [68] = {.lex_state = 39},
  [69] = {.lex_state = 39},
  [70] = {.lex_state = 39},
  [71] = {.lex_state = 39},
  [72] = {.lex_state = 39},
  [73] = {.lex_state = 39},
  [74] = {.lex_state = 39},
  [75] = {.lex_state = 39},
  [76] = {.lex_state = 39},
  [77] = {.lex_state = 39},
  [78] = {.lex_state = 39},
  [79] = {.lex_state = 39, .external_lex_state = 2},
  [80] = {.lex_state = 2},
  [81] = {.lex_state = 39},
  [82] = {.lex_state = 39},
  [83] = {.lex_state = 2},
  [84] = {.lex_state = 2},
  [85] = {.lex_state = 39, .external_lex_state = 2},
  [86] = {.lex_state = 39, .external_lex_state = 2},
  [87] = {.lex_state = 4},
  [88] = {.lex_state = 4},
  [89] = {.lex_state = 4},
  [90] = {.lex_state = 2},
  [91] = {.lex_state = 4},
  [92] = {.lex_state = 39},
  [93] = {.lex_state = 6},
  [94] = {.lex_state = 39},
  [95] = {.lex_state = 39},
  [96] = {.lex_state = 39},
  [97] = {.lex_state = 39},
  [98] = {.lex_state = 39},
  [99] = {.lex_state = 39},
  [100] = {.lex_state = 39},
  [101] = {.lex_state = 39},
  [102] = {.lex_state = 39},
  [103] = {.lex_state = 39},
  [104] = {.lex_state = 39},
  [105] = {.lex_state = 39},
  [106] = {.lex_state = 39},
  [107] = {.lex_state = 39},
  [108] = {.lex_state = 39},
  [109] = {.lex_state = 39},
  [110] = {.lex_state = 39},
  [111] = {.lex_state = 3},
  [112] = {.lex_state = 6},
  [113] = {.lex_state = 39},
  [114] = {.lex_state = 3},
  [115] = {.lex_state = 3},
  [116] = {.lex_state = 3},
  [117] = {.lex_state = 6},
  [118] = {.lex_state = 6},
  [119] = {.lex_state = 39},
  [120] = {.lex_state = 39},
  [121] = {.lex_state = 39},
  [122] = {.lex_state = 39},
  [123] = {.lex_state = 39},
  [124] = {.lex_state = 39},
  [125] = {.lex_state = 39},
  [126] = {.lex_state = 39},
  [127] = {.lex_state = 39},
  [128] = {.lex_state = 39},
  [129] = {.lex_state = 39},
  [130] = {.lex_state = 39},
  [131] = {.lex_state = 39},
  [132] = {.lex_state = 39},
  [133] = {.lex_state = 39},
  [134] = {.lex_state = 39},
  [135] = {.lex_state = 39},
  [136] = {.lex_state = 39},
  [137] = {.lex_state = 39},
  [138] = {.lex_state = 39},
  [139] = {.lex_state = 39},
  [140] = {.lex_state = 39},
  [141] = {.lex_state = 39},
  [142] = {.lex_state = 39},
  [143] = {.lex_state = 39},
  [144] = {.lex_state = 39},
  [145] = {.lex_state = 39},
  [146] = {.lex_state = 39},
  [147] = {.lex_state = 39},
  [148] = {.lex_state = 39},
  [149] = {.lex_state = 39},
  [150] = {.lex_state = 39},
  [151] = {.lex_state = 39},
  [152] = {.lex_state = 39},
  [153] = {.lex_state = 39},
  [154] = {.lex_state = 39},
  [155] = {.lex_state = 39},
  [156] = {.lex_state = 39},
  [157] = {.lex_state = 39},
  [158] = {.lex_state = 5},
  [159] = {.lex_state = 39},
  [160] = {.lex_state = 39},
  [161] = {.lex_state = 39},
  [162] = {.lex_state = 39},
  [163] = {.lex_state = 39},
  [164] = {.lex_state = 39},
  [165] = {.lex_state = 39},
  [166] = {.lex_state = 39},
  [167] = {.lex_state = 39},
  [168] = {.lex_state = 39},
  [169] = {.lex_state = 39},
  [170] = {.lex_state = 39},
  [171] = {.lex_state = 39},
  [172] = {.lex_state = 39},
  [173] = {.lex_state = 39},
  [174] = {.lex_state = 39},
  [175] = {.lex_state = 39},
  [176] = {.lex_state = 39},
  [177] = {.lex_state = 39},
  [178] = {.lex_state = 39},
  [179] = {.lex_state = 39},
  [180] = {.lex_state = 39},
  [181] = {.lex_state = 39},
  [182] = {.lex_state = 39},
  [183] = {.lex_state = 39},
  [184] = {.lex_state = 39},
  [185] = {.lex_state = 39},
  [186] = {.lex_state = 39},
  [187] = {.lex_state = 39},
  [188] = {.lex_state = 5},
  [189] = {.lex_state = 39},
  [190] = {.lex_state = 39},
  [191] = {.lex_state = 39},
  [192] = {.lex_state = 39},
  [193] = {.lex_state = 39},
  [194] = {.lex_state = 39},
  [195] = {.lex_state = 39},
  [196] = {.lex_state = 35},
  [197] = {.lex_state = 5},
  [198] = {.lex_state = 39},
  [199] = {.lex_state = 39},
  [200] = {.lex_state = 39},
  [201] = {.lex_state = 39},
  [202] = {.lex_state = 39},
  [203] = {.lex_state = 35},
  [204] = {.lex_state = 39},
  [205] = {.lex_state = 39},
  [206] = {.lex_state = 39},
  [207] = {.lex_state = 39},
  [208] = {.lex_state = 39},
  [209] = {.lex_state = 39},
  [210] = {.lex_state = 5},
  [211] = {.lex_state = 39},
  [212] = {.lex_state = 39},
  [213] = {.lex_state = 39},
  [214] = {.lex_state = 39},
  [215] = {.lex_state = 39},
  [216] = {.lex_state = 39},
  [217] = {.lex_state = 39},
  [218] = {.lex_state = 35},
  [219] = {.lex_state = 39},
  [220] = {.lex_state = 39},
  [221] = {.lex_state = 39},
  [222] = {.lex_state = 39},
  [223] = {.lex_state = 39},
  [224] = {.lex_state = 39, .external_lex_state = 3},
  [225] = {.lex_state = 39},
  [226] = {.lex_state = 39},
  [227] = {.lex_state = 39},
  [228] = {.lex_state = 39},
  [229] = {.lex_state = 39},
  [230] = {.lex_state = 39},
  [231] = {.lex_state = 39},
  [232] = {.lex_state = 39},
  [233] = {.lex_state = 39},
  [234] = {.lex_state = 39},
  [235] = {.lex_state = 39},
  [236] = {.lex_state = 39},
  [237] = {.lex_state = 5},
  [238] = {.lex_state = 39},
  [239] = {.lex_state = 39},
  [240] = {.lex_state = 39},
  [241] = {.lex_state = 39},
  [242] = {.lex_state = 39},
  [243] = {.lex_state = 39},
  [244] = {.lex_state = 39},
  [245] = {.lex_state = 10},
  [246] = {.lex_state = 39},
  [247] = {.lex_state = 39},
  [248] = {.lex_state = 39},
  [249] = {.lex_state = 39},
  [250] = {.lex_state = 39},
  [251] = {.lex_state = 39},
  [252] = {.lex_state = 5},
  [253] = {.lex_state = 0, .external_lex_state = 4},
  [254] = {.lex_state = 39},
  [255] = {.lex_state = 39},
  [256] = {.lex_state = 35},
  [257] = {.lex_state = 5},
  [258] = {.lex_state = 35},
  [259] = {.lex_state = 39},
  [260] = {.lex_state = 39},
  [261] = {.lex_state = 39},
  [262] = {.lex_state = 39},
  [263] = {.lex_state = 39},
  [264] = {.lex_state = 39},
  [265] = {.lex_state = 39},
  [266] = {.lex_state = 39},
  [267] = {.lex_state = 39},
  [268] = {.lex_state = 39},
  [269] = {.lex_state = 39},
  [270] = {.lex_state = 39},
  [271] = {.lex_state = 127},
  [272] = {.lex_state = 128},
  [273] = {.lex_state = 39},
  [274] = {.lex_state = 35},
  [275] = {.lex_state = 39},
  [276] = {.lex_state = 129},
  [277] = {.lex_state = 130},
  [278] = {.lex_state = 39},
  [279] = {.lex_state = 39},
  [280] = {.lex_state = 39},
  [281] = {.lex_state = 39},
  [282] = {.lex_state = 39},
  [283] = {.lex_state = 39},
  [284] = {.lex_state = 39},
  [285] = {.lex_state = 39},
  [286] = {.lex_state = 39},
  [287] = {.lex_state = 5},
  [288] = {.lex_state = 37},
  [289] = {.lex_state = 39},
  [290] = {.lex_state = 39},
  [291] = {.lex_state = 39},
  [292] = {.lex_state = 39},
  [293] = {.lex_state = 39},
  [294] = {.lex_state = 39},
  [295] = {.lex_state = 39},
  [296] = {.lex_state = 39},
  [297] = {.lex_state = 39},
  [298] = {.lex_state = 0, .external_lex_state = 3},
  [299] = {.lex_state = 39},
  [300] = {.lex_state = 39},
  [301] = {.lex_state = 39},
  [302] = {.lex_state = 39},
  [303] = {.lex_state = 39},
  [304] = {.lex_state = 39},
  [305] = {.lex_state = 39},
  [306] = {.lex_state = 39},
  [307] = {.lex_state = 39},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 39},
  [310] = {.lex_state = 39},
  [311] = {.lex_state = 38},
  [312] = {.lex_state = 38},
  [313] = {.lex_state = 39},
  [314] = {.lex_state = 39},
  [315] = {.lex_state = 39},
  [316] = {.lex_state = 39},
  [317] = {.lex_state = 39},
  [318] = {.lex_state = 39},
  [319] = {.lex_state = 39},
  [320] = {.lex_state = 39},
  [321] = {.lex_state = 39},
  [322] = {.lex_state = 39},
  [323] = {.lex_state = 39},
  [324] = {.lex_state = 39},
  [325] = {.lex_state = 5},
  [326] = {.lex_state = 37},
  [327] = {.lex_state = 39},
  [328] = {.lex_state = 39},
  [329] = {.lex_state = 5},
  [330] = {.lex_state = 37},
  [331] = {.lex_state = 39},
  [332] = {.lex_state = 39},
  [333] = {.lex_state = 5},
  [334] = {.lex_state = 37},
  [335] = {.lex_state = 39},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_Name] = ACTIONS(1),
    [anon_sym_LT_QMARK] = ACTIONS(1),
    [anon_sym_xml] = ACTIONS(1),
    [anon_sym_LT_BANG_LBRACK] = ACTIONS(1),
    [anon_sym_IGNORE] = ACTIONS(1),
    [anon_sym_INCLUDE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK_RBRACK_GT] = ACTIONS(1),
    [anon_sym_LT_BANG] = ACTIONS(1),
    [anon_sym_ELEMENT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_EMPTY] = ACTIONS(1),
    [anon_sym_ANY] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_POUNDPCDATA] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_ATTLIST] = ACTIONS(1),
    [sym_StringType] = ACTIONS(1),
    [sym_TokenizedType] = ACTIONS(1),
    [anon_sym_NOTATION] = ACTIONS(1),
    [anon_sym_POUNDREQUIRED] = ACTIONS(1),
    [anon_sym_POUNDIMPLIED] = ACTIONS(1),
    [anon_sym_POUNDFIXED] = ACTIONS(1),
    [anon_sym_ENTITY] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym_EntityValue_token1] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [aux_sym_EntityValue_token2] = ACTIONS(1),
    [anon_sym_NDATA] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym__S] = ACTIONS(1),
    [sym_Nmtoken] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_AMP_POUND] = ACTIONS(1),
    [aux_sym_CharRef_token1] = ACTIONS(1),
    [anon_sym_AMP_POUNDx] = ACTIONS(1),
    [aux_sym_CharRef_token2] = ACTIONS(1),
    [aux_sym_AttValue_token1] = ACTIONS(1),
    [aux_sym_AttValue_token2] = ACTIONS(1),
    [anon_sym_SYSTEM] = ACTIONS(1),
    [anon_sym_PUBLIC] = ACTIONS(1),
    [anon_sym_version] = ACTIONS(1),
    [sym_VersionNum] = ACTIONS(1),
    [anon_sym_encoding] = ACTIONS(1),
    [sym_EncName] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_PITarget] = ACTIONS(1),
    [sym__pi_content] = ACTIONS(1),
    [sym_Comment] = ACTIONS(1),
  },
  [1] = {
    [sym_extSubset] = STATE(308),
    [sym_TextDecl] = STATE(11),
    [sym__extSubsetDecl] = STATE(4),
    [sym_conditionalSect] = STATE(4),
    [sym__markupdecl] = STATE(4),
    [sym__DeclSep] = STATE(4),
    [sym_elementdecl] = STATE(40),
    [sym_AttlistDecl] = STATE(40),
    [sym__EntityDecl] = STATE(40),
    [sym_GEDecl] = STATE(54),
    [sym_PEDecl] = STATE(54),
    [sym_NotationDecl] = STATE(40),
    [sym_PEReference] = STATE(4),
    [sym_PI] = STATE(40),
    [aux_sym_extSubset_repeat1] = STATE(4),
    [anon_sym_LT_QMARK] = ACTIONS(3),
    [anon_sym_LT_BANG_LBRACK] = ACTIONS(5),
    [anon_sym_LT_BANG] = ACTIONS(7),
    [anon_sym_PERCENT] = ACTIONS(9),
    [sym__S] = ACTIONS(11),
    [sym_Comment] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(17), 1,
      anon_sym_LT_QMARK,
    ACTIONS(20), 1,
      anon_sym_LT_BANG_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LT_BANG,
    ACTIONS(26), 1,
      anon_sym_PERCENT,
    ACTIONS(29), 1,
      sym__S,
    ACTIONS(32), 1,
      sym_Comment,
    ACTIONS(15), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACK_RBRACK_GT,
    STATE(54), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(40), 5,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
    STATE(2), 6,
      sym__extSubsetDecl,
      sym_conditionalSect,
      sym__markupdecl,
      sym__DeclSep,
      sym_PEReference,
      aux_sym_extSubset_repeat1,
  [42] = 10,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_LBRACK,
    ACTIONS(7), 1,
      anon_sym_LT_BANG,
    ACTIONS(9), 1,
      anon_sym_PERCENT,
    ACTIONS(13), 1,
      sym_Comment,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    ACTIONS(37), 1,
      anon_sym_LT_QMARK,
    ACTIONS(39), 1,
      sym__S,
    STATE(54), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(40), 5,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
    STATE(2), 6,
      sym__extSubsetDecl,
      sym_conditionalSect,
      sym__markupdecl,
      sym__DeclSep,
      sym_PEReference,
      aux_sym_extSubset_repeat1,
  [83] = 10,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_LBRACK,
    ACTIONS(7), 1,
      anon_sym_LT_BANG,
    ACTIONS(9), 1,
      anon_sym_PERCENT,
    ACTIONS(13), 1,
      sym_Comment,
    ACTIONS(37), 1,
      anon_sym_LT_QMARK,
    ACTIONS(39), 1,
      sym__S,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    STATE(54), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(40), 5,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
    STATE(2), 6,
      sym__extSubsetDecl,
      sym_conditionalSect,
      sym__markupdecl,
      sym__DeclSep,
      sym_PEReference,
      aux_sym_extSubset_repeat1,
  [124] = 10,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_LBRACK,
    ACTIONS(7), 1,
      anon_sym_LT_BANG,
    ACTIONS(9), 1,
      anon_sym_PERCENT,
    ACTIONS(13), 1,
      sym_Comment,
    ACTIONS(37), 1,
      anon_sym_LT_QMARK,
    ACTIONS(43), 1,
      anon_sym_RBRACK_RBRACK_GT,
    ACTIONS(45), 1,
      sym__S,
    STATE(54), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(40), 5,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
    STATE(6), 6,
      sym__extSubsetDecl,
      sym_conditionalSect,
      sym__markupdecl,
      sym__DeclSep,
      sym_PEReference,
      aux_sym_extSubset_repeat1,
  [165] = 10,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_LBRACK,
    ACTIONS(7), 1,
      anon_sym_LT_BANG,
    ACTIONS(9), 1,
      anon_sym_PERCENT,
    ACTIONS(13), 1,
      sym_Comment,
    ACTIONS(37), 1,
      anon_sym_LT_QMARK,
    ACTIONS(39), 1,
      sym__S,
    ACTIONS(47), 1,
      anon_sym_RBRACK_RBRACK_GT,
    STATE(54), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(40), 5,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
    STATE(2), 6,
      sym__extSubsetDecl,
      sym_conditionalSect,
      sym__markupdecl,
      sym__DeclSep,
      sym_PEReference,
      aux_sym_extSubset_repeat1,
  [206] = 10,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_LBRACK,
    ACTIONS(7), 1,
      anon_sym_LT_BANG,
    ACTIONS(9), 1,
      anon_sym_PERCENT,
    ACTIONS(13), 1,
      sym_Comment,
    ACTIONS(37), 1,
      anon_sym_LT_QMARK,
    ACTIONS(47), 1,
      anon_sym_RBRACK_RBRACK_GT,
    ACTIONS(49), 1,
      sym__S,
    STATE(54), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(40), 5,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
    STATE(8), 6,
      sym__extSubsetDecl,
      sym_conditionalSect,
      sym__markupdecl,
      sym__DeclSep,
      sym_PEReference,
      aux_sym_extSubset_repeat1,
  [247] = 10,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_LBRACK,
    ACTIONS(7), 1,
      anon_sym_LT_BANG,
    ACTIONS(9), 1,
      anon_sym_PERCENT,
    ACTIONS(13), 1,
      sym_Comment,
    ACTIONS(37), 1,
      anon_sym_LT_QMARK,
    ACTIONS(39), 1,
      sym__S,
    ACTIONS(51), 1,
      anon_sym_RBRACK_RBRACK_GT,
    STATE(54), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(40), 5,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
    STATE(2), 6,
      sym__extSubsetDecl,
      sym_conditionalSect,
      sym__markupdecl,
      sym__DeclSep,
      sym_PEReference,
      aux_sym_extSubset_repeat1,
  [288] = 10,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_LBRACK,
    ACTIONS(7), 1,
      anon_sym_LT_BANG,
    ACTIONS(9), 1,
      anon_sym_PERCENT,
    ACTIONS(13), 1,
      sym_Comment,
    ACTIONS(37), 1,
      anon_sym_LT_QMARK,
    ACTIONS(51), 1,
      anon_sym_RBRACK_RBRACK_GT,
    ACTIONS(53), 1,
      sym__S,
    STATE(54), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(40), 5,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
    STATE(10), 6,
      sym__extSubsetDecl,
      sym_conditionalSect,
      sym__markupdecl,
      sym__DeclSep,
      sym_PEReference,
      aux_sym_extSubset_repeat1,
  [329] = 10,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_LBRACK,
    ACTIONS(7), 1,
      anon_sym_LT_BANG,
    ACTIONS(9), 1,
      anon_sym_PERCENT,
    ACTIONS(13), 1,
      sym_Comment,
    ACTIONS(37), 1,
      anon_sym_LT_QMARK,
    ACTIONS(39), 1,
      sym__S,
    ACTIONS(55), 1,
      anon_sym_RBRACK_RBRACK_GT,
    STATE(54), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(40), 5,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
    STATE(2), 6,
      sym__extSubsetDecl,
      sym_conditionalSect,
      sym__markupdecl,
      sym__DeclSep,
      sym_PEReference,
      aux_sym_extSubset_repeat1,
  [370] = 9,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_LBRACK,
    ACTIONS(7), 1,
      anon_sym_LT_BANG,
    ACTIONS(9), 1,
      anon_sym_PERCENT,
    ACTIONS(13), 1,
      sym_Comment,
    ACTIONS(37), 1,
      anon_sym_LT_QMARK,
    ACTIONS(57), 1,
      sym__S,
    STATE(54), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(40), 5,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
    STATE(3), 6,
      sym__extSubsetDecl,
      sym_conditionalSect,
      sym__markupdecl,
      sym__DeclSep,
      sym_PEReference,
      aux_sym_extSubset_repeat1,
  [408] = 8,
    ACTIONS(59), 1,
      anon_sym_PERCENT,
    ACTIONS(61), 1,
      anon_sym_SQUOTE,
    ACTIONS(63), 1,
      aux_sym_EntityValue_token2,
    ACTIONS(65), 1,
      anon_sym_AMP,
    ACTIONS(67), 1,
      anon_sym_AMP_POUND,
    ACTIONS(69), 1,
      anon_sym_AMP_POUNDx,
    STATE(87), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(14), 3,
      sym_PEReference,
      sym__Reference,
      aux_sym_EntityValue_repeat2,
  [436] = 5,
    STATE(63), 1,
      aux_sym_Mixed_repeat1,
    STATE(133), 1,
      aux_sym_Mixed_repeat2,
    STATE(149), 1,
      sym_PEReference,
    ACTIONS(73), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
    ACTIONS(71), 5,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PERCENT,
      sym__S,
  [458] = 8,
    ACTIONS(75), 1,
      anon_sym_PERCENT,
    ACTIONS(78), 1,
      anon_sym_SQUOTE,
    ACTIONS(80), 1,
      aux_sym_EntityValue_token2,
    ACTIONS(83), 1,
      anon_sym_AMP,
    ACTIONS(86), 1,
      anon_sym_AMP_POUND,
    ACTIONS(89), 1,
      anon_sym_AMP_POUNDx,
    STATE(87), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(14), 3,
      sym_PEReference,
      sym__Reference,
      aux_sym_EntityValue_repeat2,
  [486] = 8,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(92), 1,
      anon_sym_PERCENT,
    ACTIONS(94), 1,
      aux_sym_EntityValue_token1,
    ACTIONS(96), 1,
      anon_sym_AMP,
    ACTIONS(98), 1,
      anon_sym_AMP_POUND,
    ACTIONS(100), 1,
      anon_sym_AMP_POUNDx,
    STATE(80), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(16), 3,
      sym_PEReference,
      sym__Reference,
      aux_sym_EntityValue_repeat1,
  [514] = 8,
    ACTIONS(102), 1,
      anon_sym_PERCENT,
    ACTIONS(105), 1,
      anon_sym_DQUOTE,
    ACTIONS(107), 1,
      aux_sym_EntityValue_token1,
    ACTIONS(110), 1,
      anon_sym_AMP,
    ACTIONS(113), 1,
      anon_sym_AMP_POUND,
    ACTIONS(116), 1,
      anon_sym_AMP_POUNDx,
    STATE(80), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(16), 3,
      sym_PEReference,
      sym__Reference,
      aux_sym_EntityValue_repeat1,
  [542] = 5,
    STATE(69), 1,
      aux_sym_Mixed_repeat1,
    STATE(123), 1,
      aux_sym_Mixed_repeat2,
    STATE(149), 1,
      sym_PEReference,
    ACTIONS(73), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
    ACTIONS(71), 5,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PERCENT,
      sym__S,
  [564] = 8,
    ACTIONS(92), 1,
      anon_sym_PERCENT,
    ACTIONS(96), 1,
      anon_sym_AMP,
    ACTIONS(98), 1,
      anon_sym_AMP_POUND,
    ACTIONS(100), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(119), 1,
      anon_sym_DQUOTE,
    ACTIONS(121), 1,
      aux_sym_EntityValue_token1,
    STATE(80), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(15), 3,
      sym_PEReference,
      sym__Reference,
      aux_sym_EntityValue_repeat1,
  [592] = 8,
    ACTIONS(59), 1,
      anon_sym_PERCENT,
    ACTIONS(65), 1,
      anon_sym_AMP,
    ACTIONS(67), 1,
      anon_sym_AMP_POUND,
    ACTIONS(69), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(119), 1,
      anon_sym_SQUOTE,
    ACTIONS(123), 1,
      aux_sym_EntityValue_token2,
    STATE(87), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(12), 3,
      sym_PEReference,
      sym__Reference,
      aux_sym_EntityValue_repeat2,
  [620] = 1,
    ACTIONS(125), 11,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_COMMA,
      anon_sym_PERCENT,
      sym__S,
      sym_Name,
  [634] = 7,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
    ACTIONS(131), 1,
      anon_sym_NOTATION,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    STATE(191), 1,
      sym__AttType,
    ACTIONS(129), 2,
      sym_StringType,
      sym_TokenizedType,
    STATE(202), 2,
      sym_NotationType,
      sym_Enumeration,
    STATE(207), 2,
      sym__EnumeratedType,
      sym_PEReference,
  [659] = 6,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(137), 1,
      anon_sym_LPAREN,
    STATE(98), 1,
      sym__choice,
    STATE(200), 1,
      sym_contentspec,
    ACTIONS(135), 2,
      anon_sym_EMPTY,
      anon_sym_ANY,
    STATE(225), 3,
      sym_Mixed,
      sym_children,
      sym_PEReference,
  [681] = 1,
    ACTIONS(139), 9,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_COMMA,
      anon_sym_PERCENT,
      sym__S,
  [693] = 1,
    ACTIONS(141), 9,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_COMMA,
      anon_sym_PERCENT,
      sym__S,
  [705] = 7,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(145), 1,
      anon_sym_POUNDFIXED,
    ACTIONS(147), 1,
      anon_sym_DQUOTE,
    ACTIONS(149), 1,
      anon_sym_SQUOTE,
    STATE(241), 1,
      sym_DefaultDecl,
    ACTIONS(143), 2,
      anon_sym_POUNDREQUIRED,
      anon_sym_POUNDIMPLIED,
    STATE(230), 2,
      sym_PEReference,
      sym_AttValue,
  [729] = 1,
    ACTIONS(151), 9,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_COMMA,
      anon_sym_PERCENT,
      sym__S,
  [741] = 8,
    ACTIONS(153), 1,
      anon_sym_DQUOTE,
    ACTIONS(155), 1,
      anon_sym_AMP,
    ACTIONS(157), 1,
      anon_sym_AMP_POUND,
    ACTIONS(159), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(161), 1,
      aux_sym_AttValue_token1,
    STATE(30), 1,
      aux_sym_AttValue_repeat1,
    STATE(111), 1,
      sym__Reference,
    STATE(114), 2,
      sym_EntityRef,
      sym_CharRef,
  [767] = 8,
    ACTIONS(153), 1,
      anon_sym_SQUOTE,
    ACTIONS(163), 1,
      anon_sym_AMP,
    ACTIONS(165), 1,
      anon_sym_AMP_POUND,
    ACTIONS(167), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(169), 1,
      aux_sym_AttValue_token2,
    STATE(31), 1,
      aux_sym_AttValue_repeat2,
    STATE(112), 1,
      sym__Reference,
    STATE(117), 2,
      sym_EntityRef,
      sym_CharRef,
  [793] = 1,
    ACTIONS(171), 9,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_COMMA,
      anon_sym_PERCENT,
      sym__S,
  [805] = 8,
    ACTIONS(155), 1,
      anon_sym_AMP,
    ACTIONS(157), 1,
      anon_sym_AMP_POUND,
    ACTIONS(159), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(161), 1,
      aux_sym_AttValue_token1,
    ACTIONS(173), 1,
      anon_sym_DQUOTE,
    STATE(33), 1,
      aux_sym_AttValue_repeat1,
    STATE(111), 1,
      sym__Reference,
    STATE(114), 2,
      sym_EntityRef,
      sym_CharRef,
  [831] = 8,
    ACTIONS(163), 1,
      anon_sym_AMP,
    ACTIONS(165), 1,
      anon_sym_AMP_POUND,
    ACTIONS(167), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(169), 1,
      aux_sym_AttValue_token2,
    ACTIONS(173), 1,
      anon_sym_SQUOTE,
    STATE(34), 1,
      aux_sym_AttValue_repeat2,
    STATE(112), 1,
      sym__Reference,
    STATE(117), 2,
      sym_EntityRef,
      sym_CharRef,
  [857] = 1,
    ACTIONS(175), 9,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_COMMA,
      anon_sym_PERCENT,
      sym__S,
  [869] = 8,
    ACTIONS(177), 1,
      anon_sym_DQUOTE,
    ACTIONS(179), 1,
      anon_sym_AMP,
    ACTIONS(182), 1,
      anon_sym_AMP_POUND,
    ACTIONS(185), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(188), 1,
      aux_sym_AttValue_token1,
    STATE(33), 1,
      aux_sym_AttValue_repeat1,
    STATE(111), 1,
      sym__Reference,
    STATE(114), 2,
      sym_EntityRef,
      sym_CharRef,
  [895] = 8,
    ACTIONS(191), 1,
      anon_sym_SQUOTE,
    ACTIONS(193), 1,
      anon_sym_AMP,
    ACTIONS(196), 1,
      anon_sym_AMP_POUND,
    ACTIONS(199), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(202), 1,
      aux_sym_AttValue_token2,
    STATE(34), 1,
      aux_sym_AttValue_repeat2,
    STATE(112), 1,
      sym__Reference,
    STATE(117), 2,
      sym_EntityRef,
      sym_CharRef,
  [921] = 6,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(207), 1,
      anon_sym_RPAREN,
    ACTIONS(209), 1,
      sym__S,
    STATE(47), 1,
      aux_sym__choice_repeat1,
    ACTIONS(205), 2,
      anon_sym_PIPE,
      anon_sym_COMMA,
    STATE(103), 2,
      sym_PEReference,
      aux_sym__choice_repeat2,
  [942] = 2,
    ACTIONS(213), 1,
      anon_sym_LT_BANG,
    ACTIONS(211), 7,
      sym_Comment,
      ts_builtin_sym_end,
      anon_sym_LT_QMARK,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_PERCENT,
      sym__S,
  [955] = 2,
    ACTIONS(217), 1,
      anon_sym_LT_BANG,
    ACTIONS(215), 7,
      sym_Comment,
      ts_builtin_sym_end,
      anon_sym_LT_QMARK,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_PERCENT,
      sym__S,
  [968] = 2,
    ACTIONS(219), 1,
      anon_sym_LT_BANG,
    ACTIONS(125), 7,
      sym_Comment,
      ts_builtin_sym_end,
      anon_sym_LT_QMARK,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_PERCENT,
      sym__S,
  [981] = 2,
    ACTIONS(223), 1,
      anon_sym_LT_BANG,
    ACTIONS(221), 7,
      sym_Comment,
      ts_builtin_sym_end,
      anon_sym_LT_QMARK,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_PERCENT,
      sym__S,
  [994] = 2,
    ACTIONS(227), 1,
      anon_sym_LT_BANG,
    ACTIONS(225), 7,
      sym_Comment,
      ts_builtin_sym_end,
      anon_sym_LT_QMARK,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_PERCENT,
      sym__S,
  [1007] = 2,
    ACTIONS(231), 1,
      anon_sym_LT_BANG,
    ACTIONS(229), 7,
      sym_Comment,
      ts_builtin_sym_end,
      anon_sym_LT_QMARK,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_PERCENT,
      sym__S,
  [1020] = 2,
    ACTIONS(235), 1,
      anon_sym_LT_BANG,
    ACTIONS(233), 7,
      sym_Comment,
      ts_builtin_sym_end,
      anon_sym_LT_QMARK,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_PERCENT,
      sym__S,
  [1033] = 6,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(207), 1,
      anon_sym_RPAREN,
    ACTIONS(209), 1,
      sym__S,
    STATE(76), 1,
      aux_sym__choice_repeat1,
    ACTIONS(205), 2,
      anon_sym_PIPE,
      anon_sym_COMMA,
    STATE(103), 2,
      sym_PEReference,
      aux_sym__choice_repeat2,
  [1054] = 2,
    ACTIONS(239), 1,
      anon_sym_LT_BANG,
    ACTIONS(237), 7,
      sym_Comment,
      ts_builtin_sym_end,
      anon_sym_LT_QMARK,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_PERCENT,
      sym__S,
  [1067] = 2,
    ACTIONS(243), 1,
      anon_sym_LT_BANG,
    ACTIONS(241), 7,
      sym_Comment,
      ts_builtin_sym_end,
      anon_sym_LT_QMARK,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_PERCENT,
      sym__S,
  [1080] = 2,
    ACTIONS(247), 1,
      anon_sym_LT_BANG,
    ACTIONS(245), 7,
      sym_Comment,
      ts_builtin_sym_end,
      anon_sym_LT_QMARK,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_PERCENT,
      sym__S,
  [1093] = 6,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(249), 1,
      anon_sym_RPAREN,
    ACTIONS(251), 1,
      sym__S,
    STATE(76), 1,
      aux_sym__choice_repeat1,
    ACTIONS(205), 2,
      anon_sym_PIPE,
      anon_sym_COMMA,
    STATE(108), 2,
      sym_PEReference,
      aux_sym__choice_repeat2,
  [1114] = 2,
    ACTIONS(255), 1,
      anon_sym_LT_BANG,
    ACTIONS(253), 7,
      sym_Comment,
      ts_builtin_sym_end,
      anon_sym_LT_QMARK,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_PERCENT,
      sym__S,
  [1127] = 2,
    ACTIONS(259), 1,
      anon_sym_LT_BANG,
    ACTIONS(257), 7,
      sym_Comment,
      ts_builtin_sym_end,
      anon_sym_LT_QMARK,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_PERCENT,
      sym__S,
  [1140] = 8,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(261), 1,
      sym_Name,
    ACTIONS(263), 1,
      anon_sym_LPAREN,
    ACTIONS(265), 1,
      anon_sym_POUNDPCDATA,
    ACTIONS(267), 1,
      sym__S,
    STATE(13), 1,
      sym_PEReference,
    STATE(58), 1,
      sym__choice,
    STATE(59), 1,
      sym__cp,
  [1165] = 2,
    ACTIONS(271), 1,
      anon_sym_LT_BANG,
    ACTIONS(269), 7,
      sym_Comment,
      ts_builtin_sym_end,
      anon_sym_LT_QMARK,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_PERCENT,
      sym__S,
  [1178] = 2,
    ACTIONS(275), 1,
      anon_sym_LT_BANG,
    ACTIONS(273), 7,
      sym_Comment,
      ts_builtin_sym_end,
      anon_sym_LT_QMARK,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_PERCENT,
      sym__S,
  [1191] = 2,
    ACTIONS(279), 1,
      anon_sym_LT_BANG,
    ACTIONS(277), 7,
      sym_Comment,
      ts_builtin_sym_end,
      anon_sym_LT_QMARK,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_PERCENT,
      sym__S,
  [1204] = 2,
    ACTIONS(283), 1,
      anon_sym_LT_BANG,
    ACTIONS(281), 7,
      sym_Comment,
      ts_builtin_sym_end,
      anon_sym_LT_QMARK,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_PERCENT,
      sym__S,
  [1217] = 2,
    ACTIONS(287), 1,
      anon_sym_LT_BANG,
    ACTIONS(285), 7,
      sym_Comment,
      ts_builtin_sym_end,
      anon_sym_LT_QMARK,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_PERCENT,
      sym__S,
  [1230] = 2,
    ACTIONS(291), 1,
      anon_sym_LT_BANG,
    ACTIONS(289), 7,
      sym_Comment,
      ts_builtin_sym_end,
      anon_sym_LT_QMARK,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_PERCENT,
      sym__S,
  [1243] = 2,
    ACTIONS(295), 1,
      anon_sym_LT_BANG,
    ACTIONS(293), 7,
      sym_Comment,
      ts_builtin_sym_end,
      anon_sym_LT_QMARK,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_PERCENT,
      sym__S,
  [1256] = 2,
    ACTIONS(73), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
    ACTIONS(71), 5,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PERCENT,
      sym__S,
  [1269] = 6,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(297), 1,
      anon_sym_RPAREN,
    ACTIONS(299), 1,
      sym__S,
    STATE(43), 1,
      aux_sym__choice_repeat1,
    ACTIONS(205), 2,
      anon_sym_PIPE,
      anon_sym_COMMA,
    STATE(97), 2,
      sym_PEReference,
      aux_sym__choice_repeat2,
  [1290] = 2,
    ACTIONS(303), 1,
      anon_sym_LT_BANG,
    ACTIONS(301), 7,
      sym_Comment,
      ts_builtin_sym_end,
      anon_sym_LT_QMARK,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_PERCENT,
      sym__S,
  [1303] = 2,
    ACTIONS(307), 1,
      anon_sym_LT_BANG,
    ACTIONS(305), 7,
      sym_Comment,
      ts_builtin_sym_end,
      anon_sym_LT_QMARK,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_RBRACK_RBRACK_GT,
      anon_sym_PERCENT,
      sym__S,
  [1316] = 6,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(261), 1,
      sym_Name,
    ACTIONS(263), 1,
      anon_sym_LPAREN,
    ACTIONS(309), 1,
      sym__S,
    STATE(92), 1,
      sym__cp,
    STATE(58), 2,
      sym__choice,
      sym_PEReference,
  [1336] = 7,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(311), 1,
      anon_sym_PIPE,
    ACTIONS(313), 1,
      anon_sym_RPAREN,
    ACTIONS(315), 1,
      sym__S,
    STATE(100), 1,
      aux_sym_Mixed_repeat1,
    STATE(124), 1,
      aux_sym_Mixed_repeat2,
    STATE(149), 1,
      sym_PEReference,
  [1358] = 6,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(261), 1,
      sym_Name,
    ACTIONS(263), 1,
      anon_sym_LPAREN,
    ACTIONS(317), 1,
      sym__S,
    STATE(59), 1,
      sym__cp,
    STATE(58), 2,
      sym__choice,
      sym_PEReference,
  [1378] = 7,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(311), 1,
      anon_sym_PIPE,
    ACTIONS(319), 1,
      anon_sym_RPAREN,
    ACTIONS(321), 1,
      sym__S,
    STATE(63), 1,
      aux_sym_Mixed_repeat1,
    STATE(133), 1,
      aux_sym_Mixed_repeat2,
    STATE(149), 1,
      sym_PEReference,
  [1400] = 7,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(261), 1,
      sym_Name,
    ACTIONS(263), 1,
      anon_sym_LPAREN,
    ACTIONS(323), 1,
      anon_sym_POUNDPCDATA,
    STATE(17), 1,
      sym_PEReference,
    STATE(35), 1,
      sym__cp,
    STATE(58), 1,
      sym__choice,
  [1422] = 6,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(261), 1,
      sym_Name,
    ACTIONS(263), 1,
      anon_sym_LPAREN,
    ACTIONS(325), 1,
      sym__S,
    STATE(109), 1,
      sym__cp,
    STATE(58), 2,
      sym__choice,
      sym_PEReference,
  [1442] = 7,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(311), 1,
      anon_sym_PIPE,
    ACTIONS(327), 1,
      anon_sym_RPAREN,
    ACTIONS(329), 1,
      sym__S,
    STATE(69), 1,
      aux_sym_Mixed_repeat1,
    STATE(123), 1,
      aux_sym_Mixed_repeat2,
    STATE(149), 1,
      sym_PEReference,
  [1464] = 7,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(311), 1,
      anon_sym_PIPE,
    ACTIONS(331), 1,
      anon_sym_RPAREN,
    ACTIONS(333), 1,
      sym__S,
    STATE(100), 1,
      aux_sym_Mixed_repeat1,
    STATE(131), 1,
      aux_sym_Mixed_repeat2,
    STATE(149), 1,
      sym_PEReference,
  [1486] = 6,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(335), 1,
      sym_Name,
    ACTIONS(337), 1,
      anon_sym_PIPE,
    ACTIONS(339), 1,
      sym__S,
    STATE(113), 1,
      aux_sym_NotationType_repeat1,
    STATE(229), 1,
      sym_PEReference,
  [1505] = 5,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(261), 1,
      sym_Name,
    ACTIONS(263), 1,
      anon_sym_LPAREN,
    STATE(35), 1,
      sym__cp,
    STATE(58), 2,
      sym__choice,
      sym_PEReference,
  [1522] = 5,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(261), 1,
      sym_Name,
    ACTIONS(263), 1,
      anon_sym_LPAREN,
    STATE(110), 1,
      sym__cp,
    STATE(58), 2,
      sym__choice,
      sym_PEReference,
  [1539] = 5,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(261), 1,
      sym_Name,
    ACTIONS(263), 1,
      anon_sym_LPAREN,
    STATE(109), 1,
      sym__cp,
    STATE(58), 2,
      sym__choice,
      sym_PEReference,
  [1556] = 5,
    ACTIONS(341), 1,
      anon_sym_DQUOTE,
    ACTIONS(343), 1,
      anon_sym_SQUOTE,
    ACTIONS(345), 1,
      anon_sym_SYSTEM,
    ACTIONS(347), 1,
      anon_sym_PUBLIC,
    STATE(240), 2,
      sym_EntityValue,
      sym_ExternalID,
  [1573] = 5,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(345), 1,
      anon_sym_SYSTEM,
    ACTIONS(349), 1,
      anon_sym_PUBLIC,
    STATE(289), 1,
      sym_PEReference,
    STATE(199), 2,
      sym_ExternalID,
      sym_PublicID,
  [1590] = 4,
    ACTIONS(356), 1,
      sym__S,
    STATE(76), 1,
      aux_sym__choice_repeat1,
    ACTIONS(351), 2,
      anon_sym_PIPE,
      anon_sym_COMMA,
    ACTIONS(354), 2,
      anon_sym_RPAREN,
      anon_sym_PERCENT,
  [1605] = 6,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(337), 1,
      anon_sym_PIPE,
    ACTIONS(339), 1,
      sym__S,
    ACTIONS(359), 1,
      sym_Name,
    STATE(82), 1,
      aux_sym_NotationType_repeat1,
    STATE(213), 1,
      sym_PEReference,
  [1624] = 6,
    ACTIONS(341), 1,
      anon_sym_DQUOTE,
    ACTIONS(343), 1,
      anon_sym_SQUOTE,
    ACTIONS(345), 1,
      anon_sym_SYSTEM,
    ACTIONS(347), 1,
      anon_sym_PUBLIC,
    STATE(160), 1,
      sym_ExternalID,
    STATE(187), 1,
      sym_EntityValue,
  [1643] = 2,
    ACTIONS(363), 1,
      anon_sym_LT_BANG,
    ACTIONS(361), 5,
      sym_Comment,
      anon_sym_LT_QMARK,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_PERCENT,
      sym__S,
  [1654] = 2,
    ACTIONS(367), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(365), 4,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      aux_sym_EntityValue_token1,
      anon_sym_AMP_POUNDx,
  [1665] = 6,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(337), 1,
      anon_sym_PIPE,
    ACTIONS(339), 1,
      sym__S,
    ACTIONS(369), 1,
      sym_Name,
    STATE(70), 1,
      aux_sym_NotationType_repeat1,
    STATE(222), 1,
      sym_PEReference,
  [1684] = 6,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(337), 1,
      anon_sym_PIPE,
    ACTIONS(339), 1,
      sym__S,
    ACTIONS(369), 1,
      sym_Name,
    STATE(113), 1,
      aux_sym_NotationType_repeat1,
    STATE(222), 1,
      sym_PEReference,
  [1703] = 2,
    ACTIONS(373), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(371), 4,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      aux_sym_EntityValue_token1,
      anon_sym_AMP_POUNDx,
  [1714] = 2,
    ACTIONS(377), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(375), 4,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      aux_sym_EntityValue_token1,
      anon_sym_AMP_POUNDx,
  [1725] = 2,
    ACTIONS(381), 1,
      anon_sym_LT_BANG,
    ACTIONS(379), 5,
      sym_Comment,
      anon_sym_LT_QMARK,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_PERCENT,
      sym__S,
  [1736] = 2,
    ACTIONS(385), 1,
      anon_sym_LT_BANG,
    ACTIONS(383), 5,
      sym_Comment,
      anon_sym_LT_QMARK,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_PERCENT,
      sym__S,
  [1747] = 2,
    ACTIONS(367), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(365), 4,
      anon_sym_PERCENT,
      anon_sym_SQUOTE,
      aux_sym_EntityValue_token2,
      anon_sym_AMP_POUNDx,
  [1758] = 2,
    ACTIONS(373), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(371), 4,
      anon_sym_PERCENT,
      anon_sym_SQUOTE,
      aux_sym_EntityValue_token2,
      anon_sym_AMP_POUNDx,
  [1769] = 2,
    ACTIONS(377), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(375), 4,
      anon_sym_PERCENT,
      anon_sym_SQUOTE,
      aux_sym_EntityValue_token2,
      anon_sym_AMP_POUNDx,
  [1780] = 2,
    ACTIONS(219), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(125), 4,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      aux_sym_EntityValue_token1,
      anon_sym_AMP_POUNDx,
  [1791] = 2,
    ACTIONS(219), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(125), 4,
      anon_sym_PERCENT,
      anon_sym_SQUOTE,
      aux_sym_EntityValue_token2,
      anon_sym_AMP_POUNDx,
  [1802] = 1,
    ACTIONS(354), 5,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PERCENT,
      sym__S,
  [1810] = 2,
    ACTIONS(377), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(375), 3,
      anon_sym_SQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token2,
  [1820] = 5,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(327), 1,
      anon_sym_RPAREN,
    ACTIONS(387), 1,
      anon_sym_PIPE,
    STATE(123), 1,
      aux_sym_Mixed_repeat2,
    STATE(149), 1,
      sym_PEReference,
  [1836] = 1,
    ACTIONS(389), 5,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PERCENT,
      sym__S,
  [1844] = 4,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(207), 1,
      anon_sym_RPAREN,
    STATE(171), 1,
      sym_PEReference,
    ACTIONS(391), 2,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [1858] = 4,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(207), 1,
      anon_sym_RPAREN,
    ACTIONS(393), 1,
      sym__S,
    STATE(105), 2,
      sym_PEReference,
      aux_sym__choice_repeat2,
  [1872] = 2,
    ACTIONS(395), 2,
      anon_sym_GT,
      sym__S,
    ACTIONS(397), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
  [1882] = 5,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(331), 1,
      anon_sym_RPAREN,
    ACTIONS(387), 1,
      anon_sym_PIPE,
    STATE(131), 1,
      aux_sym_Mixed_repeat2,
    STATE(149), 1,
      sym_PEReference,
  [1898] = 4,
    ACTIONS(399), 1,
      anon_sym_PIPE,
    ACTIONS(404), 1,
      sym__S,
    STATE(100), 1,
      aux_sym_Mixed_repeat1,
    ACTIONS(402), 2,
      anon_sym_RPAREN,
      anon_sym_PERCENT,
  [1912] = 5,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(387), 1,
      anon_sym_PIPE,
    ACTIONS(407), 1,
      anon_sym_RPAREN,
    STATE(132), 1,
      aux_sym_Mixed_repeat2,
    STATE(149), 1,
      sym_PEReference,
  [1928] = 4,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(249), 1,
      anon_sym_RPAREN,
    STATE(171), 1,
      sym_PEReference,
    ACTIONS(391), 2,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [1942] = 4,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(249), 1,
      anon_sym_RPAREN,
    ACTIONS(409), 1,
      sym__S,
    STATE(105), 2,
      sym_PEReference,
      aux_sym__choice_repeat2,
  [1956] = 4,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(413), 1,
      sym__S,
    STATE(198), 1,
      sym_PEReference,
    ACTIONS(411), 2,
      anon_sym_IGNORE,
      anon_sym_INCLUDE,
  [1970] = 4,
    ACTIONS(415), 1,
      anon_sym_RPAREN,
    ACTIONS(417), 1,
      anon_sym_PERCENT,
    ACTIONS(420), 1,
      sym__S,
    STATE(105), 2,
      sym_PEReference,
      aux_sym__choice_repeat2,
  [1984] = 5,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(387), 1,
      anon_sym_PIPE,
    ACTIONS(423), 1,
      anon_sym_RPAREN,
    STATE(138), 1,
      aux_sym_Mixed_repeat2,
    STATE(149), 1,
      sym_PEReference,
  [2000] = 4,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(425), 1,
      anon_sym_RPAREN,
    STATE(171), 1,
      sym_PEReference,
    ACTIONS(391), 2,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [2014] = 4,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(425), 1,
      anon_sym_RPAREN,
    ACTIONS(427), 1,
      sym__S,
    STATE(105), 2,
      sym_PEReference,
      aux_sym__choice_repeat2,
  [2028] = 1,
    ACTIONS(429), 5,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PERCENT,
      sym__S,
  [2036] = 1,
    ACTIONS(431), 5,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PERCENT,
      sym__S,
  [2044] = 2,
    ACTIONS(435), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(433), 3,
      anon_sym_DQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token1,
  [2054] = 2,
    ACTIONS(439), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(437), 3,
      anon_sym_SQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token2,
  [2064] = 4,
    ACTIONS(443), 1,
      anon_sym_PIPE,
    ACTIONS(446), 1,
      sym__S,
    STATE(113), 1,
      aux_sym_NotationType_repeat1,
    ACTIONS(441), 2,
      anon_sym_PERCENT,
      sym_Name,
  [2078] = 2,
    ACTIONS(367), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(365), 3,
      anon_sym_DQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token1,
  [2088] = 2,
    ACTIONS(373), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(371), 3,
      anon_sym_DQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token1,
  [2098] = 2,
    ACTIONS(377), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(375), 3,
      anon_sym_DQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token1,
  [2108] = 2,
    ACTIONS(367), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(365), 3,
      anon_sym_SQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token2,
  [2118] = 2,
    ACTIONS(373), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(371), 3,
      anon_sym_SQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token2,
  [2128] = 4,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(449), 1,
      sym_Name,
    ACTIONS(451), 1,
      sym__S,
    STATE(121), 1,
      sym_PEReference,
  [2141] = 3,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    STATE(233), 1,
      sym_PEReference,
    ACTIONS(453), 2,
      anon_sym_IGNORE,
      anon_sym_INCLUDE,
  [2152] = 1,
    ACTIONS(402), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_PERCENT,
      sym__S,
  [2159] = 4,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(455), 1,
      sym_Name,
    ACTIONS(457), 1,
      sym__S,
    STATE(130), 1,
      sym_PEReference,
  [2172] = 4,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(407), 1,
      anon_sym_RPAREN,
    STATE(125), 1,
      aux_sym_Mixed_repeat2,
    STATE(149), 1,
      sym_PEReference,
  [2185] = 4,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(331), 1,
      anon_sym_RPAREN,
    STATE(125), 1,
      aux_sym_Mixed_repeat2,
    STATE(149), 1,
      sym_PEReference,
  [2198] = 4,
    ACTIONS(459), 1,
      anon_sym_RPAREN,
    ACTIONS(461), 1,
      anon_sym_PERCENT,
    STATE(125), 1,
      aux_sym_Mixed_repeat2,
    STATE(149), 1,
      sym_PEReference,
  [2211] = 3,
    ACTIONS(464), 1,
      anon_sym_GT,
    ACTIONS(466), 1,
      sym__S,
    STATE(126), 2,
      sym_AttDef,
      aux_sym_AttlistDecl_repeat1,
  [2222] = 4,
    ACTIONS(469), 1,
      anon_sym_PIPE,
    ACTIONS(471), 1,
      anon_sym_RPAREN,
    ACTIONS(473), 1,
      sym__S,
    STATE(135), 1,
      aux_sym_Enumeration_repeat1,
  [2235] = 3,
    ACTIONS(475), 1,
      anon_sym_GT,
    ACTIONS(477), 1,
      sym__S,
    STATE(143), 2,
      sym_AttDef,
      aux_sym_AttlistDecl_repeat1,
  [2246] = 4,
    ACTIONS(479), 1,
      anon_sym_ELEMENT,
    ACTIONS(481), 1,
      anon_sym_ATTLIST,
    ACTIONS(483), 1,
      anon_sym_NOTATION,
    ACTIONS(485), 1,
      anon_sym_ENTITY,
  [2259] = 1,
    ACTIONS(487), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_PERCENT,
      sym__S,
  [2266] = 4,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(423), 1,
      anon_sym_RPAREN,
    STATE(125), 1,
      aux_sym_Mixed_repeat2,
    STATE(149), 1,
      sym_PEReference,
  [2279] = 4,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(489), 1,
      anon_sym_RPAREN,
    STATE(125), 1,
      aux_sym_Mixed_repeat2,
    STATE(149), 1,
      sym_PEReference,
  [2292] = 4,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(327), 1,
      anon_sym_RPAREN,
    STATE(125), 1,
      aux_sym_Mixed_repeat2,
    STATE(149), 1,
      sym_PEReference,
  [2305] = 4,
    ACTIONS(469), 1,
      anon_sym_PIPE,
    ACTIONS(491), 1,
      anon_sym_RPAREN,
    ACTIONS(493), 1,
      sym__S,
    STATE(139), 1,
      aux_sym_Enumeration_repeat1,
  [2318] = 4,
    ACTIONS(469), 1,
      anon_sym_PIPE,
    ACTIONS(491), 1,
      anon_sym_RPAREN,
    ACTIONS(493), 1,
      sym__S,
    STATE(140), 1,
      aux_sym_Enumeration_repeat1,
  [2331] = 4,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(495), 1,
      sym_Name,
    ACTIONS(497), 1,
      sym__S,
    STATE(77), 1,
      sym_PEReference,
  [2344] = 1,
    ACTIONS(499), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_PERCENT,
      sym__S,
  [2351] = 4,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(501), 1,
      anon_sym_RPAREN,
    STATE(125), 1,
      aux_sym_Mixed_repeat2,
    STATE(149), 1,
      sym_PEReference,
  [2364] = 4,
    ACTIONS(469), 1,
      anon_sym_PIPE,
    ACTIONS(503), 1,
      anon_sym_RPAREN,
    ACTIONS(505), 1,
      sym__S,
    STATE(140), 1,
      aux_sym_Enumeration_repeat1,
  [2377] = 4,
    ACTIONS(507), 1,
      anon_sym_PIPE,
    ACTIONS(510), 1,
      anon_sym_RPAREN,
    ACTIONS(512), 1,
      sym__S,
    STATE(140), 1,
      aux_sym_Enumeration_repeat1,
  [2390] = 2,
    ACTIONS(517), 1,
      sym__S,
    ACTIONS(515), 3,
      anon_sym_PIPE,
      anon_sym_PERCENT,
      sym_Name,
  [2399] = 4,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(520), 1,
      sym_Name,
    ACTIONS(522), 1,
      anon_sym_GT,
    STATE(244), 1,
      sym_PEReference,
  [2412] = 3,
    ACTIONS(522), 1,
      anon_sym_GT,
    ACTIONS(524), 1,
      sym__S,
    STATE(126), 2,
      sym_AttDef,
      aux_sym_AttlistDecl_repeat1,
  [2423] = 1,
    ACTIONS(441), 4,
      anon_sym_PIPE,
      anon_sym_PERCENT,
      sym__S,
      sym_Name,
  [2430] = 2,
    ACTIONS(526), 1,
      sym__S,
    ACTIONS(441), 3,
      anon_sym_PIPE,
      anon_sym_PERCENT,
      sym_Name,
  [2439] = 1,
    ACTIONS(529), 4,
      anon_sym_PIPE,
      anon_sym_PERCENT,
      sym__S,
      sym_Name,
  [2446] = 4,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(520), 1,
      sym_Name,
    ACTIONS(531), 1,
      anon_sym_GT,
    STATE(244), 1,
      sym_PEReference,
  [2459] = 3,
    ACTIONS(533), 1,
      anon_sym_DQUOTE,
    ACTIONS(535), 1,
      anon_sym_SQUOTE,
    STATE(227), 1,
      sym_PubidLiteral,
  [2469] = 2,
    ACTIONS(539), 1,
      sym__S,
    ACTIONS(537), 2,
      anon_sym_RPAREN,
      anon_sym_PERCENT,
  [2477] = 3,
    ACTIONS(541), 1,
      anon_sym_DQUOTE,
    ACTIONS(543), 1,
      anon_sym_SQUOTE,
    STATE(182), 1,
      sym_SystemLiteral,
  [2487] = 2,
    ACTIONS(547), 1,
      anon_sym_STAR,
    ACTIONS(545), 2,
      anon_sym_GT,
      sym__S,
  [2495] = 3,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(549), 1,
      sym_Name,
    STATE(297), 1,
      sym_PEReference,
  [2505] = 2,
    ACTIONS(553), 1,
      sym__S,
    ACTIONS(551), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [2513] = 2,
    ACTIONS(557), 1,
      anon_sym_STAR,
    ACTIONS(555), 2,
      anon_sym_GT,
      sym__S,
  [2521] = 3,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(559), 1,
      sym_Name,
    STATE(184), 1,
      sym_PEReference,
  [2531] = 3,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(520), 1,
      sym_Name,
    STATE(244), 1,
      sym_PEReference,
  [2541] = 3,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(561), 1,
      anon_sym_RPAREN,
    STATE(171), 1,
      sym_PEReference,
  [2551] = 3,
    ACTIONS(563), 1,
      anon_sym_QMARK_GT,
    ACTIONS(565), 1,
      sym__S,
    STATE(197), 1,
      sym__EncodingDecl,
  [2561] = 1,
    ACTIONS(510), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [2567] = 3,
    ACTIONS(567), 1,
      anon_sym_GT,
    ACTIONS(569), 1,
      sym__S,
    STATE(236), 1,
      sym_NDataDecl,
  [2577] = 3,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(571), 1,
      sym_Name,
    STATE(81), 1,
      sym_PEReference,
  [2587] = 3,
    ACTIONS(541), 1,
      anon_sym_DQUOTE,
    ACTIONS(543), 1,
      anon_sym_SQUOTE,
    STATE(204), 1,
      sym_SystemLiteral,
  [2597] = 3,
    ACTIONS(147), 1,
      anon_sym_DQUOTE,
    ACTIONS(149), 1,
      anon_sym_SQUOTE,
    STATE(215), 1,
      sym_AttValue,
  [2607] = 3,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(455), 1,
      sym_Name,
    STATE(130), 1,
      sym_PEReference,
  [2617] = 3,
    ACTIONS(533), 1,
      anon_sym_DQUOTE,
    ACTIONS(535), 1,
      anon_sym_SQUOTE,
    STATE(238), 1,
      sym_PubidLiteral,
  [2627] = 3,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(573), 1,
      sym_Name,
    STATE(128), 1,
      sym_PEReference,
  [2637] = 1,
    ACTIONS(575), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [2643] = 3,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(577), 1,
      sym_Name,
    STATE(303), 1,
      sym_PEReference,
  [2653] = 3,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(579), 1,
      sym_Name,
    STATE(137), 1,
      sym_PEReference,
  [2663] = 2,
    ACTIONS(583), 1,
      anon_sym_STAR,
    ACTIONS(581), 2,
      anon_sym_GT,
      sym__S,
  [2671] = 1,
    ACTIONS(415), 3,
      anon_sym_RPAREN,
      anon_sym_PERCENT,
      sym__S,
  [2677] = 1,
    ACTIONS(585), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [2683] = 3,
    ACTIONS(587), 1,
      sym_Name,
    ACTIONS(589), 1,
      anon_sym_PERCENT,
    STATE(313), 1,
      sym_PEReference,
  [2693] = 3,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(249), 1,
      anon_sym_RPAREN,
    STATE(171), 1,
      sym_PEReference,
  [2703] = 3,
    ACTIONS(591), 1,
      sym__S,
    ACTIONS(593), 1,
      anon_sym_EQ,
    STATE(183), 1,
      sym__Eq,
  [2713] = 3,
    ACTIONS(591), 1,
      sym__S,
    ACTIONS(593), 1,
      anon_sym_EQ,
    STATE(239), 1,
      sym__Eq,
  [2723] = 2,
    ACTIONS(597), 1,
      anon_sym_STAR,
    ACTIONS(595), 2,
      anon_sym_GT,
      sym__S,
  [2731] = 3,
    ACTIONS(533), 1,
      anon_sym_DQUOTE,
    ACTIONS(535), 1,
      anon_sym_SQUOTE,
    STATE(290), 1,
      sym_PubidLiteral,
  [2741] = 2,
    ACTIONS(601), 1,
      sym__S,
    ACTIONS(599), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [2749] = 3,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(425), 1,
      anon_sym_RPAREN,
    STATE(171), 1,
      sym_PEReference,
  [2759] = 1,
    ACTIONS(603), 2,
      anon_sym_GT,
      sym__S,
  [2764] = 1,
    ACTIONS(605), 2,
      anon_sym_GT,
      sym__S,
  [2769] = 2,
    ACTIONS(607), 1,
      anon_sym_DQUOTE,
    ACTIONS(609), 1,
      anon_sym_SQUOTE,
  [2776] = 1,
    ACTIONS(611), 2,
      anon_sym_GT,
      sym__S,
  [2781] = 1,
    ACTIONS(599), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [2786] = 1,
    ACTIONS(555), 2,
      anon_sym_GT,
      sym__S,
  [2791] = 2,
    ACTIONS(567), 1,
      anon_sym_GT,
    ACTIONS(613), 1,
      sym__S,
  [2798] = 1,
    ACTIONS(615), 2,
      anon_sym_QMARK_GT,
      sym__S,
  [2803] = 1,
    ACTIONS(459), 2,
      anon_sym_RPAREN,
      anon_sym_PERCENT,
  [2808] = 1,
    ACTIONS(581), 2,
      anon_sym_GT,
      sym__S,
  [2813] = 2,
    ACTIONS(617), 1,
      anon_sym_GT,
    ACTIONS(619), 1,
      sym__S,
  [2820] = 1,
    ACTIONS(621), 2,
      anon_sym_GT,
      sym__S,
  [2825] = 2,
    ACTIONS(503), 1,
      anon_sym_RPAREN,
    ACTIONS(623), 1,
      anon_sym_PIPE,
  [2832] = 1,
    ACTIONS(625), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [2837] = 1,
    ACTIONS(545), 2,
      anon_sym_GT,
      sym__S,
  [2842] = 2,
    ACTIONS(627), 1,
      sym__S,
    ACTIONS(629), 1,
      sym_Nmtoken,
  [2849] = 2,
    ACTIONS(631), 1,
      anon_sym_QMARK_GT,
    ACTIONS(633), 1,
      sym__S,
  [2856] = 2,
    ACTIONS(635), 1,
      anon_sym_LBRACK,
    ACTIONS(637), 1,
      sym__S,
  [2863] = 2,
    ACTIONS(639), 1,
      anon_sym_GT,
    ACTIONS(641), 1,
      sym__S,
  [2870] = 2,
    ACTIONS(643), 1,
      anon_sym_GT,
    ACTIONS(645), 1,
      sym__S,
  [2877] = 1,
    ACTIONS(647), 2,
      anon_sym_GT,
      sym__S,
  [2882] = 1,
    ACTIONS(649), 2,
      anon_sym_GT,
      sym__S,
  [2887] = 2,
    ACTIONS(651), 1,
      sym__S,
    ACTIONS(653), 1,
      sym_Nmtoken,
  [2894] = 1,
    ACTIONS(655), 2,
      anon_sym_GT,
      sym__S,
  [2899] = 2,
    ACTIONS(657), 1,
      sym_Name,
    ACTIONS(659), 1,
      sym__S,
  [2906] = 1,
    ACTIONS(661), 2,
      anon_sym_GT,
      sym__S,
  [2911] = 1,
    ACTIONS(663), 2,
      anon_sym_GT,
      sym__S,
  [2916] = 1,
    ACTIONS(665), 2,
      anon_sym_GT,
      sym__S,
  [2921] = 2,
    ACTIONS(623), 1,
      anon_sym_PIPE,
    ACTIONS(667), 1,
      anon_sym_RPAREN,
  [2928] = 2,
    ACTIONS(669), 1,
      anon_sym_QMARK_GT,
    ACTIONS(671), 1,
      sym__S,
  [2935] = 1,
    ACTIONS(391), 2,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [2940] = 2,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    STATE(171), 1,
      sym_PEReference,
  [2947] = 2,
    ACTIONS(673), 1,
      anon_sym_RPAREN,
    ACTIONS(675), 1,
      sym__S,
  [2954] = 1,
    ACTIONS(677), 2,
      anon_sym_GT,
      sym__S,
  [2959] = 1,
    ACTIONS(679), 2,
      anon_sym_GT,
      sym__S,
  [2964] = 1,
    ACTIONS(681), 2,
      anon_sym_GT,
      sym__S,
  [2969] = 1,
    ACTIONS(683), 2,
      anon_sym_GT,
      sym__S,
  [2974] = 2,
    ACTIONS(685), 1,
      sym__S,
    ACTIONS(687), 1,
      sym_Nmtoken,
  [2981] = 1,
    ACTIONS(689), 2,
      anon_sym_GT,
      sym__S,
  [2986] = 1,
    ACTIONS(691), 2,
      anon_sym_GT,
      sym__S,
  [2991] = 1,
    ACTIONS(693), 2,
      anon_sym_GT,
      sym__S,
  [2996] = 2,
    ACTIONS(695), 1,
      anon_sym_RPAREN,
    ACTIONS(697), 1,
      sym__S,
  [3003] = 2,
    ACTIONS(491), 1,
      anon_sym_RPAREN,
    ACTIONS(623), 1,
      anon_sym_PIPE,
  [3010] = 2,
    ACTIONS(699), 1,
      anon_sym_xml,
    ACTIONS(701), 1,
      sym_PITarget,
  [3017] = 1,
    ACTIONS(703), 2,
      anon_sym_GT,
      sym__S,
  [3022] = 1,
    ACTIONS(705), 2,
      anon_sym_GT,
      sym__S,
  [3027] = 2,
    ACTIONS(707), 1,
      anon_sym_GT,
    ACTIONS(709), 1,
      sym__S,
  [3034] = 1,
    ACTIONS(711), 2,
      anon_sym_GT,
      sym__S,
  [3039] = 2,
    ACTIONS(713), 1,
      anon_sym_RPAREN,
    ACTIONS(715), 1,
      sym__S,
  [3046] = 1,
    ACTIONS(717), 2,
      anon_sym_GT,
      sym__S,
  [3051] = 1,
    ACTIONS(719), 2,
      anon_sym_GT,
      sym__S,
  [3056] = 1,
    ACTIONS(721), 2,
      anon_sym_GT,
      sym__S,
  [3061] = 2,
    ACTIONS(723), 1,
      anon_sym_LBRACK,
    ACTIONS(725), 1,
      sym__S,
  [3068] = 2,
    ACTIONS(727), 1,
      sym__S,
    STATE(158), 1,
      sym__VersionInfo,
  [3075] = 2,
    ACTIONS(729), 1,
      anon_sym_GT,
    ACTIONS(731), 1,
      anon_sym_NDATA,
  [3082] = 2,
    ACTIONS(729), 1,
      anon_sym_GT,
    ACTIONS(733), 1,
      sym__S,
  [3089] = 1,
    ACTIONS(735), 2,
      anon_sym_QMARK_GT,
      sym__S,
  [3094] = 1,
    ACTIONS(707), 2,
      anon_sym_GT,
      sym__S,
  [3099] = 2,
    ACTIONS(737), 1,
      anon_sym_DQUOTE,
    ACTIONS(739), 1,
      anon_sym_SQUOTE,
  [3106] = 2,
    ACTIONS(741), 1,
      anon_sym_GT,
    ACTIONS(743), 1,
      sym__S,
  [3113] = 1,
    ACTIONS(745), 2,
      anon_sym_GT,
      sym__S,
  [3118] = 1,
    ACTIONS(747), 2,
      anon_sym_GT,
      sym__S,
  [3123] = 1,
    ACTIONS(749), 2,
      anon_sym_GT,
      sym__S,
  [3128] = 2,
    ACTIONS(464), 1,
      anon_sym_GT,
    ACTIONS(751), 1,
      sym__S,
  [3135] = 2,
    ACTIONS(631), 1,
      anon_sym_QMARK_GT,
    ACTIONS(754), 1,
      anon_sym_encoding,
  [3142] = 1,
    ACTIONS(756), 1,
      anon_sym_SQUOTE,
  [3146] = 1,
    ACTIONS(557), 1,
      anon_sym_STAR,
  [3150] = 1,
    ACTIONS(758), 1,
      sym_VersionNum,
  [3154] = 1,
    ACTIONS(760), 1,
      sym_Name,
  [3158] = 1,
    ACTIONS(762), 1,
      anon_sym_EQ,
  [3162] = 1,
    ACTIONS(764), 1,
      sym__S,
  [3166] = 1,
    ACTIONS(766), 1,
      anon_sym_QMARK_GT,
  [3170] = 1,
    ACTIONS(768), 1,
      sym__pi_content,
  [3174] = 1,
    ACTIONS(770), 1,
      anon_sym_GT,
  [3178] = 1,
    ACTIONS(772), 1,
      anon_sym_version,
  [3182] = 1,
    ACTIONS(629), 1,
      sym_Nmtoken,
  [3186] = 1,
    ACTIONS(774), 1,
      anon_sym_QMARK_GT,
  [3190] = 1,
    ACTIONS(776), 1,
      sym_Nmtoken,
  [3194] = 1,
    ACTIONS(778), 1,
      sym__S,
  [3198] = 1,
    ACTIONS(780), 1,
      anon_sym_LPAREN,
  [3202] = 1,
    ACTIONS(782), 1,
      sym__S,
  [3206] = 1,
    ACTIONS(756), 1,
      anon_sym_DQUOTE,
  [3210] = 1,
    ACTIONS(784), 1,
      sym__S,
  [3214] = 1,
    ACTIONS(786), 1,
      anon_sym_DQUOTE,
  [3218] = 1,
    ACTIONS(786), 1,
      anon_sym_SQUOTE,
  [3222] = 1,
    ACTIONS(788), 1,
      sym__S,
  [3226] = 1,
    ACTIONS(723), 1,
      anon_sym_LBRACK,
  [3230] = 1,
    ACTIONS(790), 1,
      anon_sym_GT,
  [3234] = 1,
    ACTIONS(792), 1,
      anon_sym_STAR,
  [3238] = 1,
    ACTIONS(794), 1,
      sym__S,
  [3242] = 1,
    ACTIONS(796), 1,
      aux_sym_SystemLiteral_token1,
  [3246] = 1,
    ACTIONS(798), 1,
      aux_sym_SystemLiteral_token2,
  [3250] = 1,
    ACTIONS(800), 1,
      anon_sym_SEMI,
  [3254] = 1,
    ACTIONS(802), 1,
      sym_Nmtoken,
  [3258] = 1,
    ACTIONS(623), 1,
      anon_sym_PIPE,
  [3262] = 1,
    ACTIONS(804), 1,
      aux_sym_PubidLiteral_token1,
  [3266] = 1,
    ACTIONS(806), 1,
      aux_sym_PubidLiteral_token2,
  [3270] = 1,
    ACTIONS(808), 1,
      anon_sym_PIPE,
  [3274] = 1,
    ACTIONS(810), 1,
      anon_sym_GT,
  [3278] = 1,
    ACTIONS(812), 1,
      sym__S,
  [3282] = 1,
    ACTIONS(583), 1,
      anon_sym_STAR,
  [3286] = 1,
    ACTIONS(814), 1,
      sym__S,
  [3290] = 1,
    ACTIONS(387), 1,
      anon_sym_PIPE,
  [3294] = 1,
    ACTIONS(816), 1,
      sym_Name,
  [3298] = 1,
    ACTIONS(818), 1,
      anon_sym_SEMI,
  [3302] = 1,
    ACTIONS(820), 1,
      anon_sym_SEMI,
  [3306] = 1,
    ACTIONS(822), 1,
      aux_sym_CharRef_token1,
  [3310] = 1,
    ACTIONS(822), 1,
      aux_sym_CharRef_token2,
  [3314] = 1,
    ACTIONS(824), 1,
      sym__S,
  [3318] = 1,
    ACTIONS(709), 1,
      sym__S,
  [3322] = 1,
    ACTIONS(826), 1,
      anon_sym_LBRACK,
  [3326] = 1,
    ACTIONS(828), 1,
      sym__S,
  [3330] = 1,
    ACTIONS(695), 1,
      anon_sym_RPAREN,
  [3334] = 1,
    ACTIONS(830), 1,
      sym_VersionNum,
  [3338] = 1,
    ACTIONS(832), 1,
      sym__S,
  [3342] = 1,
    ACTIONS(713), 1,
      anon_sym_RPAREN,
  [3346] = 1,
    ACTIONS(834), 1,
      sym__S,
  [3350] = 1,
    ACTIONS(701), 1,
      sym_PITarget,
  [3354] = 1,
    ACTIONS(729), 1,
      anon_sym_GT,
  [3358] = 1,
    ACTIONS(836), 1,
      anon_sym_RPAREN,
  [3362] = 1,
    ACTIONS(838), 1,
      sym__S,
  [3366] = 1,
    ACTIONS(840), 1,
      sym_Name,
  [3370] = 1,
    ACTIONS(842), 1,
      sym__S,
  [3374] = 1,
    ACTIONS(844), 1,
      sym__S,
  [3378] = 1,
    ACTIONS(846), 1,
      anon_sym_DQUOTE,
  [3382] = 1,
    ACTIONS(547), 1,
      anon_sym_STAR,
  [3386] = 1,
    ACTIONS(846), 1,
      anon_sym_SQUOTE,
  [3390] = 1,
    ACTIONS(848), 1,
      ts_builtin_sym_end,
  [3394] = 1,
    ACTIONS(850), 1,
      anon_sym_DQUOTE,
  [3398] = 1,
    ACTIONS(850), 1,
      anon_sym_SQUOTE,
  [3402] = 1,
    ACTIONS(852), 1,
      sym_EncName,
  [3406] = 1,
    ACTIONS(854), 1,
      sym_EncName,
  [3410] = 1,
    ACTIONS(856), 1,
      sym__S,
  [3414] = 1,
    ACTIONS(858), 1,
      anon_sym_SEMI,
  [3418] = 1,
    ACTIONS(860), 1,
      anon_sym_SEMI,
  [3422] = 1,
    ACTIONS(862), 1,
      anon_sym_SEMI,
  [3426] = 1,
    ACTIONS(864), 1,
      anon_sym_SEMI,
  [3430] = 1,
    ACTIONS(866), 1,
      anon_sym_SEMI,
  [3434] = 1,
    ACTIONS(868), 1,
      anon_sym_SEMI,
  [3438] = 1,
    ACTIONS(870), 1,
      anon_sym_SEMI,
  [3442] = 1,
    ACTIONS(872), 1,
      anon_sym_SEMI,
  [3446] = 1,
    ACTIONS(874), 1,
      anon_sym_SEMI,
  [3450] = 1,
    ACTIONS(657), 1,
      sym_Name,
  [3454] = 1,
    ACTIONS(876), 1,
      sym_Name,
  [3458] = 1,
    ACTIONS(878), 1,
      aux_sym_CharRef_token1,
  [3462] = 1,
    ACTIONS(878), 1,
      aux_sym_CharRef_token2,
  [3466] = 1,
    ACTIONS(880), 1,
      sym_Name,
  [3470] = 1,
    ACTIONS(882), 1,
      sym_Name,
  [3474] = 1,
    ACTIONS(884), 1,
      aux_sym_CharRef_token1,
  [3478] = 1,
    ACTIONS(884), 1,
      aux_sym_CharRef_token2,
  [3482] = 1,
    ACTIONS(886), 1,
      sym_Name,
  [3486] = 1,
    ACTIONS(888), 1,
      sym_Name,
  [3490] = 1,
    ACTIONS(890), 1,
      aux_sym_CharRef_token1,
  [3494] = 1,
    ACTIONS(890), 1,
      aux_sym_CharRef_token2,
  [3498] = 1,
    ACTIONS(892), 1,
      anon_sym_GT,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 42,
  [SMALL_STATE(4)] = 83,
  [SMALL_STATE(5)] = 124,
  [SMALL_STATE(6)] = 165,
  [SMALL_STATE(7)] = 206,
  [SMALL_STATE(8)] = 247,
  [SMALL_STATE(9)] = 288,
  [SMALL_STATE(10)] = 329,
  [SMALL_STATE(11)] = 370,
  [SMALL_STATE(12)] = 408,
  [SMALL_STATE(13)] = 436,
  [SMALL_STATE(14)] = 458,
  [SMALL_STATE(15)] = 486,
  [SMALL_STATE(16)] = 514,
  [SMALL_STATE(17)] = 542,
  [SMALL_STATE(18)] = 564,
  [SMALL_STATE(19)] = 592,
  [SMALL_STATE(20)] = 620,
  [SMALL_STATE(21)] = 634,
  [SMALL_STATE(22)] = 659,
  [SMALL_STATE(23)] = 681,
  [SMALL_STATE(24)] = 693,
  [SMALL_STATE(25)] = 705,
  [SMALL_STATE(26)] = 729,
  [SMALL_STATE(27)] = 741,
  [SMALL_STATE(28)] = 767,
  [SMALL_STATE(29)] = 793,
  [SMALL_STATE(30)] = 805,
  [SMALL_STATE(31)] = 831,
  [SMALL_STATE(32)] = 857,
  [SMALL_STATE(33)] = 869,
  [SMALL_STATE(34)] = 895,
  [SMALL_STATE(35)] = 921,
  [SMALL_STATE(36)] = 942,
  [SMALL_STATE(37)] = 955,
  [SMALL_STATE(38)] = 968,
  [SMALL_STATE(39)] = 981,
  [SMALL_STATE(40)] = 994,
  [SMALL_STATE(41)] = 1007,
  [SMALL_STATE(42)] = 1020,
  [SMALL_STATE(43)] = 1033,
  [SMALL_STATE(44)] = 1054,
  [SMALL_STATE(45)] = 1067,
  [SMALL_STATE(46)] = 1080,
  [SMALL_STATE(47)] = 1093,
  [SMALL_STATE(48)] = 1114,
  [SMALL_STATE(49)] = 1127,
  [SMALL_STATE(50)] = 1140,
  [SMALL_STATE(51)] = 1165,
  [SMALL_STATE(52)] = 1178,
  [SMALL_STATE(53)] = 1191,
  [SMALL_STATE(54)] = 1204,
  [SMALL_STATE(55)] = 1217,
  [SMALL_STATE(56)] = 1230,
  [SMALL_STATE(57)] = 1243,
  [SMALL_STATE(58)] = 1256,
  [SMALL_STATE(59)] = 1269,
  [SMALL_STATE(60)] = 1290,
  [SMALL_STATE(61)] = 1303,
  [SMALL_STATE(62)] = 1316,
  [SMALL_STATE(63)] = 1336,
  [SMALL_STATE(64)] = 1358,
  [SMALL_STATE(65)] = 1378,
  [SMALL_STATE(66)] = 1400,
  [SMALL_STATE(67)] = 1422,
  [SMALL_STATE(68)] = 1442,
  [SMALL_STATE(69)] = 1464,
  [SMALL_STATE(70)] = 1486,
  [SMALL_STATE(71)] = 1505,
  [SMALL_STATE(72)] = 1522,
  [SMALL_STATE(73)] = 1539,
  [SMALL_STATE(74)] = 1556,
  [SMALL_STATE(75)] = 1573,
  [SMALL_STATE(76)] = 1590,
  [SMALL_STATE(77)] = 1605,
  [SMALL_STATE(78)] = 1624,
  [SMALL_STATE(79)] = 1643,
  [SMALL_STATE(80)] = 1654,
  [SMALL_STATE(81)] = 1665,
  [SMALL_STATE(82)] = 1684,
  [SMALL_STATE(83)] = 1703,
  [SMALL_STATE(84)] = 1714,
  [SMALL_STATE(85)] = 1725,
  [SMALL_STATE(86)] = 1736,
  [SMALL_STATE(87)] = 1747,
  [SMALL_STATE(88)] = 1758,
  [SMALL_STATE(89)] = 1769,
  [SMALL_STATE(90)] = 1780,
  [SMALL_STATE(91)] = 1791,
  [SMALL_STATE(92)] = 1802,
  [SMALL_STATE(93)] = 1810,
  [SMALL_STATE(94)] = 1820,
  [SMALL_STATE(95)] = 1836,
  [SMALL_STATE(96)] = 1844,
  [SMALL_STATE(97)] = 1858,
  [SMALL_STATE(98)] = 1872,
  [SMALL_STATE(99)] = 1882,
  [SMALL_STATE(100)] = 1898,
  [SMALL_STATE(101)] = 1912,
  [SMALL_STATE(102)] = 1928,
  [SMALL_STATE(103)] = 1942,
  [SMALL_STATE(104)] = 1956,
  [SMALL_STATE(105)] = 1970,
  [SMALL_STATE(106)] = 1984,
  [SMALL_STATE(107)] = 2000,
  [SMALL_STATE(108)] = 2014,
  [SMALL_STATE(109)] = 2028,
  [SMALL_STATE(110)] = 2036,
  [SMALL_STATE(111)] = 2044,
  [SMALL_STATE(112)] = 2054,
  [SMALL_STATE(113)] = 2064,
  [SMALL_STATE(114)] = 2078,
  [SMALL_STATE(115)] = 2088,
  [SMALL_STATE(116)] = 2098,
  [SMALL_STATE(117)] = 2108,
  [SMALL_STATE(118)] = 2118,
  [SMALL_STATE(119)] = 2128,
  [SMALL_STATE(120)] = 2141,
  [SMALL_STATE(121)] = 2152,
  [SMALL_STATE(122)] = 2159,
  [SMALL_STATE(123)] = 2172,
  [SMALL_STATE(124)] = 2185,
  [SMALL_STATE(125)] = 2198,
  [SMALL_STATE(126)] = 2211,
  [SMALL_STATE(127)] = 2222,
  [SMALL_STATE(128)] = 2235,
  [SMALL_STATE(129)] = 2246,
  [SMALL_STATE(130)] = 2259,
  [SMALL_STATE(131)] = 2266,
  [SMALL_STATE(132)] = 2279,
  [SMALL_STATE(133)] = 2292,
  [SMALL_STATE(134)] = 2305,
  [SMALL_STATE(135)] = 2318,
  [SMALL_STATE(136)] = 2331,
  [SMALL_STATE(137)] = 2344,
  [SMALL_STATE(138)] = 2351,
  [SMALL_STATE(139)] = 2364,
  [SMALL_STATE(140)] = 2377,
  [SMALL_STATE(141)] = 2390,
  [SMALL_STATE(142)] = 2399,
  [SMALL_STATE(143)] = 2412,
  [SMALL_STATE(144)] = 2423,
  [SMALL_STATE(145)] = 2430,
  [SMALL_STATE(146)] = 2439,
  [SMALL_STATE(147)] = 2446,
  [SMALL_STATE(148)] = 2459,
  [SMALL_STATE(149)] = 2469,
  [SMALL_STATE(150)] = 2477,
  [SMALL_STATE(151)] = 2487,
  [SMALL_STATE(152)] = 2495,
  [SMALL_STATE(153)] = 2505,
  [SMALL_STATE(154)] = 2513,
  [SMALL_STATE(155)] = 2521,
  [SMALL_STATE(156)] = 2531,
  [SMALL_STATE(157)] = 2541,
  [SMALL_STATE(158)] = 2551,
  [SMALL_STATE(159)] = 2561,
  [SMALL_STATE(160)] = 2567,
  [SMALL_STATE(161)] = 2577,
  [SMALL_STATE(162)] = 2587,
  [SMALL_STATE(163)] = 2597,
  [SMALL_STATE(164)] = 2607,
  [SMALL_STATE(165)] = 2617,
  [SMALL_STATE(166)] = 2627,
  [SMALL_STATE(167)] = 2637,
  [SMALL_STATE(168)] = 2643,
  [SMALL_STATE(169)] = 2653,
  [SMALL_STATE(170)] = 2663,
  [SMALL_STATE(171)] = 2671,
  [SMALL_STATE(172)] = 2677,
  [SMALL_STATE(173)] = 2683,
  [SMALL_STATE(174)] = 2693,
  [SMALL_STATE(175)] = 2703,
  [SMALL_STATE(176)] = 2713,
  [SMALL_STATE(177)] = 2723,
  [SMALL_STATE(178)] = 2731,
  [SMALL_STATE(179)] = 2741,
  [SMALL_STATE(180)] = 2749,
  [SMALL_STATE(181)] = 2759,
  [SMALL_STATE(182)] = 2764,
  [SMALL_STATE(183)] = 2769,
  [SMALL_STATE(184)] = 2776,
  [SMALL_STATE(185)] = 2781,
  [SMALL_STATE(186)] = 2786,
  [SMALL_STATE(187)] = 2791,
  [SMALL_STATE(188)] = 2798,
  [SMALL_STATE(189)] = 2803,
  [SMALL_STATE(190)] = 2808,
  [SMALL_STATE(191)] = 2813,
  [SMALL_STATE(192)] = 2820,
  [SMALL_STATE(193)] = 2825,
  [SMALL_STATE(194)] = 2832,
  [SMALL_STATE(195)] = 2837,
  [SMALL_STATE(196)] = 2842,
  [SMALL_STATE(197)] = 2849,
  [SMALL_STATE(198)] = 2856,
  [SMALL_STATE(199)] = 2863,
  [SMALL_STATE(200)] = 2870,
  [SMALL_STATE(201)] = 2877,
  [SMALL_STATE(202)] = 2882,
  [SMALL_STATE(203)] = 2887,
  [SMALL_STATE(204)] = 2894,
  [SMALL_STATE(205)] = 2899,
  [SMALL_STATE(206)] = 2906,
  [SMALL_STATE(207)] = 2911,
  [SMALL_STATE(208)] = 2916,
  [SMALL_STATE(209)] = 2921,
  [SMALL_STATE(210)] = 2928,
  [SMALL_STATE(211)] = 2935,
  [SMALL_STATE(212)] = 2940,
  [SMALL_STATE(213)] = 2947,
  [SMALL_STATE(214)] = 2954,
  [SMALL_STATE(215)] = 2959,
  [SMALL_STATE(216)] = 2964,
  [SMALL_STATE(217)] = 2969,
  [SMALL_STATE(218)] = 2974,
  [SMALL_STATE(219)] = 2981,
  [SMALL_STATE(220)] = 2986,
  [SMALL_STATE(221)] = 2991,
  [SMALL_STATE(222)] = 2996,
  [SMALL_STATE(223)] = 3003,
  [SMALL_STATE(224)] = 3010,
  [SMALL_STATE(225)] = 3017,
  [SMALL_STATE(226)] = 3022,
  [SMALL_STATE(227)] = 3027,
  [SMALL_STATE(228)] = 3034,
  [SMALL_STATE(229)] = 3039,
  [SMALL_STATE(230)] = 3046,
  [SMALL_STATE(231)] = 3051,
  [SMALL_STATE(232)] = 3056,
  [SMALL_STATE(233)] = 3061,
  [SMALL_STATE(234)] = 3068,
  [SMALL_STATE(235)] = 3075,
  [SMALL_STATE(236)] = 3082,
  [SMALL_STATE(237)] = 3089,
  [SMALL_STATE(238)] = 3094,
  [SMALL_STATE(239)] = 3099,
  [SMALL_STATE(240)] = 3106,
  [SMALL_STATE(241)] = 3113,
  [SMALL_STATE(242)] = 3118,
  [SMALL_STATE(243)] = 3123,
  [SMALL_STATE(244)] = 3128,
  [SMALL_STATE(245)] = 3135,
  [SMALL_STATE(246)] = 3142,
  [SMALL_STATE(247)] = 3146,
  [SMALL_STATE(248)] = 3150,
  [SMALL_STATE(249)] = 3154,
  [SMALL_STATE(250)] = 3158,
  [SMALL_STATE(251)] = 3162,
  [SMALL_STATE(252)] = 3166,
  [SMALL_STATE(253)] = 3170,
  [SMALL_STATE(254)] = 3174,
  [SMALL_STATE(255)] = 3178,
  [SMALL_STATE(256)] = 3182,
  [SMALL_STATE(257)] = 3186,
  [SMALL_STATE(258)] = 3190,
  [SMALL_STATE(259)] = 3194,
  [SMALL_STATE(260)] = 3198,
  [SMALL_STATE(261)] = 3202,
  [SMALL_STATE(262)] = 3206,
  [SMALL_STATE(263)] = 3210,
  [SMALL_STATE(264)] = 3214,
  [SMALL_STATE(265)] = 3218,
  [SMALL_STATE(266)] = 3222,
  [SMALL_STATE(267)] = 3226,
  [SMALL_STATE(268)] = 3230,
  [SMALL_STATE(269)] = 3234,
  [SMALL_STATE(270)] = 3238,
  [SMALL_STATE(271)] = 3242,
  [SMALL_STATE(272)] = 3246,
  [SMALL_STATE(273)] = 3250,
  [SMALL_STATE(274)] = 3254,
  [SMALL_STATE(275)] = 3258,
  [SMALL_STATE(276)] = 3262,
  [SMALL_STATE(277)] = 3266,
  [SMALL_STATE(278)] = 3270,
  [SMALL_STATE(279)] = 3274,
  [SMALL_STATE(280)] = 3278,
  [SMALL_STATE(281)] = 3282,
  [SMALL_STATE(282)] = 3286,
  [SMALL_STATE(283)] = 3290,
  [SMALL_STATE(284)] = 3294,
  [SMALL_STATE(285)] = 3298,
  [SMALL_STATE(286)] = 3302,
  [SMALL_STATE(287)] = 3306,
  [SMALL_STATE(288)] = 3310,
  [SMALL_STATE(289)] = 3314,
  [SMALL_STATE(290)] = 3318,
  [SMALL_STATE(291)] = 3322,
  [SMALL_STATE(292)] = 3326,
  [SMALL_STATE(293)] = 3330,
  [SMALL_STATE(294)] = 3334,
  [SMALL_STATE(295)] = 3338,
  [SMALL_STATE(296)] = 3342,
  [SMALL_STATE(297)] = 3346,
  [SMALL_STATE(298)] = 3350,
  [SMALL_STATE(299)] = 3354,
  [SMALL_STATE(300)] = 3358,
  [SMALL_STATE(301)] = 3362,
  [SMALL_STATE(302)] = 3366,
  [SMALL_STATE(303)] = 3370,
  [SMALL_STATE(304)] = 3374,
  [SMALL_STATE(305)] = 3378,
  [SMALL_STATE(306)] = 3382,
  [SMALL_STATE(307)] = 3386,
  [SMALL_STATE(308)] = 3390,
  [SMALL_STATE(309)] = 3394,
  [SMALL_STATE(310)] = 3398,
  [SMALL_STATE(311)] = 3402,
  [SMALL_STATE(312)] = 3406,
  [SMALL_STATE(313)] = 3410,
  [SMALL_STATE(314)] = 3414,
  [SMALL_STATE(315)] = 3418,
  [SMALL_STATE(316)] = 3422,
  [SMALL_STATE(317)] = 3426,
  [SMALL_STATE(318)] = 3430,
  [SMALL_STATE(319)] = 3434,
  [SMALL_STATE(320)] = 3438,
  [SMALL_STATE(321)] = 3442,
  [SMALL_STATE(322)] = 3446,
  [SMALL_STATE(323)] = 3450,
  [SMALL_STATE(324)] = 3454,
  [SMALL_STATE(325)] = 3458,
  [SMALL_STATE(326)] = 3462,
  [SMALL_STATE(327)] = 3466,
  [SMALL_STATE(328)] = 3470,
  [SMALL_STATE(329)] = 3474,
  [SMALL_STATE(330)] = 3478,
  [SMALL_STATE(331)] = 3482,
  [SMALL_STATE(332)] = 3486,
  [SMALL_STATE(333)] = 3490,
  [SMALL_STATE(334)] = 3494,
  [SMALL_STATE(335)] = 3498,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_extSubset_repeat1, 2, 0, 0),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_extSubset_repeat1, 2, 0, 0), SHIFT_REPEAT(298),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_extSubset_repeat1, 2, 0, 0), SHIFT_REPEAT(104),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_extSubset_repeat1, 2, 0, 0), SHIFT_REPEAT(129),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_extSubset_repeat1, 2, 0, 0), SHIFT_REPEAT(249),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_extSubset_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_extSubset_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extSubset, 2, 0, 0),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extSubset, 1, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(324),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(325),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cp, 1, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat2, 2, 0, 0), SHIFT_REPEAT(331),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat2, 2, 0, 0),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat2, 2, 0, 0), SHIFT_REPEAT(14),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_EntityValue_repeat2, 2, 0, 0), SHIFT_REPEAT(324),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_EntityValue_repeat2, 2, 0, 0), SHIFT_REPEAT(325),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat2, 2, 0, 0), SHIFT_REPEAT(326),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat1, 2, 0, 0), SHIFT_REPEAT(327),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat1, 2, 0, 0),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_EntityValue_repeat1, 2, 0, 0), SHIFT_REPEAT(284),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_EntityValue_repeat1, 2, 0, 0), SHIFT_REPEAT(287),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat1, 2, 0, 0), SHIFT_REPEAT(288),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PEReference, 3, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice, 3, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice, 4, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice, 5, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(328),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(332),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(333),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice, 6, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice, 7, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat1, 2, 0, 0),
  [179] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_AttValue_repeat1, 2, 0, 0), SHIFT_REPEAT(328),
  [182] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_AttValue_repeat1, 2, 0, 0), SHIFT_REPEAT(329),
  [185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat1, 2, 0, 0), SHIFT_REPEAT(330),
  [188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat1, 2, 0, 0), SHIFT_REPEAT(111),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat2, 2, 0, 0),
  [193] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_AttValue_repeat2, 2, 0, 0), SHIFT_REPEAT(332),
  [196] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_AttValue_repeat2, 2, 0, 0), SHIFT_REPEAT(333),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat2, 2, 0, 0), SHIFT_REPEAT(334),
  [202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat2, 2, 0, 0), SHIFT_REPEAT(112),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttlistDecl, 7, 0, 0),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_AttlistDecl, 7, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NotationDecl, 7, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_NotationDecl, 7, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_PEReference, 3, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_GEDecl, 7, 0, 0),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_GEDecl, 7, 0, 0),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__markupdecl, 1, 0, 0),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__markupdecl, 1, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditionalSect, 4, 0, 0),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditionalSect, 4, 0, 0),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttlistDecl, 5, 0, 0),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_AttlistDecl, 5, 0, 0),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elementdecl, 8, 0, 0),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_elementdecl, 8, 0, 0),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NotationDecl, 8, 0, 0),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_NotationDecl, 8, 0, 0),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_GEDecl, 8, 0, 0),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_GEDecl, 8, 0, 0),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditionalSect, 6, 0, 0),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditionalSect, 6, 0, 0),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PI, 3, 0, 0),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_PI, 3, 0, 0),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PEDecl, 9, 0, 0),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_PEDecl, 9, 0, 0),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_GEDecl, 9, 0, 0),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_GEDecl, 9, 0, 0),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttlistDecl, 6, 0, 0),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_AttlistDecl, 6, 0, 0),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__EntityDecl, 1, 0, 0),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__EntityDecl, 1, 0, 0),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PI, 5, 0, 0),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_PI, 5, 0, 0),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PEDecl, 10, 0, 0),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_PEDecl, 10, 0, 0),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditionalSect, 7, 0, 0),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditionalSect, 7, 0, 0),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elementdecl, 7, 0, 0),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_elementdecl, 7, 0, 0),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditionalSect, 5, 0, 0),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditionalSect, 5, 0, 0),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [351] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__choice_repeat1, 2, 0, 0), SHIFT_REPEAT(62),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__choice_repeat1, 2, 0, 0),
  [356] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__choice_repeat1, 2, 0, 0), SHIFT_REPEAT(211),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_TextDecl, 4, 0, 0),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_TextDecl, 4, 0, 0),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__Reference, 1, 0, 0),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__Reference, 1, 0, 0),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_EntityRef, 3, 0, 0),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_EntityRef, 3, 0, 0),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CharRef, 3, 0, 0),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_CharRef, 3, 0, 0),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_TextDecl, 6, 0, 0),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_TextDecl, 6, 0, 0),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_TextDecl, 5, 0, 0),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_TextDecl, 5, 0, 0),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cp, 2, 0, 0),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 1, 0, 0),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [399] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 2, 0, 0), SHIFT_REPEAT(119),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 2, 0, 0),
  [404] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 2, 0, 0), SHIFT_REPEAT(283),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__choice_repeat2, 2, 0, 0),
  [417] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__choice_repeat2, 2, 0, 0), SHIFT_REPEAT(323),
  [420] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__choice_repeat2, 2, 0, 0), SHIFT_REPEAT(212),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__choice_repeat1, 3, 0, 0),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__choice_repeat1, 4, 0, 0),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat1, 1, 0, 0),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_AttValue_repeat1, 1, 0, 0),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat2, 1, 0, 0),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_AttValue_repeat2, 1, 0, 0),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 2, 0, 0),
  [443] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 2, 0, 0), SHIFT_REPEAT(141),
  [446] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 2, 0, 0), SHIFT_REPEAT(278),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat2, 2, 0, 0),
  [461] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat2, 2, 0, 0), SHIFT_REPEAT(323),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_AttlistDecl_repeat1, 2, 0, 0),
  [466] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_AttlistDecl_repeat1, 2, 0, 0), SHIFT_REPEAT(156),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 3, 0, 0),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 4, 0, 0),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [507] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Enumeration_repeat1, 2, 0, 0), SHIFT_REPEAT(218),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Enumeration_repeat1, 2, 0, 0),
  [512] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Enumeration_repeat1, 2, 0, 0), SHIFT_REPEAT(275),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 1, 0, 0),
  [517] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 1, 0, 0), SHIFT_REPEAT(144),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [526] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 2, 0, 0), SHIFT_REPEAT(146),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 3, 0, 0),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat2, 1, 0, 0),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Mixed, 4, 0, 0),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__Eq, 1, 0, 0),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Mixed, 6, 0, 0),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Enumeration_repeat1, 3, 0, 0),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Mixed, 5, 0, 0),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Enumeration_repeat1, 4, 0, 0),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Mixed, 3, 0, 0),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__Eq, 2, 0, 0),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NotationType, 8, 0, 0),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ExternalID, 5, 0, 0),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NDataDecl, 4, 0, 0),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__EncodingDecl, 6, 0, 0),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttDef, 4, 0, 0),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Enumeration, 4, 0, 0),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__Eq, 3, 0, 0),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttValue, 2, 0, 0),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__EnumeratedType, 1, 0, 0),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ExternalID, 3, 0, 0),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Mixed, 7, 0, 0),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__AttType, 1, 0, 0),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Enumeration, 5, 0, 0),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_EntityValue, 2, 0, 0),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_DefaultDecl, 3, 0, 0),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttValue, 3, 0, 2),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PubidLiteral, 3, 0, 0),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Mixed, 8, 0, 0),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Enumeration, 6, 0, 0),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Enumeration, 3, 0, 0),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contentspec, 1, 0, 0),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NotationType, 6, 0, 0),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PublicID, 3, 0, 0),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NotationType, 7, 0, 0),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_DefaultDecl, 1, 0, 0),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 2, 0, 0),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NotationType, 9, 0, 0),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__VersionInfo, 6, 0, 0),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttDef, 6, 0, 0),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_EntityValue, 3, 0, 1),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_SystemLiteral, 3, 0, 0),
  [751] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_AttlistDecl_repeat1, 2, 0, 0), SHIFT(21),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [848] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token_PITarget = 0,
  ts_external_token__pi_content = 1,
  ts_external_token_Comment = 2,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_PITarget] = sym_PITarget,
  [ts_external_token__pi_content] = sym__pi_content,
  [ts_external_token_Comment] = sym_Comment,
};

static const bool ts_external_scanner_states[5][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_PITarget] = true,
    [ts_external_token__pi_content] = true,
    [ts_external_token_Comment] = true,
  },
  [2] = {
    [ts_external_token_Comment] = true,
  },
  [3] = {
    [ts_external_token_PITarget] = true,
  },
  [4] = {
    [ts_external_token__pi_content] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_dtd_external_scanner_create(void);
void tree_sitter_dtd_external_scanner_destroy(void *);
bool tree_sitter_dtd_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_dtd_external_scanner_serialize(void *, char *);
void tree_sitter_dtd_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_dtd(void) {
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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_Name,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_dtd_external_scanner_create,
      tree_sitter_dtd_external_scanner_destroy,
      tree_sitter_dtd_external_scanner_scan,
      tree_sitter_dtd_external_scanner_serialize,
      tree_sitter_dtd_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
