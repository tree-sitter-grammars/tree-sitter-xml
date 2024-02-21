#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 466
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 143
#define ALIAS_COUNT 0
#define TOKEN_COUNT 76
#define EXTERNAL_TOKEN_COUNT 11
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 12
#define PRODUCTION_ID_COUNT 5

enum {
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
  sym__start_tag_name = 73,
  sym__end_tag_name = 74,
  sym__erroneous_end_name = 75,
  sym_document = 76,
  sym__markupdecl = 77,
  sym__DeclSep = 78,
  sym_elementdecl = 79,
  sym_contentspec = 80,
  sym_Mixed = 81,
  sym_children = 82,
  sym__cp = 83,
  sym__choice = 84,
  sym_AttlistDecl = 85,
  sym_AttDef = 86,
  sym__AttType = 87,
  sym_StringType = 88,
  sym__EnumeratedType = 89,
  sym_NotationType = 90,
  sym_Enumeration = 91,
  sym_DefaultDecl = 92,
  sym__EntityDecl = 93,
  sym_GEDecl = 94,
  sym_PEDecl = 95,
  sym_EntityValue = 96,
  sym_NDataDecl = 97,
  sym_NotationDecl = 98,
  sym_PEReference = 99,
  sym__Reference = 100,
  sym_EntityRef = 101,
  sym_CharRef = 102,
  sym_AttValue = 103,
  sym_ExternalID = 104,
  sym_PublicID = 105,
  sym_SystemLiteral = 106,
  sym_PubidLiteral = 107,
  sym_XMLDecl = 108,
  sym__VersionInfo = 109,
  sym__EncodingDecl = 110,
  sym_PI = 111,
  sym__Eq = 112,
  sym_prolog = 113,
  sym__Misc = 114,
  sym__SDDecl = 115,
  sym_doctypedecl = 116,
  aux_sym__intSubset = 117,
  sym_element = 118,
  sym_EmptyElemTag = 119,
  sym_Attribute = 120,
  sym_STag = 121,
  sym_ETag = 122,
  sym_content = 123,
  sym_CDSect = 124,
  sym_CDStart = 125,
  sym_StyleSheetPI = 126,
  sym_XmlModelPI = 127,
  sym_PseudoAtt = 128,
  sym_PseudoAttValue = 129,
  aux_sym_document_repeat1 = 130,
  aux_sym_Mixed_repeat1 = 131,
  aux_sym__choice_repeat1 = 132,
  aux_sym_AttlistDecl_repeat1 = 133,
  aux_sym_NotationType_repeat1 = 134,
  aux_sym_Enumeration_repeat1 = 135,
  aux_sym_EntityValue_repeat1 = 136,
  aux_sym_EntityValue_repeat2 = 137,
  aux_sym_AttValue_repeat1 = 138,
  aux_sym_AttValue_repeat2 = 139,
  aux_sym_EmptyElemTag_repeat1 = 140,
  aux_sym_content_repeat1 = 141,
  aux_sym_StyleSheetPI_repeat1 = 142,
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
  [sym__start_tag_name] = "Name",
  [sym__end_tag_name] = "Name",
  [sym__erroneous_end_name] = "ERROR",
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
  [sym__start_tag_name] = sym_Name,
  [sym__end_tag_name] = sym_Name,
  [sym__erroneous_end_name] = sym__erroneous_end_name,
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
  [sym__start_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym__end_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym__erroneous_end_name] = {
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

enum {
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
  [47] = 35,
  [48] = 42,
  [49] = 49,
  [50] = 50,
  [51] = 36,
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
  [65] = 45,
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
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 38,
  [95] = 95,
  [96] = 96,
  [97] = 52,
  [98] = 68,
  [99] = 99,
  [100] = 100,
  [101] = 60,
  [102] = 102,
  [103] = 62,
  [104] = 104,
  [105] = 32,
  [106] = 106,
  [107] = 38,
  [108] = 108,
  [109] = 109,
  [110] = 62,
  [111] = 111,
  [112] = 60,
  [113] = 32,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 32,
  [123] = 60,
  [124] = 124,
  [125] = 62,
  [126] = 126,
  [127] = 38,
  [128] = 60,
  [129] = 129,
  [130] = 62,
  [131] = 38,
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
  [151] = 58,
  [152] = 152,
  [153] = 153,
  [154] = 61,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 49,
  [159] = 159,
  [160] = 50,
  [161] = 161,
  [162] = 162,
  [163] = 63,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 66,
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
  [182] = 69,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 185,
  [188] = 171,
  [189] = 169,
  [190] = 153,
  [191] = 191,
  [192] = 72,
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
  [257] = 255,
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
  [275] = 255,
  [276] = 276,
  [277] = 271,
  [278] = 278,
  [279] = 52,
  [280] = 68,
  [281] = 205,
  [282] = 245,
  [283] = 283,
  [284] = 284,
  [285] = 265,
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
  [399] = 359,
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
  [417] = 417,
  [418] = 418,
  [419] = 419,
  [420] = 420,
  [421] = 421,
  [422] = 422,
  [423] = 423,
  [424] = 424,
  [425] = 359,
  [426] = 398,
  [427] = 427,
  [428] = 394,
  [429] = 429,
  [430] = 360,
  [431] = 431,
  [432] = 432,
  [433] = 433,
  [434] = 434,
  [435] = 357,
  [436] = 436,
  [437] = 359,
  [438] = 398,
  [439] = 394,
  [440] = 357,
  [441] = 359,
  [442] = 398,
  [443] = 357,
  [444] = 444,
  [445] = 398,
  [446] = 434,
  [447] = 418,
  [448] = 417,
  [449] = 416,
  [450] = 415,
  [451] = 414,
  [452] = 409,
  [453] = 422,
  [454] = 418,
  [455] = 417,
  [456] = 416,
  [457] = 409,
  [458] = 422,
  [459] = 418,
  [460] = 417,
  [461] = 416,
  [462] = 422,
  [463] = 418,
  [464] = 417,
  [465] = 416,
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
  [16] = {.lex_state = 41, .external_lex_state = 2},
  [17] = {.lex_state = 41, .external_lex_state = 2},
  [18] = {.lex_state = 41, .external_lex_state = 2},
  [19] = {.lex_state = 41, .external_lex_state = 2},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 41, .external_lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 41, .external_lex_state = 2},
  [24] = {.lex_state = 41, .external_lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 41, .external_lex_state = 2},
  [27] = {.lex_state = 41},
  [28] = {.lex_state = 41, .external_lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 41, .external_lex_state = 2},
  [34] = {.lex_state = 41, .external_lex_state = 2},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 5},
  [37] = {.lex_state = 5},
  [38] = {.lex_state = 4, .external_lex_state = 3},
  [39] = {.lex_state = 41, .external_lex_state = 2},
  [40] = {.lex_state = 41, .external_lex_state = 2},
  [41] = {.lex_state = 4, .external_lex_state = 3},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 41, .external_lex_state = 2},
  [44] = {.lex_state = 41, .external_lex_state = 2},
  [45] = {.lex_state = 5},
  [46] = {.lex_state = 5},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 4, .external_lex_state = 3},
  [50] = {.lex_state = 4, .external_lex_state = 3},
  [51] = {.lex_state = 5},
  [52] = {.lex_state = 4, .external_lex_state = 3},
  [53] = {.lex_state = 4, .external_lex_state = 3},
  [54] = {.lex_state = 5},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 41, .external_lex_state = 2},
  [57] = {.lex_state = 41, .external_lex_state = 2},
  [58] = {.lex_state = 4, .external_lex_state = 3},
  [59] = {.lex_state = 4, .external_lex_state = 3},
  [60] = {.lex_state = 4, .external_lex_state = 3},
  [61] = {.lex_state = 4, .external_lex_state = 3},
  [62] = {.lex_state = 4, .external_lex_state = 3},
  [63] = {.lex_state = 4, .external_lex_state = 3},
  [64] = {.lex_state = 4, .external_lex_state = 3},
  [65] = {.lex_state = 5},
  [66] = {.lex_state = 4, .external_lex_state = 3},
  [67] = {.lex_state = 41, .external_lex_state = 2},
  [68] = {.lex_state = 4, .external_lex_state = 3},
  [69] = {.lex_state = 4, .external_lex_state = 3},
  [70] = {.lex_state = 3},
  [71] = {.lex_state = 3},
  [72] = {.lex_state = 4, .external_lex_state = 3},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 41, .external_lex_state = 2},
  [75] = {.lex_state = 4, .external_lex_state = 3},
  [76] = {.lex_state = 41, .external_lex_state = 2},
  [77] = {.lex_state = 41, .external_lex_state = 2},
  [78] = {.lex_state = 41},
  [79] = {.lex_state = 41},
  [80] = {.lex_state = 41},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 41},
  [83] = {.lex_state = 41},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 41},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 41},
  [90] = {.lex_state = 41, .external_lex_state = 2},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 4},
  [95] = {.lex_state = 41, .external_lex_state = 2},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 41, .external_lex_state = 2},
  [98] = {.lex_state = 41, .external_lex_state = 2},
  [99] = {.lex_state = 41, .external_lex_state = 2},
  [100] = {.lex_state = 1},
  [101] = {.lex_state = 4},
  [102] = {.lex_state = 41, .external_lex_state = 2},
  [103] = {.lex_state = 4},
  [104] = {.lex_state = 41, .external_lex_state = 2},
  [105] = {.lex_state = 2},
  [106] = {.lex_state = 1},
  [107] = {.lex_state = 2},
  [108] = {.lex_state = 1},
  [109] = {.lex_state = 1},
  [110] = {.lex_state = 2},
  [111] = {.lex_state = 1},
  [112] = {.lex_state = 2},
  [113] = {.lex_state = 4},
  [114] = {.lex_state = 41, .external_lex_state = 2},
  [115] = {.lex_state = 1},
  [116] = {.lex_state = 1},
  [117] = {.lex_state = 41, .external_lex_state = 2},
  [118] = {.lex_state = 41},
  [119] = {.lex_state = 41},
  [120] = {.lex_state = 41},
  [121] = {.lex_state = 41, .external_lex_state = 2},
  [122] = {.lex_state = 41, .external_lex_state = 2},
  [123] = {.lex_state = 5},
  [124] = {.lex_state = 41, .external_lex_state = 2},
  [125] = {.lex_state = 5},
  [126] = {.lex_state = 41},
  [127] = {.lex_state = 5},
  [128] = {.lex_state = 3},
  [129] = {.lex_state = 41, .external_lex_state = 2},
  [130] = {.lex_state = 3},
  [131] = {.lex_state = 3},
  [132] = {.lex_state = 41},
  [133] = {.lex_state = 41, .external_lex_state = 2},
  [134] = {.lex_state = 1},
  [135] = {.lex_state = 41, .external_lex_state = 2},
  [136] = {.lex_state = 41},
  [137] = {.lex_state = 1},
  [138] = {.lex_state = 41, .external_lex_state = 2},
  [139] = {.lex_state = 1, .external_lex_state = 4},
  [140] = {.lex_state = 41},
  [141] = {.lex_state = 41},
  [142] = {.lex_state = 41},
  [143] = {.lex_state = 41, .external_lex_state = 2},
  [144] = {.lex_state = 41},
  [145] = {.lex_state = 41},
  [146] = {.lex_state = 1},
  [147] = {.lex_state = 41},
  [148] = {.lex_state = 41},
  [149] = {.lex_state = 41, .external_lex_state = 2},
  [150] = {.lex_state = 41, .external_lex_state = 2},
  [151] = {.lex_state = 41, .external_lex_state = 2},
  [152] = {.lex_state = 41, .external_lex_state = 5},
  [153] = {.lex_state = 1, .external_lex_state = 5},
  [154] = {.lex_state = 41, .external_lex_state = 2},
  [155] = {.lex_state = 1},
  [156] = {.lex_state = 1},
  [157] = {.lex_state = 1},
  [158] = {.lex_state = 41, .external_lex_state = 2},
  [159] = {.lex_state = 1},
  [160] = {.lex_state = 41, .external_lex_state = 2},
  [161] = {.lex_state = 41},
  [162] = {.lex_state = 1},
  [163] = {.lex_state = 41, .external_lex_state = 2},
  [164] = {.lex_state = 41},
  [165] = {.lex_state = 41},
  [166] = {.lex_state = 41},
  [167] = {.lex_state = 41},
  [168] = {.lex_state = 41},
  [169] = {.lex_state = 41, .external_lex_state = 5},
  [170] = {.lex_state = 41, .external_lex_state = 2},
  [171] = {.lex_state = 1, .external_lex_state = 5},
  [172] = {.lex_state = 10},
  [173] = {.lex_state = 41, .external_lex_state = 2},
  [174] = {.lex_state = 41},
  [175] = {.lex_state = 1},
  [176] = {.lex_state = 41},
  [177] = {.lex_state = 41},
  [178] = {.lex_state = 41, .external_lex_state = 2},
  [179] = {.lex_state = 41, .external_lex_state = 2},
  [180] = {.lex_state = 1},
  [181] = {.lex_state = 41},
  [182] = {.lex_state = 41, .external_lex_state = 2},
  [183] = {.lex_state = 41},
  [184] = {.lex_state = 1},
  [185] = {.lex_state = 41, .external_lex_state = 5},
  [186] = {.lex_state = 41},
  [187] = {.lex_state = 41, .external_lex_state = 5},
  [188] = {.lex_state = 1, .external_lex_state = 5},
  [189] = {.lex_state = 41, .external_lex_state = 5},
  [190] = {.lex_state = 1, .external_lex_state = 5},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 41, .external_lex_state = 2},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 41, .external_lex_state = 2},
  [195] = {.lex_state = 41},
  [196] = {.lex_state = 41},
  [197] = {.lex_state = 10},
  [198] = {.lex_state = 10},
  [199] = {.lex_state = 1, .external_lex_state = 4},
  [200] = {.lex_state = 10},
  [201] = {.lex_state = 10},
  [202] = {.lex_state = 10},
  [203] = {.lex_state = 10},
  [204] = {.lex_state = 41},
  [205] = {.lex_state = 41, .external_lex_state = 5},
  [206] = {.lex_state = 41},
  [207] = {.lex_state = 10},
  [208] = {.lex_state = 10},
  [209] = {.lex_state = 41},
  [210] = {.lex_state = 10},
  [211] = {.lex_state = 10},
  [212] = {.lex_state = 10},
  [213] = {.lex_state = 41},
  [214] = {.lex_state = 41},
  [215] = {.lex_state = 41},
  [216] = {.lex_state = 41, .external_lex_state = 5},
  [217] = {.lex_state = 41},
  [218] = {.lex_state = 41},
  [219] = {.lex_state = 41},
  [220] = {.lex_state = 1},
  [221] = {.lex_state = 41},
  [222] = {.lex_state = 41},
  [223] = {.lex_state = 41},
  [224] = {.lex_state = 41},
  [225] = {.lex_state = 41},
  [226] = {.lex_state = 41},
  [227] = {.lex_state = 41},
  [228] = {.lex_state = 41},
  [229] = {.lex_state = 41},
  [230] = {.lex_state = 1},
  [231] = {.lex_state = 41},
  [232] = {.lex_state = 1},
  [233] = {.lex_state = 41},
  [234] = {.lex_state = 41},
  [235] = {.lex_state = 1},
  [236] = {.lex_state = 41},
  [237] = {.lex_state = 41},
  [238] = {.lex_state = 1},
  [239] = {.lex_state = 1},
  [240] = {.lex_state = 41},
  [241] = {.lex_state = 1},
  [242] = {.lex_state = 41, .external_lex_state = 5},
  [243] = {.lex_state = 41},
  [244] = {.lex_state = 1},
  [245] = {.lex_state = 41, .external_lex_state = 5},
  [246] = {.lex_state = 41},
  [247] = {.lex_state = 41},
  [248] = {.lex_state = 41},
  [249] = {.lex_state = 41},
  [250] = {.lex_state = 41},
  [251] = {.lex_state = 1},
  [252] = {.lex_state = 1, .external_lex_state = 6},
  [253] = {.lex_state = 41},
  [254] = {.lex_state = 41},
  [255] = {.lex_state = 10},
  [256] = {.lex_state = 41},
  [257] = {.lex_state = 10},
  [258] = {.lex_state = 41},
  [259] = {.lex_state = 41},
  [260] = {.lex_state = 41},
  [261] = {.lex_state = 1},
  [262] = {.lex_state = 1},
  [263] = {.lex_state = 41},
  [264] = {.lex_state = 41},
  [265] = {.lex_state = 41},
  [266] = {.lex_state = 41},
  [267] = {.lex_state = 41},
  [268] = {.lex_state = 10},
  [269] = {.lex_state = 41},
  [270] = {.lex_state = 41},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 1},
  [273] = {.lex_state = 41},
  [274] = {.lex_state = 10},
  [275] = {.lex_state = 10},
  [276] = {.lex_state = 41},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 41},
  [279] = {.lex_state = 41},
  [280] = {.lex_state = 41},
  [281] = {.lex_state = 41},
  [282] = {.lex_state = 41},
  [283] = {.lex_state = 41},
  [284] = {.lex_state = 10},
  [285] = {.lex_state = 41},
  [286] = {.lex_state = 41},
  [287] = {.lex_state = 41},
  [288] = {.lex_state = 41},
  [289] = {.lex_state = 37},
  [290] = {.lex_state = 41},
  [291] = {.lex_state = 41},
  [292] = {.lex_state = 10},
  [293] = {.lex_state = 41},
  [294] = {.lex_state = 41},
  [295] = {.lex_state = 41},
  [296] = {.lex_state = 41},
  [297] = {.lex_state = 41},
  [298] = {.lex_state = 41},
  [299] = {.lex_state = 41},
  [300] = {.lex_state = 41},
  [301] = {.lex_state = 1},
  [302] = {.lex_state = 41},
  [303] = {.lex_state = 10},
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
  [318] = {.lex_state = 41},
  [319] = {.lex_state = 41},
  [320] = {.lex_state = 41},
  [321] = {.lex_state = 41},
  [322] = {.lex_state = 1},
  [323] = {.lex_state = 41},
  [324] = {.lex_state = 1, .external_lex_state = 6},
  [325] = {.lex_state = 41},
  [326] = {.lex_state = 10},
  [327] = {.lex_state = 41},
  [328] = {.lex_state = 41},
  [329] = {.lex_state = 41},
  [330] = {.lex_state = 41},
  [331] = {.lex_state = 41},
  [332] = {.lex_state = 41},
  [333] = {.lex_state = 10},
  [334] = {.lex_state = 1},
  [335] = {.lex_state = 41},
  [336] = {.lex_state = 10},
  [337] = {.lex_state = 37},
  [338] = {.lex_state = 37},
  [339] = {.lex_state = 41},
  [340] = {.lex_state = 41},
  [341] = {.lex_state = 10},
  [342] = {.lex_state = 41},
  [343] = {.lex_state = 41},
  [344] = {.lex_state = 41},
  [345] = {.lex_state = 41},
  [346] = {.lex_state = 41},
  [347] = {.lex_state = 41},
  [348] = {.lex_state = 41},
  [349] = {.lex_state = 41},
  [350] = {.lex_state = 41},
  [351] = {.lex_state = 41},
  [352] = {.lex_state = 41},
  [353] = {.lex_state = 41},
  [354] = {.lex_state = 128},
  [355] = {.lex_state = 37},
  [356] = {.lex_state = 129},
  [357] = {.lex_state = 41},
  [358] = {.lex_state = 40},
  [359] = {.lex_state = 41},
  [360] = {.lex_state = 41},
  [361] = {.lex_state = 41},
  [362] = {.lex_state = 10},
  [363] = {.lex_state = 41},
  [364] = {.lex_state = 41},
  [365] = {.lex_state = 130},
  [366] = {.lex_state = 37},
  [367] = {.lex_state = 41},
  [368] = {.lex_state = 41},
  [369] = {.lex_state = 41},
  [370] = {.lex_state = 41},
  [371] = {.lex_state = 41},
  [372] = {.lex_state = 41},
  [373] = {.lex_state = 37},
  [374] = {.lex_state = 41},
  [375] = {.lex_state = 41},
  [376] = {.lex_state = 41},
  [377] = {.lex_state = 41},
  [378] = {.lex_state = 41},
  [379] = {.lex_state = 41},
  [380] = {.lex_state = 41},
  [381] = {.lex_state = 41},
  [382] = {.lex_state = 41},
  [383] = {.lex_state = 41},
  [384] = {.lex_state = 41},
  [385] = {.lex_state = 1},
  [386] = {.lex_state = 41},
  [387] = {.lex_state = 41},
  [388] = {.lex_state = 41},
  [389] = {.lex_state = 41},
  [390] = {.lex_state = 41},
  [391] = {.lex_state = 41},
  [392] = {.lex_state = 41},
  [393] = {.lex_state = 41},
  [394] = {.lex_state = 10},
  [395] = {.lex_state = 41},
  [396] = {.lex_state = 1},
  [397] = {.lex_state = 41},
  [398] = {.lex_state = 41},
  [399] = {.lex_state = 41},
  [400] = {.lex_state = 41},
  [401] = {.lex_state = 41},
  [402] = {.lex_state = 41},
  [403] = {.lex_state = 10},
  [404] = {.lex_state = 41},
  [405] = {.lex_state = 41},
  [406] = {.lex_state = 41},
  [407] = {.lex_state = 1},
  [408] = {.lex_state = 1},
  [409] = {.lex_state = 0, .external_lex_state = 7},
  [410] = {.lex_state = 41},
  [411] = {.lex_state = 1},
  [412] = {.lex_state = 40},
  [413] = {.lex_state = 41},
  [414] = {.lex_state = 0, .external_lex_state = 8},
  [415] = {.lex_state = 0, .external_lex_state = 9},
  [416] = {.lex_state = 39},
  [417] = {.lex_state = 1},
  [418] = {.lex_state = 1},
  [419] = {.lex_state = 1},
  [420] = {.lex_state = 41},
  [421] = {.lex_state = 41},
  [422] = {.lex_state = 1},
  [423] = {.lex_state = 41},
  [424] = {.lex_state = 131},
  [425] = {.lex_state = 41},
  [426] = {.lex_state = 41},
  [427] = {.lex_state = 41},
  [428] = {.lex_state = 10},
  [429] = {.lex_state = 41},
  [430] = {.lex_state = 41},
  [431] = {.lex_state = 41},
  [432] = {.lex_state = 41},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 0, .external_lex_state = 10},
  [435] = {.lex_state = 41},
  [436] = {.lex_state = 41},
  [437] = {.lex_state = 41},
  [438] = {.lex_state = 41},
  [439] = {.lex_state = 10},
  [440] = {.lex_state = 41},
  [441] = {.lex_state = 41},
  [442] = {.lex_state = 41},
  [443] = {.lex_state = 41},
  [444] = {.lex_state = 41},
  [445] = {.lex_state = 41},
  [446] = {.lex_state = 0, .external_lex_state = 10},
  [447] = {.lex_state = 1},
  [448] = {.lex_state = 1},
  [449] = {.lex_state = 39},
  [450] = {.lex_state = 0, .external_lex_state = 9},
  [451] = {.lex_state = 0, .external_lex_state = 8},
  [452] = {.lex_state = 0, .external_lex_state = 7},
  [453] = {.lex_state = 1},
  [454] = {.lex_state = 1},
  [455] = {.lex_state = 1},
  [456] = {.lex_state = 39},
  [457] = {.lex_state = 0, .external_lex_state = 7},
  [458] = {.lex_state = 1},
  [459] = {.lex_state = 1},
  [460] = {.lex_state = 1},
  [461] = {.lex_state = 39},
  [462] = {.lex_state = 1},
  [463] = {.lex_state = 1},
  [464] = {.lex_state = 1},
  [465] = {.lex_state = 39},
};

enum {
  ts_external_token_PITarget = 0,
  ts_external_token__pi_content = 1,
  ts_external_token_Comment = 2,
  ts_external_token_CharData = 3,
  ts_external_token_CData = 4,
  ts_external_token_xml_DASHmodel = 5,
  ts_external_token_xml_DASHstylesheet = 6,
  ts_external_token__start_tag_name = 7,
  ts_external_token__end_tag_name = 8,
  ts_external_token__erroneous_end_name = 9,
  ts_external_token_SLASH_GT = 10,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_PITarget] = sym_PITarget,
  [ts_external_token__pi_content] = sym__pi_content,
  [ts_external_token_Comment] = sym_Comment,
  [ts_external_token_CharData] = sym_CharData,
  [ts_external_token_CData] = sym_CData,
  [ts_external_token_xml_DASHmodel] = anon_sym_xml_DASHmodel,
  [ts_external_token_xml_DASHstylesheet] = anon_sym_xml_DASHstylesheet,
  [ts_external_token__start_tag_name] = sym__start_tag_name,
  [ts_external_token__end_tag_name] = sym__end_tag_name,
  [ts_external_token__erroneous_end_name] = sym__erroneous_end_name,
  [ts_external_token_SLASH_GT] = anon_sym_SLASH_GT,
};

static const bool ts_external_scanner_states[11][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_PITarget] = true,
    [ts_external_token__pi_content] = true,
    [ts_external_token_Comment] = true,
    [ts_external_token_CharData] = true,
    [ts_external_token_CData] = true,
    [ts_external_token_xml_DASHmodel] = true,
    [ts_external_token_xml_DASHstylesheet] = true,
    [ts_external_token__start_tag_name] = true,
    [ts_external_token__end_tag_name] = true,
    [ts_external_token__erroneous_end_name] = true,
    [ts_external_token_SLASH_GT] = true,
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
    [ts_external_token_SLASH_GT] = true,
  },
  [6] = {
    [ts_external_token_CData] = true,
  },
  [7] = {
    [ts_external_token__pi_content] = true,
  },
  [8] = {
    [ts_external_token__end_tag_name] = true,
  },
  [9] = {
    [ts_external_token_PITarget] = true,
  },
  [10] = {
    [ts_external_token__start_tag_name] = true,
  },
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
    [sym__start_tag_name] = ACTIONS(1),
    [sym__end_tag_name] = ACTIONS(1),
    [sym__erroneous_end_name] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(433),
    [sym_XMLDecl] = STATE(28),
    [sym_PI] = STATE(26),
    [sym_prolog] = STATE(193),
    [sym__Misc] = STATE(26),
    [sym_doctypedecl] = STATE(39),
    [sym_element] = STATE(40),
    [sym_EmptyElemTag] = STATE(192),
    [sym_STag] = STATE(2),
    [sym_StyleSheetPI] = STATE(26),
    [sym_XmlModelPI] = STATE(26),
    [aux_sym_document_repeat1] = STATE(26),
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
    STATE(72), 1,
      sym_EmptyElemTag,
    STATE(182), 1,
      sym_ETag,
    STATE(252), 1,
      sym_CDStart,
    STATE(277), 1,
      sym_content,
    ACTIONS(27), 2,
      sym_Comment,
      sym_CharData,
    STATE(38), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(4), 5,
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
    STATE(69), 1,
      sym_ETag,
    STATE(72), 1,
      sym_EmptyElemTag,
    STATE(252), 1,
      sym_CDStart,
    STATE(271), 1,
      sym_content,
    ACTIONS(27), 2,
      sym_Comment,
      sym_CharData,
    STATE(38), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(4), 5,
      sym__Reference,
      sym_PI,
      sym_element,
      sym_CDSect,
      aux_sym_content_repeat1,
  [104] = 13,
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
    ACTIONS(31), 1,
      anon_sym_LT_SLASH,
    STATE(3), 1,
      sym_STag,
    STATE(72), 1,
      sym_EmptyElemTag,
    STATE(252), 1,
      sym_CDStart,
    ACTIONS(33), 2,
      sym_Comment,
      sym_CharData,
    STATE(38), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(5), 5,
      sym__Reference,
      sym_PI,
      sym_element,
      sym_CDSect,
      aux_sym_content_repeat1,
  [150] = 13,
    ACTIONS(35), 1,
      anon_sym_LT_BANG_LBRACK,
    ACTIONS(38), 1,
      anon_sym_AMP,
    ACTIONS(41), 1,
      anon_sym_AMP_POUND,
    ACTIONS(44), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(47), 1,
      anon_sym_LT_QMARK,
    ACTIONS(50), 1,
      anon_sym_LT,
    ACTIONS(53), 1,
      anon_sym_LT_SLASH,
    STATE(3), 1,
      sym_STag,
    STATE(72), 1,
      sym_EmptyElemTag,
    STATE(252), 1,
      sym_CDStart,
    ACTIONS(55), 2,
      sym_Comment,
      sym_CharData,
    STATE(38), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(5), 5,
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
    STATE(28), 1,
      sym_XMLDecl,
    STATE(34), 1,
      sym_element,
    STATE(39), 1,
      sym_doctypedecl,
    STATE(191), 1,
      sym_prolog,
    STATE(192), 1,
      sym_EmptyElemTag,
    ACTIONS(11), 2,
      sym_Comment,
      sym__S,
    STATE(26), 5,
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
    STATE(11), 1,
      aux_sym__intSubset,
    STATE(181), 1,
      sym__markupdecl,
    STATE(318), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(320), 5,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
  [268] = 9,
    ACTIONS(58), 1,
      anon_sym_LT_BANG,
    ACTIONS(62), 1,
      anon_sym_LT_QMARK,
    ACTIONS(66), 1,
      sym_Comment,
    ACTIONS(68), 1,
      sym__S,
    ACTIONS(70), 1,
      anon_sym_RBRACK,
    STATE(13), 1,
      aux_sym__intSubset,
    STATE(181), 1,
      sym__markupdecl,
    STATE(318), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(320), 5,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
  [301] = 9,
    ACTIONS(58), 1,
      anon_sym_LT_BANG,
    ACTIONS(62), 1,
      anon_sym_LT_QMARK,
    ACTIONS(64), 1,
      anon_sym_RBRACK,
    ACTIONS(66), 1,
      sym_Comment,
    ACTIONS(72), 1,
      sym__S,
    STATE(15), 1,
      aux_sym__intSubset,
    STATE(181), 1,
      sym__markupdecl,
    STATE(318), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(320), 5,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
  [334] = 9,
    ACTIONS(58), 1,
      anon_sym_LT_BANG,
    ACTIONS(62), 1,
      anon_sym_LT_QMARK,
    ACTIONS(66), 1,
      sym_Comment,
    ACTIONS(74), 1,
      sym__S,
    ACTIONS(76), 1,
      anon_sym_RBRACK,
    STATE(14), 1,
      aux_sym__intSubset,
    STATE(181), 1,
      sym__markupdecl,
    STATE(318), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(320), 5,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
  [367] = 9,
    ACTIONS(58), 1,
      anon_sym_LT_BANG,
    ACTIONS(62), 1,
      anon_sym_LT_QMARK,
    ACTIONS(66), 1,
      sym_Comment,
    ACTIONS(70), 1,
      anon_sym_RBRACK,
    ACTIONS(72), 1,
      sym__S,
    STATE(15), 1,
      aux_sym__intSubset,
    STATE(181), 1,
      sym__markupdecl,
    STATE(318), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(320), 5,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
  [400] = 9,
    ACTIONS(58), 1,
      anon_sym_LT_BANG,
    ACTIONS(62), 1,
      anon_sym_LT_QMARK,
    ACTIONS(66), 1,
      sym_Comment,
    ACTIONS(78), 1,
      sym__S,
    ACTIONS(80), 1,
      anon_sym_RBRACK,
    STATE(9), 1,
      aux_sym__intSubset,
    STATE(181), 1,
      sym__markupdecl,
    STATE(318), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(320), 5,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
  [433] = 9,
    ACTIONS(58), 1,
      anon_sym_LT_BANG,
    ACTIONS(62), 1,
      anon_sym_LT_QMARK,
    ACTIONS(66), 1,
      sym_Comment,
    ACTIONS(72), 1,
      sym__S,
    ACTIONS(76), 1,
      anon_sym_RBRACK,
    STATE(15), 1,
      aux_sym__intSubset,
    STATE(181), 1,
      sym__markupdecl,
    STATE(318), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(320), 5,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
  [466] = 9,
    ACTIONS(58), 1,
      anon_sym_LT_BANG,
    ACTIONS(62), 1,
      anon_sym_LT_QMARK,
    ACTIONS(66), 1,
      sym_Comment,
    ACTIONS(72), 1,
      sym__S,
    ACTIONS(82), 1,
      anon_sym_RBRACK,
    STATE(15), 1,
      aux_sym__intSubset,
    STATE(181), 1,
      sym__markupdecl,
    STATE(318), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(320), 5,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
  [499] = 9,
    ACTIONS(84), 1,
      anon_sym_LT_BANG,
    ACTIONS(87), 1,
      sym__S,
    ACTIONS(90), 1,
      anon_sym_LT_QMARK,
    ACTIONS(93), 1,
      anon_sym_RBRACK,
    ACTIONS(95), 1,
      sym_Comment,
    STATE(15), 1,
      aux_sym__intSubset,
    STATE(181), 1,
      sym__markupdecl,
    STATE(318), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(320), 5,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
  [532] = 7,
    ACTIONS(58), 1,
      anon_sym_LT_BANG,
    ACTIONS(62), 1,
      anon_sym_LT_QMARK,
    ACTIONS(66), 1,
      sym_Comment,
    ACTIONS(70), 1,
      anon_sym_RBRACK,
    STATE(148), 1,
      sym__markupdecl,
    STATE(318), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(320), 5,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
  [559] = 7,
    ACTIONS(58), 1,
      anon_sym_LT_BANG,
    ACTIONS(62), 1,
      anon_sym_LT_QMARK,
    ACTIONS(66), 1,
      sym_Comment,
    ACTIONS(82), 1,
      anon_sym_RBRACK,
    STATE(148), 1,
      sym__markupdecl,
    STATE(318), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(320), 5,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
  [586] = 7,
    ACTIONS(58), 1,
      anon_sym_LT_BANG,
    ACTIONS(62), 1,
      anon_sym_LT_QMARK,
    ACTIONS(64), 1,
      anon_sym_RBRACK,
    ACTIONS(66), 1,
      sym_Comment,
    STATE(148), 1,
      sym__markupdecl,
    STATE(318), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(320), 5,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
  [613] = 7,
    ACTIONS(58), 1,
      anon_sym_LT_BANG,
    ACTIONS(62), 1,
      anon_sym_LT_QMARK,
    ACTIONS(66), 1,
      sym_Comment,
    ACTIONS(76), 1,
      anon_sym_RBRACK,
    STATE(148), 1,
      sym__markupdecl,
    STATE(318), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(320), 5,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
  [640] = 8,
    ACTIONS(98), 1,
      anon_sym_PERCENT,
    ACTIONS(100), 1,
      anon_sym_SQUOTE,
    ACTIONS(102), 1,
      aux_sym_EntityValue_token2,
    ACTIONS(104), 1,
      anon_sym_AMP,
    ACTIONS(106), 1,
      anon_sym_AMP_POUND,
    ACTIONS(108), 1,
      anon_sym_AMP_POUNDx,
    STATE(94), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(31), 3,
      sym_PEReference,
      sym__Reference,
      aux_sym_EntityValue_repeat2,
  [668] = 6,
    ACTIONS(58), 1,
      anon_sym_LT_BANG,
    ACTIONS(62), 1,
      anon_sym_LT_QMARK,
    ACTIONS(66), 1,
      sym_Comment,
    STATE(148), 1,
      sym__markupdecl,
    STATE(318), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(320), 5,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
  [692] = 8,
    ACTIONS(110), 1,
      anon_sym_PERCENT,
    ACTIONS(113), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      aux_sym_EntityValue_token1,
    ACTIONS(118), 1,
      anon_sym_AMP,
    ACTIONS(121), 1,
      anon_sym_AMP_POUND,
    ACTIONS(124), 1,
      anon_sym_AMP_POUNDx,
    STATE(107), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(22), 3,
      sym_PEReference,
      sym__Reference,
      aux_sym_EntityValue_repeat1,
  [720] = 5,
    ACTIONS(132), 1,
      anon_sym_LT_QMARK,
    ACTIONS(135), 1,
      anon_sym_LT,
    ACTIONS(127), 2,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
    ACTIONS(129), 2,
      sym_Comment,
      sym__S,
    STATE(23), 5,
      sym_PI,
      sym__Misc,
      sym_StyleSheetPI,
      sym_XmlModelPI,
      aux_sym_document_repeat1,
  [742] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_BANG,
    ACTIONS(139), 1,
      anon_sym_LT_QMARK,
    ACTIONS(141), 1,
      anon_sym_LT,
    STATE(57), 1,
      sym_doctypedecl,
    ACTIONS(137), 2,
      sym_Comment,
      sym__S,
    STATE(23), 5,
      sym_PI,
      sym__Misc,
      sym_StyleSheetPI,
      sym_XmlModelPI,
      aux_sym_document_repeat1,
  [766] = 8,
    ACTIONS(100), 1,
      anon_sym_DQUOTE,
    ACTIONS(143), 1,
      anon_sym_PERCENT,
    ACTIONS(145), 1,
      aux_sym_EntityValue_token1,
    ACTIONS(147), 1,
      anon_sym_AMP,
    ACTIONS(149), 1,
      anon_sym_AMP_POUND,
    ACTIONS(151), 1,
      anon_sym_AMP_POUNDx,
    STATE(107), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(22), 3,
      sym_PEReference,
      sym__Reference,
      aux_sym_EntityValue_repeat1,
  [794] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_BANG,
    ACTIONS(139), 1,
      anon_sym_LT_QMARK,
    ACTIONS(153), 1,
      anon_sym_LT,
    STATE(74), 1,
      sym_doctypedecl,
    ACTIONS(137), 2,
      sym_Comment,
      sym__S,
    STATE(23), 5,
      sym_PI,
      sym__Misc,
      sym_StyleSheetPI,
      sym_XmlModelPI,
      aux_sym_document_repeat1,
  [818] = 8,
    ACTIONS(155), 1,
      anon_sym_LPAREN,
    ACTIONS(157), 1,
      anon_sym_CDATA,
    ACTIONS(159), 1,
      sym_TokenizedType,
    ACTIONS(161), 1,
      anon_sym_NOTATION,
    ACTIONS(163), 1,
      anon_sym_PERCENT,
    STATE(293), 1,
      sym__AttType,
    STATE(294), 2,
      sym_NotationType,
      sym_Enumeration,
    STATE(291), 3,
      sym_StringType,
      sym__EnumeratedType,
      sym_PEReference,
  [846] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_BANG,
    ACTIONS(139), 1,
      anon_sym_LT_QMARK,
    ACTIONS(153), 1,
      anon_sym_LT,
    STATE(74), 1,
      sym_doctypedecl,
    ACTIONS(165), 2,
      sym_Comment,
      sym__S,
    STATE(24), 5,
      sym_PI,
      sym__Misc,
      sym_StyleSheetPI,
      sym_XmlModelPI,
      aux_sym_document_repeat1,
  [870] = 8,
    ACTIONS(143), 1,
      anon_sym_PERCENT,
    ACTIONS(147), 1,
      anon_sym_AMP,
    ACTIONS(149), 1,
      anon_sym_AMP_POUND,
    ACTIONS(151), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(167), 1,
      anon_sym_DQUOTE,
    ACTIONS(169), 1,
      aux_sym_EntityValue_token1,
    STATE(107), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(25), 3,
      sym_PEReference,
      sym__Reference,
      aux_sym_EntityValue_repeat1,
  [898] = 8,
    ACTIONS(98), 1,
      anon_sym_PERCENT,
    ACTIONS(104), 1,
      anon_sym_AMP,
    ACTIONS(106), 1,
      anon_sym_AMP_POUND,
    ACTIONS(108), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(167), 1,
      anon_sym_SQUOTE,
    ACTIONS(171), 1,
      aux_sym_EntityValue_token2,
    STATE(94), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(20), 3,
      sym_PEReference,
      sym__Reference,
      aux_sym_EntityValue_repeat2,
  [926] = 8,
    ACTIONS(173), 1,
      anon_sym_PERCENT,
    ACTIONS(176), 1,
      anon_sym_SQUOTE,
    ACTIONS(178), 1,
      aux_sym_EntityValue_token2,
    ACTIONS(181), 1,
      anon_sym_AMP,
    ACTIONS(184), 1,
      anon_sym_AMP_POUND,
    ACTIONS(187), 1,
      anon_sym_AMP_POUNDx,
    STATE(94), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(31), 3,
      sym_PEReference,
      sym__Reference,
      aux_sym_EntityValue_repeat2,
  [954] = 1,
    ACTIONS(190), 10,
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
  [967] = 4,
    ACTIONS(139), 1,
      anon_sym_LT_QMARK,
    ACTIONS(192), 1,
      anon_sym_LT,
    ACTIONS(137), 2,
      sym_Comment,
      sym__S,
    STATE(23), 5,
      sym_PI,
      sym__Misc,
      sym_StyleSheetPI,
      sym_XmlModelPI,
      aux_sym_document_repeat1,
  [985] = 4,
    ACTIONS(139), 1,
      anon_sym_LT_QMARK,
    ACTIONS(194), 1,
      ts_builtin_sym_end,
    ACTIONS(196), 2,
      sym_Comment,
      sym__S,
    STATE(44), 5,
      sym_PI,
      sym__Misc,
      sym_StyleSheetPI,
      sym_XmlModelPI,
      aux_sym_document_repeat1,
  [1003] = 7,
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
    STATE(71), 2,
      sym__Reference,
      aux_sym_AttValue_repeat1,
    STATE(131), 2,
      sym_EntityRef,
      sym_CharRef,
  [1027] = 7,
    ACTIONS(208), 1,
      anon_sym_SQUOTE,
    ACTIONS(210), 1,
      anon_sym_AMP,
    ACTIONS(212), 1,
      anon_sym_AMP_POUND,
    ACTIONS(214), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(216), 1,
      aux_sym_AttValue_token2,
    STATE(65), 2,
      sym__Reference,
      aux_sym_AttValue_repeat2,
    STATE(127), 2,
      sym_EntityRef,
      sym_CharRef,
  [1051] = 7,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    ACTIONS(220), 1,
      anon_sym_AMP,
    ACTIONS(223), 1,
      anon_sym_AMP_POUND,
    ACTIONS(226), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(229), 1,
      aux_sym_AttValue_token2,
    STATE(37), 2,
      sym__Reference,
      aux_sym_AttValue_repeat2,
    STATE(127), 2,
      sym_EntityRef,
      sym_CharRef,
  [1075] = 2,
    ACTIONS(234), 3,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
    ACTIONS(232), 6,
      sym_Comment,
      sym_CharData,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
  [1089] = 4,
    ACTIONS(139), 1,
      anon_sym_LT_QMARK,
    ACTIONS(153), 1,
      anon_sym_LT,
    ACTIONS(236), 2,
      sym_Comment,
      sym__S,
    STATE(77), 5,
      sym_PI,
      sym__Misc,
      sym_StyleSheetPI,
      sym_XmlModelPI,
      aux_sym_document_repeat1,
  [1107] = 4,
    ACTIONS(139), 1,
      anon_sym_LT_QMARK,
    ACTIONS(238), 1,
      ts_builtin_sym_end,
    ACTIONS(240), 2,
      sym_Comment,
      sym__S,
    STATE(76), 5,
      sym_PI,
      sym__Misc,
      sym_StyleSheetPI,
      sym_XmlModelPI,
      aux_sym_document_repeat1,
  [1125] = 2,
    ACTIONS(244), 3,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
    ACTIONS(242), 6,
      sym_Comment,
      sym_CharData,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
  [1139] = 7,
    ACTIONS(200), 1,
      anon_sym_AMP,
    ACTIONS(202), 1,
      anon_sym_AMP_POUND,
    ACTIONS(204), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(208), 1,
      anon_sym_DQUOTE,
    ACTIONS(246), 1,
      aux_sym_AttValue_token1,
    STATE(35), 2,
      sym__Reference,
      aux_sym_AttValue_repeat1,
    STATE(131), 2,
      sym_EntityRef,
      sym_CharRef,
  [1163] = 4,
    ACTIONS(139), 1,
      anon_sym_LT_QMARK,
    ACTIONS(248), 1,
      ts_builtin_sym_end,
    ACTIONS(250), 2,
      sym_Comment,
      sym__S,
    STATE(67), 5,
      sym_PI,
      sym__Misc,
      sym_StyleSheetPI,
      sym_XmlModelPI,
      aux_sym_document_repeat1,
  [1181] = 4,
    ACTIONS(139), 1,
      anon_sym_LT_QMARK,
    ACTIONS(252), 1,
      ts_builtin_sym_end,
    ACTIONS(137), 2,
      sym_Comment,
      sym__S,
    STATE(23), 5,
      sym_PI,
      sym__Misc,
      sym_StyleSheetPI,
      sym_XmlModelPI,
      aux_sym_document_repeat1,
  [1199] = 7,
    ACTIONS(210), 1,
      anon_sym_AMP,
    ACTIONS(212), 1,
      anon_sym_AMP_POUND,
    ACTIONS(214), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(254), 1,
      anon_sym_SQUOTE,
    ACTIONS(256), 1,
      aux_sym_AttValue_token2,
    STATE(37), 2,
      sym__Reference,
      aux_sym_AttValue_repeat2,
    STATE(127), 2,
      sym_EntityRef,
      sym_CharRef,
  [1223] = 7,
    ACTIONS(210), 1,
      anon_sym_AMP,
    ACTIONS(212), 1,
      anon_sym_AMP_POUND,
    ACTIONS(214), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(258), 1,
      anon_sym_SQUOTE,
    ACTIONS(260), 1,
      aux_sym_AttValue_token2,
    STATE(54), 2,
      sym__Reference,
      aux_sym_AttValue_repeat2,
    STATE(127), 2,
      sym_EntityRef,
      sym_CharRef,
  [1247] = 7,
    ACTIONS(200), 1,
      anon_sym_AMP,
    ACTIONS(202), 1,
      anon_sym_AMP_POUND,
    ACTIONS(204), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(206), 1,
      aux_sym_AttValue_token1,
    ACTIONS(254), 1,
      anon_sym_DQUOTE,
    STATE(71), 2,
      sym__Reference,
      aux_sym_AttValue_repeat1,
    STATE(131), 2,
      sym_EntityRef,
      sym_CharRef,
  [1271] = 7,
    ACTIONS(200), 1,
      anon_sym_AMP,
    ACTIONS(202), 1,
      anon_sym_AMP_POUND,
    ACTIONS(204), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(262), 1,
      anon_sym_DQUOTE,
    ACTIONS(264), 1,
      aux_sym_AttValue_token1,
    STATE(47), 2,
      sym__Reference,
      aux_sym_AttValue_repeat1,
    STATE(131), 2,
      sym_EntityRef,
      sym_CharRef,
  [1295] = 2,
    ACTIONS(268), 3,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
    ACTIONS(266), 6,
      sym_Comment,
      sym_CharData,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
  [1309] = 2,
    ACTIONS(272), 3,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
    ACTIONS(270), 6,
      sym_Comment,
      sym_CharData,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
  [1323] = 7,
    ACTIONS(210), 1,
      anon_sym_AMP,
    ACTIONS(212), 1,
      anon_sym_AMP_POUND,
    ACTIONS(214), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(262), 1,
      anon_sym_SQUOTE,
    ACTIONS(274), 1,
      aux_sym_AttValue_token2,
    STATE(45), 2,
      sym__Reference,
      aux_sym_AttValue_repeat2,
    STATE(127), 2,
      sym_EntityRef,
      sym_CharRef,
  [1347] = 2,
    ACTIONS(278), 3,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
    ACTIONS(276), 6,
      sym_Comment,
      sym_CharData,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
  [1361] = 2,
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
  [1375] = 7,
    ACTIONS(210), 1,
      anon_sym_AMP,
    ACTIONS(212), 1,
      anon_sym_AMP_POUND,
    ACTIONS(214), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(256), 1,
      aux_sym_AttValue_token2,
    ACTIONS(284), 1,
      anon_sym_SQUOTE,
    STATE(37), 2,
      sym__Reference,
      aux_sym_AttValue_repeat2,
    STATE(127), 2,
      sym_EntityRef,
      sym_CharRef,
  [1399] = 7,
    ACTIONS(200), 1,
      anon_sym_AMP,
    ACTIONS(202), 1,
      anon_sym_AMP_POUND,
    ACTIONS(204), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(206), 1,
      aux_sym_AttValue_token1,
    ACTIONS(284), 1,
      anon_sym_DQUOTE,
    STATE(71), 2,
      sym__Reference,
      aux_sym_AttValue_repeat1,
    STATE(131), 2,
      sym_EntityRef,
      sym_CharRef,
  [1423] = 4,
    ACTIONS(139), 1,
      anon_sym_LT_QMARK,
    ACTIONS(286), 1,
      anon_sym_LT,
    ACTIONS(137), 2,
      sym_Comment,
      sym__S,
    STATE(23), 5,
      sym_PI,
      sym__Misc,
      sym_StyleSheetPI,
      sym_XmlModelPI,
      aux_sym_document_repeat1,
  [1441] = 4,
    ACTIONS(139), 1,
      anon_sym_LT_QMARK,
    ACTIONS(286), 1,
      anon_sym_LT,
    ACTIONS(288), 2,
      sym_Comment,
      sym__S,
    STATE(33), 5,
      sym_PI,
      sym__Misc,
      sym_StyleSheetPI,
      sym_XmlModelPI,
      aux_sym_document_repeat1,
  [1459] = 2,
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
  [1473] = 2,
    ACTIONS(296), 3,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
    ACTIONS(294), 6,
      sym_Comment,
      sym_CharData,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
  [1487] = 2,
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
  [1501] = 2,
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
  [1515] = 2,
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
  [1529] = 2,
    ACTIONS(312), 3,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
    ACTIONS(310), 6,
      sym_Comment,
      sym_CharData,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
  [1543] = 2,
    ACTIONS(316), 3,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
    ACTIONS(314), 6,
      sym_Comment,
      sym_CharData,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
  [1557] = 7,
    ACTIONS(198), 1,
      anon_sym_SQUOTE,
    ACTIONS(210), 1,
      anon_sym_AMP,
    ACTIONS(212), 1,
      anon_sym_AMP_POUND,
    ACTIONS(214), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(256), 1,
      aux_sym_AttValue_token2,
    STATE(37), 2,
      sym__Reference,
      aux_sym_AttValue_repeat2,
    STATE(127), 2,
      sym_EntityRef,
      sym_CharRef,
  [1581] = 2,
    ACTIONS(320), 3,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
    ACTIONS(318), 6,
      sym_Comment,
      sym_CharData,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
  [1595] = 4,
    ACTIONS(139), 1,
      anon_sym_LT_QMARK,
    ACTIONS(322), 1,
      ts_builtin_sym_end,
    ACTIONS(137), 2,
      sym_Comment,
      sym__S,
    STATE(23), 5,
      sym_PI,
      sym__Misc,
      sym_StyleSheetPI,
      sym_XmlModelPI,
      aux_sym_document_repeat1,
  [1613] = 2,
    ACTIONS(326), 3,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
    ACTIONS(324), 6,
      sym_Comment,
      sym_CharData,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
  [1627] = 2,
    ACTIONS(330), 3,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
    ACTIONS(328), 6,
      sym_Comment,
      sym_CharData,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
  [1641] = 7,
    ACTIONS(200), 1,
      anon_sym_AMP,
    ACTIONS(202), 1,
      anon_sym_AMP_POUND,
    ACTIONS(204), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(258), 1,
      anon_sym_DQUOTE,
    ACTIONS(332), 1,
      aux_sym_AttValue_token1,
    STATE(55), 2,
      sym__Reference,
      aux_sym_AttValue_repeat1,
    STATE(131), 2,
      sym_EntityRef,
      sym_CharRef,
  [1665] = 7,
    ACTIONS(334), 1,
      anon_sym_DQUOTE,
    ACTIONS(336), 1,
      anon_sym_AMP,
    ACTIONS(339), 1,
      anon_sym_AMP_POUND,
    ACTIONS(342), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(345), 1,
      aux_sym_AttValue_token1,
    STATE(71), 2,
      sym__Reference,
      aux_sym_AttValue_repeat1,
    STATE(131), 2,
      sym_EntityRef,
      sym_CharRef,
  [1689] = 2,
    ACTIONS(350), 3,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
    ACTIONS(348), 6,
      sym_Comment,
      sym_CharData,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
  [1703] = 6,
    ACTIONS(163), 1,
      anon_sym_PERCENT,
    ACTIONS(354), 1,
      anon_sym_LPAREN,
    STATE(126), 1,
      sym__choice,
    STATE(315), 1,
      sym_contentspec,
    ACTIONS(352), 2,
      anon_sym_EMPTY,
      anon_sym_ANY,
    STATE(327), 3,
      sym_Mixed,
      sym_children,
      sym_PEReference,
  [1725] = 4,
    ACTIONS(139), 1,
      anon_sym_LT_QMARK,
    ACTIONS(141), 1,
      anon_sym_LT,
    ACTIONS(356), 2,
      sym_Comment,
      sym__S,
    STATE(56), 5,
      sym_PI,
      sym__Misc,
      sym_StyleSheetPI,
      sym_XmlModelPI,
      aux_sym_document_repeat1,
  [1743] = 2,
    ACTIONS(360), 3,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
    ACTIONS(358), 6,
      sym_Comment,
      sym_CharData,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
  [1757] = 4,
    ACTIONS(139), 1,
      anon_sym_LT_QMARK,
    ACTIONS(362), 1,
      ts_builtin_sym_end,
    ACTIONS(137), 2,
      sym_Comment,
      sym__S,
    STATE(23), 5,
      sym_PI,
      sym__Misc,
      sym_StyleSheetPI,
      sym_XmlModelPI,
      aux_sym_document_repeat1,
  [1775] = 4,
    ACTIONS(139), 1,
      anon_sym_LT_QMARK,
    ACTIONS(141), 1,
      anon_sym_LT,
    ACTIONS(137), 2,
      sym_Comment,
      sym__S,
    STATE(23), 5,
      sym_PI,
      sym__Misc,
      sym_StyleSheetPI,
      sym_XmlModelPI,
      aux_sym_document_repeat1,
  [1793] = 1,
    ACTIONS(364), 8,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_COMMA,
      sym__S,
  [1804] = 1,
    ACTIONS(366), 8,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_COMMA,
      sym__S,
  [1815] = 1,
    ACTIONS(368), 8,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_COMMA,
      sym__S,
  [1826] = 8,
    ACTIONS(163), 1,
      anon_sym_PERCENT,
    ACTIONS(370), 1,
      sym_Name,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
    ACTIONS(374), 1,
      anon_sym_POUNDPCDATA,
    ACTIONS(376), 1,
      sym__S,
    STATE(82), 1,
      sym_PEReference,
    STATE(89), 1,
      sym__choice,
    STATE(132), 1,
      sym__cp,
  [1851] = 6,
    ACTIONS(378), 1,
      anon_sym_PIPE,
    ACTIONS(380), 1,
      anon_sym_RPAREN,
    ACTIONS(384), 1,
      anon_sym_COMMA,
    ACTIONS(386), 1,
      sym__S,
    STATE(145), 1,
      aux_sym_Mixed_repeat1,
    ACTIONS(382), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
  [1872] = 6,
    ACTIONS(378), 1,
      anon_sym_PIPE,
    ACTIONS(384), 1,
      anon_sym_COMMA,
    ACTIONS(388), 1,
      anon_sym_RPAREN,
    ACTIONS(390), 1,
      sym__S,
    STATE(167), 1,
      aux_sym_Mixed_repeat1,
    ACTIONS(382), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
  [1893] = 7,
    ACTIONS(163), 1,
      anon_sym_PERCENT,
    ACTIONS(370), 1,
      sym_Name,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
    ACTIONS(392), 1,
      anon_sym_POUNDPCDATA,
    STATE(83), 1,
      sym_PEReference,
    STATE(89), 1,
      sym__choice,
    STATE(136), 1,
      sym__cp,
  [1915] = 6,
    ACTIONS(163), 1,
      anon_sym_PERCENT,
    ACTIONS(370), 1,
      sym_Name,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
    ACTIONS(394), 1,
      sym__S,
    STATE(186), 1,
      sym__cp,
    STATE(89), 2,
      sym__choice,
      sym_PEReference,
  [1935] = 6,
    ACTIONS(163), 1,
      anon_sym_PERCENT,
    ACTIONS(370), 1,
      sym_Name,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
    ACTIONS(396), 1,
      sym__S,
    STATE(166), 1,
      sym__cp,
    STATE(89), 2,
      sym__choice,
      sym_PEReference,
  [1955] = 6,
    ACTIONS(400), 1,
      anon_sym_POUNDFIXED,
    ACTIONS(402), 1,
      anon_sym_DQUOTE,
    ACTIONS(404), 1,
      anon_sym_SQUOTE,
    STATE(343), 1,
      sym_AttValue,
    STATE(345), 1,
      sym_DefaultDecl,
    ACTIONS(398), 2,
      anon_sym_POUNDREQUIRED,
      anon_sym_POUNDIMPLIED,
  [1975] = 6,
    ACTIONS(163), 1,
      anon_sym_PERCENT,
    ACTIONS(370), 1,
      sym_Name,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
    ACTIONS(406), 1,
      sym__S,
    STATE(132), 1,
      sym__cp,
    STATE(89), 2,
      sym__choice,
      sym_PEReference,
  [1995] = 2,
    ACTIONS(382), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
    ACTIONS(384), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__S,
  [2007] = 2,
    ACTIONS(410), 1,
      anon_sym_LT,
    ACTIONS(408), 5,
      sym_Comment,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      sym__S,
      anon_sym_LT_QMARK,
  [2018] = 6,
    ACTIONS(163), 1,
      anon_sym_PERCENT,
    ACTIONS(412), 1,
      sym_Name,
    ACTIONS(414), 1,
      anon_sym_PIPE,
    ACTIONS(416), 1,
      sym__S,
    STATE(96), 1,
      aux_sym_NotationType_repeat1,
    STATE(312), 1,
      sym_PEReference,
  [2037] = 6,
    ACTIONS(163), 1,
      anon_sym_PERCENT,
    ACTIONS(414), 1,
      anon_sym_PIPE,
    ACTIONS(416), 1,
      sym__S,
    ACTIONS(418), 1,
      sym_Name,
    STATE(115), 1,
      aux_sym_NotationType_repeat1,
    STATE(321), 1,
      sym_PEReference,
  [2056] = 5,
    ACTIONS(163), 1,
      anon_sym_PERCENT,
    ACTIONS(370), 1,
      sym_Name,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
    STATE(136), 1,
      sym__cp,
    STATE(89), 2,
      sym__choice,
      sym_PEReference,
  [2073] = 2,
    ACTIONS(234), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(232), 4,
      anon_sym_PERCENT,
      anon_sym_SQUOTE,
      aux_sym_EntityValue_token2,
      anon_sym_AMP_POUNDx,
  [2084] = 2,
    ACTIONS(422), 1,
      anon_sym_LT,
    ACTIONS(420), 5,
      sym_Comment,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      sym__S,
      anon_sym_LT_QMARK,
  [2095] = 6,
    ACTIONS(163), 1,
      anon_sym_PERCENT,
    ACTIONS(414), 1,
      anon_sym_PIPE,
    ACTIONS(416), 1,
      sym__S,
    ACTIONS(424), 1,
      sym_Name,
    STATE(134), 1,
      aux_sym_NotationType_repeat1,
    STATE(306), 1,
      sym_PEReference,
  [2114] = 2,
    ACTIONS(278), 1,
      anon_sym_LT,
    ACTIONS(276), 5,
      sym_Comment,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      sym__S,
      anon_sym_LT_QMARK,
  [2125] = 2,
    ACTIONS(326), 1,
      anon_sym_LT,
    ACTIONS(324), 5,
      sym_Comment,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      sym__S,
      anon_sym_LT_QMARK,
  [2136] = 2,
    ACTIONS(428), 1,
      anon_sym_LT,
    ACTIONS(426), 5,
      sym_Comment,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      sym__S,
      anon_sym_LT_QMARK,
  [2147] = 5,
    ACTIONS(163), 1,
      anon_sym_PERCENT,
    ACTIONS(370), 1,
      sym_Name,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
    STATE(161), 1,
      sym__cp,
    STATE(89), 2,
      sym__choice,
      sym_PEReference,
  [2164] = 2,
    ACTIONS(300), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(298), 4,
      anon_sym_PERCENT,
      anon_sym_SQUOTE,
      aux_sym_EntityValue_token2,
      anon_sym_AMP_POUNDx,
  [2175] = 2,
    ACTIONS(432), 1,
      anon_sym_LT,
    ACTIONS(430), 5,
      sym_Comment,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      sym__S,
      anon_sym_LT_QMARK,
  [2186] = 2,
    ACTIONS(308), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(306), 4,
      anon_sym_PERCENT,
      anon_sym_SQUOTE,
      aux_sym_EntityValue_token2,
      anon_sym_AMP_POUNDx,
  [2197] = 2,
    ACTIONS(436), 1,
      anon_sym_LT,
    ACTIONS(434), 5,
      sym_Comment,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      sym__S,
      anon_sym_LT_QMARK,
  [2208] = 2,
    ACTIONS(438), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(190), 4,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      aux_sym_EntityValue_token1,
      anon_sym_AMP_POUNDx,
  [2219] = 5,
    ACTIONS(163), 1,
      anon_sym_PERCENT,
    ACTIONS(440), 1,
      anon_sym_SYSTEM,
    ACTIONS(442), 1,
      anon_sym_PUBLIC,
    STATE(389), 1,
      sym_PEReference,
    STATE(283), 2,
      sym_ExternalID,
      sym_PublicID,
  [2236] = 2,
    ACTIONS(234), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(232), 4,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      aux_sym_EntityValue_token1,
      anon_sym_AMP_POUNDx,
  [2247] = 5,
    ACTIONS(163), 1,
      anon_sym_PERCENT,
    ACTIONS(370), 1,
      sym_Name,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
    STATE(166), 1,
      sym__cp,
    STATE(89), 2,
      sym__choice,
      sym_PEReference,
  [2264] = 6,
    ACTIONS(440), 1,
      anon_sym_SYSTEM,
    ACTIONS(444), 1,
      anon_sym_DQUOTE,
    ACTIONS(446), 1,
      anon_sym_SQUOTE,
    ACTIONS(448), 1,
      anon_sym_PUBLIC,
    STATE(247), 1,
      sym_ExternalID,
    STATE(269), 1,
      sym_EntityValue,
  [2283] = 2,
    ACTIONS(308), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(306), 4,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      aux_sym_EntityValue_token1,
      anon_sym_AMP_POUNDx,
  [2294] = 5,
    ACTIONS(440), 1,
      anon_sym_SYSTEM,
    ACTIONS(444), 1,
      anon_sym_DQUOTE,
    ACTIONS(446), 1,
      anon_sym_SQUOTE,
    ACTIONS(448), 1,
      anon_sym_PUBLIC,
    STATE(298), 2,
      sym_EntityValue,
      sym_ExternalID,
  [2311] = 2,
    ACTIONS(300), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(298), 4,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      aux_sym_EntityValue_token1,
      anon_sym_AMP_POUNDx,
  [2322] = 2,
    ACTIONS(438), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(190), 4,
      anon_sym_PERCENT,
      anon_sym_SQUOTE,
      aux_sym_EntityValue_token2,
      anon_sym_AMP_POUNDx,
  [2333] = 2,
    ACTIONS(452), 1,
      anon_sym_LT,
    ACTIONS(450), 5,
      sym_Comment,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      sym__S,
      anon_sym_LT_QMARK,
  [2344] = 6,
    ACTIONS(163), 1,
      anon_sym_PERCENT,
    ACTIONS(412), 1,
      sym_Name,
    ACTIONS(414), 1,
      anon_sym_PIPE,
    ACTIONS(416), 1,
      sym__S,
    STATE(134), 1,
      aux_sym_NotationType_repeat1,
    STATE(312), 1,
      sym_PEReference,
  [2363] = 5,
    ACTIONS(440), 1,
      anon_sym_SYSTEM,
    ACTIONS(448), 1,
      anon_sym_PUBLIC,
    ACTIONS(454), 1,
      anon_sym_LBRACK,
    ACTIONS(456), 1,
      anon_sym_GT,
    STATE(234), 1,
      sym_ExternalID,
  [2379] = 1,
    ACTIONS(93), 5,
      sym_Comment,
      anon_sym_LT_BANG,
      sym__S,
      anon_sym_LT_QMARK,
      anon_sym_RBRACK,
  [2387] = 4,
    ACTIONS(460), 1,
      anon_sym_RPAREN,
    ACTIONS(462), 1,
      sym__S,
    STATE(120), 1,
      aux_sym__choice_repeat1,
    ACTIONS(458), 2,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [2401] = 4,
    ACTIONS(462), 1,
      sym__S,
    ACTIONS(464), 1,
      anon_sym_RPAREN,
    STATE(120), 1,
      aux_sym__choice_repeat1,
    ACTIONS(458), 2,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [2415] = 4,
    ACTIONS(469), 1,
      anon_sym_RPAREN,
    ACTIONS(471), 1,
      sym__S,
    STATE(120), 1,
      aux_sym__choice_repeat1,
    ACTIONS(466), 2,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [2429] = 2,
    ACTIONS(476), 1,
      anon_sym_LT,
    ACTIONS(474), 4,
      sym_Comment,
      anon_sym_LT_BANG,
      sym__S,
      anon_sym_LT_QMARK,
  [2439] = 1,
    ACTIONS(190), 5,
      sym_Comment,
      anon_sym_LT_BANG,
      sym__S,
      anon_sym_LT_QMARK,
      anon_sym_RBRACK,
  [2447] = 2,
    ACTIONS(300), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(298), 3,
      anon_sym_SQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token2,
  [2457] = 1,
    ACTIONS(478), 5,
      sym_Comment,
      anon_sym_LT_BANG,
      sym__S,
      anon_sym_LT_QMARK,
      anon_sym_RBRACK,
  [2465] = 2,
    ACTIONS(308), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(306), 3,
      anon_sym_SQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token2,
  [2475] = 2,
    ACTIONS(480), 2,
      anon_sym_GT,
      sym__S,
    ACTIONS(482), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
  [2485] = 2,
    ACTIONS(234), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(232), 3,
      anon_sym_SQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token2,
  [2495] = 2,
    ACTIONS(300), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(298), 3,
      anon_sym_DQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token1,
  [2505] = 2,
    ACTIONS(486), 1,
      anon_sym_LT,
    ACTIONS(484), 4,
      sym_Comment,
      anon_sym_LT_BANG,
      sym__S,
      anon_sym_LT_QMARK,
  [2515] = 2,
    ACTIONS(308), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(306), 3,
      anon_sym_DQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token1,
  [2525] = 2,
    ACTIONS(234), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(232), 3,
      anon_sym_DQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token1,
  [2535] = 4,
    ACTIONS(462), 1,
      sym__S,
    ACTIONS(488), 1,
      anon_sym_RPAREN,
    STATE(119), 1,
      aux_sym__choice_repeat1,
    ACTIONS(458), 2,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [2549] = 2,
    ACTIONS(492), 1,
      anon_sym_LT,
    ACTIONS(490), 4,
      sym_Comment,
      anon_sym_LT_BANG,
      sym__S,
      anon_sym_LT_QMARK,
  [2559] = 4,
    ACTIONS(496), 1,
      anon_sym_PIPE,
    ACTIONS(499), 1,
      sym__S,
    STATE(134), 1,
      aux_sym_NotationType_repeat1,
    ACTIONS(494), 2,
      anon_sym_PERCENT,
      sym_Name,
  [2573] = 2,
    ACTIONS(504), 1,
      anon_sym_LT,
    ACTIONS(502), 4,
      sym_Comment,
      anon_sym_LT_BANG,
      sym__S,
      anon_sym_LT_QMARK,
  [2583] = 4,
    ACTIONS(462), 1,
      sym__S,
    ACTIONS(464), 1,
      anon_sym_RPAREN,
    STATE(118), 1,
      aux_sym__choice_repeat1,
    ACTIONS(458), 2,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [2597] = 2,
    ACTIONS(508), 1,
      sym__S,
    ACTIONS(506), 3,
      anon_sym_PIPE,
      anon_sym_PERCENT,
      sym_Name,
  [2606] = 2,
    ACTIONS(513), 1,
      anon_sym_LT,
    ACTIONS(511), 3,
      sym_Comment,
      sym__S,
      anon_sym_LT_QMARK,
  [2615] = 4,
    ACTIONS(515), 1,
      anon_sym_xml,
    ACTIONS(517), 1,
      anon_sym_xml_DASHstylesheet,
    ACTIONS(519), 1,
      anon_sym_xml_DASHmodel,
    ACTIONS(521), 1,
      sym_PITarget,
  [2628] = 1,
    ACTIONS(523), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__S,
  [2635] = 4,
    ACTIONS(525), 1,
      anon_sym_PIPE,
    ACTIONS(527), 1,
      anon_sym_RPAREN,
    ACTIONS(529), 1,
      sym__S,
    STATE(147), 1,
      aux_sym_Enumeration_repeat1,
  [2648] = 3,
    ACTIONS(531), 1,
      anon_sym_GT,
    ACTIONS(533), 1,
      sym__S,
    STATE(183), 2,
      sym_AttDef,
      aux_sym_AttlistDecl_repeat1,
  [2659] = 2,
    ACTIONS(537), 1,
      anon_sym_LT,
    ACTIONS(535), 3,
      sym_Comment,
      sym__S,
      anon_sym_LT_QMARK,
  [2668] = 4,
    ACTIONS(378), 1,
      anon_sym_PIPE,
    ACTIONS(388), 1,
      anon_sym_RPAREN,
    ACTIONS(390), 1,
      sym__S,
    STATE(167), 1,
      aux_sym_Mixed_repeat1,
  [2681] = 4,
    ACTIONS(378), 1,
      anon_sym_PIPE,
    ACTIONS(539), 1,
      anon_sym_RPAREN,
    ACTIONS(541), 1,
      sym__S,
    STATE(165), 1,
      aux_sym_Mixed_repeat1,
  [2694] = 4,
    ACTIONS(163), 1,
      anon_sym_PERCENT,
    ACTIONS(543), 1,
      sym_Name,
    ACTIONS(545), 1,
      sym__S,
    STATE(240), 1,
      sym_PEReference,
  [2707] = 4,
    ACTIONS(547), 1,
      anon_sym_PIPE,
    ACTIONS(550), 1,
      anon_sym_RPAREN,
    ACTIONS(552), 1,
      sym__S,
    STATE(147), 1,
      aux_sym_Enumeration_repeat1,
  [2720] = 3,
    ACTIONS(555), 1,
      anon_sym_PERCENT,
    ACTIONS(557), 1,
      sym__S,
    STATE(124), 2,
      sym__DeclSep,
      sym_PEReference,
  [2731] = 2,
    ACTIONS(561), 1,
      anon_sym_LT,
    ACTIONS(559), 3,
      sym_Comment,
      sym__S,
      anon_sym_LT_QMARK,
  [2740] = 2,
    ACTIONS(565), 1,
      anon_sym_LT,
    ACTIONS(563), 3,
      sym_Comment,
      sym__S,
      anon_sym_LT_QMARK,
  [2749] = 1,
    ACTIONS(290), 4,
      sym_Comment,
      ts_builtin_sym_end,
      sym__S,
      anon_sym_LT_QMARK,
  [2756] = 3,
    ACTIONS(569), 1,
      sym__S,
    STATE(152), 1,
      aux_sym_EmptyElemTag_repeat1,
    ACTIONS(567), 2,
      anon_sym_GT,
      anon_sym_SLASH_GT,
  [2767] = 4,
    ACTIONS(572), 1,
      sym_Name,
    ACTIONS(574), 1,
      anon_sym_GT,
    ACTIONS(576), 1,
      anon_sym_SLASH_GT,
    STATE(216), 1,
      sym_Attribute,
  [2780] = 1,
    ACTIONS(302), 4,
      sym_Comment,
      ts_builtin_sym_end,
      sym__S,
      anon_sym_LT_QMARK,
  [2787] = 4,
    ACTIONS(578), 1,
      anon_sym_ELEMENT,
    ACTIONS(580), 1,
      anon_sym_ATTLIST,
    ACTIONS(582), 1,
      anon_sym_NOTATION,
    ACTIONS(584), 1,
      anon_sym_ENTITY,
  [2800] = 1,
    ACTIONS(494), 4,
      anon_sym_PIPE,
      anon_sym_PERCENT,
      sym__S,
      sym_Name,
  [2807] = 2,
    ACTIONS(586), 1,
      sym__S,
    ACTIONS(494), 3,
      anon_sym_PIPE,
      anon_sym_PERCENT,
      sym_Name,
  [2816] = 1,
    ACTIONS(266), 4,
      sym_Comment,
      ts_builtin_sym_end,
      sym__S,
      anon_sym_LT_QMARK,
  [2823] = 1,
    ACTIONS(589), 4,
      anon_sym_PIPE,
      anon_sym_PERCENT,
      sym__S,
      sym_Name,
  [2830] = 1,
    ACTIONS(270), 4,
      sym_Comment,
      ts_builtin_sym_end,
      sym__S,
      anon_sym_LT_QMARK,
  [2837] = 1,
    ACTIONS(591), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__S,
  [2844] = 4,
    ACTIONS(163), 1,
      anon_sym_PERCENT,
    ACTIONS(593), 1,
      sym_Name,
    ACTIONS(595), 1,
      sym__S,
    STATE(231), 1,
      sym_PEReference,
  [2857] = 1,
    ACTIONS(310), 4,
      sym_Comment,
      ts_builtin_sym_end,
      sym__S,
      anon_sym_LT_QMARK,
  [2864] = 4,
    ACTIONS(378), 1,
      anon_sym_PIPE,
    ACTIONS(380), 1,
      anon_sym_RPAREN,
    ACTIONS(386), 1,
      sym__S,
    STATE(145), 1,
      aux_sym_Mixed_repeat1,
  [2877] = 4,
    ACTIONS(597), 1,
      anon_sym_PIPE,
    ACTIONS(600), 1,
      anon_sym_RPAREN,
    ACTIONS(602), 1,
      sym__S,
    STATE(165), 1,
      aux_sym_Mixed_repeat1,
  [2890] = 1,
    ACTIONS(605), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__S,
  [2897] = 4,
    ACTIONS(378), 1,
      anon_sym_PIPE,
    ACTIONS(541), 1,
      sym__S,
    ACTIONS(607), 1,
      anon_sym_RPAREN,
    STATE(165), 1,
      aux_sym_Mixed_repeat1,
  [2910] = 4,
    ACTIONS(525), 1,
      anon_sym_PIPE,
    ACTIONS(609), 1,
      anon_sym_RPAREN,
    ACTIONS(611), 1,
      sym__S,
    STATE(177), 1,
      aux_sym_Enumeration_repeat1,
  [2923] = 4,
    ACTIONS(613), 1,
      anon_sym_GT,
    ACTIONS(615), 1,
      sym__S,
    ACTIONS(617), 1,
      anon_sym_SLASH_GT,
    STATE(152), 1,
      aux_sym_EmptyElemTag_repeat1,
  [2936] = 1,
    ACTIONS(318), 4,
      sym_Comment,
      ts_builtin_sym_end,
      sym__S,
      anon_sym_LT_QMARK,
  [2943] = 4,
    ACTIONS(572), 1,
      sym_Name,
    ACTIONS(613), 1,
      anon_sym_GT,
    ACTIONS(617), 1,
      anon_sym_SLASH_GT,
    STATE(216), 1,
      sym_Attribute,
  [2956] = 4,
    ACTIONS(619), 1,
      sym__S,
    ACTIONS(621), 1,
      anon_sym_QMARK_GT,
    STATE(208), 1,
      sym__EncodingDecl,
    STATE(303), 1,
      sym__SDDecl,
  [2969] = 2,
    ACTIONS(625), 1,
      anon_sym_LT,
    ACTIONS(623), 3,
      sym_Comment,
      sym__S,
      anon_sym_LT_QMARK,
  [2978] = 3,
    ACTIONS(627), 1,
      anon_sym_GT,
    ACTIONS(629), 1,
      sym__S,
    STATE(174), 2,
      sym_AttDef,
      aux_sym_AttlistDecl_repeat1,
  [2989] = 4,
    ACTIONS(163), 1,
      anon_sym_PERCENT,
    ACTIONS(632), 1,
      sym_Name,
    ACTIONS(634), 1,
      anon_sym_GT,
    STATE(380), 1,
      sym_PEReference,
  [3002] = 4,
    ACTIONS(525), 1,
      anon_sym_PIPE,
    ACTIONS(636), 1,
      anon_sym_RPAREN,
    ACTIONS(638), 1,
      sym__S,
    STATE(141), 1,
      aux_sym_Enumeration_repeat1,
  [3015] = 4,
    ACTIONS(525), 1,
      anon_sym_PIPE,
    ACTIONS(636), 1,
      anon_sym_RPAREN,
    ACTIONS(638), 1,
      sym__S,
    STATE(147), 1,
      aux_sym_Enumeration_repeat1,
  [3028] = 2,
    ACTIONS(642), 1,
      anon_sym_LT,
    ACTIONS(640), 3,
      sym_Comment,
      sym__S,
      anon_sym_LT_QMARK,
  [3037] = 2,
    ACTIONS(646), 1,
      anon_sym_LT,
    ACTIONS(644), 3,
      sym_Comment,
      sym__S,
      anon_sym_LT_QMARK,
  [3046] = 4,
    ACTIONS(163), 1,
      anon_sym_PERCENT,
    ACTIONS(648), 1,
      sym_Name,
    ACTIONS(650), 1,
      sym__S,
    STATE(92), 1,
      sym_PEReference,
  [3059] = 3,
    ACTIONS(555), 1,
      anon_sym_PERCENT,
    ACTIONS(652), 1,
      sym__S,
    STATE(117), 2,
      sym__DeclSep,
      sym_PEReference,
  [3070] = 1,
    ACTIONS(328), 4,
      sym_Comment,
      ts_builtin_sym_end,
      sym__S,
      anon_sym_LT_QMARK,
  [3077] = 3,
    ACTIONS(654), 1,
      anon_sym_GT,
    ACTIONS(656), 1,
      sym__S,
    STATE(174), 2,
      sym_AttDef,
      aux_sym_AttlistDecl_repeat1,
  [3088] = 4,
    ACTIONS(163), 1,
      anon_sym_PERCENT,
    ACTIONS(632), 1,
      sym_Name,
    ACTIONS(654), 1,
      anon_sym_GT,
    STATE(380), 1,
      sym_PEReference,
  [3101] = 4,
    ACTIONS(658), 1,
      anon_sym_GT,
    ACTIONS(660), 1,
      sym__S,
    ACTIONS(662), 1,
      anon_sym_SLASH_GT,
    STATE(169), 1,
      aux_sym_EmptyElemTag_repeat1,
  [3114] = 1,
    ACTIONS(469), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__S,
  [3121] = 4,
    ACTIONS(658), 1,
      anon_sym_GT,
    ACTIONS(664), 1,
      sym__S,
    ACTIONS(666), 1,
      anon_sym_SLASH_GT,
    STATE(189), 1,
      aux_sym_EmptyElemTag_repeat1,
  [3134] = 4,
    ACTIONS(572), 1,
      sym_Name,
    ACTIONS(613), 1,
      anon_sym_GT,
    ACTIONS(668), 1,
      anon_sym_SLASH_GT,
    STATE(216), 1,
      sym_Attribute,
  [3147] = 4,
    ACTIONS(613), 1,
      anon_sym_GT,
    ACTIONS(668), 1,
      anon_sym_SLASH_GT,
    ACTIONS(670), 1,
      sym__S,
    STATE(152), 1,
      aux_sym_EmptyElemTag_repeat1,
  [3160] = 4,
    ACTIONS(572), 1,
      sym_Name,
    ACTIONS(574), 1,
      anon_sym_GT,
    ACTIONS(672), 1,
      anon_sym_SLASH_GT,
    STATE(216), 1,
      sym_Attribute,
  [3173] = 4,
    ACTIONS(674), 1,
      anon_sym_LT,
    STATE(2), 1,
      sym_STag,
    STATE(43), 1,
      sym_element,
    STATE(192), 1,
      sym_EmptyElemTag,
  [3186] = 1,
    ACTIONS(348), 4,
      sym_Comment,
      ts_builtin_sym_end,
      sym__S,
      anon_sym_LT_QMARK,
  [3193] = 4,
    ACTIONS(674), 1,
      anon_sym_LT,
    STATE(2), 1,
      sym_STag,
    STATE(34), 1,
      sym_element,
    STATE(192), 1,
      sym_EmptyElemTag,
  [3206] = 2,
    ACTIONS(678), 1,
      anon_sym_LT,
    ACTIONS(676), 3,
      sym_Comment,
      sym__S,
      anon_sym_LT_QMARK,
  [3215] = 2,
    ACTIONS(682), 1,
      sym__S,
    ACTIONS(680), 2,
      anon_sym_PIPE,
      anon_sym_RPAREN,
  [3223] = 1,
    ACTIONS(685), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [3229] = 3,
    ACTIONS(687), 1,
      sym__S,
    ACTIONS(689), 1,
      anon_sym_QMARK_GT,
    STATE(201), 1,
      aux_sym_StyleSheetPI_repeat1,
  [3239] = 3,
    ACTIONS(691), 1,
      sym__S,
    ACTIONS(693), 1,
      anon_sym_QMARK_GT,
    STATE(203), 1,
      aux_sym_StyleSheetPI_repeat1,
  [3249] = 3,
    ACTIONS(517), 1,
      anon_sym_xml_DASHstylesheet,
    ACTIONS(519), 1,
      anon_sym_xml_DASHmodel,
    ACTIONS(521), 1,
      sym_PITarget,
  [3259] = 3,
    ACTIONS(695), 1,
      sym_Name,
    ACTIONS(697), 1,
      anon_sym_QMARK_GT,
    STATE(309), 1,
      sym_PseudoAtt,
  [3269] = 3,
    ACTIONS(697), 1,
      anon_sym_QMARK_GT,
    ACTIONS(699), 1,
      sym__S,
    STATE(211), 1,
      aux_sym_StyleSheetPI_repeat1,
  [3279] = 3,
    ACTIONS(695), 1,
      sym_Name,
    ACTIONS(701), 1,
      anon_sym_QMARK_GT,
    STATE(309), 1,
      sym_PseudoAtt,
  [3289] = 3,
    ACTIONS(701), 1,
      anon_sym_QMARK_GT,
    ACTIONS(703), 1,
      sym__S,
    STATE(211), 1,
      aux_sym_StyleSheetPI_repeat1,
  [3299] = 3,
    ACTIONS(705), 1,
      anon_sym_LBRACK,
    ACTIONS(707), 1,
      anon_sym_GT,
    ACTIONS(709), 1,
      sym__S,
  [3309] = 1,
    ACTIONS(711), 3,
      anon_sym_GT,
      sym__S,
      anon_sym_SLASH_GT,
  [3315] = 3,
    ACTIONS(713), 1,
      sym__S,
    ACTIONS(715), 1,
      anon_sym_EQ,
    STATE(253), 1,
      sym__Eq,
  [3325] = 3,
    ACTIONS(717), 1,
      anon_sym_QMARK_GT,
    ACTIONS(719), 1,
      anon_sym_encoding,
    ACTIONS(721), 1,
      anon_sym_standalone,
  [3335] = 3,
    ACTIONS(717), 1,
      anon_sym_QMARK_GT,
    ACTIONS(723), 1,
      sym__S,
    STATE(336), 1,
      sym__SDDecl,
  [3345] = 3,
    ACTIONS(713), 1,
      sym__S,
    ACTIONS(715), 1,
      anon_sym_EQ,
    STATE(228), 1,
      sym__Eq,
  [3355] = 3,
    ACTIONS(695), 1,
      sym_Name,
    ACTIONS(725), 1,
      anon_sym_QMARK_GT,
    STATE(309), 1,
      sym_PseudoAtt,
  [3365] = 3,
    ACTIONS(727), 1,
      sym__S,
    ACTIONS(730), 1,
      anon_sym_QMARK_GT,
    STATE(211), 1,
      aux_sym_StyleSheetPI_repeat1,
  [3375] = 3,
    ACTIONS(695), 1,
      sym_Name,
    ACTIONS(732), 1,
      anon_sym_QMARK_GT,
    STATE(309), 1,
      sym_PseudoAtt,
  [3385] = 1,
    ACTIONS(734), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [3391] = 3,
    ACTIONS(713), 1,
      sym__S,
    ACTIONS(715), 1,
      anon_sym_EQ,
    STATE(233), 1,
      sym__Eq,
  [3401] = 3,
    ACTIONS(736), 1,
      anon_sym_DQUOTE,
    ACTIONS(738), 1,
      anon_sym_SQUOTE,
    STATE(229), 1,
      sym_SystemLiteral,
  [3411] = 1,
    ACTIONS(567), 3,
      anon_sym_GT,
      sym__S,
      anon_sym_SLASH_GT,
  [3417] = 1,
    ACTIONS(740), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [3423] = 1,
    ACTIONS(742), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [3429] = 3,
    ACTIONS(402), 1,
      anon_sym_DQUOTE,
    ACTIONS(404), 1,
      anon_sym_SQUOTE,
    STATE(317), 1,
      sym_AttValue,
  [3439] = 3,
    ACTIONS(163), 1,
      anon_sym_PERCENT,
    ACTIONS(744), 1,
      sym_Name,
    STATE(91), 1,
      sym_PEReference,
  [3449] = 1,
    ACTIONS(746), 3,
      anon_sym_LBRACK,
      anon_sym_GT,
      sym__S,
  [3455] = 1,
    ACTIONS(550), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [3461] = 2,
    ACTIONS(750), 1,
      sym__S,
    ACTIONS(748), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3469] = 3,
    ACTIONS(713), 1,
      sym__S,
    ACTIONS(715), 1,
      anon_sym_EQ,
    STATE(300), 1,
      sym__Eq,
  [3479] = 1,
    ACTIONS(680), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [3485] = 3,
    ACTIONS(713), 1,
      sym__S,
    ACTIONS(715), 1,
      anon_sym_EQ,
    STATE(287), 1,
      sym__Eq,
  [3495] = 1,
    ACTIONS(752), 3,
      anon_sym_LBRACK,
      anon_sym_GT,
      sym__S,
  [3501] = 3,
    ACTIONS(754), 1,
      anon_sym_DQUOTE,
    ACTIONS(756), 1,
      anon_sym_SQUOTE,
    STATE(284), 1,
      sym_PseudoAttValue,
  [3511] = 1,
    ACTIONS(758), 3,
      anon_sym_LBRACK,
      anon_sym_GT,
      sym__S,
  [3517] = 3,
    ACTIONS(163), 1,
      anon_sym_PERCENT,
    ACTIONS(760), 1,
      sym_Name,
    STATE(195), 1,
      sym_PEReference,
  [3527] = 2,
    ACTIONS(762), 1,
      sym__S,
    ACTIONS(685), 2,
      anon_sym_PIPE,
      anon_sym_RPAREN,
  [3535] = 3,
    ACTIONS(163), 1,
      anon_sym_PERCENT,
    ACTIONS(765), 1,
      sym_Name,
    STATE(347), 1,
      sym_PEReference,
  [3545] = 3,
    ACTIONS(767), 1,
      anon_sym_DQUOTE,
    ACTIONS(769), 1,
      anon_sym_SQUOTE,
    STATE(242), 1,
      sym_AttValue,
  [3555] = 3,
    ACTIONS(771), 1,
      anon_sym_LBRACK,
    ACTIONS(773), 1,
      anon_sym_GT,
    ACTIONS(775), 1,
      sym__S,
  [3565] = 3,
    ACTIONS(777), 1,
      sym_Name,
    ACTIONS(779), 1,
      anon_sym_PERCENT,
    STATE(386), 1,
      sym_PEReference,
  [3575] = 2,
    ACTIONS(783), 1,
      sym__S,
    ACTIONS(781), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3583] = 2,
    ACTIONS(787), 1,
      anon_sym_STAR,
    ACTIONS(785), 2,
      anon_sym_GT,
      sym__S,
  [3591] = 3,
    ACTIONS(163), 1,
      anon_sym_PERCENT,
    ACTIONS(789), 1,
      sym_Name,
    STATE(392), 1,
      sym_PEReference,
  [3601] = 3,
    ACTIONS(163), 1,
      anon_sym_PERCENT,
    ACTIONS(791), 1,
      sym_Name,
    STATE(142), 1,
      sym_PEReference,
  [3611] = 2,
    ACTIONS(793), 1,
      sym__S,
    ACTIONS(600), 2,
      anon_sym_PIPE,
      anon_sym_RPAREN,
  [3619] = 3,
    ACTIONS(163), 1,
      anon_sym_PERCENT,
    ACTIONS(593), 1,
      sym_Name,
    STATE(231), 1,
      sym_PEReference,
  [3629] = 1,
    ACTIONS(796), 3,
      anon_sym_GT,
      sym__S,
      anon_sym_SLASH_GT,
  [3635] = 2,
    ACTIONS(800), 1,
      anon_sym_STAR,
    ACTIONS(798), 2,
      anon_sym_GT,
      sym__S,
  [3643] = 3,
    ACTIONS(163), 1,
      anon_sym_PERCENT,
    ACTIONS(802), 1,
      sym_Name,
    STATE(393), 1,
      sym_PEReference,
  [3653] = 1,
    ACTIONS(804), 3,
      anon_sym_GT,
      sym__S,
      anon_sym_SLASH_GT,
  [3659] = 3,
    ACTIONS(736), 1,
      anon_sym_DQUOTE,
    ACTIONS(738), 1,
      anon_sym_SQUOTE,
    STATE(221), 1,
      sym_SystemLiteral,
  [3669] = 3,
    ACTIONS(806), 1,
      anon_sym_GT,
    ACTIONS(808), 1,
      sym__S,
    STATE(273), 1,
      sym_NDataDecl,
  [3679] = 3,
    ACTIONS(810), 1,
      anon_sym_DQUOTE,
    ACTIONS(812), 1,
      anon_sym_SQUOTE,
    STATE(423), 1,
      sym_PubidLiteral,
  [3689] = 3,
    ACTIONS(810), 1,
      anon_sym_DQUOTE,
    ACTIONS(812), 1,
      anon_sym_SQUOTE,
    STATE(296), 1,
      sym_PubidLiteral,
  [3699] = 3,
    ACTIONS(810), 1,
      anon_sym_DQUOTE,
    ACTIONS(812), 1,
      anon_sym_SQUOTE,
    STATE(295), 1,
      sym_PubidLiteral,
  [3709] = 3,
    ACTIONS(163), 1,
      anon_sym_PERCENT,
    ACTIONS(632), 1,
      sym_Name,
    STATE(380), 1,
      sym_PEReference,
  [3719] = 2,
    ACTIONS(814), 1,
      anon_sym_RBRACK_RBRACK_GT,
    ACTIONS(816), 1,
      sym_CData,
  [3726] = 2,
    ACTIONS(818), 1,
      anon_sym_DQUOTE,
    ACTIONS(820), 1,
      anon_sym_SQUOTE,
  [3733] = 1,
    ACTIONS(822), 2,
      anon_sym_PERCENT,
      sym__S,
  [3738] = 2,
    ACTIONS(824), 1,
      sym__S,
    ACTIONS(826), 1,
      anon_sym_QMARK_GT,
  [3745] = 1,
    ACTIONS(828), 2,
      anon_sym_PERCENT,
      sym__S,
  [3750] = 2,
    ACTIONS(830), 1,
      sym__S,
    ACTIONS(832), 1,
      anon_sym_QMARK_GT,
  [3757] = 1,
    ACTIONS(834), 2,
      anon_sym_GT,
      sym__S,
  [3762] = 1,
    ACTIONS(836), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3767] = 1,
    ACTIONS(838), 2,
      anon_sym_PERCENT,
      sym__S,
  [3772] = 1,
    ACTIONS(840), 2,
      anon_sym_yes,
      anon_sym_no,
  [3777] = 1,
    ACTIONS(842), 2,
      anon_sym_yes,
      anon_sym_no,
  [3782] = 2,
    ACTIONS(844), 1,
      sym__S,
    STATE(172), 1,
      sym__VersionInfo,
  [3789] = 1,
    ACTIONS(846), 2,
      anon_sym_PERCENT,
      sym__S,
  [3794] = 2,
    ACTIONS(848), 1,
      anon_sym_GT,
    ACTIONS(850), 1,
      sym__S,
  [3801] = 2,
    ACTIONS(852), 1,
      anon_sym_LBRACK,
    ACTIONS(854), 1,
      anon_sym_GT,
  [3808] = 1,
    ACTIONS(856), 2,
      anon_sym_GT,
      sym__S,
  [3813] = 1,
    ACTIONS(858), 2,
      sym__S,
      anon_sym_QMARK_GT,
  [3818] = 2,
    ACTIONS(806), 1,
      anon_sym_GT,
    ACTIONS(860), 1,
      sym__S,
  [3825] = 1,
    ACTIONS(862), 2,
      anon_sym_PERCENT,
      sym__S,
  [3830] = 2,
    ACTIONS(29), 1,
      anon_sym_LT_SLASH,
    STATE(63), 1,
      sym_ETag,
  [3837] = 2,
    ACTIONS(864), 1,
      anon_sym_GT,
    ACTIONS(866), 1,
      anon_sym_NDATA,
  [3844] = 2,
    ACTIONS(864), 1,
      anon_sym_GT,
    ACTIONS(868), 1,
      sym__S,
  [3851] = 1,
    ACTIONS(870), 2,
      sym__S,
      anon_sym_QMARK_GT,
  [3856] = 2,
    ACTIONS(872), 1,
      sym__S,
    ACTIONS(874), 1,
      anon_sym_QMARK_GT,
  [3863] = 2,
    ACTIONS(854), 1,
      anon_sym_GT,
    ACTIONS(876), 1,
      sym__S,
  [3870] = 2,
    ACTIONS(25), 1,
      anon_sym_LT_SLASH,
    STATE(163), 1,
      sym_ETag,
  [3877] = 2,
    ACTIONS(800), 1,
      anon_sym_RPAREN,
    ACTIONS(878), 1,
      anon_sym_PIPE,
  [3884] = 1,
    ACTIONS(276), 2,
      anon_sym_PERCENT,
      sym__S,
  [3889] = 1,
    ACTIONS(324), 2,
      anon_sym_PERCENT,
      sym__S,
  [3894] = 1,
    ACTIONS(711), 2,
      anon_sym_GT,
      sym__S,
  [3899] = 1,
    ACTIONS(804), 2,
      anon_sym_GT,
      sym__S,
  [3904] = 2,
    ACTIONS(880), 1,
      anon_sym_GT,
    ACTIONS(882), 1,
      sym__S,
  [3911] = 1,
    ACTIONS(884), 2,
      sym__S,
      anon_sym_QMARK_GT,
  [3916] = 2,
    ACTIONS(886), 1,
      anon_sym_GT,
    ACTIONS(888), 1,
      sym__S,
  [3923] = 1,
    ACTIONS(890), 2,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [3928] = 2,
    ACTIONS(892), 1,
      anon_sym_DQUOTE,
    ACTIONS(894), 1,
      anon_sym_SQUOTE,
  [3935] = 1,
    ACTIONS(896), 2,
      anon_sym_PERCENT,
      sym__S,
  [3940] = 2,
    ACTIONS(898), 1,
      sym__S,
    ACTIONS(900), 1,
      sym_Nmtoken,
  [3947] = 1,
    ACTIONS(902), 2,
      anon_sym_GT,
      sym__S,
  [3952] = 1,
    ACTIONS(904), 2,
      anon_sym_GT,
      sym__S,
  [3957] = 1,
    ACTIONS(906), 2,
      sym__S,
      anon_sym_QMARK_GT,
  [3962] = 2,
    ACTIONS(908), 1,
      anon_sym_GT,
    ACTIONS(910), 1,
      sym__S,
  [3969] = 1,
    ACTIONS(912), 2,
      anon_sym_GT,
      sym__S,
  [3974] = 2,
    ACTIONS(914), 1,
      anon_sym_GT,
    ACTIONS(916), 1,
      sym__S,
  [3981] = 1,
    ACTIONS(914), 2,
      anon_sym_GT,
      sym__S,
  [3986] = 1,
    ACTIONS(918), 2,
      anon_sym_PERCENT,
      sym__S,
  [3991] = 2,
    ACTIONS(920), 1,
      anon_sym_GT,
    ACTIONS(922), 1,
      sym__S,
  [3998] = 1,
    ACTIONS(924), 2,
      anon_sym_GT,
      sym__S,
  [4003] = 2,
    ACTIONS(926), 1,
      anon_sym_DQUOTE,
    ACTIONS(928), 1,
      anon_sym_SQUOTE,
  [4010] = 2,
    ACTIONS(930), 1,
      sym_Name,
    ACTIONS(932), 1,
      sym__S,
  [4017] = 1,
    ACTIONS(934), 2,
      anon_sym_PERCENT,
      sym__S,
  [4022] = 2,
    ACTIONS(717), 1,
      anon_sym_QMARK_GT,
    ACTIONS(936), 1,
      sym__S,
  [4029] = 1,
    ACTIONS(938), 2,
      anon_sym_GT,
      sym__S,
  [4034] = 1,
    ACTIONS(940), 2,
      anon_sym_GT,
      sym__S,
  [4039] = 2,
    ACTIONS(942), 1,
      anon_sym_RPAREN,
    ACTIONS(944), 1,
      sym__S,
  [4046] = 1,
    ACTIONS(785), 2,
      anon_sym_GT,
      sym__S,
  [4051] = 1,
    ACTIONS(946), 2,
      anon_sym_GT,
      sym__S,
  [4056] = 1,
    ACTIONS(730), 2,
      sym__S,
      anon_sym_QMARK_GT,
  [4061] = 1,
    ACTIONS(948), 2,
      anon_sym_GT,
      sym__S,
  [4066] = 1,
    ACTIONS(781), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [4071] = 2,
    ACTIONS(950), 1,
      anon_sym_RPAREN,
    ACTIONS(952), 1,
      sym__S,
  [4078] = 2,
    ACTIONS(787), 1,
      anon_sym_RPAREN,
    ACTIONS(878), 1,
      anon_sym_PIPE,
  [4085] = 1,
    ACTIONS(954), 2,
      anon_sym_PERCENT,
      sym__S,
  [4090] = 2,
    ACTIONS(956), 1,
      anon_sym_GT,
    ACTIONS(958), 1,
      sym__S,
  [4097] = 1,
    ACTIONS(960), 2,
      anon_sym_GT,
      sym__S,
  [4102] = 1,
    ACTIONS(962), 2,
      anon_sym_GT,
      sym__S,
  [4107] = 1,
    ACTIONS(964), 2,
      anon_sym_PERCENT,
      sym__S,
  [4112] = 2,
    ACTIONS(773), 1,
      anon_sym_GT,
    ACTIONS(966), 1,
      sym__S,
  [4119] = 1,
    ACTIONS(968), 2,
      anon_sym_PERCENT,
      sym__S,
  [4124] = 2,
    ACTIONS(970), 1,
      anon_sym_RPAREN,
    ACTIONS(972), 1,
      sym__S,
  [4131] = 2,
    ACTIONS(572), 1,
      sym_Name,
    STATE(216), 1,
      sym_Attribute,
  [4138] = 2,
    ACTIONS(974), 1,
      anon_sym_GT,
    ACTIONS(976), 1,
      sym__S,
  [4145] = 1,
    ACTIONS(978), 2,
      sym_CData,
      anon_sym_RBRACK_RBRACK_GT,
  [4150] = 1,
    ACTIONS(980), 2,
      anon_sym_PERCENT,
      sym__S,
  [4155] = 1,
    ACTIONS(982), 2,
      sym__S,
      anon_sym_QMARK_GT,
  [4160] = 1,
    ACTIONS(984), 2,
      anon_sym_GT,
      sym__S,
  [4165] = 1,
    ACTIONS(986), 2,
      anon_sym_PERCENT,
      sym__S,
  [4170] = 2,
    ACTIONS(988), 1,
      anon_sym_GT,
    ACTIONS(990), 1,
      sym__S,
  [4177] = 2,
    ACTIONS(992), 1,
      anon_sym_PIPE,
    ACTIONS(994), 1,
      anon_sym_RPAREN,
  [4184] = 1,
    ACTIONS(996), 2,
      anon_sym_GT,
      sym__S,
  [4189] = 1,
    ACTIONS(998), 2,
      anon_sym_GT,
      sym__S,
  [4194] = 1,
    ACTIONS(1000), 2,
      sym__S,
      anon_sym_QMARK_GT,
  [4199] = 2,
    ACTIONS(695), 1,
      sym_Name,
    STATE(309), 1,
      sym_PseudoAtt,
  [4206] = 1,
    ACTIONS(1002), 2,
      anon_sym_GT,
      sym__S,
  [4211] = 2,
    ACTIONS(1004), 1,
      sym__S,
    ACTIONS(1006), 1,
      anon_sym_QMARK_GT,
  [4218] = 2,
    ACTIONS(1008), 1,
      sym__S,
    ACTIONS(1010), 1,
      sym_Nmtoken,
  [4225] = 2,
    ACTIONS(1012), 1,
      sym__S,
    ACTIONS(1014), 1,
      sym_Nmtoken,
  [4232] = 1,
    ACTIONS(1016), 2,
      anon_sym_GT,
      sym__S,
  [4237] = 2,
    ACTIONS(636), 1,
      anon_sym_RPAREN,
    ACTIONS(992), 1,
      anon_sym_PIPE,
  [4244] = 2,
    ACTIONS(721), 1,
      anon_sym_standalone,
    ACTIONS(1006), 1,
      anon_sym_QMARK_GT,
  [4251] = 2,
    ACTIONS(527), 1,
      anon_sym_RPAREN,
    ACTIONS(992), 1,
      anon_sym_PIPE,
  [4258] = 1,
    ACTIONS(1018), 2,
      anon_sym_GT,
      sym__S,
  [4263] = 1,
    ACTIONS(1020), 2,
      anon_sym_GT,
      sym__S,
  [4268] = 1,
    ACTIONS(1022), 2,
      anon_sym_GT,
      sym__S,
  [4273] = 1,
    ACTIONS(1024), 2,
      anon_sym_PERCENT,
      sym__S,
  [4278] = 1,
    ACTIONS(1026), 2,
      anon_sym_GT,
      sym__S,
  [4283] = 2,
    ACTIONS(1028), 1,
      anon_sym_GT,
    ACTIONS(1030), 1,
      sym__S,
  [4290] = 1,
    ACTIONS(1032), 2,
      anon_sym_GT,
      sym__S,
  [4295] = 1,
    ACTIONS(1034), 1,
      anon_sym_SQUOTE,
  [4299] = 1,
    ACTIONS(1036), 1,
      sym__S,
  [4303] = 1,
    ACTIONS(1038), 1,
      anon_sym_SQUOTE,
  [4307] = 1,
    ACTIONS(1040), 1,
      sym__S,
  [4311] = 1,
    ACTIONS(1042), 1,
      aux_sym_SystemLiteral_token1,
  [4315] = 1,
    ACTIONS(1010), 1,
      sym_Nmtoken,
  [4319] = 1,
    ACTIONS(1044), 1,
      aux_sym_SystemLiteral_token2,
  [4323] = 1,
    ACTIONS(1046), 1,
      anon_sym_SEMI,
  [4327] = 1,
    ACTIONS(1048), 1,
      sym_EncName,
  [4331] = 1,
    ACTIONS(1050), 1,
      anon_sym_SEMI,
  [4335] = 1,
    ACTIONS(1052), 1,
      anon_sym_GT,
  [4339] = 1,
    ACTIONS(1054), 1,
      sym_VersionNum,
  [4343] = 1,
    ACTIONS(1006), 1,
      anon_sym_QMARK_GT,
  [4347] = 1,
    ACTIONS(1056), 1,
      anon_sym_STAR,
  [4351] = 1,
    ACTIONS(988), 1,
      anon_sym_GT,
  [4355] = 1,
    ACTIONS(1058), 1,
      aux_sym_PubidLiteral_token1,
  [4359] = 1,
    ACTIONS(1060), 1,
      sym_Nmtoken,
  [4363] = 1,
    ACTIONS(992), 1,
      anon_sym_PIPE,
  [4367] = 1,
    ACTIONS(1062), 1,
      anon_sym_GT,
  [4371] = 1,
    ACTIONS(1028), 1,
      anon_sym_GT,
  [4375] = 1,
    ACTIONS(1064), 1,
      anon_sym_PIPE,
  [4379] = 1,
    ACTIONS(1066), 1,
      anon_sym_LPAREN,
  [4383] = 1,
    ACTIONS(1068), 1,
      anon_sym_SQUOTE,
  [4387] = 1,
    ACTIONS(1070), 1,
      sym_Nmtoken,
  [4391] = 1,
    ACTIONS(1072), 1,
      sym__S,
  [4395] = 1,
    ACTIONS(1068), 1,
      anon_sym_DQUOTE,
  [4399] = 1,
    ACTIONS(1074), 1,
      sym__S,
  [4403] = 1,
    ACTIONS(1076), 1,
      anon_sym_SQUOTE,
  [4407] = 1,
    ACTIONS(1076), 1,
      anon_sym_DQUOTE,
  [4411] = 1,
    ACTIONS(974), 1,
      anon_sym_GT,
  [4415] = 1,
    ACTIONS(1078), 1,
      sym__S,
  [4419] = 1,
    ACTIONS(950), 1,
      anon_sym_RPAREN,
  [4423] = 1,
    ACTIONS(878), 1,
      anon_sym_PIPE,
  [4427] = 1,
    ACTIONS(787), 1,
      anon_sym_STAR,
  [4431] = 1,
    ACTIONS(942), 1,
      anon_sym_RPAREN,
  [4435] = 1,
    ACTIONS(1080), 1,
      anon_sym_DOCTYPE,
  [4439] = 1,
    ACTIONS(1082), 1,
      sym__S,
  [4443] = 1,
    ACTIONS(1084), 1,
      sym__S,
  [4447] = 1,
    ACTIONS(1086), 1,
      anon_sym_RPAREN,
  [4451] = 1,
    ACTIONS(1088), 1,
      sym__S,
  [4455] = 1,
    ACTIONS(1090), 1,
      anon_sym_GT,
  [4459] = 1,
    ACTIONS(1092), 1,
      sym__S,
  [4463] = 1,
    ACTIONS(1094), 1,
      sym__S,
  [4467] = 1,
    ACTIONS(1096), 1,
      sym__S,
  [4471] = 1,
    ACTIONS(1098), 1,
      anon_sym_QMARK_GT,
  [4475] = 1,
    ACTIONS(1100), 1,
      sym_VersionNum,
  [4479] = 1,
    ACTIONS(1102), 1,
      anon_sym_RBRACK_RBRACK_GT,
  [4483] = 1,
    ACTIONS(1104), 1,
      sym__S,
  [4487] = 1,
    ACTIONS(1106), 1,
      anon_sym_SEMI,
  [4491] = 1,
    ACTIONS(1108), 1,
      anon_sym_SEMI,
  [4495] = 1,
    ACTIONS(1110), 1,
      anon_sym_LBRACK,
  [4499] = 1,
    ACTIONS(1112), 1,
      anon_sym_EQ,
  [4503] = 1,
    ACTIONS(1034), 1,
      anon_sym_DQUOTE,
  [4507] = 1,
    ACTIONS(1114), 1,
      anon_sym_QMARK_GT,
  [4511] = 1,
    ACTIONS(1116), 1,
      sym__S,
  [4515] = 1,
    ACTIONS(1118), 1,
      anon_sym_SQUOTE,
  [4519] = 1,
    ACTIONS(1118), 1,
      anon_sym_DQUOTE,
  [4523] = 1,
    ACTIONS(1120), 1,
      sym_Name,
  [4527] = 1,
    ACTIONS(1122), 1,
      anon_sym_version,
  [4531] = 1,
    ACTIONS(1124), 1,
      sym__pi_content,
  [4535] = 1,
    ACTIONS(1126), 1,
      sym__S,
  [4539] = 1,
    ACTIONS(1128), 1,
      sym_Name,
  [4543] = 1,
    ACTIONS(1130), 1,
      sym_EncName,
  [4547] = 1,
    ACTIONS(1132), 1,
      sym__S,
  [4551] = 1,
    ACTIONS(1134), 1,
      sym__end_tag_name,
  [4555] = 1,
    ACTIONS(1136), 1,
      sym_PITarget,
  [4559] = 1,
    ACTIONS(1138), 1,
      aux_sym_CharRef_token2,
  [4563] = 1,
    ACTIONS(1138), 1,
      aux_sym_CharRef_token1,
  [4567] = 1,
    ACTIONS(1140), 1,
      sym_Name,
  [4571] = 1,
    ACTIONS(1142), 1,
      anon_sym_CDATA,
  [4575] = 1,
    ACTIONS(1144), 1,
      sym__S,
  [4579] = 1,
    ACTIONS(854), 1,
      anon_sym_GT,
  [4583] = 1,
    ACTIONS(1146), 1,
      sym_Name,
  [4587] = 1,
    ACTIONS(916), 1,
      sym__S,
  [4591] = 1,
    ACTIONS(1148), 1,
      aux_sym_PubidLiteral_token2,
  [4595] = 1,
    ACTIONS(1150), 1,
      anon_sym_SEMI,
  [4599] = 1,
    ACTIONS(1152), 1,
      anon_sym_SEMI,
  [4603] = 1,
    ACTIONS(864), 1,
      anon_sym_GT,
  [4607] = 1,
    ACTIONS(1154), 1,
      anon_sym_QMARK_GT,
  [4611] = 1,
    ACTIONS(1156), 1,
      anon_sym_GT,
  [4615] = 1,
    ACTIONS(1158), 1,
      anon_sym_GT,
  [4619] = 1,
    ACTIONS(1160), 1,
      anon_sym_GT,
  [4623] = 1,
    ACTIONS(1162), 1,
      sym__S,
  [4627] = 1,
    ACTIONS(1164), 1,
      ts_builtin_sym_end,
  [4631] = 1,
    ACTIONS(1166), 1,
      sym__start_tag_name,
  [4635] = 1,
    ACTIONS(1168), 1,
      anon_sym_SEMI,
  [4639] = 1,
    ACTIONS(1170), 1,
      anon_sym_GT,
  [4643] = 1,
    ACTIONS(1172), 1,
      anon_sym_SEMI,
  [4647] = 1,
    ACTIONS(1174), 1,
      anon_sym_SEMI,
  [4651] = 1,
    ACTIONS(1176), 1,
      anon_sym_QMARK_GT,
  [4655] = 1,
    ACTIONS(1178), 1,
      anon_sym_SEMI,
  [4659] = 1,
    ACTIONS(1180), 1,
      anon_sym_SEMI,
  [4663] = 1,
    ACTIONS(1182), 1,
      anon_sym_SEMI,
  [4667] = 1,
    ACTIONS(1184), 1,
      anon_sym_SEMI,
  [4671] = 1,
    ACTIONS(1038), 1,
      anon_sym_DQUOTE,
  [4675] = 1,
    ACTIONS(1186), 1,
      anon_sym_SEMI,
  [4679] = 1,
    ACTIONS(1188), 1,
      sym__start_tag_name,
  [4683] = 1,
    ACTIONS(1190), 1,
      sym_Name,
  [4687] = 1,
    ACTIONS(1192), 1,
      aux_sym_CharRef_token1,
  [4691] = 1,
    ACTIONS(1192), 1,
      aux_sym_CharRef_token2,
  [4695] = 1,
    ACTIONS(1194), 1,
      sym_PITarget,
  [4699] = 1,
    ACTIONS(1196), 1,
      sym__end_tag_name,
  [4703] = 1,
    ACTIONS(1198), 1,
      sym__pi_content,
  [4707] = 1,
    ACTIONS(930), 1,
      sym_Name,
  [4711] = 1,
    ACTIONS(1200), 1,
      sym_Name,
  [4715] = 1,
    ACTIONS(1202), 1,
      aux_sym_CharRef_token1,
  [4719] = 1,
    ACTIONS(1202), 1,
      aux_sym_CharRef_token2,
  [4723] = 1,
    ACTIONS(1204), 1,
      sym__pi_content,
  [4727] = 1,
    ACTIONS(1206), 1,
      sym_Name,
  [4731] = 1,
    ACTIONS(1208), 1,
      sym_Name,
  [4735] = 1,
    ACTIONS(1210), 1,
      aux_sym_CharRef_token1,
  [4739] = 1,
    ACTIONS(1210), 1,
      aux_sym_CharRef_token2,
  [4743] = 1,
    ACTIONS(1212), 1,
      sym_Name,
  [4747] = 1,
    ACTIONS(1214), 1,
      sym_Name,
  [4751] = 1,
    ACTIONS(1216), 1,
      aux_sym_CharRef_token1,
  [4755] = 1,
    ACTIONS(1216), 1,
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
  [SMALL_STATE(13)] = 433,
  [SMALL_STATE(14)] = 466,
  [SMALL_STATE(15)] = 499,
  [SMALL_STATE(16)] = 532,
  [SMALL_STATE(17)] = 559,
  [SMALL_STATE(18)] = 586,
  [SMALL_STATE(19)] = 613,
  [SMALL_STATE(20)] = 640,
  [SMALL_STATE(21)] = 668,
  [SMALL_STATE(22)] = 692,
  [SMALL_STATE(23)] = 720,
  [SMALL_STATE(24)] = 742,
  [SMALL_STATE(25)] = 766,
  [SMALL_STATE(26)] = 794,
  [SMALL_STATE(27)] = 818,
  [SMALL_STATE(28)] = 846,
  [SMALL_STATE(29)] = 870,
  [SMALL_STATE(30)] = 898,
  [SMALL_STATE(31)] = 926,
  [SMALL_STATE(32)] = 954,
  [SMALL_STATE(33)] = 967,
  [SMALL_STATE(34)] = 985,
  [SMALL_STATE(35)] = 1003,
  [SMALL_STATE(36)] = 1027,
  [SMALL_STATE(37)] = 1051,
  [SMALL_STATE(38)] = 1075,
  [SMALL_STATE(39)] = 1089,
  [SMALL_STATE(40)] = 1107,
  [SMALL_STATE(41)] = 1125,
  [SMALL_STATE(42)] = 1139,
  [SMALL_STATE(43)] = 1163,
  [SMALL_STATE(44)] = 1181,
  [SMALL_STATE(45)] = 1199,
  [SMALL_STATE(46)] = 1223,
  [SMALL_STATE(47)] = 1247,
  [SMALL_STATE(48)] = 1271,
  [SMALL_STATE(49)] = 1295,
  [SMALL_STATE(50)] = 1309,
  [SMALL_STATE(51)] = 1323,
  [SMALL_STATE(52)] = 1347,
  [SMALL_STATE(53)] = 1361,
  [SMALL_STATE(54)] = 1375,
  [SMALL_STATE(55)] = 1399,
  [SMALL_STATE(56)] = 1423,
  [SMALL_STATE(57)] = 1441,
  [SMALL_STATE(58)] = 1459,
  [SMALL_STATE(59)] = 1473,
  [SMALL_STATE(60)] = 1487,
  [SMALL_STATE(61)] = 1501,
  [SMALL_STATE(62)] = 1515,
  [SMALL_STATE(63)] = 1529,
  [SMALL_STATE(64)] = 1543,
  [SMALL_STATE(65)] = 1557,
  [SMALL_STATE(66)] = 1581,
  [SMALL_STATE(67)] = 1595,
  [SMALL_STATE(68)] = 1613,
  [SMALL_STATE(69)] = 1627,
  [SMALL_STATE(70)] = 1641,
  [SMALL_STATE(71)] = 1665,
  [SMALL_STATE(72)] = 1689,
  [SMALL_STATE(73)] = 1703,
  [SMALL_STATE(74)] = 1725,
  [SMALL_STATE(75)] = 1743,
  [SMALL_STATE(76)] = 1757,
  [SMALL_STATE(77)] = 1775,
  [SMALL_STATE(78)] = 1793,
  [SMALL_STATE(79)] = 1804,
  [SMALL_STATE(80)] = 1815,
  [SMALL_STATE(81)] = 1826,
  [SMALL_STATE(82)] = 1851,
  [SMALL_STATE(83)] = 1872,
  [SMALL_STATE(84)] = 1893,
  [SMALL_STATE(85)] = 1915,
  [SMALL_STATE(86)] = 1935,
  [SMALL_STATE(87)] = 1955,
  [SMALL_STATE(88)] = 1975,
  [SMALL_STATE(89)] = 1995,
  [SMALL_STATE(90)] = 2007,
  [SMALL_STATE(91)] = 2018,
  [SMALL_STATE(92)] = 2037,
  [SMALL_STATE(93)] = 2056,
  [SMALL_STATE(94)] = 2073,
  [SMALL_STATE(95)] = 2084,
  [SMALL_STATE(96)] = 2095,
  [SMALL_STATE(97)] = 2114,
  [SMALL_STATE(98)] = 2125,
  [SMALL_STATE(99)] = 2136,
  [SMALL_STATE(100)] = 2147,
  [SMALL_STATE(101)] = 2164,
  [SMALL_STATE(102)] = 2175,
  [SMALL_STATE(103)] = 2186,
  [SMALL_STATE(104)] = 2197,
  [SMALL_STATE(105)] = 2208,
  [SMALL_STATE(106)] = 2219,
  [SMALL_STATE(107)] = 2236,
  [SMALL_STATE(108)] = 2247,
  [SMALL_STATE(109)] = 2264,
  [SMALL_STATE(110)] = 2283,
  [SMALL_STATE(111)] = 2294,
  [SMALL_STATE(112)] = 2311,
  [SMALL_STATE(113)] = 2322,
  [SMALL_STATE(114)] = 2333,
  [SMALL_STATE(115)] = 2344,
  [SMALL_STATE(116)] = 2363,
  [SMALL_STATE(117)] = 2379,
  [SMALL_STATE(118)] = 2387,
  [SMALL_STATE(119)] = 2401,
  [SMALL_STATE(120)] = 2415,
  [SMALL_STATE(121)] = 2429,
  [SMALL_STATE(122)] = 2439,
  [SMALL_STATE(123)] = 2447,
  [SMALL_STATE(124)] = 2457,
  [SMALL_STATE(125)] = 2465,
  [SMALL_STATE(126)] = 2475,
  [SMALL_STATE(127)] = 2485,
  [SMALL_STATE(128)] = 2495,
  [SMALL_STATE(129)] = 2505,
  [SMALL_STATE(130)] = 2515,
  [SMALL_STATE(131)] = 2525,
  [SMALL_STATE(132)] = 2535,
  [SMALL_STATE(133)] = 2549,
  [SMALL_STATE(134)] = 2559,
  [SMALL_STATE(135)] = 2573,
  [SMALL_STATE(136)] = 2583,
  [SMALL_STATE(137)] = 2597,
  [SMALL_STATE(138)] = 2606,
  [SMALL_STATE(139)] = 2615,
  [SMALL_STATE(140)] = 2628,
  [SMALL_STATE(141)] = 2635,
  [SMALL_STATE(142)] = 2648,
  [SMALL_STATE(143)] = 2659,
  [SMALL_STATE(144)] = 2668,
  [SMALL_STATE(145)] = 2681,
  [SMALL_STATE(146)] = 2694,
  [SMALL_STATE(147)] = 2707,
  [SMALL_STATE(148)] = 2720,
  [SMALL_STATE(149)] = 2731,
  [SMALL_STATE(150)] = 2740,
  [SMALL_STATE(151)] = 2749,
  [SMALL_STATE(152)] = 2756,
  [SMALL_STATE(153)] = 2767,
  [SMALL_STATE(154)] = 2780,
  [SMALL_STATE(155)] = 2787,
  [SMALL_STATE(156)] = 2800,
  [SMALL_STATE(157)] = 2807,
  [SMALL_STATE(158)] = 2816,
  [SMALL_STATE(159)] = 2823,
  [SMALL_STATE(160)] = 2830,
  [SMALL_STATE(161)] = 2837,
  [SMALL_STATE(162)] = 2844,
  [SMALL_STATE(163)] = 2857,
  [SMALL_STATE(164)] = 2864,
  [SMALL_STATE(165)] = 2877,
  [SMALL_STATE(166)] = 2890,
  [SMALL_STATE(167)] = 2897,
  [SMALL_STATE(168)] = 2910,
  [SMALL_STATE(169)] = 2923,
  [SMALL_STATE(170)] = 2936,
  [SMALL_STATE(171)] = 2943,
  [SMALL_STATE(172)] = 2956,
  [SMALL_STATE(173)] = 2969,
  [SMALL_STATE(174)] = 2978,
  [SMALL_STATE(175)] = 2989,
  [SMALL_STATE(176)] = 3002,
  [SMALL_STATE(177)] = 3015,
  [SMALL_STATE(178)] = 3028,
  [SMALL_STATE(179)] = 3037,
  [SMALL_STATE(180)] = 3046,
  [SMALL_STATE(181)] = 3059,
  [SMALL_STATE(182)] = 3070,
  [SMALL_STATE(183)] = 3077,
  [SMALL_STATE(184)] = 3088,
  [SMALL_STATE(185)] = 3101,
  [SMALL_STATE(186)] = 3114,
  [SMALL_STATE(187)] = 3121,
  [SMALL_STATE(188)] = 3134,
  [SMALL_STATE(189)] = 3147,
  [SMALL_STATE(190)] = 3160,
  [SMALL_STATE(191)] = 3173,
  [SMALL_STATE(192)] = 3186,
  [SMALL_STATE(193)] = 3193,
  [SMALL_STATE(194)] = 3206,
  [SMALL_STATE(195)] = 3215,
  [SMALL_STATE(196)] = 3223,
  [SMALL_STATE(197)] = 3229,
  [SMALL_STATE(198)] = 3239,
  [SMALL_STATE(199)] = 3249,
  [SMALL_STATE(200)] = 3259,
  [SMALL_STATE(201)] = 3269,
  [SMALL_STATE(202)] = 3279,
  [SMALL_STATE(203)] = 3289,
  [SMALL_STATE(204)] = 3299,
  [SMALL_STATE(205)] = 3309,
  [SMALL_STATE(206)] = 3315,
  [SMALL_STATE(207)] = 3325,
  [SMALL_STATE(208)] = 3335,
  [SMALL_STATE(209)] = 3345,
  [SMALL_STATE(210)] = 3355,
  [SMALL_STATE(211)] = 3365,
  [SMALL_STATE(212)] = 3375,
  [SMALL_STATE(213)] = 3385,
  [SMALL_STATE(214)] = 3391,
  [SMALL_STATE(215)] = 3401,
  [SMALL_STATE(216)] = 3411,
  [SMALL_STATE(217)] = 3417,
  [SMALL_STATE(218)] = 3423,
  [SMALL_STATE(219)] = 3429,
  [SMALL_STATE(220)] = 3439,
  [SMALL_STATE(221)] = 3449,
  [SMALL_STATE(222)] = 3455,
  [SMALL_STATE(223)] = 3461,
  [SMALL_STATE(224)] = 3469,
  [SMALL_STATE(225)] = 3479,
  [SMALL_STATE(226)] = 3485,
  [SMALL_STATE(227)] = 3495,
  [SMALL_STATE(228)] = 3501,
  [SMALL_STATE(229)] = 3511,
  [SMALL_STATE(230)] = 3517,
  [SMALL_STATE(231)] = 3527,
  [SMALL_STATE(232)] = 3535,
  [SMALL_STATE(233)] = 3545,
  [SMALL_STATE(234)] = 3555,
  [SMALL_STATE(235)] = 3565,
  [SMALL_STATE(236)] = 3575,
  [SMALL_STATE(237)] = 3583,
  [SMALL_STATE(238)] = 3591,
  [SMALL_STATE(239)] = 3601,
  [SMALL_STATE(240)] = 3611,
  [SMALL_STATE(241)] = 3619,
  [SMALL_STATE(242)] = 3629,
  [SMALL_STATE(243)] = 3635,
  [SMALL_STATE(244)] = 3643,
  [SMALL_STATE(245)] = 3653,
  [SMALL_STATE(246)] = 3659,
  [SMALL_STATE(247)] = 3669,
  [SMALL_STATE(248)] = 3679,
  [SMALL_STATE(249)] = 3689,
  [SMALL_STATE(250)] = 3699,
  [SMALL_STATE(251)] = 3709,
  [SMALL_STATE(252)] = 3719,
  [SMALL_STATE(253)] = 3726,
  [SMALL_STATE(254)] = 3733,
  [SMALL_STATE(255)] = 3738,
  [SMALL_STATE(256)] = 3745,
  [SMALL_STATE(257)] = 3750,
  [SMALL_STATE(258)] = 3757,
  [SMALL_STATE(259)] = 3762,
  [SMALL_STATE(260)] = 3767,
  [SMALL_STATE(261)] = 3772,
  [SMALL_STATE(262)] = 3777,
  [SMALL_STATE(263)] = 3782,
  [SMALL_STATE(264)] = 3789,
  [SMALL_STATE(265)] = 3794,
  [SMALL_STATE(266)] = 3801,
  [SMALL_STATE(267)] = 3808,
  [SMALL_STATE(268)] = 3813,
  [SMALL_STATE(269)] = 3818,
  [SMALL_STATE(270)] = 3825,
  [SMALL_STATE(271)] = 3830,
  [SMALL_STATE(272)] = 3837,
  [SMALL_STATE(273)] = 3844,
  [SMALL_STATE(274)] = 3851,
  [SMALL_STATE(275)] = 3856,
  [SMALL_STATE(276)] = 3863,
  [SMALL_STATE(277)] = 3870,
  [SMALL_STATE(278)] = 3877,
  [SMALL_STATE(279)] = 3884,
  [SMALL_STATE(280)] = 3889,
  [SMALL_STATE(281)] = 3894,
  [SMALL_STATE(282)] = 3899,
  [SMALL_STATE(283)] = 3904,
  [SMALL_STATE(284)] = 3911,
  [SMALL_STATE(285)] = 3916,
  [SMALL_STATE(286)] = 3923,
  [SMALL_STATE(287)] = 3928,
  [SMALL_STATE(288)] = 3935,
  [SMALL_STATE(289)] = 3940,
  [SMALL_STATE(290)] = 3947,
  [SMALL_STATE(291)] = 3952,
  [SMALL_STATE(292)] = 3957,
  [SMALL_STATE(293)] = 3962,
  [SMALL_STATE(294)] = 3969,
  [SMALL_STATE(295)] = 3974,
  [SMALL_STATE(296)] = 3981,
  [SMALL_STATE(297)] = 3986,
  [SMALL_STATE(298)] = 3991,
  [SMALL_STATE(299)] = 3998,
  [SMALL_STATE(300)] = 4003,
  [SMALL_STATE(301)] = 4010,
  [SMALL_STATE(302)] = 4017,
  [SMALL_STATE(303)] = 4022,
  [SMALL_STATE(304)] = 4029,
  [SMALL_STATE(305)] = 4034,
  [SMALL_STATE(306)] = 4039,
  [SMALL_STATE(307)] = 4046,
  [SMALL_STATE(308)] = 4051,
  [SMALL_STATE(309)] = 4056,
  [SMALL_STATE(310)] = 4061,
  [SMALL_STATE(311)] = 4066,
  [SMALL_STATE(312)] = 4071,
  [SMALL_STATE(313)] = 4078,
  [SMALL_STATE(314)] = 4085,
  [SMALL_STATE(315)] = 4090,
  [SMALL_STATE(316)] = 4097,
  [SMALL_STATE(317)] = 4102,
  [SMALL_STATE(318)] = 4107,
  [SMALL_STATE(319)] = 4112,
  [SMALL_STATE(320)] = 4119,
  [SMALL_STATE(321)] = 4124,
  [SMALL_STATE(322)] = 4131,
  [SMALL_STATE(323)] = 4138,
  [SMALL_STATE(324)] = 4145,
  [SMALL_STATE(325)] = 4150,
  [SMALL_STATE(326)] = 4155,
  [SMALL_STATE(327)] = 4160,
  [SMALL_STATE(328)] = 4165,
  [SMALL_STATE(329)] = 4170,
  [SMALL_STATE(330)] = 4177,
  [SMALL_STATE(331)] = 4184,
  [SMALL_STATE(332)] = 4189,
  [SMALL_STATE(333)] = 4194,
  [SMALL_STATE(334)] = 4199,
  [SMALL_STATE(335)] = 4206,
  [SMALL_STATE(336)] = 4211,
  [SMALL_STATE(337)] = 4218,
  [SMALL_STATE(338)] = 4225,
  [SMALL_STATE(339)] = 4232,
  [SMALL_STATE(340)] = 4237,
  [SMALL_STATE(341)] = 4244,
  [SMALL_STATE(342)] = 4251,
  [SMALL_STATE(343)] = 4258,
  [SMALL_STATE(344)] = 4263,
  [SMALL_STATE(345)] = 4268,
  [SMALL_STATE(346)] = 4273,
  [SMALL_STATE(347)] = 4278,
  [SMALL_STATE(348)] = 4283,
  [SMALL_STATE(349)] = 4290,
  [SMALL_STATE(350)] = 4295,
  [SMALL_STATE(351)] = 4299,
  [SMALL_STATE(352)] = 4303,
  [SMALL_STATE(353)] = 4307,
  [SMALL_STATE(354)] = 4311,
  [SMALL_STATE(355)] = 4315,
  [SMALL_STATE(356)] = 4319,
  [SMALL_STATE(357)] = 4323,
  [SMALL_STATE(358)] = 4327,
  [SMALL_STATE(359)] = 4331,
  [SMALL_STATE(360)] = 4335,
  [SMALL_STATE(361)] = 4339,
  [SMALL_STATE(362)] = 4343,
  [SMALL_STATE(363)] = 4347,
  [SMALL_STATE(364)] = 4351,
  [SMALL_STATE(365)] = 4355,
  [SMALL_STATE(366)] = 4359,
  [SMALL_STATE(367)] = 4363,
  [SMALL_STATE(368)] = 4367,
  [SMALL_STATE(369)] = 4371,
  [SMALL_STATE(370)] = 4375,
  [SMALL_STATE(371)] = 4379,
  [SMALL_STATE(372)] = 4383,
  [SMALL_STATE(373)] = 4387,
  [SMALL_STATE(374)] = 4391,
  [SMALL_STATE(375)] = 4395,
  [SMALL_STATE(376)] = 4399,
  [SMALL_STATE(377)] = 4403,
  [SMALL_STATE(378)] = 4407,
  [SMALL_STATE(379)] = 4411,
  [SMALL_STATE(380)] = 4415,
  [SMALL_STATE(381)] = 4419,
  [SMALL_STATE(382)] = 4423,
  [SMALL_STATE(383)] = 4427,
  [SMALL_STATE(384)] = 4431,
  [SMALL_STATE(385)] = 4435,
  [SMALL_STATE(386)] = 4439,
  [SMALL_STATE(387)] = 4443,
  [SMALL_STATE(388)] = 4447,
  [SMALL_STATE(389)] = 4451,
  [SMALL_STATE(390)] = 4455,
  [SMALL_STATE(391)] = 4459,
  [SMALL_STATE(392)] = 4463,
  [SMALL_STATE(393)] = 4467,
  [SMALL_STATE(394)] = 4471,
  [SMALL_STATE(395)] = 4475,
  [SMALL_STATE(396)] = 4479,
  [SMALL_STATE(397)] = 4483,
  [SMALL_STATE(398)] = 4487,
  [SMALL_STATE(399)] = 4491,
  [SMALL_STATE(400)] = 4495,
  [SMALL_STATE(401)] = 4499,
  [SMALL_STATE(402)] = 4503,
  [SMALL_STATE(403)] = 4507,
  [SMALL_STATE(404)] = 4511,
  [SMALL_STATE(405)] = 4515,
  [SMALL_STATE(406)] = 4519,
  [SMALL_STATE(407)] = 4523,
  [SMALL_STATE(408)] = 4527,
  [SMALL_STATE(409)] = 4531,
  [SMALL_STATE(410)] = 4535,
  [SMALL_STATE(411)] = 4539,
  [SMALL_STATE(412)] = 4543,
  [SMALL_STATE(413)] = 4547,
  [SMALL_STATE(414)] = 4551,
  [SMALL_STATE(415)] = 4555,
  [SMALL_STATE(416)] = 4559,
  [SMALL_STATE(417)] = 4563,
  [SMALL_STATE(418)] = 4567,
  [SMALL_STATE(419)] = 4571,
  [SMALL_STATE(420)] = 4575,
  [SMALL_STATE(421)] = 4579,
  [SMALL_STATE(422)] = 4583,
  [SMALL_STATE(423)] = 4587,
  [SMALL_STATE(424)] = 4591,
  [SMALL_STATE(425)] = 4595,
  [SMALL_STATE(426)] = 4599,
  [SMALL_STATE(427)] = 4603,
  [SMALL_STATE(428)] = 4607,
  [SMALL_STATE(429)] = 4611,
  [SMALL_STATE(430)] = 4615,
  [SMALL_STATE(431)] = 4619,
  [SMALL_STATE(432)] = 4623,
  [SMALL_STATE(433)] = 4627,
  [SMALL_STATE(434)] = 4631,
  [SMALL_STATE(435)] = 4635,
  [SMALL_STATE(436)] = 4639,
  [SMALL_STATE(437)] = 4643,
  [SMALL_STATE(438)] = 4647,
  [SMALL_STATE(439)] = 4651,
  [SMALL_STATE(440)] = 4655,
  [SMALL_STATE(441)] = 4659,
  [SMALL_STATE(442)] = 4663,
  [SMALL_STATE(443)] = 4667,
  [SMALL_STATE(444)] = 4671,
  [SMALL_STATE(445)] = 4675,
  [SMALL_STATE(446)] = 4679,
  [SMALL_STATE(447)] = 4683,
  [SMALL_STATE(448)] = 4687,
  [SMALL_STATE(449)] = 4691,
  [SMALL_STATE(450)] = 4695,
  [SMALL_STATE(451)] = 4699,
  [SMALL_STATE(452)] = 4703,
  [SMALL_STATE(453)] = 4707,
  [SMALL_STATE(454)] = 4711,
  [SMALL_STATE(455)] = 4715,
  [SMALL_STATE(456)] = 4719,
  [SMALL_STATE(457)] = 4723,
  [SMALL_STATE(458)] = 4727,
  [SMALL_STATE(459)] = 4731,
  [SMALL_STATE(460)] = 4735,
  [SMALL_STATE(461)] = 4739,
  [SMALL_STATE(462)] = 4743,
  [SMALL_STATE(463)] = 4747,
  [SMALL_STATE(464)] = 4751,
  [SMALL_STATE(465)] = 4755,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(434),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(418),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(417),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(446),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(419),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(418),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(417),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(416),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(415),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(446),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(5),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__intSubset, 2), SHIFT_REPEAT(155),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__intSubset, 2), SHIFT_REPEAT(21),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__intSubset, 2), SHIFT_REPEAT(450),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__intSubset, 2),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__intSubset, 2), SHIFT_REPEAT(320),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(463),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(464),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat1, 2), SHIFT_REPEAT(458),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat1, 2),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat1, 2), SHIFT_REPEAT(22),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_EntityValue_repeat1, 2), SHIFT_REPEAT(459),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_EntityValue_repeat1, 2), SHIFT_REPEAT(460),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat1, 2), SHIFT_REPEAT(461),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(23),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(199),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prolog, 2),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(459),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(460),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prolog, 1),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [173] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat2, 2), SHIFT_REPEAT(462),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat2, 2),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat2, 2), SHIFT_REPEAT(31),
  [181] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_EntityValue_repeat2, 2), SHIFT_REPEAT(463),
  [184] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_EntityValue_repeat2, 2), SHIFT_REPEAT(464),
  [187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat2, 2), SHIFT_REPEAT(465),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PEReference, 3),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prolog, 4),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2, .production_id = 2),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(447),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(448),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(454),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(455),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat2, 2),
  [220] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_AttValue_repeat2, 2), SHIFT_REPEAT(454),
  [223] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_AttValue_repeat2, 2), SHIFT_REPEAT(455),
  [226] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat2, 2), SHIFT_REPEAT(456),
  [229] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat2, 2), SHIFT_REPEAT(37),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__Reference, 1),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__Reference, 1),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, .production_id = 1),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_STag, 5),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_STag, 5),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 3, .production_id = 3),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 3, .production_id = 2),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ETag, 4),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ETag, 4),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_EmptyElemTag, 5),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_EmptyElemTag, 5),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PI, 5),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_PI, 5),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_STag, 3),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_STag, 3),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prolog, 3),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ETag, 3),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ETag, 3),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CDSect, 3),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_CDSect, 3),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CharRef, 3),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_CharRef, 3),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_EmptyElemTag, 4),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_EmptyElemTag, 4),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_EntityRef, 3),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_EntityRef, 3),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 3),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CDSect, 2),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_CDSect, 2),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_EmptyElemTag, 3),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_EmptyElemTag, 3),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 4, .production_id = 3),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PI, 3),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_PI, 3),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 2),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 2),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat1, 2),
  [336] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_AttValue_repeat1, 2), SHIFT_REPEAT(447),
  [339] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_AttValue_repeat1, 2), SHIFT_REPEAT(448),
  [342] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat1, 2), SHIFT_REPEAT(449),
  [345] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat1, 2), SHIFT_REPEAT(71),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 1),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 1),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_STag, 4),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_STag, 4),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2, .production_id = 1),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice, 3),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice, 4),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice, 5),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cp, 1),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_StyleSheetPI, 3),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_StyleSheetPI, 3),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_XmlModelPI, 3),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_XmlModelPI, 3),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_XmlModelPI, 4),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_XmlModelPI, 4),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_StyleSheetPI, 5),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_StyleSheetPI, 5),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_XmlModelPI, 5),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_XmlModelPI, 5),
  [438] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_PEReference, 3),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_StyleSheetPI, 4),
  [452] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_StyleSheetPI, 4),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [466] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__choice_repeat1, 2), SHIFT_REPEAT(85),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__choice_repeat1, 2),
  [471] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__choice_repeat1, 2), SHIFT_REPEAT(286),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_XMLDecl, 6),
  [476] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_XMLDecl, 6),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__intSubset, 3),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 1),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_XMLDecl, 7),
  [486] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_XMLDecl, 7),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_XMLDecl, 4),
  [492] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_XMLDecl, 4),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 2),
  [496] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 2), SHIFT_REPEAT(137),
  [499] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 2), SHIFT_REPEAT(370),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_XMLDecl, 5),
  [504] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_XMLDecl, 5),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 1),
  [508] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 1), SHIFT_REPEAT(156),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctypedecl, 11),
  [513] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctypedecl, 11),
  [515] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cp, 2),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctypedecl, 5),
  [537] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctypedecl, 5),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [547] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Enumeration_repeat1, 2), SHIFT_REPEAT(338),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Enumeration_repeat1, 2),
  [552] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Enumeration_repeat1, 2), SHIFT_REPEAT(367),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctypedecl, 7),
  [561] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctypedecl, 7),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctypedecl, 12),
  [565] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctypedecl, 12),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_EmptyElemTag_repeat1, 2),
  [569] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EmptyElemTag_repeat1, 2), SHIFT_REPEAT(322),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [586] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 2), SHIFT_REPEAT(159),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 3),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__choice_repeat1, 4),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [597] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 2), SHIFT_REPEAT(146),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 2),
  [602] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 2), SHIFT_REPEAT(382),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__choice_repeat1, 3),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctypedecl, 6),
  [625] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctypedecl, 6),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_AttlistDecl_repeat1, 2),
  [629] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_AttlistDecl_repeat1, 2), SHIFT_REPEAT(251),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctypedecl, 8),
  [642] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctypedecl, 8),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctypedecl, 10),
  [646] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctypedecl, 10),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctypedecl, 9),
  [678] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctypedecl, 9),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 4),
  [682] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 4), SHIFT_REPEAT(218),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 3),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttValue, 3, .production_id = 4),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [727] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_StyleSheetPI_repeat1, 2), SHIFT_REPEAT(334),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_StyleSheetPI_repeat1, 2),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Enumeration_repeat1, 4),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Enumeration_repeat1, 3),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 5),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ExternalID, 3),
  [748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__Eq, 1),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_SystemLiteral, 3),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ExternalID, 5),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [762] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 3), SHIFT_REPEAT(225),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__Eq, 2),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Mixed, 4),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [793] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 2), SHIFT_REPEAT(196),
  [796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Attribute, 3),
  [798] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Mixed, 3),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttValue, 2),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [822] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttlistDecl, 5),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elementdecl, 7),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [834] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 2),
  [836] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__Eq, 3),
  [838] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttlistDecl, 7),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [846] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NotationDecl, 7),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [856] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_EntityValue, 2),
  [858] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PseudoAttValue, 2),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [862] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_GEDecl, 7),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [870] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__VersionInfo, 6),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [884] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PseudoAtt, 3),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [896] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elementdecl, 8),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [902] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_StringType, 1),
  [904] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__AttType, 1),
  [906] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PseudoAttValue, 3, .production_id = 4),
  [908] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttDef, 4),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [912] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__EnumeratedType, 1),
  [914] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PublicID, 3),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [918] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NotationDecl, 8),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [924] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_EntityValue, 3, .production_id = 4),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [934] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_GEDecl, 8),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [938] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NotationType, 9),
  [940] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NotationType, 8),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [946] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NotationType, 7),
  [948] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NotationType, 6),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [954] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttlistDecl, 6),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [960] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Enumeration, 6),
  [962] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_DefaultDecl, 3),
  [964] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__EntityDecl, 1),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [968] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__markupdecl, 1),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [978] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CDStart, 3),
  [980] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PEDecl, 9),
  [982] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__EncodingDecl, 6),
  [984] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contentspec, 1),
  [986] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_GEDecl, 9),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [996] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Enumeration, 5),
  [998] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Mixed, 5),
  [1000] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__SDDecl, 6),
  [1002] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PubidLiteral, 3),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [1016] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Enumeration, 3),
  [1018] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_DefaultDecl, 1),
  [1020] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Enumeration, 4),
  [1022] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttDef, 6),
  [1024] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PEDecl, 10),
  [1026] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NDataDecl, 4),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [1032] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Mixed, 6),
  [1034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [1094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [1102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [1108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [1116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [1120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [1124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [1126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [1130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [1134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [1140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [1142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [1144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [1150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [1156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [1160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [1162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [1164] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [1174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [1176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [1178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [1182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [1192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [1194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [1196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [1200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [1202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [1204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [1206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [1208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [1210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [1212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [1214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
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
