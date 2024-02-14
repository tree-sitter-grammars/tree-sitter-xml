#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 454
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 140
#define ALIAS_COUNT 0
#define TOKEN_COUNT 73
#define EXTERNAL_TOKEN_COUNT 7
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 12
#define PRODUCTION_ID_COUNT 5

enum ts_symbol_identifiers {
  sym_Name = 1,
  anon_sym_LT_BANG_LBRACK = 2,
  anon_sym_IGNORE = 3,
  anon_sym_INCLUDE = 4,
  anon_sym_LBRACK = 5,
  anon_sym_RBRACK_RBRACK_GT = 6,
  anon_sym_LT_BANG = 7,
  anon_sym_ELEMENT = 8,
  anon_sym_GT = 9,
  anon_sym_EMPTY = 10,
  anon_sym_ANY = 11,
  anon_sym_LPAREN = 12,
  anon_sym_POUNDPCDATA = 13,
  anon_sym_PIPE = 14,
  anon_sym_RPAREN = 15,
  anon_sym_STAR = 16,
  anon_sym_QMARK = 17,
  anon_sym_PLUS = 18,
  anon_sym_COMMA = 19,
  anon_sym_ATTLIST = 20,
  anon_sym_CDATA = 21,
  sym_TokenizedType = 22,
  anon_sym_NOTATION = 23,
  anon_sym_POUNDREQUIRED = 24,
  anon_sym_POUNDIMPLIED = 25,
  anon_sym_POUNDFIXED = 26,
  anon_sym_ENTITY = 27,
  anon_sym_PERCENT = 28,
  anon_sym_DQUOTE = 29,
  aux_sym_EntityValue_token1 = 30,
  anon_sym_SQUOTE = 31,
  aux_sym_EntityValue_token2 = 32,
  anon_sym_NDATA = 33,
  anon_sym_SEMI = 34,
  sym__S = 35,
  sym_Nmtoken = 36,
  anon_sym_AMP = 37,
  anon_sym_AMP_POUND = 38,
  aux_sym_CharRef_token1 = 39,
  anon_sym_AMP_POUNDx = 40,
  aux_sym_CharRef_token2 = 41,
  aux_sym_AttValue_token1 = 42,
  aux_sym_AttValue_token2 = 43,
  anon_sym_SYSTEM = 44,
  anon_sym_PUBLIC = 45,
  aux_sym_SystemLiteral_token1 = 46,
  aux_sym_SystemLiteral_token2 = 47,
  aux_sym_PubidLiteral_token1 = 48,
  aux_sym_PubidLiteral_token2 = 49,
  anon_sym_LT_QMARK = 50,
  anon_sym_xml = 51,
  anon_sym_QMARK_GT = 52,
  anon_sym_version = 53,
  sym_VersionNum = 54,
  anon_sym_encoding = 55,
  sym_EncName = 56,
  anon_sym_EQ = 57,
  anon_sym_standalone = 58,
  anon_sym_yes = 59,
  anon_sym_no = 60,
  anon_sym_DOCTYPE = 61,
  anon_sym_RBRACK = 62,
  anon_sym_LT = 63,
  anon_sym_SLASH_GT = 64,
  anon_sym_LT_SLASH = 65,
  anon_sym_xml_DASHstylesheet = 66,
  anon_sym_xml_DASHmodel = 67,
  sym_PITarget = 68,
  sym__pi_content = 69,
  sym_Comment = 70,
  sym_CharData = 71,
  sym_CData = 72,
  sym_document = 73,
  sym__markupdecl = 74,
  sym__DeclSep = 75,
  sym_elementdecl = 76,
  sym_contentspec = 77,
  sym_Mixed = 78,
  sym_children = 79,
  sym__cp = 80,
  sym__choice = 81,
  sym_AttlistDecl = 82,
  sym_AttDef = 83,
  sym__AttType = 84,
  sym_StringType = 85,
  sym__EnumeratedType = 86,
  sym_NotationType = 87,
  sym_Enumeration = 88,
  sym_DefaultDecl = 89,
  sym__EntityDecl = 90,
  sym_GEDecl = 91,
  sym_PEDecl = 92,
  sym_EntityValue = 93,
  sym_NDataDecl = 94,
  sym_NotationDecl = 95,
  sym_PEReference = 96,
  sym__Reference = 97,
  sym_EntityRef = 98,
  sym_CharRef = 99,
  sym_AttValue = 100,
  sym_ExternalID = 101,
  sym_PublicID = 102,
  sym_SystemLiteral = 103,
  sym_PubidLiteral = 104,
  sym_XMLDecl = 105,
  sym__VersionInfo = 106,
  sym__EncodingDecl = 107,
  sym_PI = 108,
  sym__Eq = 109,
  sym_prolog = 110,
  sym__Misc = 111,
  sym__SDDecl = 112,
  sym_doctypedecl = 113,
  aux_sym__intSubset = 114,
  sym_element = 115,
  sym_EmptyElemTag = 116,
  sym_Attribute = 117,
  sym_STag = 118,
  sym_ETag = 119,
  sym_content = 120,
  sym_CDSect = 121,
  sym_CDStart = 122,
  sym_StyleSheetPI = 123,
  sym_XmlModelPI = 124,
  sym_PseudoAtt = 125,
  sym_PseudoAttValue = 126,
  aux_sym_document_repeat1 = 127,
  aux_sym_Mixed_repeat1 = 128,
  aux_sym__choice_repeat1 = 129,
  aux_sym_AttlistDecl_repeat1 = 130,
  aux_sym_NotationType_repeat1 = 131,
  aux_sym_Enumeration_repeat1 = 132,
  aux_sym_EntityValue_repeat1 = 133,
  aux_sym_EntityValue_repeat2 = 134,
  aux_sym_AttValue_repeat1 = 135,
  aux_sym_AttValue_repeat2 = 136,
  aux_sym_EmptyElemTag_repeat1 = 137,
  aux_sym_content_repeat1 = 138,
  aux_sym_StyleSheetPI_repeat1 = 139,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_Name] = "Name",
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
  [anon_sym_CDATA] = "CDATA",
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
  [anon_sym_LT_QMARK] = "<\?",
  [anon_sym_xml] = "xml",
  [anon_sym_QMARK_GT] = "\?>",
  [anon_sym_version] = "version",
  [sym_VersionNum] = "VersionNum",
  [anon_sym_encoding] = "encoding",
  [sym_EncName] = "EncName",
  [anon_sym_EQ] = "=",
  [anon_sym_standalone] = "standalone",
  [anon_sym_yes] = "yes",
  [anon_sym_no] = "no",
  [anon_sym_DOCTYPE] = "DOCTYPE",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LT] = "<",
  [anon_sym_SLASH_GT] = "/>",
  [anon_sym_LT_SLASH] = "</",
  [anon_sym_xml_DASHstylesheet] = "xml-stylesheet",
  [anon_sym_xml_DASHmodel] = "xml-model",
  [sym_PITarget] = "PITarget",
  [sym__pi_content] = "_pi_content",
  [sym_Comment] = "Comment",
  [sym_CharData] = "CharData",
  [sym_CData] = "CData",
  [sym_document] = "document",
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
  [sym_StringType] = "StringType",
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
  [sym_XMLDecl] = "XMLDecl",
  [sym__VersionInfo] = "_VersionInfo",
  [sym__EncodingDecl] = "_EncodingDecl",
  [sym_PI] = "PI",
  [sym__Eq] = "_Eq",
  [sym_prolog] = "prolog",
  [sym__Misc] = "_Misc",
  [sym__SDDecl] = "_SDDecl",
  [sym_doctypedecl] = "doctypedecl",
  [aux_sym__intSubset] = "_intSubset",
  [sym_element] = "element",
  [sym_EmptyElemTag] = "EmptyElemTag",
  [sym_Attribute] = "Attribute",
  [sym_STag] = "STag",
  [sym_ETag] = "ETag",
  [sym_content] = "content",
  [sym_CDSect] = "CDSect",
  [sym_CDStart] = "CDStart",
  [sym_StyleSheetPI] = "StyleSheetPI",
  [sym_XmlModelPI] = "XmlModelPI",
  [sym_PseudoAtt] = "PseudoAtt",
  [sym_PseudoAttValue] = "PseudoAttValue",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_Mixed_repeat1] = "Mixed_repeat1",
  [aux_sym__choice_repeat1] = "_choice_repeat1",
  [aux_sym_AttlistDecl_repeat1] = "AttlistDecl_repeat1",
  [aux_sym_NotationType_repeat1] = "NotationType_repeat1",
  [aux_sym_Enumeration_repeat1] = "Enumeration_repeat1",
  [aux_sym_EntityValue_repeat1] = "EntityValue_repeat1",
  [aux_sym_EntityValue_repeat2] = "EntityValue_repeat2",
  [aux_sym_AttValue_repeat1] = "AttValue_repeat1",
  [aux_sym_AttValue_repeat2] = "AttValue_repeat2",
  [aux_sym_EmptyElemTag_repeat1] = "EmptyElemTag_repeat1",
  [aux_sym_content_repeat1] = "content_repeat1",
  [aux_sym_StyleSheetPI_repeat1] = "StyleSheetPI_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_Name] = sym_Name,
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
  [anon_sym_CDATA] = anon_sym_CDATA,
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
  [anon_sym_LT_QMARK] = anon_sym_LT_QMARK,
  [anon_sym_xml] = anon_sym_xml,
  [anon_sym_QMARK_GT] = anon_sym_QMARK_GT,
  [anon_sym_version] = anon_sym_version,
  [sym_VersionNum] = sym_VersionNum,
  [anon_sym_encoding] = anon_sym_encoding,
  [sym_EncName] = sym_EncName,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_standalone] = anon_sym_standalone,
  [anon_sym_yes] = anon_sym_yes,
  [anon_sym_no] = anon_sym_no,
  [anon_sym_DOCTYPE] = anon_sym_DOCTYPE,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_SLASH_GT] = anon_sym_SLASH_GT,
  [anon_sym_LT_SLASH] = anon_sym_LT_SLASH,
  [anon_sym_xml_DASHstylesheet] = anon_sym_xml_DASHstylesheet,
  [anon_sym_xml_DASHmodel] = anon_sym_xml_DASHmodel,
  [sym_PITarget] = sym_PITarget,
  [sym__pi_content] = sym__pi_content,
  [sym_Comment] = sym_Comment,
  [sym_CharData] = sym_CharData,
  [sym_CData] = sym_CData,
  [sym_document] = sym_document,
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
  [sym_StringType] = sym_StringType,
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
  [sym_XMLDecl] = sym_XMLDecl,
  [sym__VersionInfo] = sym__VersionInfo,
  [sym__EncodingDecl] = sym__EncodingDecl,
  [sym_PI] = sym_PI,
  [sym__Eq] = sym__Eq,
  [sym_prolog] = sym_prolog,
  [sym__Misc] = sym__Misc,
  [sym__SDDecl] = sym__SDDecl,
  [sym_doctypedecl] = sym_doctypedecl,
  [aux_sym__intSubset] = aux_sym__intSubset,
  [sym_element] = sym_element,
  [sym_EmptyElemTag] = sym_EmptyElemTag,
  [sym_Attribute] = sym_Attribute,
  [sym_STag] = sym_STag,
  [sym_ETag] = sym_ETag,
  [sym_content] = sym_content,
  [sym_CDSect] = sym_CDSect,
  [sym_CDStart] = sym_CDStart,
  [sym_StyleSheetPI] = sym_StyleSheetPI,
  [sym_XmlModelPI] = sym_XmlModelPI,
  [sym_PseudoAtt] = sym_PseudoAtt,
  [sym_PseudoAttValue] = sym_PseudoAttValue,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_Mixed_repeat1] = aux_sym_Mixed_repeat1,
  [aux_sym__choice_repeat1] = aux_sym__choice_repeat1,
  [aux_sym_AttlistDecl_repeat1] = aux_sym_AttlistDecl_repeat1,
  [aux_sym_NotationType_repeat1] = aux_sym_NotationType_repeat1,
  [aux_sym_Enumeration_repeat1] = aux_sym_Enumeration_repeat1,
  [aux_sym_EntityValue_repeat1] = aux_sym_EntityValue_repeat1,
  [aux_sym_EntityValue_repeat2] = aux_sym_EntityValue_repeat2,
  [aux_sym_AttValue_repeat1] = aux_sym_AttValue_repeat1,
  [aux_sym_AttValue_repeat2] = aux_sym_AttValue_repeat2,
  [aux_sym_EmptyElemTag_repeat1] = aux_sym_EmptyElemTag_repeat1,
  [aux_sym_content_repeat1] = aux_sym_content_repeat1,
  [aux_sym_StyleSheetPI_repeat1] = aux_sym_StyleSheetPI_repeat1,
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
  [anon_sym_CDATA] = {
    .visible = true,
    .named = false,
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
  [anon_sym_standalone] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_yes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOCTYPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xml_DASHstylesheet] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xml_DASHmodel] = {
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
  [sym_CharData] = {
    .visible = true,
    .named = true,
  },
  [sym_CData] = {
    .visible = true,
    .named = true,
  },
  [sym_document] = {
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
  [sym_StringType] = {
    .visible = true,
    .named = true,
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
  [sym_XMLDecl] = {
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
  [sym_prolog] = {
    .visible = true,
    .named = true,
  },
  [sym__Misc] = {
    .visible = false,
    .named = true,
  },
  [sym__SDDecl] = {
    .visible = false,
    .named = true,
  },
  [sym_doctypedecl] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__intSubset] = {
    .visible = false,
    .named = false,
  },
  [sym_element] = {
    .visible = true,
    .named = true,
  },
  [sym_EmptyElemTag] = {
    .visible = true,
    .named = true,
  },
  [sym_Attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_STag] = {
    .visible = true,
    .named = true,
  },
  [sym_ETag] = {
    .visible = true,
    .named = true,
  },
  [sym_content] = {
    .visible = true,
    .named = true,
  },
  [sym_CDSect] = {
    .visible = true,
    .named = true,
  },
  [sym_CDStart] = {
    .visible = true,
    .named = true,
  },
  [sym_StyleSheetPI] = {
    .visible = true,
    .named = true,
  },
  [sym_XmlModelPI] = {
    .visible = true,
    .named = true,
  },
  [sym_PseudoAtt] = {
    .visible = true,
    .named = true,
  },
  [sym_PseudoAttValue] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_Mixed_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__choice_repeat1] = {
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
  [aux_sym_EmptyElemTag_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_content_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_StyleSheetPI_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_content = 1,
  field_root = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_content] = "content",
  [field_root] = "root",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_root, 0},
  [1] =
    {field_root, 1},
  [2] =
    {field_root, 2},
  [3] =
    {field_content, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 2,
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
  [82] = 41,
  [83] = 30,
  [84] = 84,
  [85] = 85,
  [86] = 41,
  [87] = 87,
  [88] = 28,
  [89] = 89,
  [90] = 30,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 53,
  [100] = 65,
  [101] = 101,
  [102] = 102,
  [103] = 28,
  [104] = 53,
  [105] = 105,
  [106] = 106,
  [107] = 51,
  [108] = 108,
  [109] = 109,
  [110] = 41,
  [111] = 111,
  [112] = 53,
  [113] = 113,
  [114] = 30,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 41,
  [120] = 28,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 30,
  [127] = 127,
  [128] = 53,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 49,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 134,
  [147] = 147,
  [148] = 148,
  [149] = 130,
  [150] = 150,
  [151] = 55,
  [152] = 133,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 31,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 63,
  [166] = 64,
  [167] = 48,
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
  [179] = 38,
  [180] = 180,
  [181] = 173,
  [182] = 182,
  [183] = 183,
  [184] = 29,
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
  [251] = 247,
  [252] = 252,
  [253] = 247,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 249,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 65,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 51,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 248,
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
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 361,
  [362] = 362,
  [363] = 363,
  [364] = 364,
  [365] = 365,
  [366] = 366,
  [367] = 367,
  [368] = 368,
  [369] = 369,
  [370] = 370,
  [371] = 371,
  [372] = 372,
  [373] = 373,
  [374] = 374,
  [375] = 375,
  [376] = 376,
  [377] = 377,
  [378] = 378,
  [379] = 379,
  [380] = 380,
  [381] = 381,
  [382] = 382,
  [383] = 383,
  [384] = 384,
  [385] = 385,
  [386] = 386,
  [387] = 387,
  [388] = 388,
  [389] = 389,
  [390] = 390,
  [391] = 391,
  [392] = 392,
  [393] = 393,
  [394] = 394,
  [395] = 395,
  [396] = 396,
  [397] = 397,
  [398] = 398,
  [399] = 399,
  [400] = 400,
  [401] = 401,
  [402] = 402,
  [403] = 403,
  [404] = 404,
  [405] = 405,
  [406] = 406,
  [407] = 407,
  [408] = 408,
  [409] = 409,
  [410] = 410,
  [411] = 411,
  [412] = 412,
  [413] = 413,
  [414] = 414,
  [415] = 415,
  [416] = 416,
  [417] = 340,
  [418] = 395,
  [419] = 419,
  [420] = 392,
  [421] = 421,
  [422] = 388,
  [423] = 351,
  [424] = 424,
  [425] = 340,
  [426] = 395,
  [427] = 392,
  [428] = 351,
  [429] = 340,
  [430] = 395,
  [431] = 351,
  [432] = 340,
  [433] = 395,
  [434] = 421,
  [435] = 409,
  [436] = 408,
  [437] = 407,
  [438] = 406,
  [439] = 405,
  [440] = 400,
  [441] = 343,
  [442] = 409,
  [443] = 408,
  [444] = 407,
  [445] = 400,
  [446] = 343,
  [447] = 409,
  [448] = 408,
  [449] = 407,
  [450] = 343,
  [451] = 409,
  [452] = 408,
  [453] = 407,
};

static inline bool aux_sym_PubidLiteral_token1_character_set_1(int32_t c) {
  return (c < '\''
    ? (c < ' '
      ? (c < '\r'
        ? c == '\n'
        : c <= '\r')
      : (c <= '!' || (c >= '#' && c <= '%')))
    : (c <= ';' || (c < '_'
      ? (c < '?'
        ? c == '='
        : c <= 'Z')
      : (c <= '_' || (c >= 'a' && c <= 'z')))));
}

static inline bool aux_sym_PubidLiteral_token2_character_set_1(int32_t c) {
  return (c < '('
    ? (c < ' '
      ? (c < '\r'
        ? c == '\n'
        : c <= '\r')
      : (c <= '!' || (c >= '#' && c <= '%')))
    : (c <= ';' || (c < '_'
      ? (c < '?'
        ? c == '='
        : c <= 'Z')
      : (c <= '_' || (c >= 'a' && c <= 'z')))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(42);
      if (lookahead == '"') ADVANCE(67);
      if (lookahead == '#') ADVANCE(72);
      if (lookahead == '%') ADVANCE(66);
      if (lookahead == '&') ADVANCE(121);
      if (lookahead == '\'') ADVANCE(81);
      if (lookahead == '(') ADVANCE(49);
      if (lookahead == ')') ADVANCE(52);
      if (lookahead == '*') ADVANCE(53);
      if (lookahead == '+') ADVANCE(55);
      if (lookahead == ',') ADVANCE(56);
      if (lookahead == '/') ADVANCE(70);
      if (lookahead == '1') ADVANCE(69);
      if (lookahead == ';') ADVANCE(83);
      if (lookahead == '<') ADVANCE(139);
      if (lookahead == '=') ADVANCE(136);
      if (lookahead == '>') ADVANCE(48);
      if (lookahead == '?') ADVANCE(54);
      if (lookahead == 'E') ADVANCE(74);
      if (lookahead == 'I') ADVANCE(71);
      if (lookahead == 'N') ADVANCE(73);
      if (lookahead == '[') ADVANCE(44);
      if (lookahead == ']') ADVANCE(138);
      if (lookahead == '_') ADVANCE(80);
      if (lookahead == '|') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(77);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == 183) ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(75);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      if (lookahead != 0) ADVANCE(68);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(67);
      if (lookahead == '#') ADVANCE(28);
      if (lookahead == '%') ADVANCE(66);
      if (lookahead == '\'') ADVANCE(81);
      if (lookahead == '(') ADVANCE(49);
      if (lookahead == ')') ADVANCE(52);
      if (lookahead == '*') ADVANCE(53);
      if (lookahead == '+') ADVANCE(55);
      if (lookahead == ',') ADVANCE(56);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '>') ADVANCE(48);
      if (lookahead == '?') ADVANCE(54);
      if (lookahead == '[') ADVANCE(44);
      if (lookahead == ']') ADVANCE(36);
      if (lookahead == '|') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(67);
      if (lookahead == '%') ADVANCE(66);
      if (lookahead == '&') ADVANCE(121);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(68);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(67);
      if (lookahead == '&') ADVANCE(121);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(126);
      END_STATE();
    case 4:
      if (lookahead == '%') ADVANCE(66);
      if (lookahead == '&') ADVANCE(121);
      if (lookahead == '\'') ADVANCE(81);
      if (lookahead == '<') ADVANCE(141);
      if (lookahead != 0) ADVANCE(82);
      END_STATE();
    case 5:
      if (lookahead == '&') ADVANCE(121);
      if (lookahead == '\'') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(127);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(38);
      END_STATE();
    case 7:
      if (lookahead == '>') ADVANCE(142);
      END_STATE();
    case 8:
      if (lookahead == '>') ADVANCE(45);
      END_STATE();
    case 9:
      if (lookahead == '>') ADVANCE(133);
      END_STATE();
    case 10:
      if (lookahead == '?') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 11:
      if (lookahead == 'A') ADVANCE(32);
      END_STATE();
    case 12:
      if (lookahead == 'A') ADVANCE(50);
      END_STATE();
    case 13:
      if (lookahead == 'C') ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == 'D') ADVANCE(11);
      END_STATE();
    case 15:
      if (lookahead == 'D') ADVANCE(65);
      END_STATE();
    case 16:
      if (lookahead == 'D') ADVANCE(64);
      END_STATE();
    case 17:
      if (lookahead == 'D') ADVANCE(63);
      END_STATE();
    case 18:
      if (lookahead == 'E') ADVANCE(30);
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
      if (lookahead == 'R') ADVANCE(18);
      END_STATE();
    case 23:
      if (lookahead == 'I') ADVANCE(34);
      END_STATE();
    case 24:
      if (lookahead == 'I') ADVANCE(31);
      END_STATE();
    case 25:
      if (lookahead == 'I') ADVANCE(20);
      END_STATE();
    case 26:
      if (lookahead == 'L') ADVANCE(25);
      END_STATE();
    case 27:
      if (lookahead == 'M') ADVANCE(29);
      END_STATE();
    case 28:
      if (lookahead == 'P') ADVANCE(13);
      END_STATE();
    case 29:
      if (lookahead == 'P') ADVANCE(26);
      END_STATE();
    case 30:
      if (lookahead == 'Q') ADVANCE(33);
      END_STATE();
    case 31:
      if (lookahead == 'R') ADVANCE(21);
      END_STATE();
    case 32:
      if (lookahead == 'T') ADVANCE(12);
      END_STATE();
    case 33:
      if (lookahead == 'U') ADVANCE(24);
      END_STATE();
    case 34:
      if (lookahead == 'X') ADVANCE(19);
      END_STATE();
    case 35:
      if (lookahead == '[') ADVANCE(43);
      END_STATE();
    case 36:
      if (lookahead == ']') ADVANCE(8);
      END_STATE();
    case 37:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(84);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(120);
      END_STATE();
    case 38:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      END_STATE();
    case 39:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(125);
      END_STATE();
    case 40:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 41:
      if (eof) ADVANCE(42);
      if (lookahead == '"') ADVANCE(67);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == '%') ADVANCE(66);
      if (lookahead == '\'') ADVANCE(81);
      if (lookahead == '(') ADVANCE(49);
      if (lookahead == ')') ADVANCE(52);
      if (lookahead == '*') ADVANCE(53);
      if (lookahead == '+') ADVANCE(55);
      if (lookahead == ',') ADVANCE(56);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '1') ADVANCE(6);
      if (lookahead == ';') ADVANCE(83);
      if (lookahead == '<') ADVANCE(140);
      if (lookahead == '=') ADVANCE(136);
      if (lookahead == '>') ADVANCE(48);
      if (lookahead == '?') ADVANCE(54);
      if (lookahead == 'E') ADVANCE(102);
      if (lookahead == 'I') ADVANCE(85);
      if (lookahead == 'N') ADVANCE(100);
      if (lookahead == '[') ADVANCE(44);
      if (lookahead == ']') ADVANCE(137);
      if (lookahead == '|') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(ts_builtin_sym_end);
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
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_LT_BANG);
      if (lookahead == '[') ADVANCE(43);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_POUNDPCDATA);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_TokenizedType);
      if (lookahead == 'R') ADVANCE(86);
      if (lookahead == ':' ||
          lookahead == 183) ADVANCE(116);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_TokenizedType);
      if (lookahead == 'R') ADVANCE(89);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(116);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_TokenizedType);
      if (lookahead == 'S') ADVANCE(61);
      if (lookahead == ':' ||
          lookahead == 183) ADVANCE(116);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_TokenizedType);
      if (lookahead == 'S') ADVANCE(62);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(116);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_TokenizedType);
      if (lookahead == ':' ||
          lookahead == 183) ADVANCE(116);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_TokenizedType);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(116);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_POUNDREQUIRED);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_POUNDIMPLIED);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_POUNDFIXED);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == '.') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(119);
      if (lookahead == '-' ||
          lookahead == ':' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(120);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == '>') ADVANCE(142);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == 'D') ADVANCE(57);
      if (lookahead == ':' ||
          lookahead == 183) ADVANCE(116);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == 'F') ADVANCE(23);
      if (lookahead == 'I') ADVANCE(27);
      if (lookahead == 'P') ADVANCE(13);
      if (lookahead == 'R') ADVANCE(18);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == 'M') ADVANCE(109);
      if (lookahead == ':' ||
          lookahead == 183) ADVANCE(116);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == 'N') ADVANCE(108);
      if (lookahead == ':' ||
          lookahead == 183) ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(114);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == ':' ||
          lookahead == 183) ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(114);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == ':' ||
          lookahead == 183) ADVANCE(116);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(84);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(119);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(120);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(120);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_EntityValue_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(116);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_EntityValue_token2);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym__S);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'D') ADVANCE(58);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(116);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'E') ADVANCE(92);
      if (lookahead == ':' ||
          lookahead == 183) ADVANCE(116);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'E') ADVANCE(101);
      if (lookahead == ':' ||
          lookahead == 183) ADVANCE(116);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'E') ADVANCE(106);
      if (lookahead == ':' ||
          lookahead == 183) ADVANCE(116);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'E') ADVANCE(93);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(116);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'E') ADVANCE(107);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(116);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'E') ADVANCE(103);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(116);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'F') ADVANCE(59);
      if (lookahead == ':' ||
          lookahead == 183) ADVANCE(116);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'F') ADVANCE(60);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(116);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'I') ADVANCE(110);
      if (lookahead == ':' ||
          lookahead == 183) ADVANCE(116);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'I') ADVANCE(88);
      if (lookahead == 'Y') ADVANCE(61);
      if (lookahead == ':' ||
          lookahead == 183) ADVANCE(116);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'I') ADVANCE(113);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(116);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'I') ADVANCE(90);
      if (lookahead == 'Y') ADVANCE(62);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(116);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'K') ADVANCE(87);
      if (lookahead == ':' ||
          lookahead == 183) ADVANCE(116);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'K') ADVANCE(91);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(116);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'M') ADVANCE(112);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(116);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'N') ADVANCE(59);
      if (lookahead == ':' ||
          lookahead == 183) ADVANCE(116);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'N') ADVANCE(111);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(116);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'N') ADVANCE(60);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(116);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'O') ADVANCE(98);
      if (lookahead == ':' ||
          lookahead == 183) ADVANCE(116);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'O') ADVANCE(99);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(116);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'S') ADVANCE(61);
      if (lookahead == ':' ||
          lookahead == 183) ADVANCE(116);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'S') ADVANCE(62);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(116);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'T') ADVANCE(94);
      if (lookahead == ':' ||
          lookahead == 183) ADVANCE(116);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'T') ADVANCE(104);
      if (lookahead == ':' ||
          lookahead == 183) ADVANCE(116);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'T') ADVANCE(95);
      if (lookahead == ':' ||
          lookahead == 183) ADVANCE(116);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'T') ADVANCE(96);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(116);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'T') ADVANCE(105);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(116);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == 'T') ADVANCE(97);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(116);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == ':' ||
          lookahead == 183) ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(114);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == ':' ||
          lookahead == 183) ADVANCE(116);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_Name);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(116);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_Nmtoken);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(120);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_Nmtoken);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(119);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(120);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_Nmtoken);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(119);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(120);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_Nmtoken);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 183) ADVANCE(120);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '#') ADVANCE(122);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_AMP_POUND);
      if (lookahead == 'x') ADVANCE(124);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_CharRef_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_AMP_POUNDx);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_CharRef_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(125);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_AttValue_token1);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_AttValue_token2);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_SystemLiteral_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(128);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_SystemLiteral_token2);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(129);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_PubidLiteral_token1);
      if (aux_sym_PubidLiteral_token1_character_set_1(lookahead)) ADVANCE(130);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_PubidLiteral_token2);
      if (aux_sym_PubidLiteral_token2_character_set_1(lookahead)) ADVANCE(131);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_LT_QMARK);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_QMARK_GT);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_VersionNum);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_EncName);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead == ']') ADVANCE(8);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(47);
      if (lookahead == '/') ADVANCE(143);
      if (lookahead == '?') ADVANCE(132);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '?') ADVANCE(132);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(35);
      if (lookahead == '/') ADVANCE(143);
      if (lookahead == '?') ADVANCE(132);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
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
      if (lookahead == 'A') ADVANCE(1);
      if (lookahead == 'C') ADVANCE(2);
      if (lookahead == 'D') ADVANCE(3);
      if (lookahead == 'E') ADVANCE(4);
      if (lookahead == 'I') ADVANCE(5);
      if (lookahead == 'N') ADVANCE(6);
      if (lookahead == 'P') ADVANCE(7);
      if (lookahead == 'S') ADVANCE(8);
      if (lookahead == 'e') ADVANCE(9);
      if (lookahead == 'n') ADVANCE(10);
      if (lookahead == 's') ADVANCE(11);
      if (lookahead == 'v') ADVANCE(12);
      if (lookahead == 'x') ADVANCE(13);
      if (lookahead == 'y') ADVANCE(14);
      END_STATE();
    case 1:
      if (lookahead == 'N') ADVANCE(15);
      if (lookahead == 'T') ADVANCE(16);
      END_STATE();
    case 2:
      if (lookahead == 'D') ADVANCE(17);
      END_STATE();
    case 3:
      if (lookahead == 'O') ADVANCE(18);
      END_STATE();
    case 4:
      if (lookahead == 'L') ADVANCE(19);
      if (lookahead == 'M') ADVANCE(20);
      if (lookahead == 'N') ADVANCE(21);
      END_STATE();
    case 5:
      if (lookahead == 'G') ADVANCE(22);
      if (lookahead == 'N') ADVANCE(23);
      END_STATE();
    case 6:
      if (lookahead == 'D') ADVANCE(24);
      if (lookahead == 'O') ADVANCE(25);
      END_STATE();
    case 7:
      if (lookahead == 'U') ADVANCE(26);
      END_STATE();
    case 8:
      if (lookahead == 'Y') ADVANCE(27);
      END_STATE();
    case 9:
      if (lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 10:
      if (lookahead == 'o') ADVANCE(29);
      END_STATE();
    case 11:
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 13:
      if (lookahead == 'm') ADVANCE(32);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 15:
      if (lookahead == 'Y') ADVANCE(34);
      END_STATE();
    case 16:
      if (lookahead == 'T') ADVANCE(35);
      END_STATE();
    case 17:
      if (lookahead == 'A') ADVANCE(36);
      END_STATE();
    case 18:
      if (lookahead == 'C') ADVANCE(37);
      END_STATE();
    case 19:
      if (lookahead == 'E') ADVANCE(38);
      END_STATE();
    case 20:
      if (lookahead == 'P') ADVANCE(39);
      END_STATE();
    case 21:
      if (lookahead == 'T') ADVANCE(40);
      END_STATE();
    case 22:
      if (lookahead == 'N') ADVANCE(41);
      END_STATE();
    case 23:
      if (lookahead == 'C') ADVANCE(42);
      END_STATE();
    case 24:
      if (lookahead == 'A') ADVANCE(43);
      END_STATE();
    case 25:
      if (lookahead == 'T') ADVANCE(44);
      END_STATE();
    case 26:
      if (lookahead == 'B') ADVANCE(45);
      END_STATE();
    case 27:
      if (lookahead == 'S') ADVANCE(46);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(47);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_no);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(48);
      END_STATE();
    case 31:
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 32:
      if (lookahead == 'l') ADVANCE(50);
      END_STATE();
    case 33:
      if (lookahead == 's') ADVANCE(51);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_ANY);
      END_STATE();
    case 35:
      if (lookahead == 'L') ADVANCE(52);
      END_STATE();
    case 36:
      if (lookahead == 'T') ADVANCE(53);
      END_STATE();
    case 37:
      if (lookahead == 'T') ADVANCE(54);
      END_STATE();
    case 38:
      if (lookahead == 'M') ADVANCE(55);
      END_STATE();
    case 39:
      if (lookahead == 'T') ADVANCE(56);
      END_STATE();
    case 40:
      if (lookahead == 'I') ADVANCE(57);
      END_STATE();
    case 41:
      if (lookahead == 'O') ADVANCE(58);
      END_STATE();
    case 42:
      if (lookahead == 'L') ADVANCE(59);
      END_STATE();
    case 43:
      if (lookahead == 'T') ADVANCE(60);
      END_STATE();
    case 44:
      if (lookahead == 'A') ADVANCE(61);
      END_STATE();
    case 45:
      if (lookahead == 'L') ADVANCE(62);
      END_STATE();
    case 46:
      if (lookahead == 'T') ADVANCE(63);
      END_STATE();
    case 47:
      if (lookahead == 'o') ADVANCE(64);
      END_STATE();
    case 48:
      if (lookahead == 'n') ADVANCE(65);
      END_STATE();
    case 49:
      if (lookahead == 's') ADVANCE(66);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_xml);
      if (lookahead == '-') ADVANCE(67);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_yes);
      END_STATE();
    case 52:
      if (lookahead == 'I') ADVANCE(68);
      END_STATE();
    case 53:
      if (lookahead == 'A') ADVANCE(69);
      END_STATE();
    case 54:
      if (lookahead == 'Y') ADVANCE(70);
      END_STATE();
    case 55:
      if (lookahead == 'E') ADVANCE(71);
      END_STATE();
    case 56:
      if (lookahead == 'Y') ADVANCE(72);
      END_STATE();
    case 57:
      if (lookahead == 'T') ADVANCE(73);
      END_STATE();
    case 58:
      if (lookahead == 'R') ADVANCE(74);
      END_STATE();
    case 59:
      if (lookahead == 'U') ADVANCE(75);
      END_STATE();
    case 60:
      if (lookahead == 'A') ADVANCE(76);
      END_STATE();
    case 61:
      if (lookahead == 'T') ADVANCE(77);
      END_STATE();
    case 62:
      if (lookahead == 'I') ADVANCE(78);
      END_STATE();
    case 63:
      if (lookahead == 'E') ADVANCE(79);
      END_STATE();
    case 64:
      if (lookahead == 'd') ADVANCE(80);
      END_STATE();
    case 65:
      if (lookahead == 'd') ADVANCE(81);
      END_STATE();
    case 66:
      if (lookahead == 'i') ADVANCE(82);
      END_STATE();
    case 67:
      if (lookahead == 'm') ADVANCE(83);
      if (lookahead == 's') ADVANCE(84);
      END_STATE();
    case 68:
      if (lookahead == 'S') ADVANCE(85);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_CDATA);
      END_STATE();
    case 70:
      if (lookahead == 'P') ADVANCE(86);
      END_STATE();
    case 71:
      if (lookahead == 'N') ADVANCE(87);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_EMPTY);
      END_STATE();
    case 73:
      if (lookahead == 'Y') ADVANCE(88);
      END_STATE();
    case 74:
      if (lookahead == 'E') ADVANCE(89);
      END_STATE();
    case 75:
      if (lookahead == 'D') ADVANCE(90);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_NDATA);
      END_STATE();
    case 77:
      if (lookahead == 'I') ADVANCE(91);
      END_STATE();
    case 78:
      if (lookahead == 'C') ADVANCE(92);
      END_STATE();
    case 79:
      if (lookahead == 'M') ADVANCE(93);
      END_STATE();
    case 80:
      if (lookahead == 'i') ADVANCE(94);
      END_STATE();
    case 81:
      if (lookahead == 'a') ADVANCE(95);
      END_STATE();
    case 82:
      if (lookahead == 'o') ADVANCE(96);
      END_STATE();
    case 83:
      if (lookahead == 'o') ADVANCE(97);
      END_STATE();
    case 84:
      if (lookahead == 't') ADVANCE(98);
      END_STATE();
    case 85:
      if (lookahead == 'T') ADVANCE(99);
      END_STATE();
    case 86:
      if (lookahead == 'E') ADVANCE(100);
      END_STATE();
    case 87:
      if (lookahead == 'T') ADVANCE(101);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_ENTITY);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_IGNORE);
      END_STATE();
    case 90:
      if (lookahead == 'E') ADVANCE(102);
      END_STATE();
    case 91:
      if (lookahead == 'O') ADVANCE(103);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_PUBLIC);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_SYSTEM);
      END_STATE();
    case 94:
      if (lookahead == 'n') ADVANCE(104);
      END_STATE();
    case 95:
      if (lookahead == 'l') ADVANCE(105);
      END_STATE();
    case 96:
      if (lookahead == 'n') ADVANCE(106);
      END_STATE();
    case 97:
      if (lookahead == 'd') ADVANCE(107);
      END_STATE();
    case 98:
      if (lookahead == 'y') ADVANCE(108);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_ATTLIST);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_DOCTYPE);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_ELEMENT);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_INCLUDE);
      END_STATE();
    case 103:
      if (lookahead == 'N') ADVANCE(109);
      END_STATE();
    case 104:
      if (lookahead == 'g') ADVANCE(110);
      END_STATE();
    case 105:
      if (lookahead == 'o') ADVANCE(111);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_version);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 108:
      if (lookahead == 'l') ADVANCE(113);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_NOTATION);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_encoding);
      END_STATE();
    case 111:
      if (lookahead == 'n') ADVANCE(114);
      END_STATE();
    case 112:
      if (lookahead == 'l') ADVANCE(115);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_xml_DASHmodel);
      END_STATE();
    case 116:
      if (lookahead == 's') ADVANCE(118);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_standalone);
      END_STATE();
    case 118:
      if (lookahead == 'h') ADVANCE(119);
      END_STATE();
    case 119:
      if (lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 120:
      if (lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 121:
      if (lookahead == 't') ADVANCE(122);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_xml_DASHstylesheet);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 41, .external_lex_state = 2},
  [2] = {.lex_state = 4, .external_lex_state = 3},
  [3] = {.lex_state = 4, .external_lex_state = 3},
  [4] = {.lex_state = 4, .external_lex_state = 3},
  [5] = {.lex_state = 4, .external_lex_state = 3},
  [6] = {.lex_state = 41, .external_lex_state = 2},
  [7] = {.lex_state = 41, .external_lex_state = 2},
  [8] = {.lex_state = 41, .external_lex_state = 2},
  [9] = {.lex_state = 41, .external_lex_state = 2},
  [10] = {.lex_state = 41, .external_lex_state = 2},
  [11] = {.lex_state = 41, .external_lex_state = 2},
  [12] = {.lex_state = 41, .external_lex_state = 2},
  [13] = {.lex_state = 41, .external_lex_state = 2},
  [14] = {.lex_state = 41, .external_lex_state = 2},
  [15] = {.lex_state = 41, .external_lex_state = 2},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 41},
  [18] = {.lex_state = 41, .external_lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 41, .external_lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 41, .external_lex_state = 2},
  [24] = {.lex_state = 41, .external_lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 41, .external_lex_state = 2},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 4, .external_lex_state = 3},
  [30] = {.lex_state = 4, .external_lex_state = 3},
  [31] = {.lex_state = 4, .external_lex_state = 3},
  [32] = {.lex_state = 41, .external_lex_state = 2},
  [33] = {.lex_state = 41, .external_lex_state = 2},
  [34] = {.lex_state = 41, .external_lex_state = 2},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 5},
  [37] = {.lex_state = 5},
  [38] = {.lex_state = 4, .external_lex_state = 3},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 4, .external_lex_state = 3},
  [42] = {.lex_state = 4, .external_lex_state = 3},
  [43] = {.lex_state = 5},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 5},
  [46] = {.lex_state = 41, .external_lex_state = 2},
  [47] = {.lex_state = 41, .external_lex_state = 2},
  [48] = {.lex_state = 4, .external_lex_state = 3},
  [49] = {.lex_state = 4, .external_lex_state = 3},
  [50] = {.lex_state = 4, .external_lex_state = 3},
  [51] = {.lex_state = 4, .external_lex_state = 3},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 4, .external_lex_state = 3},
  [54] = {.lex_state = 41, .external_lex_state = 2},
  [55] = {.lex_state = 4, .external_lex_state = 3},
  [56] = {.lex_state = 41, .external_lex_state = 2},
  [57] = {.lex_state = 4, .external_lex_state = 3},
  [58] = {.lex_state = 41, .external_lex_state = 2},
  [59] = {.lex_state = 41, .external_lex_state = 2},
  [60] = {.lex_state = 4, .external_lex_state = 3},
  [61] = {.lex_state = 41, .external_lex_state = 2},
  [62] = {.lex_state = 41, .external_lex_state = 2},
  [63] = {.lex_state = 4, .external_lex_state = 3},
  [64] = {.lex_state = 4, .external_lex_state = 3},
  [65] = {.lex_state = 4, .external_lex_state = 3},
  [66] = {.lex_state = 41, .external_lex_state = 2},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 5},
  [69] = {.lex_state = 4, .external_lex_state = 3},
  [70] = {.lex_state = 41},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 41},
  [73] = {.lex_state = 41},
  [74] = {.lex_state = 41},
  [75] = {.lex_state = 41},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 41},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 41},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 2},
  [83] = {.lex_state = 2},
  [84] = {.lex_state = 41, .external_lex_state = 2},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 4},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 4},
  [89] = {.lex_state = 1},
  [90] = {.lex_state = 4},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 41, .external_lex_state = 2},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 41, .external_lex_state = 2},
  [96] = {.lex_state = 41, .external_lex_state = 2},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 1},
  [99] = {.lex_state = 2},
  [100] = {.lex_state = 41, .external_lex_state = 2},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 1},
  [103] = {.lex_state = 2},
  [104] = {.lex_state = 4},
  [105] = {.lex_state = 41, .external_lex_state = 2},
  [106] = {.lex_state = 41, .external_lex_state = 2},
  [107] = {.lex_state = 41, .external_lex_state = 2},
  [108] = {.lex_state = 41},
  [109] = {.lex_state = 1},
  [110] = {.lex_state = 5},
  [111] = {.lex_state = 41, .external_lex_state = 2},
  [112] = {.lex_state = 5},
  [113] = {.lex_state = 41},
  [114] = {.lex_state = 5},
  [115] = {.lex_state = 41, .external_lex_state = 2},
  [116] = {.lex_state = 41},
  [117] = {.lex_state = 41},
  [118] = {.lex_state = 41, .external_lex_state = 2},
  [119] = {.lex_state = 3},
  [120] = {.lex_state = 41, .external_lex_state = 2},
  [121] = {.lex_state = 1},
  [122] = {.lex_state = 41, .external_lex_state = 2},
  [123] = {.lex_state = 41, .external_lex_state = 2},
  [124] = {.lex_state = 41},
  [125] = {.lex_state = 41},
  [126] = {.lex_state = 3},
  [127] = {.lex_state = 41, .external_lex_state = 2},
  [128] = {.lex_state = 3},
  [129] = {.lex_state = 1},
  [130] = {.lex_state = 1},
  [131] = {.lex_state = 1, .external_lex_state = 4},
  [132] = {.lex_state = 41, .external_lex_state = 2},
  [133] = {.lex_state = 41},
  [134] = {.lex_state = 1},
  [135] = {.lex_state = 1},
  [136] = {.lex_state = 41},
  [137] = {.lex_state = 41, .external_lex_state = 2},
  [138] = {.lex_state = 10},
  [139] = {.lex_state = 41},
  [140] = {.lex_state = 1},
  [141] = {.lex_state = 41},
  [142] = {.lex_state = 41},
  [143] = {.lex_state = 41},
  [144] = {.lex_state = 41},
  [145] = {.lex_state = 41},
  [146] = {.lex_state = 1},
  [147] = {.lex_state = 1},
  [148] = {.lex_state = 1},
  [149] = {.lex_state = 1},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 41, .external_lex_state = 2},
  [152] = {.lex_state = 41},
  [153] = {.lex_state = 41, .external_lex_state = 2},
  [154] = {.lex_state = 41, .external_lex_state = 2},
  [155] = {.lex_state = 41, .external_lex_state = 2},
  [156] = {.lex_state = 41},
  [157] = {.lex_state = 41, .external_lex_state = 2},
  [158] = {.lex_state = 41},
  [159] = {.lex_state = 41},
  [160] = {.lex_state = 41, .external_lex_state = 2},
  [161] = {.lex_state = 41},
  [162] = {.lex_state = 1},
  [163] = {.lex_state = 1},
  [164] = {.lex_state = 1},
  [165] = {.lex_state = 41, .external_lex_state = 2},
  [166] = {.lex_state = 41, .external_lex_state = 2},
  [167] = {.lex_state = 41, .external_lex_state = 2},
  [168] = {.lex_state = 41},
  [169] = {.lex_state = 1},
  [170] = {.lex_state = 41},
  [171] = {.lex_state = 41},
  [172] = {.lex_state = 41, .external_lex_state = 2},
  [173] = {.lex_state = 41},
  [174] = {.lex_state = 41},
  [175] = {.lex_state = 1},
  [176] = {.lex_state = 41, .external_lex_state = 2},
  [177] = {.lex_state = 41},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 41, .external_lex_state = 2},
  [180] = {.lex_state = 41},
  [181] = {.lex_state = 41},
  [182] = {.lex_state = 41},
  [183] = {.lex_state = 41, .external_lex_state = 2},
  [184] = {.lex_state = 41, .external_lex_state = 2},
  [185] = {.lex_state = 41},
  [186] = {.lex_state = 41},
  [187] = {.lex_state = 41},
  [188] = {.lex_state = 41},
  [189] = {.lex_state = 41},
  [190] = {.lex_state = 41},
  [191] = {.lex_state = 41},
  [192] = {.lex_state = 1},
  [193] = {.lex_state = 41},
  [194] = {.lex_state = 41},
  [195] = {.lex_state = 41},
  [196] = {.lex_state = 41},
  [197] = {.lex_state = 41},
  [198] = {.lex_state = 1},
  [199] = {.lex_state = 41},
  [200] = {.lex_state = 10},
  [201] = {.lex_state = 10},
  [202] = {.lex_state = 1},
  [203] = {.lex_state = 10},
  [204] = {.lex_state = 1},
  [205] = {.lex_state = 41},
  [206] = {.lex_state = 10},
  [207] = {.lex_state = 1},
  [208] = {.lex_state = 41},
  [209] = {.lex_state = 41},
  [210] = {.lex_state = 41},
  [211] = {.lex_state = 41},
  [212] = {.lex_state = 1},
  [213] = {.lex_state = 10},
  [214] = {.lex_state = 41},
  [215] = {.lex_state = 41},
  [216] = {.lex_state = 41},
  [217] = {.lex_state = 41},
  [218] = {.lex_state = 1},
  [219] = {.lex_state = 41},
  [220] = {.lex_state = 10},
  [221] = {.lex_state = 41},
  [222] = {.lex_state = 41},
  [223] = {.lex_state = 41},
  [224] = {.lex_state = 41},
  [225] = {.lex_state = 10},
  [226] = {.lex_state = 41},
  [227] = {.lex_state = 10},
  [228] = {.lex_state = 41},
  [229] = {.lex_state = 10},
  [230] = {.lex_state = 10},
  [231] = {.lex_state = 10},
  [232] = {.lex_state = 41},
  [233] = {.lex_state = 41},
  [234] = {.lex_state = 41},
  [235] = {.lex_state = 41},
  [236] = {.lex_state = 41},
  [237] = {.lex_state = 1},
  [238] = {.lex_state = 1},
  [239] = {.lex_state = 1, .external_lex_state = 4},
  [240] = {.lex_state = 41},
  [241] = {.lex_state = 41},
  [242] = {.lex_state = 41},
  [243] = {.lex_state = 41},
  [244] = {.lex_state = 41},
  [245] = {.lex_state = 41},
  [246] = {.lex_state = 41},
  [247] = {.lex_state = 10},
  [248] = {.lex_state = 41},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 41},
  [251] = {.lex_state = 10},
  [252] = {.lex_state = 41},
  [253] = {.lex_state = 10},
  [254] = {.lex_state = 41},
  [255] = {.lex_state = 41},
  [256] = {.lex_state = 41},
  [257] = {.lex_state = 41},
  [258] = {.lex_state = 41},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 1},
  [261] = {.lex_state = 41},
  [262] = {.lex_state = 41},
  [263] = {.lex_state = 1, .external_lex_state = 5},
  [264] = {.lex_state = 41},
  [265] = {.lex_state = 41},
  [266] = {.lex_state = 1},
  [267] = {.lex_state = 41},
  [268] = {.lex_state = 41},
  [269] = {.lex_state = 41},
  [270] = {.lex_state = 41},
  [271] = {.lex_state = 10},
  [272] = {.lex_state = 41},
  [273] = {.lex_state = 10},
  [274] = {.lex_state = 41},
  [275] = {.lex_state = 41},
  [276] = {.lex_state = 10},
  [277] = {.lex_state = 10},
  [278] = {.lex_state = 1, .external_lex_state = 5},
  [279] = {.lex_state = 41},
  [280] = {.lex_state = 41},
  [281] = {.lex_state = 10},
  [282] = {.lex_state = 41},
  [283] = {.lex_state = 37},
  [284] = {.lex_state = 41},
  [285] = {.lex_state = 41},
  [286] = {.lex_state = 10},
  [287] = {.lex_state = 41},
  [288] = {.lex_state = 41},
  [289] = {.lex_state = 41},
  [290] = {.lex_state = 41},
  [291] = {.lex_state = 41},
  [292] = {.lex_state = 41},
  [293] = {.lex_state = 41},
  [294] = {.lex_state = 41},
  [295] = {.lex_state = 41},
  [296] = {.lex_state = 41},
  [297] = {.lex_state = 41},
  [298] = {.lex_state = 41},
  [299] = {.lex_state = 1},
  [300] = {.lex_state = 10},
  [301] = {.lex_state = 41},
  [302] = {.lex_state = 41},
  [303] = {.lex_state = 1},
  [304] = {.lex_state = 41},
  [305] = {.lex_state = 41},
  [306] = {.lex_state = 41},
  [307] = {.lex_state = 41},
  [308] = {.lex_state = 41},
  [309] = {.lex_state = 10},
  [310] = {.lex_state = 41},
  [311] = {.lex_state = 41},
  [312] = {.lex_state = 41},
  [313] = {.lex_state = 41},
  [314] = {.lex_state = 41},
  [315] = {.lex_state = 41},
  [316] = {.lex_state = 41},
  [317] = {.lex_state = 41},
  [318] = {.lex_state = 10},
  [319] = {.lex_state = 41},
  [320] = {.lex_state = 37},
  [321] = {.lex_state = 41},
  [322] = {.lex_state = 41},
  [323] = {.lex_state = 10},
  [324] = {.lex_state = 1},
  [325] = {.lex_state = 1},
  [326] = {.lex_state = 41},
  [327] = {.lex_state = 41},
  [328] = {.lex_state = 41},
  [329] = {.lex_state = 41},
  [330] = {.lex_state = 41},
  [331] = {.lex_state = 41},
  [332] = {.lex_state = 37},
  [333] = {.lex_state = 41},
  [334] = {.lex_state = 41},
  [335] = {.lex_state = 41},
  [336] = {.lex_state = 41},
  [337] = {.lex_state = 41},
  [338] = {.lex_state = 41},
  [339] = {.lex_state = 37},
  [340] = {.lex_state = 41},
  [341] = {.lex_state = 41},
  [342] = {.lex_state = 41},
  [343] = {.lex_state = 1},
  [344] = {.lex_state = 41},
  [345] = {.lex_state = 41},
  [346] = {.lex_state = 40},
  [347] = {.lex_state = 40},
  [348] = {.lex_state = 41},
  [349] = {.lex_state = 41},
  [350] = {.lex_state = 41},
  [351] = {.lex_state = 41},
  [352] = {.lex_state = 41},
  [353] = {.lex_state = 41},
  [354] = {.lex_state = 10},
  [355] = {.lex_state = 41},
  [356] = {.lex_state = 41},
  [357] = {.lex_state = 37},
  [358] = {.lex_state = 128},
  [359] = {.lex_state = 1},
  [360] = {.lex_state = 37},
  [361] = {.lex_state = 41},
  [362] = {.lex_state = 41},
  [363] = {.lex_state = 129},
  [364] = {.lex_state = 41},
  [365] = {.lex_state = 130},
  [366] = {.lex_state = 41},
  [367] = {.lex_state = 131},
  [368] = {.lex_state = 41},
  [369] = {.lex_state = 41},
  [370] = {.lex_state = 41},
  [371] = {.lex_state = 41},
  [372] = {.lex_state = 41},
  [373] = {.lex_state = 41},
  [374] = {.lex_state = 41},
  [375] = {.lex_state = 41},
  [376] = {.lex_state = 41},
  [377] = {.lex_state = 41},
  [378] = {.lex_state = 41},
  [379] = {.lex_state = 41},
  [380] = {.lex_state = 10},
  [381] = {.lex_state = 41},
  [382] = {.lex_state = 41},
  [383] = {.lex_state = 41},
  [384] = {.lex_state = 41},
  [385] = {.lex_state = 41},
  [386] = {.lex_state = 41},
  [387] = {.lex_state = 41},
  [388] = {.lex_state = 41},
  [389] = {.lex_state = 41},
  [390] = {.lex_state = 41},
  [391] = {.lex_state = 41},
  [392] = {.lex_state = 10},
  [393] = {.lex_state = 1},
  [394] = {.lex_state = 41},
  [395] = {.lex_state = 41},
  [396] = {.lex_state = 41},
  [397] = {.lex_state = 41},
  [398] = {.lex_state = 1},
  [399] = {.lex_state = 41},
  [400] = {.lex_state = 0, .external_lex_state = 6},
  [401] = {.lex_state = 1},
  [402] = {.lex_state = 1},
  [403] = {.lex_state = 41},
  [404] = {.lex_state = 41},
  [405] = {.lex_state = 1},
  [406] = {.lex_state = 0, .external_lex_state = 7},
  [407] = {.lex_state = 39},
  [408] = {.lex_state = 1},
  [409] = {.lex_state = 1},
  [410] = {.lex_state = 1},
  [411] = {.lex_state = 41},
  [412] = {.lex_state = 41},
  [413] = {.lex_state = 41},
  [414] = {.lex_state = 41},
  [415] = {.lex_state = 41},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 41},
  [418] = {.lex_state = 41},
  [419] = {.lex_state = 41},
  [420] = {.lex_state = 10},
  [421] = {.lex_state = 1},
  [422] = {.lex_state = 41},
  [423] = {.lex_state = 41},
  [424] = {.lex_state = 41},
  [425] = {.lex_state = 41},
  [426] = {.lex_state = 41},
  [427] = {.lex_state = 10},
  [428] = {.lex_state = 41},
  [429] = {.lex_state = 41},
  [430] = {.lex_state = 41},
  [431] = {.lex_state = 41},
  [432] = {.lex_state = 41},
  [433] = {.lex_state = 41},
  [434] = {.lex_state = 1},
  [435] = {.lex_state = 1},
  [436] = {.lex_state = 1},
  [437] = {.lex_state = 39},
  [438] = {.lex_state = 0, .external_lex_state = 7},
  [439] = {.lex_state = 1},
  [440] = {.lex_state = 0, .external_lex_state = 6},
  [441] = {.lex_state = 1},
  [442] = {.lex_state = 1},
  [443] = {.lex_state = 1},
  [444] = {.lex_state = 39},
  [445] = {.lex_state = 0, .external_lex_state = 6},
  [446] = {.lex_state = 1},
  [447] = {.lex_state = 1},
  [448] = {.lex_state = 1},
  [449] = {.lex_state = 39},
  [450] = {.lex_state = 1},
  [451] = {.lex_state = 1},
  [452] = {.lex_state = 1},
  [453] = {.lex_state = 39},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_Name] = ACTIONS(1),
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
    [anon_sym_CDATA] = ACTIONS(1),
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
    [anon_sym_LT_QMARK] = ACTIONS(1),
    [anon_sym_xml] = ACTIONS(1),
    [anon_sym_version] = ACTIONS(1),
    [sym_VersionNum] = ACTIONS(1),
    [anon_sym_encoding] = ACTIONS(1),
    [sym_EncName] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_standalone] = ACTIONS(1),
    [anon_sym_yes] = ACTIONS(1),
    [anon_sym_no] = ACTIONS(1),
    [anon_sym_DOCTYPE] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_SLASH_GT] = ACTIONS(1),
    [anon_sym_LT_SLASH] = ACTIONS(1),
    [anon_sym_xml_DASHstylesheet] = ACTIONS(1),
    [anon_sym_xml_DASHmodel] = ACTIONS(1),
    [sym_PITarget] = ACTIONS(1),
    [sym__pi_content] = ACTIONS(1),
    [sym_Comment] = ACTIONS(1),
    [sym_CharData] = ACTIONS(1),
    [sym_CData] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(416),
    [sym_XMLDecl] = STATE(23),
    [sym_PI] = STATE(18),
    [sym_prolog] = STATE(150),
    [sym__Misc] = STATE(18),
    [sym_doctypedecl] = STATE(58),
    [sym_element] = STATE(59),
    [sym_EmptyElemTag] = STATE(167),
    [sym_STag] = STATE(2),
    [sym_StyleSheetPI] = STATE(18),
    [sym_XmlModelPI] = STATE(18),
    [aux_sym_document_repeat1] = STATE(18),
    [anon_sym_LT_BANG] = ACTIONS(3),
    [sym__S] = ACTIONS(5),
    [anon_sym_LT_QMARK] = ACTIONS(7),
    [anon_sym_LT] = ACTIONS(9),
    [sym_Comment] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 15,
    ACTIONS(13), 1,
      anon_sym_LT_BANG_LBRACK,
    ACTIONS(15), 1,
      anon_sym_AMP,
    ACTIONS(17), 1,
      anon_sym_AMP_POUND,
    ACTIONS(19), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(21), 1,
      anon_sym_LT_QMARK,
    ACTIONS(23), 1,
      anon_sym_LT,
    ACTIONS(25), 1,
      anon_sym_LT_SLASH,
    STATE(3), 1,
      sym_STag,
    STATE(48), 1,
      sym_EmptyElemTag,
    STATE(137), 1,
      sym_ETag,
    STATE(259), 1,
      sym_content,
    STATE(263), 1,
      sym_CDStart,
    ACTIONS(27), 2,
      sym_Comment,
      sym_CharData,
    STATE(41), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(5), 5,
      sym__Reference,
      sym_PI,
      sym_element,
      sym_CDSect,
      aux_sym_content_repeat1,
  [52] = 15,
    ACTIONS(13), 1,
      anon_sym_LT_BANG_LBRACK,
    ACTIONS(15), 1,
      anon_sym_AMP,
    ACTIONS(17), 1,
      anon_sym_AMP_POUND,
    ACTIONS(19), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(21), 1,
      anon_sym_LT_QMARK,
    ACTIONS(23), 1,
      anon_sym_LT,
    ACTIONS(29), 1,
      anon_sym_LT_SLASH,
    STATE(3), 1,
      sym_STag,
    STATE(48), 1,
      sym_EmptyElemTag,
    STATE(49), 1,
      sym_ETag,
    STATE(249), 1,
      sym_content,
    STATE(263), 1,
      sym_CDStart,
    ACTIONS(27), 2,
      sym_Comment,
      sym_CharData,
    STATE(41), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(5), 5,
      sym__Reference,
      sym_PI,
      sym_element,
      sym_CDSect,
      aux_sym_content_repeat1,
  [104] = 13,
    ACTIONS(31), 1,
      anon_sym_LT_BANG_LBRACK,
    ACTIONS(34), 1,
      anon_sym_AMP,
    ACTIONS(37), 1,
      anon_sym_AMP_POUND,
    ACTIONS(40), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(43), 1,
      anon_sym_LT_QMARK,
    ACTIONS(46), 1,
      anon_sym_LT,
    ACTIONS(49), 1,
      anon_sym_LT_SLASH,
    STATE(3), 1,
      sym_STag,
    STATE(48), 1,
      sym_EmptyElemTag,
    STATE(263), 1,
      sym_CDStart,
    ACTIONS(51), 2,
      sym_Comment,
      sym_CharData,
    STATE(41), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(4), 5,
      sym__Reference,
      sym_PI,
      sym_element,
      sym_CDSect,
      aux_sym_content_repeat1,
  [150] = 13,
    ACTIONS(13), 1,
      anon_sym_LT_BANG_LBRACK,
    ACTIONS(15), 1,
      anon_sym_AMP,
    ACTIONS(17), 1,
      anon_sym_AMP_POUND,
    ACTIONS(19), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(21), 1,
      anon_sym_LT_QMARK,
    ACTIONS(23), 1,
      anon_sym_LT,
    ACTIONS(54), 1,
      anon_sym_LT_SLASH,
    STATE(3), 1,
      sym_STag,
    STATE(48), 1,
      sym_EmptyElemTag,
    STATE(263), 1,
      sym_CDStart,
    ACTIONS(56), 2,
      sym_Comment,
      sym_CharData,
    STATE(41), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(4), 5,
      sym__Reference,
      sym_PI,
      sym_element,
      sym_CDSect,
      aux_sym_content_repeat1,
  [196] = 11,
    ACTIONS(3), 1,
      anon_sym_LT_BANG,
    ACTIONS(7), 1,
      anon_sym_LT_QMARK,
    ACTIONS(9), 1,
      anon_sym_LT,
    STATE(2), 1,
      sym_STag,
    STATE(23), 1,
      sym_XMLDecl,
    STATE(58), 1,
      sym_doctypedecl,
    STATE(66), 1,
      sym_element,
    STATE(167), 1,
      sym_EmptyElemTag,
    STATE(178), 1,
      sym_prolog,
    ACTIONS(11), 2,
      sym_Comment,
      sym__S,
    STATE(18), 5,
      sym_PI,
      sym__Misc,
      sym_StyleSheetPI,
      sym_XmlModelPI,
      aux_sym_document_repeat1,
  [235] = 9,
    ACTIONS(58), 1,
      anon_sym_LT_BANG,
    ACTIONS(60), 1,
      sym__S,
    ACTIONS(62), 1,
      anon_sym_LT_QMARK,
    ACTIONS(64), 1,
      anon_sym_RBRACK,
    ACTIONS(66), 1,
      sym_Comment,
    STATE(9), 1,
      aux_sym__intSubset,
    STATE(159), 1,
      sym__markupdecl,
    STATE(305), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(304), 5,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
  [268] = 9,
    ACTIONS(58), 1,
      anon_sym_LT_BANG,
    ACTIONS(60), 1,
      sym__S,
    ACTIONS(62), 1,
      anon_sym_LT_QMARK,
    ACTIONS(66), 1,
      sym_Comment,
    ACTIONS(68), 1,
      anon_sym_RBRACK,
    STATE(9), 1,
      aux_sym__intSubset,
    STATE(159), 1,
      sym__markupdecl,
    STATE(305), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(304), 5,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
  [301] = 9,
    ACTIONS(70), 1,
      anon_sym_LT_BANG,
    ACTIONS(73), 1,
      sym__S,
    ACTIONS(76), 1,
      anon_sym_LT_QMARK,
    ACTIONS(79), 1,
      anon_sym_RBRACK,
    ACTIONS(81), 1,
      sym_Comment,
    STATE(9), 1,
      aux_sym__intSubset,
    STATE(159), 1,
      sym__markupdecl,
    STATE(305), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(304), 5,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
  [334] = 9,
    ACTIONS(58), 1,
      anon_sym_LT_BANG,
    ACTIONS(60), 1,
      sym__S,
    ACTIONS(62), 1,
      anon_sym_LT_QMARK,
    ACTIONS(66), 1,
      sym_Comment,
    ACTIONS(84), 1,
      anon_sym_RBRACK,
    STATE(9), 1,
      aux_sym__intSubset,
    STATE(159), 1,
      sym__markupdecl,
    STATE(305), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(304), 5,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
  [367] = 9,
    ACTIONS(58), 1,
      anon_sym_LT_BANG,
    ACTIONS(60), 1,
      sym__S,
    ACTIONS(62), 1,
      anon_sym_LT_QMARK,
    ACTIONS(66), 1,
      sym_Comment,
    ACTIONS(86), 1,
      anon_sym_RBRACK,
    STATE(9), 1,
      aux_sym__intSubset,
    STATE(159), 1,
      sym__markupdecl,
    STATE(305), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(304), 5,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
  [400] = 8,
    ACTIONS(58), 1,
      anon_sym_LT_BANG,
    ACTIONS(60), 1,
      sym__S,
    ACTIONS(62), 1,
      anon_sym_LT_QMARK,
    ACTIONS(66), 1,
      sym_Comment,
    STATE(10), 1,
      aux_sym__intSubset,
    STATE(159), 1,
      sym__markupdecl,
    STATE(305), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(304), 5,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
  [430] = 8,
    ACTIONS(58), 1,
      anon_sym_LT_BANG,
    ACTIONS(60), 1,
      sym__S,
    ACTIONS(62), 1,
      anon_sym_LT_QMARK,
    ACTIONS(66), 1,
      sym_Comment,
    STATE(8), 1,
      aux_sym__intSubset,
    STATE(159), 1,
      sym__markupdecl,
    STATE(305), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(304), 5,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
  [460] = 8,
    ACTIONS(58), 1,
      anon_sym_LT_BANG,
    ACTIONS(60), 1,
      sym__S,
    ACTIONS(62), 1,
      anon_sym_LT_QMARK,
    ACTIONS(66), 1,
      sym_Comment,
    STATE(7), 1,
      aux_sym__intSubset,
    STATE(159), 1,
      sym__markupdecl,
    STATE(305), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(304), 5,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
  [490] = 8,
    ACTIONS(58), 1,
      anon_sym_LT_BANG,
    ACTIONS(60), 1,
      sym__S,
    ACTIONS(62), 1,
      anon_sym_LT_QMARK,
    ACTIONS(66), 1,
      sym_Comment,
    STATE(11), 1,
      aux_sym__intSubset,
    STATE(159), 1,
      sym__markupdecl,
    STATE(305), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(304), 5,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
  [520] = 8,
    ACTIONS(88), 1,
      anon_sym_PERCENT,
    ACTIONS(91), 1,
      anon_sym_SQUOTE,
    ACTIONS(93), 1,
      aux_sym_EntityValue_token2,
    ACTIONS(96), 1,
      anon_sym_AMP,
    ACTIONS(99), 1,
      anon_sym_AMP_POUND,
    ACTIONS(102), 1,
      anon_sym_AMP_POUNDx,
    STATE(86), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(16), 3,
      sym_PEReference,
      sym__Reference,
      aux_sym_EntityValue_repeat2,
  [548] = 8,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    ACTIONS(107), 1,
      anon_sym_CDATA,
    ACTIONS(109), 1,
      sym_TokenizedType,
    ACTIONS(111), 1,
      anon_sym_NOTATION,
    ACTIONS(113), 1,
      anon_sym_PERCENT,
    STATE(287), 1,
      sym__AttType,
    STATE(288), 2,
      sym_NotationType,
      sym_Enumeration,
    STATE(285), 3,
      sym_StringType,
      sym__EnumeratedType,
      sym_PEReference,
  [576] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_BANG,
    ACTIONS(117), 1,
      anon_sym_LT_QMARK,
    ACTIONS(119), 1,
      anon_sym_LT,
    STATE(32), 1,
      sym_doctypedecl,
    ACTIONS(115), 2,
      sym_Comment,
      sym__S,
    STATE(21), 5,
      sym_PI,
      sym__Misc,
      sym_StyleSheetPI,
      sym_XmlModelPI,
      aux_sym_document_repeat1,
  [600] = 8,
    ACTIONS(121), 1,
      anon_sym_PERCENT,
    ACTIONS(124), 1,
      anon_sym_DQUOTE,
    ACTIONS(126), 1,
      aux_sym_EntityValue_token1,
    ACTIONS(129), 1,
      anon_sym_AMP,
    ACTIONS(132), 1,
      anon_sym_AMP_POUND,
    ACTIONS(135), 1,
      anon_sym_AMP_POUNDx,
    STATE(82), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(19), 3,
      sym_PEReference,
      sym__Reference,
      aux_sym_EntityValue_repeat1,
  [628] = 8,
    ACTIONS(138), 1,
      anon_sym_PERCENT,
    ACTIONS(140), 1,
      anon_sym_SQUOTE,
    ACTIONS(142), 1,
      aux_sym_EntityValue_token2,
    ACTIONS(144), 1,
      anon_sym_AMP,
    ACTIONS(146), 1,
      anon_sym_AMP_POUND,
    ACTIONS(148), 1,
      anon_sym_AMP_POUNDx,
    STATE(86), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(16), 3,
      sym_PEReference,
      sym__Reference,
      aux_sym_EntityValue_repeat2,
  [656] = 5,
    ACTIONS(155), 1,
      anon_sym_LT_QMARK,
    ACTIONS(158), 1,
      anon_sym_LT,
    ACTIONS(150), 2,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
    ACTIONS(152), 2,
      sym_Comment,
      sym__S,
    STATE(21), 5,
      sym_PI,
      sym__Misc,
      sym_StyleSheetPI,
      sym_XmlModelPI,
      aux_sym_document_repeat1,
  [678] = 8,
    ACTIONS(140), 1,
      anon_sym_DQUOTE,
    ACTIONS(160), 1,
      anon_sym_PERCENT,
    ACTIONS(162), 1,
      aux_sym_EntityValue_token1,
    ACTIONS(164), 1,
      anon_sym_AMP,
    ACTIONS(166), 1,
      anon_sym_AMP_POUND,
    ACTIONS(168), 1,
      anon_sym_AMP_POUNDx,
    STATE(82), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(19), 3,
      sym_PEReference,
      sym__Reference,
      aux_sym_EntityValue_repeat1,
  [706] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_BANG,
    ACTIONS(117), 1,
      anon_sym_LT_QMARK,
    ACTIONS(119), 1,
      anon_sym_LT,
    STATE(32), 1,
      sym_doctypedecl,
    ACTIONS(170), 2,
      sym_Comment,
      sym__S,
    STATE(24), 5,
      sym_PI,
      sym__Misc,
      sym_StyleSheetPI,
      sym_XmlModelPI,
      aux_sym_document_repeat1,
  [730] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_BANG,
    ACTIONS(117), 1,
      anon_sym_LT_QMARK,
    ACTIONS(172), 1,
      anon_sym_LT,
    STATE(62), 1,
      sym_doctypedecl,
    ACTIONS(115), 2,
      sym_Comment,
      sym__S,
    STATE(21), 5,
      sym_PI,
      sym__Misc,
      sym_StyleSheetPI,
      sym_XmlModelPI,
      aux_sym_document_repeat1,
  [754] = 8,
    ACTIONS(160), 1,
      anon_sym_PERCENT,
    ACTIONS(164), 1,
      anon_sym_AMP,
    ACTIONS(166), 1,
      anon_sym_AMP_POUND,
    ACTIONS(168), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(174), 1,
      anon_sym_DQUOTE,
    ACTIONS(176), 1,
      aux_sym_EntityValue_token1,
    STATE(82), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(22), 3,
      sym_PEReference,
      sym__Reference,
      aux_sym_EntityValue_repeat1,
  [782] = 8,
    ACTIONS(138), 1,
      anon_sym_PERCENT,
    ACTIONS(144), 1,
      anon_sym_AMP,
    ACTIONS(146), 1,
      anon_sym_AMP_POUND,
    ACTIONS(148), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(174), 1,
      anon_sym_SQUOTE,
    ACTIONS(178), 1,
      aux_sym_EntityValue_token2,
    STATE(86), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(20), 3,
      sym_PEReference,
      sym__Reference,
      aux_sym_EntityValue_repeat2,
  [810] = 6,
    ACTIONS(58), 1,
      anon_sym_LT_BANG,
    ACTIONS(62), 1,
      anon_sym_LT_QMARK,
    ACTIONS(66), 1,
      sym_Comment,
    STATE(145), 1,
      sym__markupdecl,
    STATE(305), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(304), 5,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
  [834] = 1,
    ACTIONS(180), 10,
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
  [847] = 2,
    ACTIONS(184), 3,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
    ACTIONS(182), 6,
      sym_Comment,
      sym_CharData,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
  [861] = 2,
    ACTIONS(188), 3,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
    ACTIONS(186), 6,
      sym_Comment,
      sym_CharData,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
  [875] = 2,
    ACTIONS(192), 3,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
    ACTIONS(190), 6,
      sym_Comment,
      sym_CharData,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
  [889] = 4,
    ACTIONS(117), 1,
      anon_sym_LT_QMARK,
    ACTIONS(172), 1,
      anon_sym_LT,
    ACTIONS(194), 2,
      sym_Comment,
      sym__S,
    STATE(61), 5,
      sym_PI,
      sym__Misc,
      sym_StyleSheetPI,
      sym_XmlModelPI,
      aux_sym_document_repeat1,
  [907] = 4,
    ACTIONS(117), 1,
      anon_sym_LT_QMARK,
    ACTIONS(172), 1,
      anon_sym_LT,
    ACTIONS(115), 2,
      sym_Comment,
      sym__S,
    STATE(21), 5,
      sym_PI,
      sym__Misc,
      sym_StyleSheetPI,
      sym_XmlModelPI,
      aux_sym_document_repeat1,
  [925] = 4,
    ACTIONS(117), 1,
      anon_sym_LT_QMARK,
    ACTIONS(196), 1,
      ts_builtin_sym_end,
    ACTIONS(115), 2,
      sym_Comment,
      sym__S,
    STATE(21), 5,
      sym_PI,
      sym__Misc,
      sym_StyleSheetPI,
      sym_XmlModelPI,
      aux_sym_document_repeat1,
  [943] = 7,
    ACTIONS(198), 1,
      anon_sym_DQUOTE,
    ACTIONS(200), 1,
      anon_sym_AMP,
    ACTIONS(202), 1,
      anon_sym_AMP_POUND,
    ACTIONS(204), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(206), 1,
      aux_sym_AttValue_token1,
    STATE(44), 2,
      sym__Reference,
      aux_sym_AttValue_repeat1,
    STATE(119), 2,
      sym_EntityRef,
      sym_CharRef,
  [967] = 7,
    ACTIONS(198), 1,
      anon_sym_SQUOTE,
    ACTIONS(208), 1,
      anon_sym_AMP,
    ACTIONS(210), 1,
      anon_sym_AMP_POUND,
    ACTIONS(212), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(214), 1,
      aux_sym_AttValue_token2,
    STATE(45), 2,
      sym__Reference,
      aux_sym_AttValue_repeat2,
    STATE(110), 2,
      sym_EntityRef,
      sym_CharRef,
  [991] = 7,
    ACTIONS(208), 1,
      anon_sym_AMP,
    ACTIONS(210), 1,
      anon_sym_AMP_POUND,
    ACTIONS(212), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(216), 1,
      anon_sym_SQUOTE,
    ACTIONS(218), 1,
      aux_sym_AttValue_token2,
    STATE(43), 2,
      sym__Reference,
      aux_sym_AttValue_repeat2,
    STATE(110), 2,
      sym_EntityRef,
      sym_CharRef,
  [1015] = 2,
    ACTIONS(222), 3,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
    ACTIONS(220), 6,
      sym_Comment,
      sym_CharData,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
  [1029] = 7,
    ACTIONS(200), 1,
      anon_sym_AMP,
    ACTIONS(202), 1,
      anon_sym_AMP_POUND,
    ACTIONS(204), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    ACTIONS(224), 1,
      aux_sym_AttValue_token1,
    STATE(40), 2,
      sym__Reference,
      aux_sym_AttValue_repeat1,
    STATE(119), 2,
      sym_EntityRef,
      sym_CharRef,
  [1053] = 7,
    ACTIONS(200), 1,
      anon_sym_AMP,
    ACTIONS(202), 1,
      anon_sym_AMP_POUND,
    ACTIONS(204), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(226), 1,
      anon_sym_DQUOTE,
    ACTIONS(228), 1,
      aux_sym_AttValue_token1,
    STATE(67), 2,
      sym__Reference,
      aux_sym_AttValue_repeat1,
    STATE(119), 2,
      sym_EntityRef,
      sym_CharRef,
  [1077] = 2,
    ACTIONS(232), 3,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
    ACTIONS(230), 6,
      sym_Comment,
      sym_CharData,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
  [1091] = 2,
    ACTIONS(236), 3,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
    ACTIONS(234), 6,
      sym_Comment,
      sym_CharData,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
  [1105] = 7,
    ACTIONS(208), 1,
      anon_sym_AMP,
    ACTIONS(210), 1,
      anon_sym_AMP_POUND,
    ACTIONS(212), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(226), 1,
      anon_sym_SQUOTE,
    ACTIONS(238), 1,
      aux_sym_AttValue_token2,
    STATE(68), 2,
      sym__Reference,
      aux_sym_AttValue_repeat2,
    STATE(110), 2,
      sym_EntityRef,
      sym_CharRef,
  [1129] = 7,
    ACTIONS(200), 1,
      anon_sym_AMP,
    ACTIONS(202), 1,
      anon_sym_AMP_POUND,
    ACTIONS(204), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(228), 1,
      aux_sym_AttValue_token1,
    ACTIONS(240), 1,
      anon_sym_DQUOTE,
    STATE(67), 2,
      sym__Reference,
      aux_sym_AttValue_repeat1,
    STATE(119), 2,
      sym_EntityRef,
      sym_CharRef,
  [1153] = 7,
    ACTIONS(208), 1,
      anon_sym_AMP,
    ACTIONS(210), 1,
      anon_sym_AMP_POUND,
    ACTIONS(212), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(238), 1,
      aux_sym_AttValue_token2,
    ACTIONS(240), 1,
      anon_sym_SQUOTE,
    STATE(68), 2,
      sym__Reference,
      aux_sym_AttValue_repeat2,
    STATE(110), 2,
      sym_EntityRef,
      sym_CharRef,
  [1177] = 4,
    ACTIONS(117), 1,
      anon_sym_LT_QMARK,
    ACTIONS(242), 1,
      ts_builtin_sym_end,
    ACTIONS(244), 2,
      sym_Comment,
      sym__S,
    STATE(54), 5,
      sym_PI,
      sym__Misc,
      sym_StyleSheetPI,
      sym_XmlModelPI,
      aux_sym_document_repeat1,
  [1195] = 4,
    ACTIONS(117), 1,
      anon_sym_LT_QMARK,
    ACTIONS(246), 1,
      ts_builtin_sym_end,
    ACTIONS(115), 2,
      sym_Comment,
      sym__S,
    STATE(21), 5,
      sym_PI,
      sym__Misc,
      sym_StyleSheetPI,
      sym_XmlModelPI,
      aux_sym_document_repeat1,
  [1213] = 2,
    ACTIONS(250), 3,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
    ACTIONS(248), 6,
      sym_Comment,
      sym_CharData,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
  [1227] = 2,
    ACTIONS(254), 3,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
    ACTIONS(252), 6,
      sym_Comment,
      sym_CharData,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
  [1241] = 2,
    ACTIONS(258), 3,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
    ACTIONS(256), 6,
      sym_Comment,
      sym_CharData,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
  [1255] = 2,
    ACTIONS(262), 3,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
    ACTIONS(260), 6,
      sym_Comment,
      sym_CharData,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
  [1269] = 6,
    ACTIONS(113), 1,
      anon_sym_PERCENT,
    ACTIONS(266), 1,
      anon_sym_LPAREN,
    STATE(108), 1,
      sym__choice,
    STATE(321), 1,
      sym_contentspec,
    ACTIONS(264), 2,
      anon_sym_EMPTY,
      anon_sym_ANY,
    STATE(262), 3,
      sym_Mixed,
      sym_children,
      sym_PEReference,
  [1291] = 2,
    ACTIONS(270), 3,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
    ACTIONS(268), 6,
      sym_Comment,
      sym_CharData,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
  [1305] = 4,
    ACTIONS(117), 1,
      anon_sym_LT_QMARK,
    ACTIONS(272), 1,
      ts_builtin_sym_end,
    ACTIONS(115), 2,
      sym_Comment,
      sym__S,
    STATE(21), 5,
      sym_PI,
      sym__Misc,
      sym_StyleSheetPI,
      sym_XmlModelPI,
      aux_sym_document_repeat1,
  [1323] = 2,
    ACTIONS(276), 3,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
    ACTIONS(274), 6,
      sym_Comment,
      sym_CharData,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
  [1337] = 4,
    ACTIONS(117), 1,
      anon_sym_LT_QMARK,
    ACTIONS(278), 1,
      anon_sym_LT,
    ACTIONS(115), 2,
      sym_Comment,
      sym__S,
    STATE(21), 5,
      sym_PI,
      sym__Misc,
      sym_StyleSheetPI,
      sym_XmlModelPI,
      aux_sym_document_repeat1,
  [1355] = 2,
    ACTIONS(282), 3,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
    ACTIONS(280), 6,
      sym_Comment,
      sym_CharData,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
  [1369] = 4,
    ACTIONS(117), 1,
      anon_sym_LT_QMARK,
    ACTIONS(119), 1,
      anon_sym_LT,
    ACTIONS(284), 2,
      sym_Comment,
      sym__S,
    STATE(33), 5,
      sym_PI,
      sym__Misc,
      sym_StyleSheetPI,
      sym_XmlModelPI,
      aux_sym_document_repeat1,
  [1387] = 4,
    ACTIONS(117), 1,
      anon_sym_LT_QMARK,
    ACTIONS(286), 1,
      ts_builtin_sym_end,
    ACTIONS(288), 2,
      sym_Comment,
      sym__S,
    STATE(34), 5,
      sym_PI,
      sym__Misc,
      sym_StyleSheetPI,
      sym_XmlModelPI,
      aux_sym_document_repeat1,
  [1405] = 2,
    ACTIONS(292), 3,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
    ACTIONS(290), 6,
      sym_Comment,
      sym_CharData,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
  [1419] = 4,
    ACTIONS(117), 1,
      anon_sym_LT_QMARK,
    ACTIONS(294), 1,
      anon_sym_LT,
    ACTIONS(115), 2,
      sym_Comment,
      sym__S,
    STATE(21), 5,
      sym_PI,
      sym__Misc,
      sym_StyleSheetPI,
      sym_XmlModelPI,
      aux_sym_document_repeat1,
  [1437] = 4,
    ACTIONS(117), 1,
      anon_sym_LT_QMARK,
    ACTIONS(294), 1,
      anon_sym_LT,
    ACTIONS(296), 2,
      sym_Comment,
      sym__S,
    STATE(56), 5,
      sym_PI,
      sym__Misc,
      sym_StyleSheetPI,
      sym_XmlModelPI,
      aux_sym_document_repeat1,
  [1455] = 2,
    ACTIONS(300), 3,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
    ACTIONS(298), 6,
      sym_Comment,
      sym_CharData,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
  [1469] = 2,
    ACTIONS(304), 3,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
    ACTIONS(302), 6,
      sym_Comment,
      sym_CharData,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
  [1483] = 2,
    ACTIONS(308), 3,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
    ACTIONS(306), 6,
      sym_Comment,
      sym_CharData,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
  [1497] = 4,
    ACTIONS(117), 1,
      anon_sym_LT_QMARK,
    ACTIONS(310), 1,
      ts_builtin_sym_end,
    ACTIONS(312), 2,
      sym_Comment,
      sym__S,
    STATE(47), 5,
      sym_PI,
      sym__Misc,
      sym_StyleSheetPI,
      sym_XmlModelPI,
      aux_sym_document_repeat1,
  [1515] = 7,
    ACTIONS(314), 1,
      anon_sym_DQUOTE,
    ACTIONS(316), 1,
      anon_sym_AMP,
    ACTIONS(319), 1,
      anon_sym_AMP_POUND,
    ACTIONS(322), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(325), 1,
      aux_sym_AttValue_token1,
    STATE(67), 2,
      sym__Reference,
      aux_sym_AttValue_repeat1,
    STATE(119), 2,
      sym_EntityRef,
      sym_CharRef,
  [1539] = 7,
    ACTIONS(328), 1,
      anon_sym_SQUOTE,
    ACTIONS(330), 1,
      anon_sym_AMP,
    ACTIONS(333), 1,
      anon_sym_AMP_POUND,
    ACTIONS(336), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(339), 1,
      aux_sym_AttValue_token2,
    STATE(68), 2,
      sym__Reference,
      aux_sym_AttValue_repeat2,
    STATE(110), 2,
      sym_EntityRef,
      sym_CharRef,
  [1563] = 2,
    ACTIONS(344), 3,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
    ACTIONS(342), 6,
      sym_Comment,
      sym_CharData,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
  [1577] = 1,
    ACTIONS(346), 8,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_COMMA,
      sym__S,
  [1588] = 8,
    ACTIONS(113), 1,
      anon_sym_PERCENT,
    ACTIONS(348), 1,
      sym_Name,
    ACTIONS(350), 1,
      anon_sym_LPAREN,
    ACTIONS(352), 1,
      anon_sym_POUNDPCDATA,
    ACTIONS(354), 1,
      sym__S,
    STATE(75), 1,
      sym_PEReference,
    STATE(80), 1,
      sym__choice,
    STATE(116), 1,
      sym__cp,
  [1613] = 1,
    ACTIONS(356), 8,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_COMMA,
      sym__S,
  [1624] = 6,
    ACTIONS(358), 1,
      anon_sym_PIPE,
    ACTIONS(360), 1,
      anon_sym_RPAREN,
    ACTIONS(364), 1,
      anon_sym_COMMA,
    ACTIONS(366), 1,
      sym__S,
    STATE(186), 1,
      aux_sym_Mixed_repeat1,
    ACTIONS(362), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
  [1645] = 1,
    ACTIONS(368), 8,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_COMMA,
      sym__S,
  [1656] = 6,
    ACTIONS(358), 1,
      anon_sym_PIPE,
    ACTIONS(364), 1,
      anon_sym_COMMA,
    ACTIONS(370), 1,
      anon_sym_RPAREN,
    ACTIONS(372), 1,
      sym__S,
    STATE(168), 1,
      aux_sym_Mixed_repeat1,
    ACTIONS(362), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
  [1677] = 6,
    ACTIONS(113), 1,
      anon_sym_PERCENT,
    ACTIONS(348), 1,
      sym_Name,
    ACTIONS(350), 1,
      anon_sym_LPAREN,
    ACTIONS(374), 1,
      sym__S,
    STATE(158), 1,
      sym__cp,
    STATE(80), 2,
      sym__choice,
      sym_PEReference,
  [1697] = 6,
    ACTIONS(113), 1,
      anon_sym_PERCENT,
    ACTIONS(348), 1,
      sym_Name,
    ACTIONS(350), 1,
      anon_sym_LPAREN,
    ACTIONS(376), 1,
      sym__S,
    STATE(116), 1,
      sym__cp,
    STATE(80), 2,
      sym__choice,
      sym_PEReference,
  [1717] = 6,
    ACTIONS(380), 1,
      anon_sym_POUNDFIXED,
    ACTIONS(382), 1,
      anon_sym_DQUOTE,
    ACTIONS(384), 1,
      anon_sym_SQUOTE,
    STATE(337), 1,
      sym_AttValue,
    STATE(338), 1,
      sym_DefaultDecl,
    ACTIONS(378), 2,
      anon_sym_POUNDREQUIRED,
      anon_sym_POUNDIMPLIED,
  [1737] = 6,
    ACTIONS(113), 1,
      anon_sym_PERCENT,
    ACTIONS(348), 1,
      sym_Name,
    ACTIONS(350), 1,
      anon_sym_LPAREN,
    ACTIONS(386), 1,
      sym__S,
    STATE(180), 1,
      sym__cp,
    STATE(80), 2,
      sym__choice,
      sym_PEReference,
  [1757] = 2,
    ACTIONS(362), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
    ACTIONS(364), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__S,
  [1769] = 7,
    ACTIONS(113), 1,
      anon_sym_PERCENT,
    ACTIONS(348), 1,
      sym_Name,
    ACTIONS(350), 1,
      anon_sym_LPAREN,
    ACTIONS(388), 1,
      anon_sym_POUNDPCDATA,
    STATE(73), 1,
      sym_PEReference,
    STATE(80), 1,
      sym__choice,
    STATE(117), 1,
      sym__cp,
  [1791] = 2,
    ACTIONS(232), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(230), 4,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      aux_sym_EntityValue_token1,
      anon_sym_AMP_POUNDx,
  [1802] = 2,
    ACTIONS(188), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(186), 4,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      aux_sym_EntityValue_token1,
      anon_sym_AMP_POUNDx,
  [1813] = 2,
    ACTIONS(392), 1,
      anon_sym_LT,
    ACTIONS(390), 5,
      sym_Comment,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      sym__S,
      anon_sym_LT_QMARK,
  [1824] = 6,
    ACTIONS(113), 1,
      anon_sym_PERCENT,
    ACTIONS(394), 1,
      sym_Name,
    ACTIONS(396), 1,
      anon_sym_PIPE,
    ACTIONS(398), 1,
      sym__S,
    STATE(101), 1,
      aux_sym_NotationType_repeat1,
    STATE(306), 1,
      sym_PEReference,
  [1843] = 2,
    ACTIONS(232), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(230), 4,
      anon_sym_PERCENT,
      anon_sym_SQUOTE,
      aux_sym_EntityValue_token2,
      anon_sym_AMP_POUNDx,
  [1854] = 5,
    ACTIONS(113), 1,
      anon_sym_PERCENT,
    ACTIONS(348), 1,
      sym_Name,
    ACTIONS(350), 1,
      anon_sym_LPAREN,
    STATE(117), 1,
      sym__cp,
    STATE(80), 2,
      sym__choice,
      sym_PEReference,
  [1871] = 2,
    ACTIONS(400), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(180), 4,
      anon_sym_PERCENT,
      anon_sym_SQUOTE,
      aux_sym_EntityValue_token2,
      anon_sym_AMP_POUNDx,
  [1882] = 5,
    ACTIONS(113), 1,
      anon_sym_PERCENT,
    ACTIONS(402), 1,
      anon_sym_SYSTEM,
    ACTIONS(404), 1,
      anon_sym_PUBLIC,
    STATE(419), 1,
      sym_PEReference,
    STATE(250), 2,
      sym_ExternalID,
      sym_PublicID,
  [1899] = 2,
    ACTIONS(188), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(186), 4,
      anon_sym_PERCENT,
      anon_sym_SQUOTE,
      aux_sym_EntityValue_token2,
      anon_sym_AMP_POUNDx,
  [1910] = 6,
    ACTIONS(402), 1,
      anon_sym_SYSTEM,
    ACTIONS(406), 1,
      anon_sym_DQUOTE,
    ACTIONS(408), 1,
      anon_sym_SQUOTE,
    ACTIONS(410), 1,
      anon_sym_PUBLIC,
    STATE(241), 1,
      sym_ExternalID,
    STATE(252), 1,
      sym_EntityValue,
  [1929] = 5,
    ACTIONS(402), 1,
      anon_sym_SYSTEM,
    ACTIONS(406), 1,
      anon_sym_DQUOTE,
    ACTIONS(408), 1,
      anon_sym_SQUOTE,
    ACTIONS(410), 1,
      anon_sym_PUBLIC,
    STATE(292), 2,
      sym_EntityValue,
      sym_ExternalID,
  [1946] = 2,
    ACTIONS(414), 1,
      anon_sym_LT,
    ACTIONS(412), 5,
      sym_Comment,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      sym__S,
      anon_sym_LT_QMARK,
  [1957] = 6,
    ACTIONS(113), 1,
      anon_sym_PERCENT,
    ACTIONS(394), 1,
      sym_Name,
    ACTIONS(396), 1,
      anon_sym_PIPE,
    ACTIONS(398), 1,
      sym__S,
    STATE(109), 1,
      aux_sym_NotationType_repeat1,
    STATE(306), 1,
      sym_PEReference,
  [1976] = 2,
    ACTIONS(418), 1,
      anon_sym_LT,
    ACTIONS(416), 5,
      sym_Comment,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      sym__S,
      anon_sym_LT_QMARK,
  [1987] = 2,
    ACTIONS(422), 1,
      anon_sym_LT,
    ACTIONS(420), 5,
      sym_Comment,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      sym__S,
      anon_sym_LT_QMARK,
  [1998] = 5,
    ACTIONS(113), 1,
      anon_sym_PERCENT,
    ACTIONS(348), 1,
      sym_Name,
    ACTIONS(350), 1,
      anon_sym_LPAREN,
    STATE(143), 1,
      sym__cp,
    STATE(80), 2,
      sym__choice,
      sym_PEReference,
  [2015] = 5,
    ACTIONS(113), 1,
      anon_sym_PERCENT,
    ACTIONS(348), 1,
      sym_Name,
    ACTIONS(350), 1,
      anon_sym_LPAREN,
    STATE(158), 1,
      sym__cp,
    STATE(80), 2,
      sym__choice,
      sym_PEReference,
  [2032] = 2,
    ACTIONS(270), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(268), 4,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      aux_sym_EntityValue_token1,
      anon_sym_AMP_POUNDx,
  [2043] = 2,
    ACTIONS(308), 1,
      anon_sym_LT,
    ACTIONS(306), 5,
      sym_Comment,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      sym__S,
      anon_sym_LT_QMARK,
  [2054] = 6,
    ACTIONS(113), 1,
      anon_sym_PERCENT,
    ACTIONS(396), 1,
      anon_sym_PIPE,
    ACTIONS(398), 1,
      sym__S,
    ACTIONS(424), 1,
      sym_Name,
    STATE(109), 1,
      aux_sym_NotationType_repeat1,
    STATE(297), 1,
      sym_PEReference,
  [2073] = 6,
    ACTIONS(113), 1,
      anon_sym_PERCENT,
    ACTIONS(396), 1,
      anon_sym_PIPE,
    ACTIONS(398), 1,
      sym__S,
    ACTIONS(426), 1,
      sym_Name,
    STATE(94), 1,
      aux_sym_NotationType_repeat1,
    STATE(311), 1,
      sym_PEReference,
  [2092] = 2,
    ACTIONS(400), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(180), 4,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      aux_sym_EntityValue_token1,
      anon_sym_AMP_POUNDx,
  [2103] = 2,
    ACTIONS(270), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(268), 4,
      anon_sym_PERCENT,
      anon_sym_SQUOTE,
      aux_sym_EntityValue_token2,
      anon_sym_AMP_POUNDx,
  [2114] = 2,
    ACTIONS(430), 1,
      anon_sym_LT,
    ACTIONS(428), 5,
      sym_Comment,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      sym__S,
      anon_sym_LT_QMARK,
  [2125] = 2,
    ACTIONS(434), 1,
      anon_sym_LT,
    ACTIONS(432), 5,
      sym_Comment,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      sym__S,
      anon_sym_LT_QMARK,
  [2136] = 2,
    ACTIONS(262), 1,
      anon_sym_LT,
    ACTIONS(260), 5,
      sym_Comment,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      sym__S,
      anon_sym_LT_QMARK,
  [2147] = 2,
    ACTIONS(436), 2,
      anon_sym_GT,
      sym__S,
    ACTIONS(438), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
  [2157] = 4,
    ACTIONS(442), 1,
      anon_sym_PIPE,
    ACTIONS(445), 1,
      sym__S,
    STATE(109), 1,
      aux_sym_NotationType_repeat1,
    ACTIONS(440), 2,
      anon_sym_PERCENT,
      sym_Name,
  [2171] = 2,
    ACTIONS(232), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(230), 3,
      anon_sym_SQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token2,
  [2181] = 1,
    ACTIONS(448), 5,
      sym_Comment,
      anon_sym_LT_BANG,
      sym__S,
      anon_sym_LT_QMARK,
      anon_sym_RBRACK,
  [2189] = 2,
    ACTIONS(270), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(268), 3,
      anon_sym_SQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token2,
  [2199] = 4,
    ACTIONS(452), 1,
      anon_sym_RPAREN,
    ACTIONS(454), 1,
      sym__S,
    STATE(125), 1,
      aux_sym__choice_repeat1,
    ACTIONS(450), 2,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [2213] = 2,
    ACTIONS(188), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(186), 3,
      anon_sym_SQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token2,
  [2223] = 2,
    ACTIONS(458), 1,
      anon_sym_LT,
    ACTIONS(456), 4,
      sym_Comment,
      anon_sym_LT_BANG,
      sym__S,
      anon_sym_LT_QMARK,
  [2233] = 4,
    ACTIONS(454), 1,
      sym__S,
    ACTIONS(460), 1,
      anon_sym_RPAREN,
    STATE(113), 1,
      aux_sym__choice_repeat1,
    ACTIONS(450), 2,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [2247] = 4,
    ACTIONS(452), 1,
      anon_sym_RPAREN,
    ACTIONS(454), 1,
      sym__S,
    STATE(124), 1,
      aux_sym__choice_repeat1,
    ACTIONS(450), 2,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [2261] = 2,
    ACTIONS(464), 1,
      anon_sym_LT,
    ACTIONS(462), 4,
      sym_Comment,
      anon_sym_LT_BANG,
      sym__S,
      anon_sym_LT_QMARK,
  [2271] = 2,
    ACTIONS(232), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(230), 3,
      anon_sym_DQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token1,
  [2281] = 1,
    ACTIONS(180), 5,
      sym_Comment,
      anon_sym_LT_BANG,
      sym__S,
      anon_sym_LT_QMARK,
      anon_sym_RBRACK,
  [2289] = 5,
    ACTIONS(402), 1,
      anon_sym_SYSTEM,
    ACTIONS(410), 1,
      anon_sym_PUBLIC,
    ACTIONS(466), 1,
      anon_sym_LBRACK,
    ACTIONS(468), 1,
      anon_sym_GT,
    STATE(233), 1,
      sym_ExternalID,
  [2305] = 2,
    ACTIONS(472), 1,
      anon_sym_LT,
    ACTIONS(470), 4,
      sym_Comment,
      anon_sym_LT_BANG,
      sym__S,
      anon_sym_LT_QMARK,
  [2315] = 1,
    ACTIONS(79), 5,
      sym_Comment,
      anon_sym_LT_BANG,
      sym__S,
      anon_sym_LT_QMARK,
      anon_sym_RBRACK,
  [2323] = 4,
    ACTIONS(454), 1,
      sym__S,
    ACTIONS(474), 1,
      anon_sym_RPAREN,
    STATE(125), 1,
      aux_sym__choice_repeat1,
    ACTIONS(450), 2,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [2337] = 4,
    ACTIONS(479), 1,
      anon_sym_RPAREN,
    ACTIONS(481), 1,
      sym__S,
    STATE(125), 1,
      aux_sym__choice_repeat1,
    ACTIONS(476), 2,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [2351] = 2,
    ACTIONS(188), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(186), 3,
      anon_sym_DQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token1,
  [2361] = 2,
    ACTIONS(486), 1,
      anon_sym_LT,
    ACTIONS(484), 4,
      sym_Comment,
      anon_sym_LT_BANG,
      sym__S,
      anon_sym_LT_QMARK,
  [2371] = 2,
    ACTIONS(270), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(268), 3,
      anon_sym_DQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token1,
  [2381] = 4,
    ACTIONS(113), 1,
      anon_sym_PERCENT,
    ACTIONS(488), 1,
      sym_Name,
    ACTIONS(490), 1,
      sym__S,
    STATE(187), 1,
      sym_PEReference,
  [2394] = 4,
    ACTIONS(492), 1,
      sym_Name,
    ACTIONS(494), 1,
      anon_sym_GT,
    ACTIONS(496), 1,
      anon_sym_SLASH_GT,
    STATE(193), 1,
      sym_Attribute,
  [2407] = 4,
    ACTIONS(498), 1,
      anon_sym_xml,
    ACTIONS(500), 1,
      anon_sym_xml_DASHstylesheet,
    ACTIONS(502), 1,
      anon_sym_xml_DASHmodel,
    ACTIONS(504), 1,
      sym_PITarget,
  [2420] = 2,
    ACTIONS(508), 1,
      anon_sym_LT,
    ACTIONS(506), 3,
      sym_Comment,
      sym__S,
      anon_sym_LT_QMARK,
  [2429] = 4,
    ACTIONS(510), 1,
      anon_sym_GT,
    ACTIONS(512), 1,
      sym__S,
    ACTIONS(514), 1,
      anon_sym_SLASH_GT,
    STATE(185), 1,
      aux_sym_EmptyElemTag_repeat1,
  [2442] = 4,
    ACTIONS(492), 1,
      sym_Name,
    ACTIONS(510), 1,
      anon_sym_GT,
    ACTIONS(514), 1,
      anon_sym_SLASH_GT,
    STATE(193), 1,
      sym_Attribute,
  [2455] = 1,
    ACTIONS(440), 4,
      anon_sym_PIPE,
      anon_sym_PERCENT,
      sym__S,
      sym_Name,
  [2462] = 4,
    ACTIONS(516), 1,
      anon_sym_PIPE,
    ACTIONS(518), 1,
      anon_sym_RPAREN,
    ACTIONS(520), 1,
      sym__S,
    STATE(141), 1,
      aux_sym_Enumeration_repeat1,
  [2475] = 1,
    ACTIONS(252), 4,
      sym_Comment,
      ts_builtin_sym_end,
      sym__S,
      anon_sym_LT_QMARK,
  [2482] = 4,
    ACTIONS(522), 1,
      sym__S,
    ACTIONS(524), 1,
      anon_sym_QMARK_GT,
    STATE(206), 1,
      sym__EncodingDecl,
    STATE(276), 1,
      sym__SDDecl,
  [2495] = 3,
    ACTIONS(526), 1,
      anon_sym_GT,
    ACTIONS(528), 1,
      sym__S,
    STATE(139), 2,
      sym_AttDef,
      aux_sym_AttlistDecl_repeat1,
  [2506] = 4,
    ACTIONS(113), 1,
      anon_sym_PERCENT,
    ACTIONS(531), 1,
      sym_Name,
    ACTIONS(533), 1,
      anon_sym_GT,
    STATE(341), 1,
      sym_PEReference,
  [2519] = 4,
    ACTIONS(535), 1,
      anon_sym_PIPE,
    ACTIONS(538), 1,
      anon_sym_RPAREN,
    ACTIONS(540), 1,
      sym__S,
    STATE(141), 1,
      aux_sym_Enumeration_repeat1,
  [2532] = 4,
    ACTIONS(516), 1,
      anon_sym_PIPE,
    ACTIONS(543), 1,
      anon_sym_RPAREN,
    ACTIONS(545), 1,
      sym__S,
    STATE(141), 1,
      aux_sym_Enumeration_repeat1,
  [2545] = 1,
    ACTIONS(547), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__S,
  [2552] = 4,
    ACTIONS(358), 1,
      anon_sym_PIPE,
    ACTIONS(370), 1,
      anon_sym_RPAREN,
    ACTIONS(372), 1,
      sym__S,
    STATE(168), 1,
      aux_sym_Mixed_repeat1,
  [2565] = 3,
    ACTIONS(549), 1,
      anon_sym_PERCENT,
    ACTIONS(551), 1,
      sym__S,
    STATE(111), 2,
      sym__DeclSep,
      sym_PEReference,
  [2576] = 4,
    ACTIONS(492), 1,
      sym_Name,
    ACTIONS(510), 1,
      anon_sym_GT,
    ACTIONS(553), 1,
      anon_sym_SLASH_GT,
    STATE(193), 1,
      sym_Attribute,
  [2589] = 2,
    ACTIONS(557), 1,
      sym__S,
    ACTIONS(555), 3,
      anon_sym_PIPE,
      anon_sym_PERCENT,
      sym_Name,
  [2598] = 4,
    ACTIONS(113), 1,
      anon_sym_PERCENT,
    ACTIONS(560), 1,
      sym_Name,
    ACTIONS(562), 1,
      sym__S,
    STATE(102), 1,
      sym_PEReference,
  [2611] = 4,
    ACTIONS(492), 1,
      sym_Name,
    ACTIONS(494), 1,
      anon_sym_GT,
    ACTIONS(564), 1,
      anon_sym_SLASH_GT,
    STATE(193), 1,
      sym_Attribute,
  [2624] = 4,
    ACTIONS(566), 1,
      anon_sym_LT,
    STATE(2), 1,
      sym_STag,
    STATE(66), 1,
      sym_element,
    STATE(167), 1,
      sym_EmptyElemTag,
  [2637] = 1,
    ACTIONS(274), 4,
      sym_Comment,
      ts_builtin_sym_end,
      sym__S,
      anon_sym_LT_QMARK,
  [2644] = 4,
    ACTIONS(510), 1,
      anon_sym_GT,
    ACTIONS(553), 1,
      anon_sym_SLASH_GT,
    ACTIONS(568), 1,
      sym__S,
    STATE(185), 1,
      aux_sym_EmptyElemTag_repeat1,
  [2657] = 2,
    ACTIONS(572), 1,
      anon_sym_LT,
    ACTIONS(570), 3,
      sym_Comment,
      sym__S,
      anon_sym_LT_QMARK,
  [2666] = 2,
    ACTIONS(576), 1,
      anon_sym_LT,
    ACTIONS(574), 3,
      sym_Comment,
      sym__S,
      anon_sym_LT_QMARK,
  [2675] = 2,
    ACTIONS(580), 1,
      anon_sym_LT,
    ACTIONS(578), 3,
      sym_Comment,
      sym__S,
      anon_sym_LT_QMARK,
  [2684] = 4,
    ACTIONS(516), 1,
      anon_sym_PIPE,
    ACTIONS(518), 1,
      anon_sym_RPAREN,
    ACTIONS(520), 1,
      sym__S,
    STATE(142), 1,
      aux_sym_Enumeration_repeat1,
  [2697] = 1,
    ACTIONS(190), 4,
      sym_Comment,
      ts_builtin_sym_end,
      sym__S,
      anon_sym_LT_QMARK,
  [2704] = 1,
    ACTIONS(582), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__S,
  [2711] = 3,
    ACTIONS(549), 1,
      anon_sym_PERCENT,
    ACTIONS(584), 1,
      sym__S,
    STATE(123), 2,
      sym__DeclSep,
      sym_PEReference,
  [2722] = 2,
    ACTIONS(588), 1,
      anon_sym_LT,
    ACTIONS(586), 3,
      sym_Comment,
      sym__S,
      anon_sym_LT_QMARK,
  [2731] = 3,
    ACTIONS(590), 1,
      anon_sym_GT,
    ACTIONS(592), 1,
      sym__S,
    STATE(139), 2,
      sym_AttDef,
      aux_sym_AttlistDecl_repeat1,
  [2742] = 4,
    ACTIONS(113), 1,
      anon_sym_PERCENT,
    ACTIONS(531), 1,
      sym_Name,
    ACTIONS(590), 1,
      anon_sym_GT,
    STATE(341), 1,
      sym_PEReference,
  [2755] = 4,
    ACTIONS(594), 1,
      anon_sym_ELEMENT,
    ACTIONS(596), 1,
      anon_sym_ATTLIST,
    ACTIONS(598), 1,
      anon_sym_NOTATION,
    ACTIONS(600), 1,
      anon_sym_ENTITY,
  [2768] = 4,
    ACTIONS(113), 1,
      anon_sym_PERCENT,
    ACTIONS(602), 1,
      sym_Name,
    ACTIONS(604), 1,
      sym__S,
    STATE(191), 1,
      sym_PEReference,
  [2781] = 1,
    ACTIONS(298), 4,
      sym_Comment,
      ts_builtin_sym_end,
      sym__S,
      anon_sym_LT_QMARK,
  [2788] = 1,
    ACTIONS(302), 4,
      sym_Comment,
      ts_builtin_sym_end,
      sym__S,
      anon_sym_LT_QMARK,
  [2795] = 1,
    ACTIONS(248), 4,
      sym_Comment,
      ts_builtin_sym_end,
      sym__S,
      anon_sym_LT_QMARK,
  [2802] = 4,
    ACTIONS(358), 1,
      anon_sym_PIPE,
    ACTIONS(606), 1,
      anon_sym_RPAREN,
    ACTIONS(608), 1,
      sym__S,
    STATE(182), 1,
      aux_sym_Mixed_repeat1,
  [2815] = 2,
    ACTIONS(610), 1,
      sym__S,
    ACTIONS(440), 3,
      anon_sym_PIPE,
      anon_sym_PERCENT,
      sym_Name,
  [2824] = 4,
    ACTIONS(358), 1,
      anon_sym_PIPE,
    ACTIONS(360), 1,
      anon_sym_RPAREN,
    ACTIONS(366), 1,
      sym__S,
    STATE(186), 1,
      aux_sym_Mixed_repeat1,
  [2837] = 1,
    ACTIONS(613), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__S,
  [2844] = 2,
    ACTIONS(617), 1,
      anon_sym_LT,
    ACTIONS(615), 3,
      sym_Comment,
      sym__S,
      anon_sym_LT_QMARK,
  [2853] = 4,
    ACTIONS(619), 1,
      anon_sym_GT,
    ACTIONS(621), 1,
      sym__S,
    ACTIONS(623), 1,
      anon_sym_SLASH_GT,
    STATE(133), 1,
      aux_sym_EmptyElemTag_repeat1,
  [2866] = 3,
    ACTIONS(625), 1,
      anon_sym_GT,
    ACTIONS(627), 1,
      sym__S,
    STATE(161), 2,
      sym_AttDef,
      aux_sym_AttlistDecl_repeat1,
  [2877] = 1,
    ACTIONS(629), 4,
      anon_sym_PIPE,
      anon_sym_PERCENT,
      sym__S,
      sym_Name,
  [2884] = 2,
    ACTIONS(633), 1,
      anon_sym_LT,
    ACTIONS(631), 3,
      sym_Comment,
      sym__S,
      anon_sym_LT_QMARK,
  [2893] = 4,
    ACTIONS(516), 1,
      anon_sym_PIPE,
    ACTIONS(635), 1,
      anon_sym_RPAREN,
    ACTIONS(637), 1,
      sym__S,
    STATE(136), 1,
      aux_sym_Enumeration_repeat1,
  [2906] = 4,
    ACTIONS(566), 1,
      anon_sym_LT,
    STATE(2), 1,
      sym_STag,
    STATE(46), 1,
      sym_element,
    STATE(167), 1,
      sym_EmptyElemTag,
  [2919] = 1,
    ACTIONS(220), 4,
      sym_Comment,
      ts_builtin_sym_end,
      sym__S,
      anon_sym_LT_QMARK,
  [2926] = 1,
    ACTIONS(479), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__S,
  [2933] = 4,
    ACTIONS(619), 1,
      anon_sym_GT,
    ACTIONS(639), 1,
      sym__S,
    ACTIONS(641), 1,
      anon_sym_SLASH_GT,
    STATE(152), 1,
      aux_sym_EmptyElemTag_repeat1,
  [2946] = 4,
    ACTIONS(643), 1,
      anon_sym_PIPE,
    ACTIONS(646), 1,
      anon_sym_RPAREN,
    ACTIONS(648), 1,
      sym__S,
    STATE(182), 1,
      aux_sym_Mixed_repeat1,
  [2959] = 2,
    ACTIONS(653), 1,
      anon_sym_LT,
    ACTIONS(651), 3,
      sym_Comment,
      sym__S,
      anon_sym_LT_QMARK,
  [2968] = 1,
    ACTIONS(182), 4,
      sym_Comment,
      ts_builtin_sym_end,
      sym__S,
      anon_sym_LT_QMARK,
  [2975] = 3,
    ACTIONS(657), 1,
      sym__S,
    STATE(185), 1,
      aux_sym_EmptyElemTag_repeat1,
    ACTIONS(655), 2,
      anon_sym_GT,
      anon_sym_SLASH_GT,
  [2986] = 4,
    ACTIONS(358), 1,
      anon_sym_PIPE,
    ACTIONS(608), 1,
      sym__S,
    ACTIONS(660), 1,
      anon_sym_RPAREN,
    STATE(182), 1,
      aux_sym_Mixed_repeat1,
  [2999] = 2,
    ACTIONS(664), 1,
      sym__S,
    ACTIONS(662), 2,
      anon_sym_PIPE,
      anon_sym_RPAREN,
  [3007] = 3,
    ACTIONS(667), 1,
      anon_sym_DQUOTE,
    ACTIONS(669), 1,
      anon_sym_SQUOTE,
    STATE(190), 1,
      sym_SystemLiteral,
  [3017] = 2,
    ACTIONS(673), 1,
      sym__S,
    ACTIONS(671), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3025] = 1,
    ACTIONS(675), 3,
      anon_sym_LBRACK,
      anon_sym_GT,
      sym__S,
  [3031] = 2,
    ACTIONS(677), 1,
      sym__S,
    ACTIONS(646), 2,
      anon_sym_PIPE,
      anon_sym_RPAREN,
  [3039] = 3,
    ACTIONS(113), 1,
      anon_sym_PERCENT,
    ACTIONS(488), 1,
      sym_Name,
    STATE(187), 1,
      sym_PEReference,
  [3049] = 1,
    ACTIONS(655), 3,
      anon_sym_GT,
      sym__S,
      anon_sym_SLASH_GT,
  [3055] = 3,
    ACTIONS(680), 1,
      sym__S,
    ACTIONS(682), 1,
      anon_sym_EQ,
    STATE(315), 1,
      sym__Eq,
  [3065] = 1,
    ACTIONS(684), 3,
      anon_sym_GT,
      sym__S,
      anon_sym_SLASH_GT,
  [3071] = 3,
    ACTIONS(680), 1,
      sym__S,
    ACTIONS(682), 1,
      anon_sym_EQ,
    STATE(317), 1,
      sym__Eq,
  [3081] = 3,
    ACTIONS(686), 1,
      anon_sym_DQUOTE,
    ACTIONS(688), 1,
      anon_sym_SQUOTE,
    STATE(318), 1,
      sym_PseudoAttValue,
  [3091] = 3,
    ACTIONS(690), 1,
      sym_Name,
    ACTIONS(692), 1,
      anon_sym_PERCENT,
    STATE(386), 1,
      sym_PEReference,
  [3101] = 3,
    ACTIONS(680), 1,
      sym__S,
    ACTIONS(682), 1,
      anon_sym_EQ,
    STATE(209), 1,
      sym__Eq,
  [3111] = 3,
    ACTIONS(694), 1,
      sym_Name,
    ACTIONS(696), 1,
      anon_sym_QMARK_GT,
    STATE(277), 1,
      sym_PseudoAtt,
  [3121] = 3,
    ACTIONS(698), 1,
      sym__S,
    ACTIONS(701), 1,
      anon_sym_QMARK_GT,
    STATE(201), 1,
      aux_sym_StyleSheetPI_repeat1,
  [3131] = 3,
    ACTIONS(113), 1,
      anon_sym_PERCENT,
    ACTIONS(703), 1,
      sym_Name,
    STATE(383), 1,
      sym_PEReference,
  [3141] = 3,
    ACTIONS(694), 1,
      sym_Name,
    ACTIONS(705), 1,
      anon_sym_QMARK_GT,
    STATE(277), 1,
      sym_PseudoAtt,
  [3151] = 3,
    ACTIONS(113), 1,
      anon_sym_PERCENT,
    ACTIONS(707), 1,
      sym_Name,
    STATE(174), 1,
      sym_PEReference,
  [3161] = 3,
    ACTIONS(680), 1,
      sym__S,
    ACTIONS(682), 1,
      anon_sym_EQ,
    STATE(197), 1,
      sym__Eq,
  [3171] = 3,
    ACTIONS(709), 1,
      sym__S,
    ACTIONS(711), 1,
      anon_sym_QMARK_GT,
    STATE(286), 1,
      sym__SDDecl,
  [3181] = 3,
    ACTIONS(113), 1,
      anon_sym_PERCENT,
    ACTIONS(713), 1,
      sym_Name,
    STATE(377), 1,
      sym_PEReference,
  [3191] = 3,
    ACTIONS(667), 1,
      anon_sym_DQUOTE,
    ACTIONS(669), 1,
      anon_sym_SQUOTE,
    STATE(223), 1,
      sym_SystemLiteral,
  [3201] = 3,
    ACTIONS(382), 1,
      anon_sym_DQUOTE,
    ACTIONS(384), 1,
      anon_sym_SQUOTE,
    STATE(232), 1,
      sym_AttValue,
  [3211] = 1,
    ACTIONS(715), 3,
      anon_sym_GT,
      sym__S,
      anon_sym_SLASH_GT,
  [3217] = 2,
    ACTIONS(719), 1,
      anon_sym_STAR,
    ACTIONS(717), 2,
      anon_sym_GT,
      sym__S,
  [3225] = 3,
    ACTIONS(113), 1,
      anon_sym_PERCENT,
    ACTIONS(721), 1,
      sym_Name,
    STATE(331), 1,
      sym_PEReference,
  [3235] = 3,
    ACTIONS(711), 1,
      anon_sym_QMARK_GT,
    ACTIONS(723), 1,
      anon_sym_encoding,
    ACTIONS(725), 1,
      anon_sym_standalone,
  [3245] = 3,
    ACTIONS(680), 1,
      sym__S,
    ACTIONS(682), 1,
      anon_sym_EQ,
    STATE(279), 1,
      sym__Eq,
  [3255] = 2,
    ACTIONS(729), 1,
      anon_sym_STAR,
    ACTIONS(727), 2,
      anon_sym_GT,
      sym__S,
  [3263] = 3,
    ACTIONS(731), 1,
      anon_sym_LBRACK,
    ACTIONS(733), 1,
      anon_sym_GT,
    ACTIONS(735), 1,
      sym__S,
  [3273] = 1,
    ACTIONS(737), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [3279] = 3,
    ACTIONS(113), 1,
      anon_sym_PERCENT,
    ACTIONS(739), 1,
      sym_Name,
    STATE(228), 1,
      sym_PEReference,
  [3289] = 1,
    ACTIONS(741), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [3295] = 3,
    ACTIONS(743), 1,
      sym__S,
    ACTIONS(745), 1,
      anon_sym_QMARK_GT,
    STATE(230), 1,
      aux_sym_StyleSheetPI_repeat1,
  [3305] = 1,
    ACTIONS(747), 3,
      anon_sym_LBRACK,
      anon_sym_GT,
      sym__S,
  [3311] = 3,
    ACTIONS(749), 1,
      anon_sym_DQUOTE,
    ACTIONS(751), 1,
      anon_sym_SQUOTE,
    STATE(368), 1,
      sym_PubidLiteral,
  [3321] = 1,
    ACTIONS(753), 3,
      anon_sym_LBRACK,
      anon_sym_GT,
      sym__S,
  [3327] = 1,
    ACTIONS(662), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [3333] = 3,
    ACTIONS(755), 1,
      sym__S,
    ACTIONS(757), 1,
      anon_sym_QMARK_GT,
    STATE(227), 1,
      aux_sym_StyleSheetPI_repeat1,
  [3343] = 1,
    ACTIONS(759), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [3349] = 3,
    ACTIONS(761), 1,
      sym__S,
    ACTIONS(763), 1,
      anon_sym_QMARK_GT,
    STATE(201), 1,
      aux_sym_StyleSheetPI_repeat1,
  [3359] = 2,
    ACTIONS(765), 1,
      sym__S,
    ACTIONS(759), 2,
      anon_sym_PIPE,
      anon_sym_RPAREN,
  [3367] = 3,
    ACTIONS(694), 1,
      sym_Name,
    ACTIONS(763), 1,
      anon_sym_QMARK_GT,
    STATE(277), 1,
      sym_PseudoAtt,
  [3377] = 3,
    ACTIONS(768), 1,
      sym__S,
    ACTIONS(770), 1,
      anon_sym_QMARK_GT,
    STATE(201), 1,
      aux_sym_StyleSheetPI_repeat1,
  [3387] = 3,
    ACTIONS(694), 1,
      sym_Name,
    ACTIONS(770), 1,
      anon_sym_QMARK_GT,
    STATE(277), 1,
      sym_PseudoAtt,
  [3397] = 1,
    ACTIONS(772), 3,
      anon_sym_GT,
      sym__S,
      anon_sym_SLASH_GT,
  [3403] = 3,
    ACTIONS(774), 1,
      anon_sym_LBRACK,
    ACTIONS(776), 1,
      anon_sym_GT,
    ACTIONS(778), 1,
      sym__S,
  [3413] = 2,
    ACTIONS(782), 1,
      sym__S,
    ACTIONS(780), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3421] = 1,
    ACTIONS(538), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [3427] = 3,
    ACTIONS(749), 1,
      anon_sym_DQUOTE,
    ACTIONS(751), 1,
      anon_sym_SQUOTE,
    STATE(290), 1,
      sym_PubidLiteral,
  [3437] = 3,
    ACTIONS(113), 1,
      anon_sym_PERCENT,
    ACTIONS(531), 1,
      sym_Name,
    STATE(341), 1,
      sym_PEReference,
  [3447] = 3,
    ACTIONS(113), 1,
      anon_sym_PERCENT,
    ACTIONS(784), 1,
      sym_Name,
    STATE(85), 1,
      sym_PEReference,
  [3457] = 3,
    ACTIONS(500), 1,
      anon_sym_xml_DASHstylesheet,
    ACTIONS(502), 1,
      anon_sym_xml_DASHmodel,
    ACTIONS(504), 1,
      sym_PITarget,
  [3467] = 3,
    ACTIONS(749), 1,
      anon_sym_DQUOTE,
    ACTIONS(751), 1,
      anon_sym_SQUOTE,
    STATE(289), 1,
      sym_PubidLiteral,
  [3477] = 3,
    ACTIONS(786), 1,
      anon_sym_GT,
    ACTIONS(788), 1,
      sym__S,
    STATE(267), 1,
      sym_NDataDecl,
  [3487] = 3,
    ACTIONS(382), 1,
      anon_sym_DQUOTE,
    ACTIONS(384), 1,
      anon_sym_SQUOTE,
    STATE(310), 1,
      sym_AttValue,
  [3497] = 1,
    ACTIONS(790), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [3503] = 2,
    ACTIONS(792), 1,
      anon_sym_GT,
    ACTIONS(794), 1,
      sym__S,
  [3510] = 1,
    ACTIONS(796), 2,
      anon_sym_PERCENT,
      sym__S,
  [3515] = 1,
    ACTIONS(798), 2,
      anon_sym_PERCENT,
      sym__S,
  [3520] = 2,
    ACTIONS(800), 1,
      sym__S,
    ACTIONS(802), 1,
      anon_sym_QMARK_GT,
  [3527] = 2,
    ACTIONS(804), 1,
      anon_sym_GT,
    ACTIONS(806), 1,
      sym__S,
  [3534] = 2,
    ACTIONS(29), 1,
      anon_sym_LT_SLASH,
    STATE(31), 1,
      sym_ETag,
  [3541] = 2,
    ACTIONS(808), 1,
      anon_sym_GT,
    ACTIONS(810), 1,
      sym__S,
  [3548] = 2,
    ACTIONS(812), 1,
      sym__S,
    ACTIONS(814), 1,
      anon_sym_QMARK_GT,
  [3555] = 2,
    ACTIONS(786), 1,
      anon_sym_GT,
    ACTIONS(816), 1,
      sym__S,
  [3562] = 2,
    ACTIONS(818), 1,
      sym__S,
    ACTIONS(820), 1,
      anon_sym_QMARK_GT,
  [3569] = 1,
    ACTIONS(822), 2,
      anon_sym_PERCENT,
      sym__S,
  [3574] = 2,
    ACTIONS(824), 1,
      sym__S,
    STATE(138), 1,
      sym__VersionInfo,
  [3581] = 1,
    ACTIONS(826), 2,
      anon_sym_GT,
      sym__S,
  [3586] = 1,
    ACTIONS(828), 2,
      anon_sym_PERCENT,
      sym__S,
  [3591] = 1,
    ACTIONS(830), 2,
      anon_sym_PERCENT,
      sym__S,
  [3596] = 2,
    ACTIONS(25), 1,
      anon_sym_LT_SLASH,
    STATE(157), 1,
      sym_ETag,
  [3603] = 2,
    ACTIONS(832), 1,
      sym_Name,
    ACTIONS(834), 1,
      sym__S,
  [3610] = 1,
    ACTIONS(836), 2,
      anon_sym_GT,
      sym__S,
  [3615] = 1,
    ACTIONS(838), 2,
      anon_sym_GT,
      sym__S,
  [3620] = 2,
    ACTIONS(840), 1,
      anon_sym_RBRACK_RBRACK_GT,
    ACTIONS(842), 1,
      sym_CData,
  [3627] = 1,
    ACTIONS(844), 2,
      anon_sym_PERCENT,
      sym__S,
  [3632] = 1,
    ACTIONS(306), 2,
      anon_sym_PERCENT,
      sym__S,
  [3637] = 2,
    ACTIONS(846), 1,
      anon_sym_GT,
    ACTIONS(848), 1,
      anon_sym_NDATA,
  [3644] = 2,
    ACTIONS(846), 1,
      anon_sym_GT,
    ACTIONS(850), 1,
      sym__S,
  [3651] = 1,
    ACTIONS(852), 2,
      anon_sym_GT,
      sym__S,
  [3656] = 1,
    ACTIONS(260), 2,
      anon_sym_PERCENT,
      sym__S,
  [3661] = 1,
    ACTIONS(854), 2,
      anon_sym_PERCENT,
      sym__S,
  [3666] = 1,
    ACTIONS(856), 2,
      sym__S,
      anon_sym_QMARK_GT,
  [3671] = 2,
    ACTIONS(719), 1,
      anon_sym_RPAREN,
    ACTIONS(858), 1,
      anon_sym_PIPE,
  [3678] = 1,
    ACTIONS(860), 2,
      sym__S,
      anon_sym_QMARK_GT,
  [3683] = 2,
    ACTIONS(862), 1,
      anon_sym_GT,
    ACTIONS(864), 1,
      sym__S,
  [3690] = 2,
    ACTIONS(866), 1,
      anon_sym_GT,
    ACTIONS(868), 1,
      sym__S,
  [3697] = 2,
    ACTIONS(711), 1,
      anon_sym_QMARK_GT,
    ACTIONS(870), 1,
      sym__S,
  [3704] = 1,
    ACTIONS(701), 2,
      sym__S,
      anon_sym_QMARK_GT,
  [3709] = 1,
    ACTIONS(872), 2,
      sym_CData,
      anon_sym_RBRACK_RBRACK_GT,
  [3714] = 2,
    ACTIONS(874), 1,
      anon_sym_DQUOTE,
    ACTIONS(876), 1,
      anon_sym_SQUOTE,
  [3721] = 1,
    ACTIONS(878), 2,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [3726] = 2,
    ACTIONS(725), 1,
      anon_sym_standalone,
    ACTIONS(880), 1,
      anon_sym_QMARK_GT,
  [3733] = 1,
    ACTIONS(882), 2,
      anon_sym_PERCENT,
      sym__S,
  [3738] = 2,
    ACTIONS(884), 1,
      sym__S,
    ACTIONS(886), 1,
      sym_Nmtoken,
  [3745] = 1,
    ACTIONS(888), 2,
      anon_sym_GT,
      sym__S,
  [3750] = 1,
    ACTIONS(890), 2,
      anon_sym_GT,
      sym__S,
  [3755] = 2,
    ACTIONS(880), 1,
      anon_sym_QMARK_GT,
    ACTIONS(892), 1,
      sym__S,
  [3762] = 2,
    ACTIONS(894), 1,
      anon_sym_GT,
    ACTIONS(896), 1,
      sym__S,
  [3769] = 1,
    ACTIONS(898), 2,
      anon_sym_GT,
      sym__S,
  [3774] = 2,
    ACTIONS(900), 1,
      anon_sym_GT,
    ACTIONS(902), 1,
      sym__S,
  [3781] = 1,
    ACTIONS(900), 2,
      anon_sym_GT,
      sym__S,
  [3786] = 1,
    ACTIONS(904), 2,
      anon_sym_PERCENT,
      sym__S,
  [3791] = 2,
    ACTIONS(906), 1,
      anon_sym_GT,
    ACTIONS(908), 1,
      sym__S,
  [3798] = 1,
    ACTIONS(910), 2,
      anon_sym_GT,
      sym__S,
  [3803] = 1,
    ACTIONS(912), 2,
      anon_sym_GT,
      sym__S,
  [3808] = 1,
    ACTIONS(914), 2,
      anon_sym_GT,
      sym__S,
  [3813] = 1,
    ACTIONS(916), 2,
      anon_sym_PERCENT,
      sym__S,
  [3818] = 2,
    ACTIONS(918), 1,
      anon_sym_RPAREN,
    ACTIONS(920), 1,
      sym__S,
  [3825] = 1,
    ACTIONS(922), 2,
      anon_sym_GT,
      sym__S,
  [3830] = 2,
    ACTIONS(694), 1,
      sym_Name,
    STATE(277), 1,
      sym_PseudoAtt,
  [3837] = 1,
    ACTIONS(924), 2,
      sym__S,
      anon_sym_QMARK_GT,
  [3842] = 1,
    ACTIONS(727), 2,
      anon_sym_GT,
      sym__S,
  [3847] = 1,
    ACTIONS(926), 2,
      anon_sym_GT,
      sym__S,
  [3852] = 2,
    ACTIONS(492), 1,
      sym_Name,
    STATE(193), 1,
      sym_Attribute,
  [3859] = 1,
    ACTIONS(928), 2,
      anon_sym_PERCENT,
      sym__S,
  [3864] = 1,
    ACTIONS(930), 2,
      anon_sym_PERCENT,
      sym__S,
  [3869] = 2,
    ACTIONS(932), 1,
      anon_sym_RPAREN,
    ACTIONS(934), 1,
      sym__S,
  [3876] = 2,
    ACTIONS(729), 1,
      anon_sym_RPAREN,
    ACTIONS(858), 1,
      anon_sym_PIPE,
  [3883] = 1,
    ACTIONS(936), 2,
      anon_sym_GT,
      sym__S,
  [3888] = 1,
    ACTIONS(938), 2,
      sym__S,
      anon_sym_QMARK_GT,
  [3893] = 1,
    ACTIONS(940), 2,
      anon_sym_GT,
      sym__S,
  [3898] = 2,
    ACTIONS(942), 1,
      anon_sym_RPAREN,
    ACTIONS(944), 1,
      sym__S,
  [3905] = 1,
    ACTIONS(780), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3910] = 2,
    ACTIONS(946), 1,
      anon_sym_PIPE,
    ACTIONS(948), 1,
      anon_sym_RPAREN,
  [3917] = 1,
    ACTIONS(950), 2,
      anon_sym_GT,
      sym__S,
  [3922] = 2,
    ACTIONS(952), 1,
      anon_sym_DQUOTE,
    ACTIONS(954), 1,
      anon_sym_SQUOTE,
  [3929] = 2,
    ACTIONS(956), 1,
      anon_sym_GT,
    ACTIONS(958), 1,
      sym__S,
  [3936] = 2,
    ACTIONS(960), 1,
      anon_sym_DQUOTE,
    ACTIONS(962), 1,
      anon_sym_SQUOTE,
  [3943] = 1,
    ACTIONS(964), 2,
      sym__S,
      anon_sym_QMARK_GT,
  [3948] = 1,
    ACTIONS(966), 2,
      anon_sym_PERCENT,
      sym__S,
  [3953] = 2,
    ACTIONS(968), 1,
      sym__S,
    ACTIONS(970), 1,
      sym_Nmtoken,
  [3960] = 2,
    ACTIONS(972), 1,
      anon_sym_GT,
    ACTIONS(974), 1,
      sym__S,
  [3967] = 1,
    ACTIONS(976), 2,
      anon_sym_PERCENT,
      sym__S,
  [3972] = 1,
    ACTIONS(978), 2,
      sym__S,
      anon_sym_QMARK_GT,
  [3977] = 1,
    ACTIONS(980), 2,
      anon_sym_yes,
      anon_sym_no,
  [3982] = 1,
    ACTIONS(982), 2,
      anon_sym_yes,
      anon_sym_no,
  [3987] = 1,
    ACTIONS(984), 2,
      anon_sym_GT,
      sym__S,
  [3992] = 2,
    ACTIONS(543), 1,
      anon_sym_RPAREN,
    ACTIONS(946), 1,
      anon_sym_PIPE,
  [3999] = 1,
    ACTIONS(986), 2,
      anon_sym_GT,
      sym__S,
  [4004] = 1,
    ACTIONS(988), 2,
      anon_sym_GT,
      sym__S,
  [4009] = 2,
    ACTIONS(990), 1,
      anon_sym_GT,
    ACTIONS(992), 1,
      sym__S,
  [4016] = 1,
    ACTIONS(994), 2,
      anon_sym_GT,
      sym__S,
  [4021] = 2,
    ACTIONS(996), 1,
      sym__S,
    ACTIONS(998), 1,
      sym_Nmtoken,
  [4028] = 1,
    ACTIONS(1000), 2,
      anon_sym_GT,
      sym__S,
  [4033] = 2,
    ACTIONS(518), 1,
      anon_sym_RPAREN,
    ACTIONS(946), 1,
      anon_sym_PIPE,
  [4040] = 1,
    ACTIONS(1002), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [4045] = 2,
    ACTIONS(990), 1,
      anon_sym_GT,
    ACTIONS(1004), 1,
      anon_sym_LBRACK,
  [4052] = 1,
    ACTIONS(1006), 2,
      anon_sym_GT,
      sym__S,
  [4057] = 1,
    ACTIONS(1008), 2,
      anon_sym_GT,
      sym__S,
  [4062] = 1,
    ACTIONS(970), 1,
      sym_Nmtoken,
  [4066] = 1,
    ACTIONS(1010), 1,
      anon_sym_SEMI,
  [4070] = 1,
    ACTIONS(1012), 1,
      sym__S,
  [4074] = 1,
    ACTIONS(1014), 1,
      anon_sym_DQUOTE,
  [4078] = 1,
    ACTIONS(1016), 1,
      sym_Name,
  [4082] = 1,
    ACTIONS(1014), 1,
      anon_sym_SQUOTE,
  [4086] = 1,
    ACTIONS(1018), 1,
      sym__S,
  [4090] = 1,
    ACTIONS(1020), 1,
      sym_EncName,
  [4094] = 1,
    ACTIONS(1022), 1,
      sym_EncName,
  [4098] = 1,
    ACTIONS(1024), 1,
      sym__S,
  [4102] = 1,
    ACTIONS(1026), 1,
      anon_sym_STAR,
  [4106] = 1,
    ACTIONS(1028), 1,
      sym__S,
  [4110] = 1,
    ACTIONS(1030), 1,
      anon_sym_SEMI,
  [4114] = 1,
    ACTIONS(1032), 1,
      sym__S,
  [4118] = 1,
    ACTIONS(1034), 1,
      anon_sym_GT,
  [4122] = 1,
    ACTIONS(1036), 1,
      anon_sym_QMARK_GT,
  [4126] = 1,
    ACTIONS(956), 1,
      anon_sym_GT,
  [4130] = 1,
    ACTIONS(1038), 1,
      anon_sym_LPAREN,
  [4134] = 1,
    ACTIONS(1040), 1,
      sym_Nmtoken,
  [4138] = 1,
    ACTIONS(1042), 1,
      aux_sym_SystemLiteral_token1,
  [4142] = 1,
    ACTIONS(1044), 1,
      anon_sym_DOCTYPE,
  [4146] = 1,
    ACTIONS(1046), 1,
      sym_Nmtoken,
  [4150] = 1,
    ACTIONS(946), 1,
      anon_sym_PIPE,
  [4154] = 1,
    ACTIONS(1048), 1,
      sym_VersionNum,
  [4158] = 1,
    ACTIONS(1050), 1,
      aux_sym_SystemLiteral_token2,
  [4162] = 1,
    ACTIONS(1052), 1,
      anon_sym_PIPE,
  [4166] = 1,
    ACTIONS(1054), 1,
      aux_sym_PubidLiteral_token1,
  [4170] = 1,
    ACTIONS(1056), 1,
      sym__S,
  [4174] = 1,
    ACTIONS(1058), 1,
      aux_sym_PubidLiteral_token2,
  [4178] = 1,
    ACTIONS(902), 1,
      sym__S,
  [4182] = 1,
    ACTIONS(1060), 1,
      sym__S,
  [4186] = 1,
    ACTIONS(1062), 1,
      anon_sym_DQUOTE,
  [4190] = 1,
    ACTIONS(1062), 1,
      anon_sym_SQUOTE,
  [4194] = 1,
    ACTIONS(1064), 1,
      anon_sym_DQUOTE,
  [4198] = 1,
    ACTIONS(858), 1,
      anon_sym_PIPE,
  [4202] = 1,
    ACTIONS(729), 1,
      anon_sym_STAR,
  [4206] = 1,
    ACTIONS(932), 1,
      anon_sym_RPAREN,
  [4210] = 1,
    ACTIONS(1064), 1,
      anon_sym_SQUOTE,
  [4214] = 1,
    ACTIONS(1066), 1,
      sym__S,
  [4218] = 1,
    ACTIONS(918), 1,
      anon_sym_RPAREN,
  [4222] = 1,
    ACTIONS(1068), 1,
      anon_sym_GT,
  [4226] = 1,
    ACTIONS(880), 1,
      anon_sym_QMARK_GT,
  [4230] = 1,
    ACTIONS(1070), 1,
      sym__S,
  [4234] = 1,
    ACTIONS(1072), 1,
      anon_sym_RPAREN,
  [4238] = 1,
    ACTIONS(1074), 1,
      sym__S,
  [4242] = 1,
    ACTIONS(1076), 1,
      sym_VersionNum,
  [4246] = 1,
    ACTIONS(1078), 1,
      sym__S,
  [4250] = 1,
    ACTIONS(1080), 1,
      sym__S,
  [4254] = 1,
    ACTIONS(1082), 1,
      anon_sym_EQ,
  [4258] = 1,
    ACTIONS(1084), 1,
      anon_sym_GT,
  [4262] = 1,
    ACTIONS(862), 1,
      anon_sym_GT,
  [4266] = 1,
    ACTIONS(1086), 1,
      anon_sym_DQUOTE,
  [4270] = 1,
    ACTIONS(1086), 1,
      anon_sym_SQUOTE,
  [4274] = 1,
    ACTIONS(1088), 1,
      anon_sym_QMARK_GT,
  [4278] = 1,
    ACTIONS(1090), 1,
      anon_sym_RBRACK_RBRACK_GT,
  [4282] = 1,
    ACTIONS(1092), 1,
      anon_sym_DQUOTE,
  [4286] = 1,
    ACTIONS(1094), 1,
      anon_sym_SEMI,
  [4290] = 1,
    ACTIONS(1096), 1,
      sym__S,
  [4294] = 1,
    ACTIONS(1098), 1,
      anon_sym_LBRACK,
  [4298] = 1,
    ACTIONS(1100), 1,
      anon_sym_version,
  [4302] = 1,
    ACTIONS(1092), 1,
      anon_sym_SQUOTE,
  [4306] = 1,
    ACTIONS(1102), 1,
      sym__pi_content,
  [4310] = 1,
    ACTIONS(1104), 1,
      sym_Name,
  [4314] = 1,
    ACTIONS(1106), 1,
      sym_Name,
  [4318] = 1,
    ACTIONS(846), 1,
      anon_sym_GT,
  [4322] = 1,
    ACTIONS(792), 1,
      anon_sym_GT,
  [4326] = 1,
    ACTIONS(1108), 1,
      sym_Name,
  [4330] = 1,
    ACTIONS(1110), 1,
      sym_PITarget,
  [4334] = 1,
    ACTIONS(1112), 1,
      aux_sym_CharRef_token2,
  [4338] = 1,
    ACTIONS(1112), 1,
      aux_sym_CharRef_token1,
  [4342] = 1,
    ACTIONS(1114), 1,
      sym_Name,
  [4346] = 1,
    ACTIONS(1116), 1,
      anon_sym_CDATA,
  [4350] = 1,
    ACTIONS(1118), 1,
      anon_sym_GT,
  [4354] = 1,
    ACTIONS(1120), 1,
      anon_sym_GT,
  [4358] = 1,
    ACTIONS(1122), 1,
      anon_sym_GT,
  [4362] = 1,
    ACTIONS(1124), 1,
      sym__S,
  [4366] = 1,
    ACTIONS(1126), 1,
      sym__S,
  [4370] = 1,
    ACTIONS(1128), 1,
      ts_builtin_sym_end,
  [4374] = 1,
    ACTIONS(1130), 1,
      anon_sym_SEMI,
  [4378] = 1,
    ACTIONS(1132), 1,
      anon_sym_SEMI,
  [4382] = 1,
    ACTIONS(1134), 1,
      sym__S,
  [4386] = 1,
    ACTIONS(1136), 1,
      anon_sym_QMARK_GT,
  [4390] = 1,
    ACTIONS(1138), 1,
      sym_Name,
  [4394] = 1,
    ACTIONS(1140), 1,
      anon_sym_GT,
  [4398] = 1,
    ACTIONS(1142), 1,
      anon_sym_SEMI,
  [4402] = 1,
    ACTIONS(1144), 1,
      sym__S,
  [4406] = 1,
    ACTIONS(1146), 1,
      anon_sym_SEMI,
  [4410] = 1,
    ACTIONS(1148), 1,
      anon_sym_SEMI,
  [4414] = 1,
    ACTIONS(1150), 1,
      anon_sym_QMARK_GT,
  [4418] = 1,
    ACTIONS(1152), 1,
      anon_sym_SEMI,
  [4422] = 1,
    ACTIONS(1154), 1,
      anon_sym_SEMI,
  [4426] = 1,
    ACTIONS(1156), 1,
      anon_sym_SEMI,
  [4430] = 1,
    ACTIONS(1158), 1,
      anon_sym_SEMI,
  [4434] = 1,
    ACTIONS(1160), 1,
      anon_sym_SEMI,
  [4438] = 1,
    ACTIONS(1162), 1,
      anon_sym_SEMI,
  [4442] = 1,
    ACTIONS(1164), 1,
      sym_Name,
  [4446] = 1,
    ACTIONS(1166), 1,
      sym_Name,
  [4450] = 1,
    ACTIONS(1168), 1,
      aux_sym_CharRef_token1,
  [4454] = 1,
    ACTIONS(1168), 1,
      aux_sym_CharRef_token2,
  [4458] = 1,
    ACTIONS(1170), 1,
      sym_PITarget,
  [4462] = 1,
    ACTIONS(1172), 1,
      sym_Name,
  [4466] = 1,
    ACTIONS(1174), 1,
      sym__pi_content,
  [4470] = 1,
    ACTIONS(832), 1,
      sym_Name,
  [4474] = 1,
    ACTIONS(1176), 1,
      sym_Name,
  [4478] = 1,
    ACTIONS(1178), 1,
      aux_sym_CharRef_token1,
  [4482] = 1,
    ACTIONS(1178), 1,
      aux_sym_CharRef_token2,
  [4486] = 1,
    ACTIONS(1180), 1,
      sym__pi_content,
  [4490] = 1,
    ACTIONS(1182), 1,
      sym_Name,
  [4494] = 1,
    ACTIONS(1184), 1,
      sym_Name,
  [4498] = 1,
    ACTIONS(1186), 1,
      aux_sym_CharRef_token1,
  [4502] = 1,
    ACTIONS(1186), 1,
      aux_sym_CharRef_token2,
  [4506] = 1,
    ACTIONS(1188), 1,
      sym_Name,
  [4510] = 1,
    ACTIONS(1190), 1,
      sym_Name,
  [4514] = 1,
    ACTIONS(1192), 1,
      aux_sym_CharRef_token1,
  [4518] = 1,
    ACTIONS(1192), 1,
      aux_sym_CharRef_token2,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 52,
  [SMALL_STATE(4)] = 104,
  [SMALL_STATE(5)] = 150,
  [SMALL_STATE(6)] = 196,
  [SMALL_STATE(7)] = 235,
  [SMALL_STATE(8)] = 268,
  [SMALL_STATE(9)] = 301,
  [SMALL_STATE(10)] = 334,
  [SMALL_STATE(11)] = 367,
  [SMALL_STATE(12)] = 400,
  [SMALL_STATE(13)] = 430,
  [SMALL_STATE(14)] = 460,
  [SMALL_STATE(15)] = 490,
  [SMALL_STATE(16)] = 520,
  [SMALL_STATE(17)] = 548,
  [SMALL_STATE(18)] = 576,
  [SMALL_STATE(19)] = 600,
  [SMALL_STATE(20)] = 628,
  [SMALL_STATE(21)] = 656,
  [SMALL_STATE(22)] = 678,
  [SMALL_STATE(23)] = 706,
  [SMALL_STATE(24)] = 730,
  [SMALL_STATE(25)] = 754,
  [SMALL_STATE(26)] = 782,
  [SMALL_STATE(27)] = 810,
  [SMALL_STATE(28)] = 834,
  [SMALL_STATE(29)] = 847,
  [SMALL_STATE(30)] = 861,
  [SMALL_STATE(31)] = 875,
  [SMALL_STATE(32)] = 889,
  [SMALL_STATE(33)] = 907,
  [SMALL_STATE(34)] = 925,
  [SMALL_STATE(35)] = 943,
  [SMALL_STATE(36)] = 967,
  [SMALL_STATE(37)] = 991,
  [SMALL_STATE(38)] = 1015,
  [SMALL_STATE(39)] = 1029,
  [SMALL_STATE(40)] = 1053,
  [SMALL_STATE(41)] = 1077,
  [SMALL_STATE(42)] = 1091,
  [SMALL_STATE(43)] = 1105,
  [SMALL_STATE(44)] = 1129,
  [SMALL_STATE(45)] = 1153,
  [SMALL_STATE(46)] = 1177,
  [SMALL_STATE(47)] = 1195,
  [SMALL_STATE(48)] = 1213,
  [SMALL_STATE(49)] = 1227,
  [SMALL_STATE(50)] = 1241,
  [SMALL_STATE(51)] = 1255,
  [SMALL_STATE(52)] = 1269,
  [SMALL_STATE(53)] = 1291,
  [SMALL_STATE(54)] = 1305,
  [SMALL_STATE(55)] = 1323,
  [SMALL_STATE(56)] = 1337,
  [SMALL_STATE(57)] = 1355,
  [SMALL_STATE(58)] = 1369,
  [SMALL_STATE(59)] = 1387,
  [SMALL_STATE(60)] = 1405,
  [SMALL_STATE(61)] = 1419,
  [SMALL_STATE(62)] = 1437,
  [SMALL_STATE(63)] = 1455,
  [SMALL_STATE(64)] = 1469,
  [SMALL_STATE(65)] = 1483,
  [SMALL_STATE(66)] = 1497,
  [SMALL_STATE(67)] = 1515,
  [SMALL_STATE(68)] = 1539,
  [SMALL_STATE(69)] = 1563,
  [SMALL_STATE(70)] = 1577,
  [SMALL_STATE(71)] = 1588,
  [SMALL_STATE(72)] = 1613,
  [SMALL_STATE(73)] = 1624,
  [SMALL_STATE(74)] = 1645,
  [SMALL_STATE(75)] = 1656,
  [SMALL_STATE(76)] = 1677,
  [SMALL_STATE(77)] = 1697,
  [SMALL_STATE(78)] = 1717,
  [SMALL_STATE(79)] = 1737,
  [SMALL_STATE(80)] = 1757,
  [SMALL_STATE(81)] = 1769,
  [SMALL_STATE(82)] = 1791,
  [SMALL_STATE(83)] = 1802,
  [SMALL_STATE(84)] = 1813,
  [SMALL_STATE(85)] = 1824,
  [SMALL_STATE(86)] = 1843,
  [SMALL_STATE(87)] = 1854,
  [SMALL_STATE(88)] = 1871,
  [SMALL_STATE(89)] = 1882,
  [SMALL_STATE(90)] = 1899,
  [SMALL_STATE(91)] = 1910,
  [SMALL_STATE(92)] = 1929,
  [SMALL_STATE(93)] = 1946,
  [SMALL_STATE(94)] = 1957,
  [SMALL_STATE(95)] = 1976,
  [SMALL_STATE(96)] = 1987,
  [SMALL_STATE(97)] = 1998,
  [SMALL_STATE(98)] = 2015,
  [SMALL_STATE(99)] = 2032,
  [SMALL_STATE(100)] = 2043,
  [SMALL_STATE(101)] = 2054,
  [SMALL_STATE(102)] = 2073,
  [SMALL_STATE(103)] = 2092,
  [SMALL_STATE(104)] = 2103,
  [SMALL_STATE(105)] = 2114,
  [SMALL_STATE(106)] = 2125,
  [SMALL_STATE(107)] = 2136,
  [SMALL_STATE(108)] = 2147,
  [SMALL_STATE(109)] = 2157,
  [SMALL_STATE(110)] = 2171,
  [SMALL_STATE(111)] = 2181,
  [SMALL_STATE(112)] = 2189,
  [SMALL_STATE(113)] = 2199,
  [SMALL_STATE(114)] = 2213,
  [SMALL_STATE(115)] = 2223,
  [SMALL_STATE(116)] = 2233,
  [SMALL_STATE(117)] = 2247,
  [SMALL_STATE(118)] = 2261,
  [SMALL_STATE(119)] = 2271,
  [SMALL_STATE(120)] = 2281,
  [SMALL_STATE(121)] = 2289,
  [SMALL_STATE(122)] = 2305,
  [SMALL_STATE(123)] = 2315,
  [SMALL_STATE(124)] = 2323,
  [SMALL_STATE(125)] = 2337,
  [SMALL_STATE(126)] = 2351,
  [SMALL_STATE(127)] = 2361,
  [SMALL_STATE(128)] = 2371,
  [SMALL_STATE(129)] = 2381,
  [SMALL_STATE(130)] = 2394,
  [SMALL_STATE(131)] = 2407,
  [SMALL_STATE(132)] = 2420,
  [SMALL_STATE(133)] = 2429,
  [SMALL_STATE(134)] = 2442,
  [SMALL_STATE(135)] = 2455,
  [SMALL_STATE(136)] = 2462,
  [SMALL_STATE(137)] = 2475,
  [SMALL_STATE(138)] = 2482,
  [SMALL_STATE(139)] = 2495,
  [SMALL_STATE(140)] = 2506,
  [SMALL_STATE(141)] = 2519,
  [SMALL_STATE(142)] = 2532,
  [SMALL_STATE(143)] = 2545,
  [SMALL_STATE(144)] = 2552,
  [SMALL_STATE(145)] = 2565,
  [SMALL_STATE(146)] = 2576,
  [SMALL_STATE(147)] = 2589,
  [SMALL_STATE(148)] = 2598,
  [SMALL_STATE(149)] = 2611,
  [SMALL_STATE(150)] = 2624,
  [SMALL_STATE(151)] = 2637,
  [SMALL_STATE(152)] = 2644,
  [SMALL_STATE(153)] = 2657,
  [SMALL_STATE(154)] = 2666,
  [SMALL_STATE(155)] = 2675,
  [SMALL_STATE(156)] = 2684,
  [SMALL_STATE(157)] = 2697,
  [SMALL_STATE(158)] = 2704,
  [SMALL_STATE(159)] = 2711,
  [SMALL_STATE(160)] = 2722,
  [SMALL_STATE(161)] = 2731,
  [SMALL_STATE(162)] = 2742,
  [SMALL_STATE(163)] = 2755,
  [SMALL_STATE(164)] = 2768,
  [SMALL_STATE(165)] = 2781,
  [SMALL_STATE(166)] = 2788,
  [SMALL_STATE(167)] = 2795,
  [SMALL_STATE(168)] = 2802,
  [SMALL_STATE(169)] = 2815,
  [SMALL_STATE(170)] = 2824,
  [SMALL_STATE(171)] = 2837,
  [SMALL_STATE(172)] = 2844,
  [SMALL_STATE(173)] = 2853,
  [SMALL_STATE(174)] = 2866,
  [SMALL_STATE(175)] = 2877,
  [SMALL_STATE(176)] = 2884,
  [SMALL_STATE(177)] = 2893,
  [SMALL_STATE(178)] = 2906,
  [SMALL_STATE(179)] = 2919,
  [SMALL_STATE(180)] = 2926,
  [SMALL_STATE(181)] = 2933,
  [SMALL_STATE(182)] = 2946,
  [SMALL_STATE(183)] = 2959,
  [SMALL_STATE(184)] = 2968,
  [SMALL_STATE(185)] = 2975,
  [SMALL_STATE(186)] = 2986,
  [SMALL_STATE(187)] = 2999,
  [SMALL_STATE(188)] = 3007,
  [SMALL_STATE(189)] = 3017,
  [SMALL_STATE(190)] = 3025,
  [SMALL_STATE(191)] = 3031,
  [SMALL_STATE(192)] = 3039,
  [SMALL_STATE(193)] = 3049,
  [SMALL_STATE(194)] = 3055,
  [SMALL_STATE(195)] = 3065,
  [SMALL_STATE(196)] = 3071,
  [SMALL_STATE(197)] = 3081,
  [SMALL_STATE(198)] = 3091,
  [SMALL_STATE(199)] = 3101,
  [SMALL_STATE(200)] = 3111,
  [SMALL_STATE(201)] = 3121,
  [SMALL_STATE(202)] = 3131,
  [SMALL_STATE(203)] = 3141,
  [SMALL_STATE(204)] = 3151,
  [SMALL_STATE(205)] = 3161,
  [SMALL_STATE(206)] = 3171,
  [SMALL_STATE(207)] = 3181,
  [SMALL_STATE(208)] = 3191,
  [SMALL_STATE(209)] = 3201,
  [SMALL_STATE(210)] = 3211,
  [SMALL_STATE(211)] = 3217,
  [SMALL_STATE(212)] = 3225,
  [SMALL_STATE(213)] = 3235,
  [SMALL_STATE(214)] = 3245,
  [SMALL_STATE(215)] = 3255,
  [SMALL_STATE(216)] = 3263,
  [SMALL_STATE(217)] = 3273,
  [SMALL_STATE(218)] = 3279,
  [SMALL_STATE(219)] = 3289,
  [SMALL_STATE(220)] = 3295,
  [SMALL_STATE(221)] = 3305,
  [SMALL_STATE(222)] = 3311,
  [SMALL_STATE(223)] = 3321,
  [SMALL_STATE(224)] = 3327,
  [SMALL_STATE(225)] = 3333,
  [SMALL_STATE(226)] = 3343,
  [SMALL_STATE(227)] = 3349,
  [SMALL_STATE(228)] = 3359,
  [SMALL_STATE(229)] = 3367,
  [SMALL_STATE(230)] = 3377,
  [SMALL_STATE(231)] = 3387,
  [SMALL_STATE(232)] = 3397,
  [SMALL_STATE(233)] = 3403,
  [SMALL_STATE(234)] = 3413,
  [SMALL_STATE(235)] = 3421,
  [SMALL_STATE(236)] = 3427,
  [SMALL_STATE(237)] = 3437,
  [SMALL_STATE(238)] = 3447,
  [SMALL_STATE(239)] = 3457,
  [SMALL_STATE(240)] = 3467,
  [SMALL_STATE(241)] = 3477,
  [SMALL_STATE(242)] = 3487,
  [SMALL_STATE(243)] = 3497,
  [SMALL_STATE(244)] = 3503,
  [SMALL_STATE(245)] = 3510,
  [SMALL_STATE(246)] = 3515,
  [SMALL_STATE(247)] = 3520,
  [SMALL_STATE(248)] = 3527,
  [SMALL_STATE(249)] = 3534,
  [SMALL_STATE(250)] = 3541,
  [SMALL_STATE(251)] = 3548,
  [SMALL_STATE(252)] = 3555,
  [SMALL_STATE(253)] = 3562,
  [SMALL_STATE(254)] = 3569,
  [SMALL_STATE(255)] = 3574,
  [SMALL_STATE(256)] = 3581,
  [SMALL_STATE(257)] = 3586,
  [SMALL_STATE(258)] = 3591,
  [SMALL_STATE(259)] = 3596,
  [SMALL_STATE(260)] = 3603,
  [SMALL_STATE(261)] = 3610,
  [SMALL_STATE(262)] = 3615,
  [SMALL_STATE(263)] = 3620,
  [SMALL_STATE(264)] = 3627,
  [SMALL_STATE(265)] = 3632,
  [SMALL_STATE(266)] = 3637,
  [SMALL_STATE(267)] = 3644,
  [SMALL_STATE(268)] = 3651,
  [SMALL_STATE(269)] = 3656,
  [SMALL_STATE(270)] = 3661,
  [SMALL_STATE(271)] = 3666,
  [SMALL_STATE(272)] = 3671,
  [SMALL_STATE(273)] = 3678,
  [SMALL_STATE(274)] = 3683,
  [SMALL_STATE(275)] = 3690,
  [SMALL_STATE(276)] = 3697,
  [SMALL_STATE(277)] = 3704,
  [SMALL_STATE(278)] = 3709,
  [SMALL_STATE(279)] = 3714,
  [SMALL_STATE(280)] = 3721,
  [SMALL_STATE(281)] = 3726,
  [SMALL_STATE(282)] = 3733,
  [SMALL_STATE(283)] = 3738,
  [SMALL_STATE(284)] = 3745,
  [SMALL_STATE(285)] = 3750,
  [SMALL_STATE(286)] = 3755,
  [SMALL_STATE(287)] = 3762,
  [SMALL_STATE(288)] = 3769,
  [SMALL_STATE(289)] = 3774,
  [SMALL_STATE(290)] = 3781,
  [SMALL_STATE(291)] = 3786,
  [SMALL_STATE(292)] = 3791,
  [SMALL_STATE(293)] = 3798,
  [SMALL_STATE(294)] = 3803,
  [SMALL_STATE(295)] = 3808,
  [SMALL_STATE(296)] = 3813,
  [SMALL_STATE(297)] = 3818,
  [SMALL_STATE(298)] = 3825,
  [SMALL_STATE(299)] = 3830,
  [SMALL_STATE(300)] = 3837,
  [SMALL_STATE(301)] = 3842,
  [SMALL_STATE(302)] = 3847,
  [SMALL_STATE(303)] = 3852,
  [SMALL_STATE(304)] = 3859,
  [SMALL_STATE(305)] = 3864,
  [SMALL_STATE(306)] = 3869,
  [SMALL_STATE(307)] = 3876,
  [SMALL_STATE(308)] = 3883,
  [SMALL_STATE(309)] = 3888,
  [SMALL_STATE(310)] = 3893,
  [SMALL_STATE(311)] = 3898,
  [SMALL_STATE(312)] = 3905,
  [SMALL_STATE(313)] = 3910,
  [SMALL_STATE(314)] = 3917,
  [SMALL_STATE(315)] = 3922,
  [SMALL_STATE(316)] = 3929,
  [SMALL_STATE(317)] = 3936,
  [SMALL_STATE(318)] = 3943,
  [SMALL_STATE(319)] = 3948,
  [SMALL_STATE(320)] = 3953,
  [SMALL_STATE(321)] = 3960,
  [SMALL_STATE(322)] = 3967,
  [SMALL_STATE(323)] = 3972,
  [SMALL_STATE(324)] = 3977,
  [SMALL_STATE(325)] = 3982,
  [SMALL_STATE(326)] = 3987,
  [SMALL_STATE(327)] = 3992,
  [SMALL_STATE(328)] = 3999,
  [SMALL_STATE(329)] = 4004,
  [SMALL_STATE(330)] = 4009,
  [SMALL_STATE(331)] = 4016,
  [SMALL_STATE(332)] = 4021,
  [SMALL_STATE(333)] = 4028,
  [SMALL_STATE(334)] = 4033,
  [SMALL_STATE(335)] = 4040,
  [SMALL_STATE(336)] = 4045,
  [SMALL_STATE(337)] = 4052,
  [SMALL_STATE(338)] = 4057,
  [SMALL_STATE(339)] = 4062,
  [SMALL_STATE(340)] = 4066,
  [SMALL_STATE(341)] = 4070,
  [SMALL_STATE(342)] = 4074,
  [SMALL_STATE(343)] = 4078,
  [SMALL_STATE(344)] = 4082,
  [SMALL_STATE(345)] = 4086,
  [SMALL_STATE(346)] = 4090,
  [SMALL_STATE(347)] = 4094,
  [SMALL_STATE(348)] = 4098,
  [SMALL_STATE(349)] = 4102,
  [SMALL_STATE(350)] = 4106,
  [SMALL_STATE(351)] = 4110,
  [SMALL_STATE(352)] = 4114,
  [SMALL_STATE(353)] = 4118,
  [SMALL_STATE(354)] = 4122,
  [SMALL_STATE(355)] = 4126,
  [SMALL_STATE(356)] = 4130,
  [SMALL_STATE(357)] = 4134,
  [SMALL_STATE(358)] = 4138,
  [SMALL_STATE(359)] = 4142,
  [SMALL_STATE(360)] = 4146,
  [SMALL_STATE(361)] = 4150,
  [SMALL_STATE(362)] = 4154,
  [SMALL_STATE(363)] = 4158,
  [SMALL_STATE(364)] = 4162,
  [SMALL_STATE(365)] = 4166,
  [SMALL_STATE(366)] = 4170,
  [SMALL_STATE(367)] = 4174,
  [SMALL_STATE(368)] = 4178,
  [SMALL_STATE(369)] = 4182,
  [SMALL_STATE(370)] = 4186,
  [SMALL_STATE(371)] = 4190,
  [SMALL_STATE(372)] = 4194,
  [SMALL_STATE(373)] = 4198,
  [SMALL_STATE(374)] = 4202,
  [SMALL_STATE(375)] = 4206,
  [SMALL_STATE(376)] = 4210,
  [SMALL_STATE(377)] = 4214,
  [SMALL_STATE(378)] = 4218,
  [SMALL_STATE(379)] = 4222,
  [SMALL_STATE(380)] = 4226,
  [SMALL_STATE(381)] = 4230,
  [SMALL_STATE(382)] = 4234,
  [SMALL_STATE(383)] = 4238,
  [SMALL_STATE(384)] = 4242,
  [SMALL_STATE(385)] = 4246,
  [SMALL_STATE(386)] = 4250,
  [SMALL_STATE(387)] = 4254,
  [SMALL_STATE(388)] = 4258,
  [SMALL_STATE(389)] = 4262,
  [SMALL_STATE(390)] = 4266,
  [SMALL_STATE(391)] = 4270,
  [SMALL_STATE(392)] = 4274,
  [SMALL_STATE(393)] = 4278,
  [SMALL_STATE(394)] = 4282,
  [SMALL_STATE(395)] = 4286,
  [SMALL_STATE(396)] = 4290,
  [SMALL_STATE(397)] = 4294,
  [SMALL_STATE(398)] = 4298,
  [SMALL_STATE(399)] = 4302,
  [SMALL_STATE(400)] = 4306,
  [SMALL_STATE(401)] = 4310,
  [SMALL_STATE(402)] = 4314,
  [SMALL_STATE(403)] = 4318,
  [SMALL_STATE(404)] = 4322,
  [SMALL_STATE(405)] = 4326,
  [SMALL_STATE(406)] = 4330,
  [SMALL_STATE(407)] = 4334,
  [SMALL_STATE(408)] = 4338,
  [SMALL_STATE(409)] = 4342,
  [SMALL_STATE(410)] = 4346,
  [SMALL_STATE(411)] = 4350,
  [SMALL_STATE(412)] = 4354,
  [SMALL_STATE(413)] = 4358,
  [SMALL_STATE(414)] = 4362,
  [SMALL_STATE(415)] = 4366,
  [SMALL_STATE(416)] = 4370,
  [SMALL_STATE(417)] = 4374,
  [SMALL_STATE(418)] = 4378,
  [SMALL_STATE(419)] = 4382,
  [SMALL_STATE(420)] = 4386,
  [SMALL_STATE(421)] = 4390,
  [SMALL_STATE(422)] = 4394,
  [SMALL_STATE(423)] = 4398,
  [SMALL_STATE(424)] = 4402,
  [SMALL_STATE(425)] = 4406,
  [SMALL_STATE(426)] = 4410,
  [SMALL_STATE(427)] = 4414,
  [SMALL_STATE(428)] = 4418,
  [SMALL_STATE(429)] = 4422,
  [SMALL_STATE(430)] = 4426,
  [SMALL_STATE(431)] = 4430,
  [SMALL_STATE(432)] = 4434,
  [SMALL_STATE(433)] = 4438,
  [SMALL_STATE(434)] = 4442,
  [SMALL_STATE(435)] = 4446,
  [SMALL_STATE(436)] = 4450,
  [SMALL_STATE(437)] = 4454,
  [SMALL_STATE(438)] = 4458,
  [SMALL_STATE(439)] = 4462,
  [SMALL_STATE(440)] = 4466,
  [SMALL_STATE(441)] = 4470,
  [SMALL_STATE(442)] = 4474,
  [SMALL_STATE(443)] = 4478,
  [SMALL_STATE(444)] = 4482,
  [SMALL_STATE(445)] = 4486,
  [SMALL_STATE(446)] = 4490,
  [SMALL_STATE(447)] = 4494,
  [SMALL_STATE(448)] = 4498,
  [SMALL_STATE(449)] = 4502,
  [SMALL_STATE(450)] = 4506,
  [SMALL_STATE(451)] = 4510,
  [SMALL_STATE(452)] = 4514,
  [SMALL_STATE(453)] = 4518,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(421),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(409),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(408),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(434),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(410),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(409),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(408),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(407),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(406),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(434),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(4),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content, 1),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__intSubset, 2), SHIFT_REPEAT(163),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__intSubset, 2), SHIFT_REPEAT(27),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__intSubset, 2), SHIFT_REPEAT(438),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__intSubset, 2),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__intSubset, 2), SHIFT_REPEAT(304),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat2, 2), SHIFT_REPEAT(450),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat2, 2),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat2, 2), SHIFT_REPEAT(16),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_EntityValue_repeat2, 2), SHIFT_REPEAT(451),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_EntityValue_repeat2, 2), SHIFT_REPEAT(452),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat2, 2), SHIFT_REPEAT(453),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prolog, 1),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat1, 2), SHIFT_REPEAT(446),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat1, 2),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat1, 2), SHIFT_REPEAT(19),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_EntityValue_repeat1, 2), SHIFT_REPEAT(447),
  [132] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_EntityValue_repeat1, 2), SHIFT_REPEAT(448),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat1, 2), SHIFT_REPEAT(449),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(451),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(452),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(21),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(239),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(447),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(448),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prolog, 2),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PEReference, 3),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ETag, 3),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ETag, 3),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CharRef, 3),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_CharRef, 3),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 3),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2, .production_id = 1),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(435),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(436),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(442),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(443),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_EmptyElemTag, 4),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_EmptyElemTag, 4),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__Reference, 1),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__Reference, 1),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_STag, 5),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_STag, 5),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 3, .production_id = 3),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 3, .production_id = 2),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 1),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 1),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 2),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 2),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CDSect, 3),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_CDSect, 3),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PI, 3),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_PI, 3),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_EntityRef, 3),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_EntityRef, 3),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 4, .production_id = 3),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_EmptyElemTag, 3),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_EmptyElemTag, 3),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prolog, 4),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_STag, 3),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_STag, 3),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, .production_id = 1),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_STag, 4),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_STag, 4),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prolog, 3),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ETag, 4),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ETag, 4),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_EmptyElemTag, 5),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_EmptyElemTag, 5),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PI, 5),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_PI, 5),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2, .production_id = 2),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat1, 2),
  [316] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_AttValue_repeat1, 2), SHIFT_REPEAT(435),
  [319] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_AttValue_repeat1, 2), SHIFT_REPEAT(436),
  [322] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat1, 2), SHIFT_REPEAT(437),
  [325] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat1, 2), SHIFT_REPEAT(67),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat2, 2),
  [330] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_AttValue_repeat2, 2), SHIFT_REPEAT(442),
  [333] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_AttValue_repeat2, 2), SHIFT_REPEAT(443),
  [336] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat2, 2), SHIFT_REPEAT(444),
  [339] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat2, 2), SHIFT_REPEAT(68),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CDSect, 2),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_CDSect, 2),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice, 4),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice, 3),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cp, 1),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice, 5),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_XmlModelPI, 4),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_XmlModelPI, 4),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_PEReference, 3),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_XmlModelPI, 3),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_XmlModelPI, 3),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_StyleSheetPI, 5),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_StyleSheetPI, 5),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_StyleSheetPI, 3),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_StyleSheetPI, 3),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_StyleSheetPI, 4),
  [430] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_StyleSheetPI, 4),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_XmlModelPI, 5),
  [434] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_XmlModelPI, 5),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 1),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 2),
  [442] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 2), SHIFT_REPEAT(147),
  [445] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 2), SHIFT_REPEAT(364),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__intSubset, 3),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_XMLDecl, 5),
  [458] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_XMLDecl, 5),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_XMLDecl, 7),
  [464] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_XMLDecl, 7),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_XMLDecl, 4),
  [472] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_XMLDecl, 4),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [476] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__choice_repeat1, 2), SHIFT_REPEAT(79),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__choice_repeat1, 2),
  [481] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__choice_repeat1, 2), SHIFT_REPEAT(280),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_XMLDecl, 6),
  [486] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_XMLDecl, 6),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [498] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctypedecl, 11),
  [508] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctypedecl, 11),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_AttlistDecl_repeat1, 2),
  [528] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_AttlistDecl_repeat1, 2), SHIFT_REPEAT(237),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [535] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Enumeration_repeat1, 2), SHIFT_REPEAT(332),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Enumeration_repeat1, 2),
  [540] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Enumeration_repeat1, 2), SHIFT_REPEAT(361),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__choice_repeat1, 4),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 1),
  [557] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 1), SHIFT_REPEAT(135),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctypedecl, 10),
  [572] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctypedecl, 10),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctypedecl, 7),
  [576] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctypedecl, 7),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctypedecl, 6),
  [580] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctypedecl, 6),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__choice_repeat1, 3),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctypedecl, 12),
  [588] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctypedecl, 12),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [610] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 2), SHIFT_REPEAT(175),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cp, 2),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctypedecl, 9),
  [617] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctypedecl, 9),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 3),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctypedecl, 8),
  [633] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctypedecl, 8),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [643] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 2), SHIFT_REPEAT(164),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 2),
  [648] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 2), SHIFT_REPEAT(373),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctypedecl, 5),
  [653] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctypedecl, 5),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_EmptyElemTag_repeat1, 2),
  [657] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EmptyElemTag_repeat1, 2), SHIFT_REPEAT(303),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 3),
  [664] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 3), SHIFT_REPEAT(226),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__Eq, 1),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ExternalID, 3),
  [677] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 2), SHIFT_REPEAT(224),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttValue, 3, .production_id = 4),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [698] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_StyleSheetPI_repeat1, 2), SHIFT_REPEAT(299),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_StyleSheetPI_repeat1, 2),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttValue, 2),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Mixed, 3),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Mixed, 4),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Enumeration_repeat1, 3),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Enumeration_repeat1, 4),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_SystemLiteral, 3),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ExternalID, 5),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 4),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [765] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 4), SHIFT_REPEAT(243),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Attribute, 3),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__Eq, 2),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 5),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PEDecl, 10),
  [798] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttlistDecl, 6),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [822] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elementdecl, 7),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [826] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 2),
  [828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttlistDecl, 7),
  [830] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NotationDecl, 7),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [836] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_EntityValue, 2),
  [838] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contentspec, 1),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_GEDecl, 7),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [852] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PubidLiteral, 3),
  [854] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttlistDecl, 5),
  [856] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__SDDecl, 6),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [860] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__EncodingDecl, 6),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [872] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CDStart, 3),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [882] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elementdecl, 8),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [888] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_StringType, 1),
  [890] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__AttType, 1),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [894] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttDef, 4),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [898] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__EnumeratedType, 1),
  [900] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PublicID, 3),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [904] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NotationDecl, 8),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [910] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_EntityValue, 3, .production_id = 4),
  [912] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NotationType, 9),
  [914] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NotationType, 8),
  [916] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_GEDecl, 8),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [922] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NotationType, 7),
  [924] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PseudoAttValue, 3, .production_id = 4),
  [926] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NotationType, 6),
  [928] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__markupdecl, 1),
  [930] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__EntityDecl, 1),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [936] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Enumeration, 6),
  [938] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__VersionInfo, 6),
  [940] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_DefaultDecl, 3),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [950] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Enumeration, 5),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [964] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PseudoAtt, 3),
  [966] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PEDecl, 9),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [976] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_GEDecl, 9),
  [978] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PseudoAttValue, 2),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [984] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Mixed, 5),
  [986] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Enumeration, 4),
  [988] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Mixed, 6),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [994] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NDataDecl, 4),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [1000] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Enumeration, 3),
  [1002] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__Eq, 3),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [1006] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_DefaultDecl, 1),
  [1008] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttDef, 6),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [1034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [1094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [1102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [1108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [1120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [1124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [1126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [1128] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [1134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [1138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [1140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [1142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [1150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [1160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [1162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [1164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [1170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [1174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [1176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [1178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [1180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [1182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [1184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [1186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [1188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [1192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token_PITarget = 0,
  ts_external_token__pi_content = 1,
  ts_external_token_Comment = 2,
  ts_external_token_CharData = 3,
  ts_external_token_CData = 4,
  ts_external_token_xml_DASHmodel = 5,
  ts_external_token_xml_DASHstylesheet = 6,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_PITarget] = sym_PITarget,
  [ts_external_token__pi_content] = sym__pi_content,
  [ts_external_token_Comment] = sym_Comment,
  [ts_external_token_CharData] = sym_CharData,
  [ts_external_token_CData] = sym_CData,
  [ts_external_token_xml_DASHmodel] = anon_sym_xml_DASHmodel,
  [ts_external_token_xml_DASHstylesheet] = anon_sym_xml_DASHstylesheet,
};

static const bool ts_external_scanner_states[8][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_PITarget] = true,
    [ts_external_token__pi_content] = true,
    [ts_external_token_Comment] = true,
    [ts_external_token_CharData] = true,
    [ts_external_token_CData] = true,
    [ts_external_token_xml_DASHmodel] = true,
    [ts_external_token_xml_DASHstylesheet] = true,
  },
  [2] = {
    [ts_external_token_Comment] = true,
  },
  [3] = {
    [ts_external_token_Comment] = true,
    [ts_external_token_CharData] = true,
  },
  [4] = {
    [ts_external_token_PITarget] = true,
    [ts_external_token_xml_DASHmodel] = true,
    [ts_external_token_xml_DASHstylesheet] = true,
  },
  [5] = {
    [ts_external_token_CData] = true,
  },
  [6] = {
    [ts_external_token__pi_content] = true,
  },
  [7] = {
    [ts_external_token_PITarget] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_xml_external_scanner_create(void);
void tree_sitter_xml_external_scanner_destroy(void *);
bool tree_sitter_xml_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_xml_external_scanner_serialize(void *, char *);
void tree_sitter_xml_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_xml(void) {
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
      tree_sitter_xml_external_scanner_create,
      tree_sitter_xml_external_scanner_destroy,
      tree_sitter_xml_external_scanner_scan,
      tree_sitter_xml_external_scanner_serialize,
      tree_sitter_xml_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
