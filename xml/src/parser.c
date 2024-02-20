#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 460
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
  [sym__erroneous_end_name] = "_erroneous_end_name",
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
    .visible = false,
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
  [38] = 33,
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
  [57] = 48,
  [58] = 58,
  [59] = 37,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 50,
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
  [89] = 49,
  [90] = 55,
  [91] = 41,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 28,
  [97] = 49,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 55,
  [102] = 102,
  [103] = 41,
  [104] = 36,
  [105] = 105,
  [106] = 28,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 53,
  [111] = 111,
  [112] = 112,
  [113] = 28,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 41,
  [118] = 118,
  [119] = 55,
  [120] = 120,
  [121] = 121,
  [122] = 49,
  [123] = 55,
  [124] = 124,
  [125] = 125,
  [126] = 49,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 41,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 70,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 140,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 32,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 67,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 155,
  [167] = 167,
  [168] = 43,
  [169] = 138,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 73,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 45,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 29,
  [184] = 30,
  [185] = 171,
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
  [253] = 251,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 251,
  [264] = 264,
  [265] = 262,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 53,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 36,
  [280] = 280,
  [281] = 259,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 195,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 215,
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
  [417] = 417,
  [418] = 418,
  [419] = 403,
  [420] = 346,
  [421] = 421,
  [422] = 396,
  [423] = 423,
  [424] = 392,
  [425] = 425,
  [426] = 426,
  [427] = 427,
  [428] = 428,
  [429] = 358,
  [430] = 430,
  [431] = 403,
  [432] = 346,
  [433] = 396,
  [434] = 358,
  [435] = 403,
  [436] = 346,
  [437] = 358,
  [438] = 403,
  [439] = 346,
  [440] = 428,
  [441] = 417,
  [442] = 415,
  [443] = 413,
  [444] = 412,
  [445] = 411,
  [446] = 407,
  [447] = 352,
  [448] = 417,
  [449] = 415,
  [450] = 413,
  [451] = 407,
  [452] = 352,
  [453] = 417,
  [454] = 415,
  [455] = 413,
  [456] = 352,
  [457] = 417,
  [458] = 415,
  [459] = 413,
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
  [17] = {.lex_state = 41},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 41, .external_lex_state = 2},
  [20] = {.lex_state = 41, .external_lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 41, .external_lex_state = 2},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 41, .external_lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 4, .external_lex_state = 3},
  [30] = {.lex_state = 4, .external_lex_state = 3},
  [31] = {.lex_state = 4, .external_lex_state = 3},
  [32] = {.lex_state = 4, .external_lex_state = 3},
  [33] = {.lex_state = 5},
  [34] = {.lex_state = 41, .external_lex_state = 2},
  [35] = {.lex_state = 41, .external_lex_state = 2},
  [36] = {.lex_state = 4, .external_lex_state = 3},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 5},
  [39] = {.lex_state = 4, .external_lex_state = 3},
  [40] = {.lex_state = 41, .external_lex_state = 2},
  [41] = {.lex_state = 4, .external_lex_state = 3},
  [42] = {.lex_state = 41, .external_lex_state = 2},
  [43] = {.lex_state = 4, .external_lex_state = 3},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 4, .external_lex_state = 3},
  [46] = {.lex_state = 41, .external_lex_state = 2},
  [47] = {.lex_state = 41, .external_lex_state = 2},
  [48] = {.lex_state = 5},
  [49] = {.lex_state = 4, .external_lex_state = 3},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 5},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 4, .external_lex_state = 3},
  [54] = {.lex_state = 41, .external_lex_state = 2},
  [55] = {.lex_state = 4, .external_lex_state = 3},
  [56] = {.lex_state = 5},
  [57] = {.lex_state = 5},
  [58] = {.lex_state = 4, .external_lex_state = 3},
  [59] = {.lex_state = 3},
  [60] = {.lex_state = 5},
  [61] = {.lex_state = 3},
  [62] = {.lex_state = 41, .external_lex_state = 2},
  [63] = {.lex_state = 41, .external_lex_state = 2},
  [64] = {.lex_state = 41, .external_lex_state = 2},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 41, .external_lex_state = 2},
  [67] = {.lex_state = 4, .external_lex_state = 3},
  [68] = {.lex_state = 3},
  [69] = {.lex_state = 4, .external_lex_state = 3},
  [70] = {.lex_state = 4, .external_lex_state = 3},
  [71] = {.lex_state = 41, .external_lex_state = 2},
  [72] = {.lex_state = 4, .external_lex_state = 3},
  [73] = {.lex_state = 4, .external_lex_state = 3},
  [74] = {.lex_state = 41},
  [75] = {.lex_state = 41},
  [76] = {.lex_state = 41},
  [77] = {.lex_state = 41},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 41},
  [80] = {.lex_state = 41},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 41},
  [86] = {.lex_state = 41, .external_lex_state = 2},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 4},
  [90] = {.lex_state = 4},
  [91] = {.lex_state = 4},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 41, .external_lex_state = 2},
  [96] = {.lex_state = 4},
  [97] = {.lex_state = 2},
  [98] = {.lex_state = 1},
  [99] = {.lex_state = 1},
  [100] = {.lex_state = 1},
  [101] = {.lex_state = 2},
  [102] = {.lex_state = 1},
  [103] = {.lex_state = 2},
  [104] = {.lex_state = 41, .external_lex_state = 2},
  [105] = {.lex_state = 41, .external_lex_state = 2},
  [106] = {.lex_state = 2},
  [107] = {.lex_state = 41, .external_lex_state = 2},
  [108] = {.lex_state = 41, .external_lex_state = 2},
  [109] = {.lex_state = 1},
  [110] = {.lex_state = 41, .external_lex_state = 2},
  [111] = {.lex_state = 41, .external_lex_state = 2},
  [112] = {.lex_state = 1},
  [113] = {.lex_state = 41, .external_lex_state = 2},
  [114] = {.lex_state = 41},
  [115] = {.lex_state = 41, .external_lex_state = 2},
  [116] = {.lex_state = 41},
  [117] = {.lex_state = 3},
  [118] = {.lex_state = 41},
  [119] = {.lex_state = 3},
  [120] = {.lex_state = 41},
  [121] = {.lex_state = 41, .external_lex_state = 2},
  [122] = {.lex_state = 5},
  [123] = {.lex_state = 5},
  [124] = {.lex_state = 41, .external_lex_state = 2},
  [125] = {.lex_state = 1},
  [126] = {.lex_state = 3},
  [127] = {.lex_state = 41, .external_lex_state = 2},
  [128] = {.lex_state = 41},
  [129] = {.lex_state = 41, .external_lex_state = 2},
  [130] = {.lex_state = 41},
  [131] = {.lex_state = 41, .external_lex_state = 2},
  [132] = {.lex_state = 5},
  [133] = {.lex_state = 1},
  [134] = {.lex_state = 41},
  [135] = {.lex_state = 41, .external_lex_state = 2},
  [136] = {.lex_state = 41, .external_lex_state = 2},
  [137] = {.lex_state = 1},
  [138] = {.lex_state = 1, .external_lex_state = 4},
  [139] = {.lex_state = 41},
  [140] = {.lex_state = 41, .external_lex_state = 4},
  [141] = {.lex_state = 1},
  [142] = {.lex_state = 1, .external_lex_state = 5},
  [143] = {.lex_state = 41},
  [144] = {.lex_state = 41, .external_lex_state = 4},
  [145] = {.lex_state = 41, .external_lex_state = 2},
  [146] = {.lex_state = 41},
  [147] = {.lex_state = 1},
  [148] = {.lex_state = 41},
  [149] = {.lex_state = 41},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 41},
  [152] = {.lex_state = 41, .external_lex_state = 2},
  [153] = {.lex_state = 41, .external_lex_state = 2},
  [154] = {.lex_state = 1},
  [155] = {.lex_state = 41, .external_lex_state = 4},
  [156] = {.lex_state = 41, .external_lex_state = 2},
  [157] = {.lex_state = 41},
  [158] = {.lex_state = 41, .external_lex_state = 2},
  [159] = {.lex_state = 41, .external_lex_state = 2},
  [160] = {.lex_state = 1},
  [161] = {.lex_state = 41},
  [162] = {.lex_state = 41},
  [163] = {.lex_state = 41},
  [164] = {.lex_state = 41},
  [165] = {.lex_state = 1},
  [166] = {.lex_state = 41, .external_lex_state = 4},
  [167] = {.lex_state = 1},
  [168] = {.lex_state = 41, .external_lex_state = 2},
  [169] = {.lex_state = 1, .external_lex_state = 4},
  [170] = {.lex_state = 41},
  [171] = {.lex_state = 1, .external_lex_state = 4},
  [172] = {.lex_state = 41, .external_lex_state = 4},
  [173] = {.lex_state = 41, .external_lex_state = 2},
  [174] = {.lex_state = 1},
  [175] = {.lex_state = 41},
  [176] = {.lex_state = 41, .external_lex_state = 2},
  [177] = {.lex_state = 41, .external_lex_state = 2},
  [178] = {.lex_state = 41, .external_lex_state = 2},
  [179] = {.lex_state = 10},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 41, .external_lex_state = 2},
  [182] = {.lex_state = 41},
  [183] = {.lex_state = 41, .external_lex_state = 2},
  [184] = {.lex_state = 41, .external_lex_state = 2},
  [185] = {.lex_state = 1, .external_lex_state = 4},
  [186] = {.lex_state = 1},
  [187] = {.lex_state = 41},
  [188] = {.lex_state = 41},
  [189] = {.lex_state = 41},
  [190] = {.lex_state = 41},
  [191] = {.lex_state = 41},
  [192] = {.lex_state = 10},
  [193] = {.lex_state = 41},
  [194] = {.lex_state = 10},
  [195] = {.lex_state = 41, .external_lex_state = 4},
  [196] = {.lex_state = 41},
  [197] = {.lex_state = 41},
  [198] = {.lex_state = 10},
  [199] = {.lex_state = 41},
  [200] = {.lex_state = 1},
  [201] = {.lex_state = 41},
  [202] = {.lex_state = 41},
  [203] = {.lex_state = 10},
  [204] = {.lex_state = 1},
  [205] = {.lex_state = 41},
  [206] = {.lex_state = 41},
  [207] = {.lex_state = 41},
  [208] = {.lex_state = 41},
  [209] = {.lex_state = 1},
  [210] = {.lex_state = 1},
  [211] = {.lex_state = 1},
  [212] = {.lex_state = 1},
  [213] = {.lex_state = 41, .external_lex_state = 4},
  [214] = {.lex_state = 1},
  [215] = {.lex_state = 41, .external_lex_state = 4},
  [216] = {.lex_state = 41},
  [217] = {.lex_state = 41},
  [218] = {.lex_state = 41},
  [219] = {.lex_state = 41},
  [220] = {.lex_state = 41},
  [221] = {.lex_state = 10},
  [222] = {.lex_state = 41},
  [223] = {.lex_state = 41},
  [224] = {.lex_state = 41},
  [225] = {.lex_state = 10},
  [226] = {.lex_state = 41},
  [227] = {.lex_state = 10},
  [228] = {.lex_state = 41},
  [229] = {.lex_state = 10},
  [230] = {.lex_state = 10},
  [231] = {.lex_state = 41},
  [232] = {.lex_state = 1},
  [233] = {.lex_state = 41},
  [234] = {.lex_state = 41},
  [235] = {.lex_state = 10},
  [236] = {.lex_state = 41},
  [237] = {.lex_state = 1},
  [238] = {.lex_state = 10},
  [239] = {.lex_state = 41},
  [240] = {.lex_state = 41},
  [241] = {.lex_state = 41},
  [242] = {.lex_state = 41, .external_lex_state = 4},
  [243] = {.lex_state = 41},
  [244] = {.lex_state = 41},
  [245] = {.lex_state = 41},
  [246] = {.lex_state = 41},
  [247] = {.lex_state = 1, .external_lex_state = 5},
  [248] = {.lex_state = 41},
  [249] = {.lex_state = 41},
  [250] = {.lex_state = 41},
  [251] = {.lex_state = 10},
  [252] = {.lex_state = 41},
  [253] = {.lex_state = 10},
  [254] = {.lex_state = 41},
  [255] = {.lex_state = 41},
  [256] = {.lex_state = 41},
  [257] = {.lex_state = 41},
  [258] = {.lex_state = 41},
  [259] = {.lex_state = 41},
  [260] = {.lex_state = 1},
  [261] = {.lex_state = 41},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 10},
  [264] = {.lex_state = 41},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 1},
  [267] = {.lex_state = 41},
  [268] = {.lex_state = 41},
  [269] = {.lex_state = 41},
  [270] = {.lex_state = 41},
  [271] = {.lex_state = 1, .external_lex_state = 6},
  [272] = {.lex_state = 41},
  [273] = {.lex_state = 41},
  [274] = {.lex_state = 41},
  [275] = {.lex_state = 41},
  [276] = {.lex_state = 10},
  [277] = {.lex_state = 10},
  [278] = {.lex_state = 41},
  [279] = {.lex_state = 41},
  [280] = {.lex_state = 41},
  [281] = {.lex_state = 41},
  [282] = {.lex_state = 41},
  [283] = {.lex_state = 37},
  [284] = {.lex_state = 41},
  [285] = {.lex_state = 41},
  [286] = {.lex_state = 41},
  [287] = {.lex_state = 41},
  [288] = {.lex_state = 41},
  [289] = {.lex_state = 41},
  [290] = {.lex_state = 41},
  [291] = {.lex_state = 41},
  [292] = {.lex_state = 41},
  [293] = {.lex_state = 41},
  [294] = {.lex_state = 41},
  [295] = {.lex_state = 10},
  [296] = {.lex_state = 41},
  [297] = {.lex_state = 10},
  [298] = {.lex_state = 1, .external_lex_state = 6},
  [299] = {.lex_state = 41},
  [300] = {.lex_state = 10},
  [301] = {.lex_state = 41},
  [302] = {.lex_state = 10},
  [303] = {.lex_state = 1},
  [304] = {.lex_state = 1},
  [305] = {.lex_state = 41},
  [306] = {.lex_state = 41},
  [307] = {.lex_state = 41},
  [308] = {.lex_state = 10},
  [309] = {.lex_state = 41},
  [310] = {.lex_state = 41},
  [311] = {.lex_state = 41},
  [312] = {.lex_state = 41},
  [313] = {.lex_state = 10},
  [314] = {.lex_state = 41},
  [315] = {.lex_state = 41},
  [316] = {.lex_state = 41},
  [317] = {.lex_state = 41},
  [318] = {.lex_state = 41},
  [319] = {.lex_state = 41},
  [320] = {.lex_state = 41},
  [321] = {.lex_state = 41},
  [322] = {.lex_state = 41},
  [323] = {.lex_state = 41},
  [324] = {.lex_state = 41},
  [325] = {.lex_state = 10},
  [326] = {.lex_state = 41},
  [327] = {.lex_state = 41},
  [328] = {.lex_state = 41},
  [329] = {.lex_state = 10},
  [330] = {.lex_state = 1},
  [331] = {.lex_state = 1},
  [332] = {.lex_state = 37},
  [333] = {.lex_state = 41},
  [334] = {.lex_state = 41},
  [335] = {.lex_state = 37},
  [336] = {.lex_state = 41},
  [337] = {.lex_state = 41},
  [338] = {.lex_state = 41},
  [339] = {.lex_state = 41},
  [340] = {.lex_state = 41},
  [341] = {.lex_state = 41},
  [342] = {.lex_state = 41},
  [343] = {.lex_state = 41},
  [344] = {.lex_state = 41},
  [345] = {.lex_state = 41},
  [346] = {.lex_state = 41},
  [347] = {.lex_state = 41},
  [348] = {.lex_state = 41},
  [349] = {.lex_state = 37},
  [350] = {.lex_state = 41},
  [351] = {.lex_state = 40},
  [352] = {.lex_state = 1},
  [353] = {.lex_state = 41},
  [354] = {.lex_state = 41},
  [355] = {.lex_state = 41},
  [356] = {.lex_state = 41},
  [357] = {.lex_state = 40},
  [358] = {.lex_state = 41},
  [359] = {.lex_state = 41},
  [360] = {.lex_state = 37},
  [361] = {.lex_state = 41},
  [362] = {.lex_state = 10},
  [363] = {.lex_state = 41},
  [364] = {.lex_state = 41},
  [365] = {.lex_state = 128},
  [366] = {.lex_state = 129},
  [367] = {.lex_state = 41},
  [368] = {.lex_state = 130},
  [369] = {.lex_state = 1},
  [370] = {.lex_state = 41},
  [371] = {.lex_state = 41},
  [372] = {.lex_state = 131},
  [373] = {.lex_state = 41},
  [374] = {.lex_state = 37},
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
  [385] = {.lex_state = 41},
  [386] = {.lex_state = 41},
  [387] = {.lex_state = 10},
  [388] = {.lex_state = 41},
  [389] = {.lex_state = 41},
  [390] = {.lex_state = 41},
  [391] = {.lex_state = 41},
  [392] = {.lex_state = 41},
  [393] = {.lex_state = 41},
  [394] = {.lex_state = 41},
  [395] = {.lex_state = 41},
  [396] = {.lex_state = 10},
  [397] = {.lex_state = 41},
  [398] = {.lex_state = 41},
  [399] = {.lex_state = 1},
  [400] = {.lex_state = 41},
  [401] = {.lex_state = 41},
  [402] = {.lex_state = 41},
  [403] = {.lex_state = 41},
  [404] = {.lex_state = 41},
  [405] = {.lex_state = 41},
  [406] = {.lex_state = 1},
  [407] = {.lex_state = 0, .external_lex_state = 7},
  [408] = {.lex_state = 1},
  [409] = {.lex_state = 1},
  [410] = {.lex_state = 41},
  [411] = {.lex_state = 0, .external_lex_state = 8},
  [412] = {.lex_state = 0, .external_lex_state = 9},
  [413] = {.lex_state = 39},
  [414] = {.lex_state = 41},
  [415] = {.lex_state = 1},
  [416] = {.lex_state = 41},
  [417] = {.lex_state = 1},
  [418] = {.lex_state = 1},
  [419] = {.lex_state = 41},
  [420] = {.lex_state = 41},
  [421] = {.lex_state = 41},
  [422] = {.lex_state = 10},
  [423] = {.lex_state = 41},
  [424] = {.lex_state = 41},
  [425] = {.lex_state = 41},
  [426] = {.lex_state = 41},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 0, .external_lex_state = 10},
  [429] = {.lex_state = 41},
  [430] = {.lex_state = 41},
  [431] = {.lex_state = 41},
  [432] = {.lex_state = 41},
  [433] = {.lex_state = 10},
  [434] = {.lex_state = 41},
  [435] = {.lex_state = 41},
  [436] = {.lex_state = 41},
  [437] = {.lex_state = 41},
  [438] = {.lex_state = 41},
  [439] = {.lex_state = 41},
  [440] = {.lex_state = 0, .external_lex_state = 10},
  [441] = {.lex_state = 1},
  [442] = {.lex_state = 1},
  [443] = {.lex_state = 39},
  [444] = {.lex_state = 0, .external_lex_state = 9},
  [445] = {.lex_state = 0, .external_lex_state = 8},
  [446] = {.lex_state = 0, .external_lex_state = 7},
  [447] = {.lex_state = 1},
  [448] = {.lex_state = 1},
  [449] = {.lex_state = 1},
  [450] = {.lex_state = 39},
  [451] = {.lex_state = 0, .external_lex_state = 7},
  [452] = {.lex_state = 1},
  [453] = {.lex_state = 1},
  [454] = {.lex_state = 1},
  [455] = {.lex_state = 39},
  [456] = {.lex_state = 1},
  [457] = {.lex_state = 1},
  [458] = {.lex_state = 1},
  [459] = {.lex_state = 39},
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
    [ts_external_token_SLASH_GT] = true,
  },
  [5] = {
    [ts_external_token_PITarget] = true,
    [ts_external_token_xml_DASHmodel] = true,
    [ts_external_token_xml_DASHstylesheet] = true,
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
    [sym_document] = STATE(427),
    [sym_XMLDecl] = STATE(16),
    [sym_PI] = STATE(19),
    [sym_prolog] = STATE(150),
    [sym__Misc] = STATE(19),
    [sym_doctypedecl] = STATE(40),
    [sym_element] = STATE(42),
    [sym_EmptyElemTag] = STATE(173),
    [sym_STag] = STATE(3),
    [sym_StyleSheetPI] = STATE(19),
    [sym_XmlModelPI] = STATE(19),
    [aux_sym_document_repeat1] = STATE(19),
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
    STATE(2), 1,
      sym_STag,
    STATE(32), 1,
      sym_ETag,
    STATE(73), 1,
      sym_EmptyElemTag,
    STATE(262), 1,
      sym_content,
    STATE(271), 1,
      sym_CDStart,
    ACTIONS(27), 2,
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
    STATE(2), 1,
      sym_STag,
    STATE(73), 1,
      sym_EmptyElemTag,
    STATE(152), 1,
      sym_ETag,
    STATE(265), 1,
      sym_content,
    STATE(271), 1,
      sym_CDStart,
    ACTIONS(27), 2,
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
    STATE(2), 1,
      sym_STag,
    STATE(73), 1,
      sym_EmptyElemTag,
    STATE(271), 1,
      sym_CDStart,
    ACTIONS(33), 2,
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
    STATE(2), 1,
      sym_STag,
    STATE(73), 1,
      sym_EmptyElemTag,
    STATE(271), 1,
      sym_CDStart,
    ACTIONS(55), 2,
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
  [196] = 11,
    ACTIONS(3), 1,
      anon_sym_LT_BANG,
    ACTIONS(7), 1,
      anon_sym_LT_QMARK,
    ACTIONS(9), 1,
      anon_sym_LT,
    STATE(3), 1,
      sym_STag,
    STATE(16), 1,
      sym_XMLDecl,
    STATE(40), 1,
      sym_doctypedecl,
    STATE(54), 1,
      sym_element,
    STATE(173), 1,
      sym_EmptyElemTag,
    STATE(180), 1,
      sym_prolog,
    ACTIONS(11), 2,
      sym_Comment,
      sym__S,
    STATE(19), 5,
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
    STATE(10), 1,
      aux_sym__intSubset,
    STATE(143), 1,
      sym__markupdecl,
    STATE(310), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(305), 5,
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
    STATE(10), 1,
      aux_sym__intSubset,
    STATE(143), 1,
      sym__markupdecl,
    STATE(310), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(305), 5,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
  [301] = 9,
    ACTIONS(58), 1,
      anon_sym_LT_BANG,
    ACTIONS(60), 1,
      sym__S,
    ACTIONS(62), 1,
      anon_sym_LT_QMARK,
    ACTIONS(66), 1,
      sym_Comment,
    ACTIONS(70), 1,
      anon_sym_RBRACK,
    STATE(10), 1,
      aux_sym__intSubset,
    STATE(143), 1,
      sym__markupdecl,
    STATE(310), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(305), 5,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
  [334] = 9,
    ACTIONS(72), 1,
      anon_sym_LT_BANG,
    ACTIONS(75), 1,
      sym__S,
    ACTIONS(78), 1,
      anon_sym_LT_QMARK,
    ACTIONS(81), 1,
      anon_sym_RBRACK,
    ACTIONS(83), 1,
      sym_Comment,
    STATE(10), 1,
      aux_sym__intSubset,
    STATE(143), 1,
      sym__markupdecl,
    STATE(310), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(305), 5,
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
    STATE(10), 1,
      aux_sym__intSubset,
    STATE(143), 1,
      sym__markupdecl,
    STATE(310), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(305), 5,
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
    STATE(8), 1,
      aux_sym__intSubset,
    STATE(143), 1,
      sym__markupdecl,
    STATE(310), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(305), 5,
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
    STATE(11), 1,
      aux_sym__intSubset,
    STATE(143), 1,
      sym__markupdecl,
    STATE(310), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(305), 5,
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
    STATE(143), 1,
      sym__markupdecl,
    STATE(310), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(305), 5,
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
    STATE(9), 1,
      aux_sym__intSubset,
    STATE(143), 1,
      sym__markupdecl,
    STATE(310), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(305), 5,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
  [520] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_BANG,
    ACTIONS(90), 1,
      anon_sym_LT_QMARK,
    ACTIONS(92), 1,
      anon_sym_LT,
    STATE(66), 1,
      sym_doctypedecl,
    ACTIONS(88), 2,
      sym_Comment,
      sym__S,
    STATE(24), 5,
      sym_PI,
      sym__Misc,
      sym_StyleSheetPI,
      sym_XmlModelPI,
      aux_sym_document_repeat1,
  [544] = 8,
    ACTIONS(94), 1,
      anon_sym_LPAREN,
    ACTIONS(96), 1,
      anon_sym_CDATA,
    ACTIONS(98), 1,
      sym_TokenizedType,
    ACTIONS(100), 1,
      anon_sym_NOTATION,
    ACTIONS(102), 1,
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
  [572] = 8,
    ACTIONS(104), 1,
      anon_sym_PERCENT,
    ACTIONS(107), 1,
      anon_sym_SQUOTE,
    ACTIONS(109), 1,
      aux_sym_EntityValue_token2,
    ACTIONS(112), 1,
      anon_sym_AMP,
    ACTIONS(115), 1,
      anon_sym_AMP_POUND,
    ACTIONS(118), 1,
      anon_sym_AMP_POUNDx,
    STATE(91), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(18), 3,
      sym_PEReference,
      sym__Reference,
      aux_sym_EntityValue_repeat2,
  [600] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_BANG,
    ACTIONS(90), 1,
      anon_sym_LT_QMARK,
    ACTIONS(92), 1,
      anon_sym_LT,
    STATE(66), 1,
      sym_doctypedecl,
    ACTIONS(121), 2,
      sym_Comment,
      sym__S,
    STATE(20), 5,
      sym_PI,
      sym__Misc,
      sym_StyleSheetPI,
      sym_XmlModelPI,
      aux_sym_document_repeat1,
  [624] = 5,
    ACTIONS(128), 1,
      anon_sym_LT_QMARK,
    ACTIONS(131), 1,
      anon_sym_LT,
    ACTIONS(123), 2,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
    ACTIONS(125), 2,
      sym_Comment,
      sym__S,
    STATE(20), 5,
      sym_PI,
      sym__Misc,
      sym_StyleSheetPI,
      sym_XmlModelPI,
      aux_sym_document_repeat1,
  [646] = 8,
    ACTIONS(133), 1,
      anon_sym_PERCENT,
    ACTIONS(136), 1,
      anon_sym_DQUOTE,
    ACTIONS(138), 1,
      aux_sym_EntityValue_token1,
    ACTIONS(141), 1,
      anon_sym_AMP,
    ACTIONS(144), 1,
      anon_sym_AMP_POUND,
    ACTIONS(147), 1,
      anon_sym_AMP_POUNDx,
    STATE(103), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(21), 3,
      sym_PEReference,
      sym__Reference,
      aux_sym_EntityValue_repeat1,
  [674] = 6,
    ACTIONS(58), 1,
      anon_sym_LT_BANG,
    ACTIONS(62), 1,
      anon_sym_LT_QMARK,
    ACTIONS(66), 1,
      sym_Comment,
    STATE(149), 1,
      sym__markupdecl,
    STATE(310), 2,
      sym_GEDecl,
      sym_PEDecl,
    STATE(305), 5,
      sym_elementdecl,
      sym_AttlistDecl,
      sym__EntityDecl,
      sym_NotationDecl,
      sym_PI,
  [698] = 8,
    ACTIONS(150), 1,
      anon_sym_PERCENT,
    ACTIONS(152), 1,
      anon_sym_SQUOTE,
    ACTIONS(154), 1,
      aux_sym_EntityValue_token2,
    ACTIONS(156), 1,
      anon_sym_AMP,
    ACTIONS(158), 1,
      anon_sym_AMP_POUND,
    ACTIONS(160), 1,
      anon_sym_AMP_POUNDx,
    STATE(91), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(18), 3,
      sym_PEReference,
      sym__Reference,
      aux_sym_EntityValue_repeat2,
  [726] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_BANG,
    ACTIONS(90), 1,
      anon_sym_LT_QMARK,
    ACTIONS(162), 1,
      anon_sym_LT,
    STATE(63), 1,
      sym_doctypedecl,
    ACTIONS(121), 2,
      sym_Comment,
      sym__S,
    STATE(20), 5,
      sym_PI,
      sym__Misc,
      sym_StyleSheetPI,
      sym_XmlModelPI,
      aux_sym_document_repeat1,
  [750] = 8,
    ACTIONS(152), 1,
      anon_sym_DQUOTE,
    ACTIONS(164), 1,
      anon_sym_PERCENT,
    ACTIONS(166), 1,
      aux_sym_EntityValue_token1,
    ACTIONS(168), 1,
      anon_sym_AMP,
    ACTIONS(170), 1,
      anon_sym_AMP_POUND,
    ACTIONS(172), 1,
      anon_sym_AMP_POUNDx,
    STATE(103), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(21), 3,
      sym_PEReference,
      sym__Reference,
      aux_sym_EntityValue_repeat1,
  [778] = 8,
    ACTIONS(164), 1,
      anon_sym_PERCENT,
    ACTIONS(168), 1,
      anon_sym_AMP,
    ACTIONS(170), 1,
      anon_sym_AMP_POUND,
    ACTIONS(172), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(174), 1,
      anon_sym_DQUOTE,
    ACTIONS(176), 1,
      aux_sym_EntityValue_token1,
    STATE(103), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(25), 3,
      sym_PEReference,
      sym__Reference,
      aux_sym_EntityValue_repeat1,
  [806] = 8,
    ACTIONS(150), 1,
      anon_sym_PERCENT,
    ACTIONS(156), 1,
      anon_sym_AMP,
    ACTIONS(158), 1,
      anon_sym_AMP_POUND,
    ACTIONS(160), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(174), 1,
      anon_sym_SQUOTE,
    ACTIONS(178), 1,
      aux_sym_EntityValue_token2,
    STATE(91), 2,
      sym_EntityRef,
      sym_CharRef,
    STATE(23), 3,
      sym_PEReference,
      sym__Reference,
      aux_sym_EntityValue_repeat2,
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
  [889] = 2,
    ACTIONS(196), 3,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
    ACTIONS(194), 6,
      sym_Comment,
      sym_CharData,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
  [903] = 7,
    ACTIONS(198), 1,
      anon_sym_SQUOTE,
    ACTIONS(200), 1,
      anon_sym_AMP,
    ACTIONS(202), 1,
      anon_sym_AMP_POUND,
    ACTIONS(204), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(206), 1,
      aux_sym_AttValue_token2,
    STATE(57), 2,
      sym__Reference,
      aux_sym_AttValue_repeat2,
    STATE(132), 2,
      sym_EntityRef,
      sym_CharRef,
  [927] = 4,
    ACTIONS(90), 1,
      anon_sym_LT_QMARK,
    ACTIONS(162), 1,
      anon_sym_LT,
    ACTIONS(121), 2,
      sym_Comment,
      sym__S,
    STATE(20), 5,
      sym_PI,
      sym__Misc,
      sym_StyleSheetPI,
      sym_XmlModelPI,
      aux_sym_document_repeat1,
  [945] = 4,
    ACTIONS(90), 1,
      anon_sym_LT_QMARK,
    ACTIONS(208), 1,
      ts_builtin_sym_end,
    ACTIONS(121), 2,
      sym_Comment,
      sym__S,
    STATE(20), 5,
      sym_PI,
      sym__Misc,
      sym_StyleSheetPI,
      sym_XmlModelPI,
      aux_sym_document_repeat1,
  [963] = 2,
    ACTIONS(212), 3,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
    ACTIONS(210), 6,
      sym_Comment,
      sym_CharData,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
  [977] = 7,
    ACTIONS(214), 1,
      anon_sym_DQUOTE,
    ACTIONS(216), 1,
      anon_sym_AMP,
    ACTIONS(218), 1,
      anon_sym_AMP_POUND,
    ACTIONS(220), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(222), 1,
      aux_sym_AttValue_token1,
    STATE(52), 2,
      sym__Reference,
      aux_sym_AttValue_repeat1,
    STATE(117), 2,
      sym_EntityRef,
      sym_CharRef,
  [1001] = 7,
    ACTIONS(200), 1,
      anon_sym_AMP,
    ACTIONS(202), 1,
      anon_sym_AMP_POUND,
    ACTIONS(204), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(224), 1,
      anon_sym_SQUOTE,
    ACTIONS(226), 1,
      aux_sym_AttValue_token2,
    STATE(48), 2,
      sym__Reference,
      aux_sym_AttValue_repeat2,
    STATE(132), 2,
      sym_EntityRef,
      sym_CharRef,
  [1025] = 2,
    ACTIONS(230), 3,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
    ACTIONS(228), 6,
      sym_Comment,
      sym_CharData,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
  [1039] = 4,
    ACTIONS(90), 1,
      anon_sym_LT_QMARK,
    ACTIONS(92), 1,
      anon_sym_LT,
    ACTIONS(232), 2,
      sym_Comment,
      sym__S,
    STATE(34), 5,
      sym_PI,
      sym__Misc,
      sym_StyleSheetPI,
      sym_XmlModelPI,
      aux_sym_document_repeat1,
  [1057] = 2,
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
  [1071] = 4,
    ACTIONS(90), 1,
      anon_sym_LT_QMARK,
    ACTIONS(238), 1,
      ts_builtin_sym_end,
    ACTIONS(240), 2,
      sym_Comment,
      sym__S,
    STATE(35), 5,
      sym_PI,
      sym__Misc,
      sym_StyleSheetPI,
      sym_XmlModelPI,
      aux_sym_document_repeat1,
  [1089] = 2,
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
  [1103] = 6,
    ACTIONS(102), 1,
      anon_sym_PERCENT,
    ACTIONS(248), 1,
      anon_sym_LPAREN,
    STATE(130), 1,
      sym__choice,
    STATE(268), 1,
      sym_contentspec,
    ACTIONS(246), 2,
      anon_sym_EMPTY,
      anon_sym_ANY,
    STATE(269), 3,
      sym_Mixed,
      sym_children,
      sym_PEReference,
  [1125] = 2,
    ACTIONS(252), 3,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
    ACTIONS(250), 6,
      sym_Comment,
      sym_CharData,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
  [1139] = 4,
    ACTIONS(90), 1,
      anon_sym_LT_QMARK,
    ACTIONS(254), 1,
      ts_builtin_sym_end,
    ACTIONS(256), 2,
      sym_Comment,
      sym__S,
    STATE(71), 5,
      sym_PI,
      sym__Misc,
      sym_StyleSheetPI,
      sym_XmlModelPI,
      aux_sym_document_repeat1,
  [1157] = 4,
    ACTIONS(90), 1,
      anon_sym_LT_QMARK,
    ACTIONS(258), 1,
      ts_builtin_sym_end,
    ACTIONS(121), 2,
      sym_Comment,
      sym__S,
    STATE(20), 5,
      sym_PI,
      sym__Misc,
      sym_StyleSheetPI,
      sym_XmlModelPI,
      aux_sym_document_repeat1,
  [1175] = 7,
    ACTIONS(200), 1,
      anon_sym_AMP,
    ACTIONS(202), 1,
      anon_sym_AMP_POUND,
    ACTIONS(204), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(214), 1,
      anon_sym_SQUOTE,
    ACTIONS(260), 1,
      aux_sym_AttValue_token2,
    STATE(51), 2,
      sym__Reference,
      aux_sym_AttValue_repeat2,
    STATE(132), 2,
      sym_EntityRef,
      sym_CharRef,
  [1199] = 2,
    ACTIONS(264), 3,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
    ACTIONS(262), 6,
      sym_Comment,
      sym_CharData,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
  [1213] = 7,
    ACTIONS(216), 1,
      anon_sym_AMP,
    ACTIONS(218), 1,
      anon_sym_AMP_POUND,
    ACTIONS(220), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(224), 1,
      anon_sym_DQUOTE,
    ACTIONS(266), 1,
      aux_sym_AttValue_token1,
    STATE(37), 2,
      sym__Reference,
      aux_sym_AttValue_repeat1,
    STATE(117), 2,
      sym_EntityRef,
      sym_CharRef,
  [1237] = 7,
    ACTIONS(268), 1,
      anon_sym_SQUOTE,
    ACTIONS(270), 1,
      anon_sym_AMP,
    ACTIONS(273), 1,
      anon_sym_AMP_POUND,
    ACTIONS(276), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(279), 1,
      aux_sym_AttValue_token2,
    STATE(51), 2,
      sym__Reference,
      aux_sym_AttValue_repeat2,
    STATE(132), 2,
      sym_EntityRef,
      sym_CharRef,
  [1261] = 7,
    ACTIONS(282), 1,
      anon_sym_DQUOTE,
    ACTIONS(284), 1,
      anon_sym_AMP,
    ACTIONS(287), 1,
      anon_sym_AMP_POUND,
    ACTIONS(290), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(293), 1,
      aux_sym_AttValue_token1,
    STATE(52), 2,
      sym__Reference,
      aux_sym_AttValue_repeat1,
    STATE(117), 2,
      sym_EntityRef,
      sym_CharRef,
  [1285] = 2,
    ACTIONS(298), 3,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
    ACTIONS(296), 6,
      sym_Comment,
      sym_CharData,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
  [1299] = 4,
    ACTIONS(90), 1,
      anon_sym_LT_QMARK,
    ACTIONS(300), 1,
      ts_builtin_sym_end,
    ACTIONS(302), 2,
      sym_Comment,
      sym__S,
    STATE(47), 5,
      sym_PI,
      sym__Misc,
      sym_StyleSheetPI,
      sym_XmlModelPI,
      aux_sym_document_repeat1,
  [1317] = 2,
    ACTIONS(306), 3,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
    ACTIONS(304), 6,
      sym_Comment,
      sym_CharData,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
  [1331] = 7,
    ACTIONS(200), 1,
      anon_sym_AMP,
    ACTIONS(202), 1,
      anon_sym_AMP_POUND,
    ACTIONS(204), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(308), 1,
      anon_sym_SQUOTE,
    ACTIONS(310), 1,
      aux_sym_AttValue_token2,
    STATE(60), 2,
      sym__Reference,
      aux_sym_AttValue_repeat2,
    STATE(132), 2,
      sym_EntityRef,
      sym_CharRef,
  [1355] = 7,
    ACTIONS(200), 1,
      anon_sym_AMP,
    ACTIONS(202), 1,
      anon_sym_AMP_POUND,
    ACTIONS(204), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(260), 1,
      aux_sym_AttValue_token2,
    ACTIONS(312), 1,
      anon_sym_SQUOTE,
    STATE(51), 2,
      sym__Reference,
      aux_sym_AttValue_repeat2,
    STATE(132), 2,
      sym_EntityRef,
      sym_CharRef,
  [1379] = 2,
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
  [1393] = 7,
    ACTIONS(216), 1,
      anon_sym_AMP,
    ACTIONS(218), 1,
      anon_sym_AMP_POUND,
    ACTIONS(220), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(222), 1,
      aux_sym_AttValue_token1,
    ACTIONS(312), 1,
      anon_sym_DQUOTE,
    STATE(52), 2,
      sym__Reference,
      aux_sym_AttValue_repeat1,
    STATE(117), 2,
      sym_EntityRef,
      sym_CharRef,
  [1417] = 7,
    ACTIONS(200), 1,
      anon_sym_AMP,
    ACTIONS(202), 1,
      anon_sym_AMP_POUND,
    ACTIONS(204), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(260), 1,
      aux_sym_AttValue_token2,
    ACTIONS(318), 1,
      anon_sym_SQUOTE,
    STATE(51), 2,
      sym__Reference,
      aux_sym_AttValue_repeat2,
    STATE(132), 2,
      sym_EntityRef,
      sym_CharRef,
  [1441] = 7,
    ACTIONS(216), 1,
      anon_sym_AMP,
    ACTIONS(218), 1,
      anon_sym_AMP_POUND,
    ACTIONS(220), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(222), 1,
      aux_sym_AttValue_token1,
    ACTIONS(318), 1,
      anon_sym_DQUOTE,
    STATE(52), 2,
      sym__Reference,
      aux_sym_AttValue_repeat1,
    STATE(117), 2,
      sym_EntityRef,
      sym_CharRef,
  [1465] = 4,
    ACTIONS(90), 1,
      anon_sym_LT_QMARK,
    ACTIONS(320), 1,
      anon_sym_LT,
    ACTIONS(121), 2,
      sym_Comment,
      sym__S,
    STATE(20), 5,
      sym_PI,
      sym__Misc,
      sym_StyleSheetPI,
      sym_XmlModelPI,
      aux_sym_document_repeat1,
  [1483] = 4,
    ACTIONS(90), 1,
      anon_sym_LT_QMARK,
    ACTIONS(320), 1,
      anon_sym_LT,
    ACTIONS(322), 2,
      sym_Comment,
      sym__S,
    STATE(64), 5,
      sym_PI,
      sym__Misc,
      sym_StyleSheetPI,
      sym_XmlModelPI,
      aux_sym_document_repeat1,
  [1501] = 4,
    ACTIONS(90), 1,
      anon_sym_LT_QMARK,
    ACTIONS(324), 1,
      anon_sym_LT,
    ACTIONS(121), 2,
      sym_Comment,
      sym__S,
    STATE(20), 5,
      sym_PI,
      sym__Misc,
      sym_StyleSheetPI,
      sym_XmlModelPI,
      aux_sym_document_repeat1,
  [1519] = 7,
    ACTIONS(198), 1,
      anon_sym_DQUOTE,
    ACTIONS(216), 1,
      anon_sym_AMP,
    ACTIONS(218), 1,
      anon_sym_AMP_POUND,
    ACTIONS(220), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(326), 1,
      aux_sym_AttValue_token1,
    STATE(59), 2,
      sym__Reference,
      aux_sym_AttValue_repeat1,
    STATE(117), 2,
      sym_EntityRef,
      sym_CharRef,
  [1543] = 4,
    ACTIONS(90), 1,
      anon_sym_LT_QMARK,
    ACTIONS(162), 1,
      anon_sym_LT,
    ACTIONS(328), 2,
      sym_Comment,
      sym__S,
    STATE(62), 5,
      sym_PI,
      sym__Misc,
      sym_StyleSheetPI,
      sym_XmlModelPI,
      aux_sym_document_repeat1,
  [1561] = 2,
    ACTIONS(332), 3,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
    ACTIONS(330), 6,
      sym_Comment,
      sym_CharData,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
  [1575] = 7,
    ACTIONS(216), 1,
      anon_sym_AMP,
    ACTIONS(218), 1,
      anon_sym_AMP_POUND,
    ACTIONS(220), 1,
      anon_sym_AMP_POUNDx,
    ACTIONS(308), 1,
      anon_sym_DQUOTE,
    ACTIONS(334), 1,
      aux_sym_AttValue_token1,
    STATE(61), 2,
      sym__Reference,
      aux_sym_AttValue_repeat1,
    STATE(117), 2,
      sym_EntityRef,
      sym_CharRef,
  [1599] = 2,
    ACTIONS(338), 3,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
    ACTIONS(336), 6,
      sym_Comment,
      sym_CharData,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
  [1613] = 2,
    ACTIONS(342), 3,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
    ACTIONS(340), 6,
      sym_Comment,
      sym_CharData,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
  [1627] = 4,
    ACTIONS(90), 1,
      anon_sym_LT_QMARK,
    ACTIONS(344), 1,
      ts_builtin_sym_end,
    ACTIONS(121), 2,
      sym_Comment,
      sym__S,
    STATE(20), 5,
      sym_PI,
      sym__Misc,
      sym_StyleSheetPI,
      sym_XmlModelPI,
      aux_sym_document_repeat1,
  [1645] = 2,
    ACTIONS(348), 3,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
    ACTIONS(346), 6,
      sym_Comment,
      sym_CharData,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
  [1659] = 2,
    ACTIONS(352), 3,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
      anon_sym_LT,
    ACTIONS(350), 6,
      sym_Comment,
      sym_CharData,
      anon_sym_LT_BANG_LBRACK,
      anon_sym_AMP_POUNDx,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
  [1673] = 1,
    ACTIONS(354), 8,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_COMMA,
      sym__S,
  [1684] = 1,
    ACTIONS(356), 8,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_COMMA,
      sym__S,
  [1695] = 1,
    ACTIONS(358), 8,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_COMMA,
      sym__S,
  [1706] = 6,
    ACTIONS(360), 1,
      anon_sym_PIPE,
    ACTIONS(362), 1,
      anon_sym_RPAREN,
    ACTIONS(366), 1,
      anon_sym_COMMA,
    ACTIONS(368), 1,
      sym__S,
    STATE(190), 1,
      aux_sym_Mixed_repeat1,
    ACTIONS(364), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
  [1727] = 8,
    ACTIONS(102), 1,
      anon_sym_PERCENT,
    ACTIONS(370), 1,
      sym_Name,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
    ACTIONS(374), 1,
      anon_sym_POUNDPCDATA,
    ACTIONS(376), 1,
      sym__S,
    STATE(79), 1,
      sym_PEReference,
    STATE(85), 1,
      sym__choice,
    STATE(116), 1,
      sym__cp,
  [1752] = 6,
    ACTIONS(360), 1,
      anon_sym_PIPE,
    ACTIONS(366), 1,
      anon_sym_COMMA,
    ACTIONS(378), 1,
      anon_sym_RPAREN,
    ACTIONS(380), 1,
      sym__S,
    STATE(134), 1,
      aux_sym_Mixed_repeat1,
    ACTIONS(364), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
  [1773] = 6,
    ACTIONS(384), 1,
      anon_sym_POUNDFIXED,
    ACTIONS(386), 1,
      anon_sym_DQUOTE,
    ACTIONS(388), 1,
      anon_sym_SQUOTE,
    STATE(337), 1,
      sym_AttValue,
    STATE(339), 1,
      sym_DefaultDecl,
    ACTIONS(382), 2,
      anon_sym_POUNDREQUIRED,
      anon_sym_POUNDIMPLIED,
  [1793] = 6,
    ACTIONS(102), 1,
      anon_sym_PERCENT,
    ACTIONS(370), 1,
      sym_Name,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
    ACTIONS(390), 1,
      sym__S,
    STATE(163), 1,
      sym__cp,
    STATE(85), 2,
      sym__choice,
      sym_PEReference,
  [1813] = 6,
    ACTIONS(102), 1,
      anon_sym_PERCENT,
    ACTIONS(370), 1,
      sym_Name,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
    ACTIONS(392), 1,
      sym__S,
    STATE(187), 1,
      sym__cp,
    STATE(85), 2,
      sym__choice,
      sym_PEReference,
  [1833] = 6,
    ACTIONS(102), 1,
      anon_sym_PERCENT,
    ACTIONS(370), 1,
      sym_Name,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
    ACTIONS(394), 1,
      sym__S,
    STATE(116), 1,
      sym__cp,
    STATE(85), 2,
      sym__choice,
      sym_PEReference,
  [1853] = 7,
    ACTIONS(102), 1,
      anon_sym_PERCENT,
    ACTIONS(370), 1,
      sym_Name,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
    ACTIONS(396), 1,
      anon_sym_POUNDPCDATA,
    STATE(77), 1,
      sym_PEReference,
    STATE(85), 1,
      sym__choice,
    STATE(128), 1,
      sym__cp,
  [1875] = 2,
    ACTIONS(364), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
    ACTIONS(366), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__S,
  [1887] = 2,
    ACTIONS(400), 1,
      anon_sym_LT,
    ACTIONS(398), 5,
      sym_Comment,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      sym__S,
      anon_sym_LT_QMARK,
  [1898] = 6,
    ACTIONS(402), 1,
      anon_sym_DQUOTE,
    ACTIONS(404), 1,
      anon_sym_SQUOTE,
    ACTIONS(406), 1,
      anon_sym_SYSTEM,
    ACTIONS(408), 1,
      anon_sym_PUBLIC,
    STATE(241), 1,
      sym_ExternalID,
    STATE(252), 1,
      sym_EntityValue,
  [1917] = 6,
    ACTIONS(102), 1,
      anon_sym_PERCENT,
    ACTIONS(410), 1,
      sym_Name,
    ACTIONS(412), 1,
      anon_sym_PIPE,
    ACTIONS(414), 1,
      sym__S,
    STATE(125), 1,
      aux_sym_NotationType_repeat1,
    STATE(311), 1,
      sym_PEReference,
  [1936] = 2,
    ACTIONS(264), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(262), 4,
      anon_sym_PERCENT,
      anon_sym_SQUOTE,
      aux_sym_EntityValue_token2,
      anon_sym_AMP_POUNDx,
  [1947] = 2,
    ACTIONS(306), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(304), 4,
      anon_sym_PERCENT,
      anon_sym_SQUOTE,
      aux_sym_EntityValue_token2,
      anon_sym_AMP_POUNDx,
  [1958] = 2,
    ACTIONS(236), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(234), 4,
      anon_sym_PERCENT,
      anon_sym_SQUOTE,
      aux_sym_EntityValue_token2,
      anon_sym_AMP_POUNDx,
  [1969] = 5,
    ACTIONS(102), 1,
      anon_sym_PERCENT,
    ACTIONS(370), 1,
      sym_Name,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
    STATE(157), 1,
      sym__cp,
    STATE(85), 2,
      sym__choice,
      sym_PEReference,
  [1986] = 5,
    ACTIONS(402), 1,
      anon_sym_DQUOTE,
    ACTIONS(404), 1,
      anon_sym_SQUOTE,
    ACTIONS(406), 1,
      anon_sym_SYSTEM,
    ACTIONS(408), 1,
      anon_sym_PUBLIC,
    STATE(292), 2,
      sym_EntityValue,
      sym_ExternalID,
  [2003] = 6,
    ACTIONS(102), 1,
      anon_sym_PERCENT,
    ACTIONS(412), 1,
      anon_sym_PIPE,
    ACTIONS(414), 1,
      sym__S,
    ACTIONS(416), 1,
      sym_Name,
    STATE(109), 1,
      aux_sym_NotationType_repeat1,
    STATE(321), 1,
      sym_PEReference,
  [2022] = 2,
    ACTIONS(420), 1,
      anon_sym_LT,
    ACTIONS(418), 5,
      sym_Comment,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      sym__S,
      anon_sym_LT_QMARK,
  [2033] = 2,
    ACTIONS(422), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(180), 4,
      anon_sym_PERCENT,
      anon_sym_SQUOTE,
      aux_sym_EntityValue_token2,
      anon_sym_AMP_POUNDx,
  [2044] = 2,
    ACTIONS(264), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(262), 4,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      aux_sym_EntityValue_token1,
      anon_sym_AMP_POUNDx,
  [2055] = 5,
    ACTIONS(102), 1,
      anon_sym_PERCENT,
    ACTIONS(370), 1,
      sym_Name,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
    STATE(128), 1,
      sym__cp,
    STATE(85), 2,
      sym__choice,
      sym_PEReference,
  [2072] = 5,
    ACTIONS(102), 1,
      anon_sym_PERCENT,
    ACTIONS(370), 1,
      sym_Name,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
    STATE(163), 1,
      sym__cp,
    STATE(85), 2,
      sym__choice,
      sym_PEReference,
  [2089] = 5,
    ACTIONS(102), 1,
      anon_sym_PERCENT,
    ACTIONS(406), 1,
      anon_sym_SYSTEM,
    ACTIONS(424), 1,
      anon_sym_PUBLIC,
    STATE(353), 1,
      sym_PEReference,
    STATE(250), 2,
      sym_ExternalID,
      sym_PublicID,
  [2106] = 2,
    ACTIONS(306), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(304), 4,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      aux_sym_EntityValue_token1,
      anon_sym_AMP_POUNDx,
  [2117] = 6,
    ACTIONS(102), 1,
      anon_sym_PERCENT,
    ACTIONS(412), 1,
      anon_sym_PIPE,
    ACTIONS(414), 1,
      sym__S,
    ACTIONS(426), 1,
      sym_Name,
    STATE(88), 1,
      aux_sym_NotationType_repeat1,
    STATE(316), 1,
      sym_PEReference,
  [2136] = 2,
    ACTIONS(236), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(234), 4,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      aux_sym_EntityValue_token1,
      anon_sym_AMP_POUNDx,
  [2147] = 2,
    ACTIONS(212), 1,
      anon_sym_LT,
    ACTIONS(210), 5,
      sym_Comment,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      sym__S,
      anon_sym_LT_QMARK,
  [2158] = 2,
    ACTIONS(430), 1,
      anon_sym_LT,
    ACTIONS(428), 5,
      sym_Comment,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      sym__S,
      anon_sym_LT_QMARK,
  [2169] = 2,
    ACTIONS(422), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(180), 4,
      anon_sym_PERCENT,
      anon_sym_DQUOTE,
      aux_sym_EntityValue_token1,
      anon_sym_AMP_POUNDx,
  [2180] = 2,
    ACTIONS(434), 1,
      anon_sym_LT,
    ACTIONS(432), 5,
      sym_Comment,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      sym__S,
      anon_sym_LT_QMARK,
  [2191] = 2,
    ACTIONS(438), 1,
      anon_sym_LT,
    ACTIONS(436), 5,
      sym_Comment,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      sym__S,
      anon_sym_LT_QMARK,
  [2202] = 6,
    ACTIONS(102), 1,
      anon_sym_PERCENT,
    ACTIONS(412), 1,
      anon_sym_PIPE,
    ACTIONS(414), 1,
      sym__S,
    ACTIONS(426), 1,
      sym_Name,
    STATE(125), 1,
      aux_sym_NotationType_repeat1,
    STATE(316), 1,
      sym_PEReference,
  [2221] = 2,
    ACTIONS(298), 1,
      anon_sym_LT,
    ACTIONS(296), 5,
      sym_Comment,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      sym__S,
      anon_sym_LT_QMARK,
  [2232] = 2,
    ACTIONS(442), 1,
      anon_sym_LT,
    ACTIONS(440), 5,
      sym_Comment,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      sym__S,
      anon_sym_LT_QMARK,
  [2243] = 5,
    ACTIONS(406), 1,
      anon_sym_SYSTEM,
    ACTIONS(408), 1,
      anon_sym_PUBLIC,
    ACTIONS(444), 1,
      anon_sym_LBRACK,
    ACTIONS(446), 1,
      anon_sym_GT,
    STATE(246), 1,
      sym_ExternalID,
  [2259] = 1,
    ACTIONS(180), 5,
      sym_Comment,
      anon_sym_LT_BANG,
      sym__S,
      anon_sym_LT_QMARK,
      anon_sym_RBRACK,
  [2267] = 4,
    ACTIONS(450), 1,
      anon_sym_RPAREN,
    ACTIONS(452), 1,
      sym__S,
    STATE(120), 1,
      aux_sym__choice_repeat1,
    ACTIONS(448), 2,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [2281] = 2,
    ACTIONS(456), 1,
      anon_sym_LT,
    ACTIONS(454), 4,
      sym_Comment,
      anon_sym_LT_BANG,
      sym__S,
      anon_sym_LT_QMARK,
  [2291] = 4,
    ACTIONS(452), 1,
      sym__S,
    ACTIONS(458), 1,
      anon_sym_RPAREN,
    STATE(118), 1,
      aux_sym__choice_repeat1,
    ACTIONS(448), 2,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [2305] = 2,
    ACTIONS(236), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(234), 3,
      anon_sym_DQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token1,
  [2315] = 4,
    ACTIONS(452), 1,
      sym__S,
    ACTIONS(460), 1,
      anon_sym_RPAREN,
    STATE(120), 1,
      aux_sym__choice_repeat1,
    ACTIONS(448), 2,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [2329] = 2,
    ACTIONS(306), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(304), 3,
      anon_sym_DQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token1,
  [2339] = 4,
    ACTIONS(465), 1,
      anon_sym_RPAREN,
    ACTIONS(467), 1,
      sym__S,
    STATE(120), 1,
      aux_sym__choice_repeat1,
    ACTIONS(462), 2,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [2353] = 1,
    ACTIONS(470), 5,
      sym_Comment,
      anon_sym_LT_BANG,
      sym__S,
      anon_sym_LT_QMARK,
      anon_sym_RBRACK,
  [2361] = 2,
    ACTIONS(264), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(262), 3,
      anon_sym_SQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token2,
  [2371] = 2,
    ACTIONS(306), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(304), 3,
      anon_sym_SQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token2,
  [2381] = 2,
    ACTIONS(474), 1,
      anon_sym_LT,
    ACTIONS(472), 4,
      sym_Comment,
      anon_sym_LT_BANG,
      sym__S,
      anon_sym_LT_QMARK,
  [2391] = 4,
    ACTIONS(478), 1,
      anon_sym_PIPE,
    ACTIONS(481), 1,
      sym__S,
    STATE(125), 1,
      aux_sym_NotationType_repeat1,
    ACTIONS(476), 2,
      anon_sym_PERCENT,
      sym_Name,
  [2405] = 2,
    ACTIONS(264), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(262), 3,
      anon_sym_DQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token1,
  [2415] = 2,
    ACTIONS(486), 1,
      anon_sym_LT,
    ACTIONS(484), 4,
      sym_Comment,
      anon_sym_LT_BANG,
      sym__S,
      anon_sym_LT_QMARK,
  [2425] = 4,
    ACTIONS(452), 1,
      sym__S,
    ACTIONS(460), 1,
      anon_sym_RPAREN,
    STATE(114), 1,
      aux_sym__choice_repeat1,
    ACTIONS(448), 2,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [2439] = 1,
    ACTIONS(81), 5,
      sym_Comment,
      anon_sym_LT_BANG,
      sym__S,
      anon_sym_LT_QMARK,
      anon_sym_RBRACK,
  [2447] = 2,
    ACTIONS(488), 2,
      anon_sym_GT,
      sym__S,
    ACTIONS(490), 3,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
  [2457] = 2,
    ACTIONS(494), 1,
      anon_sym_LT,
    ACTIONS(492), 4,
      sym_Comment,
      anon_sym_LT_BANG,
      sym__S,
      anon_sym_LT_QMARK,
  [2467] = 2,
    ACTIONS(236), 2,
      anon_sym_AMP,
      anon_sym_AMP_POUND,
    ACTIONS(234), 3,
      anon_sym_SQUOTE,
      anon_sym_AMP_POUNDx,
      aux_sym_AttValue_token2,
  [2477] = 2,
    ACTIONS(496), 1,
      sym__S,
    ACTIONS(476), 3,
      anon_sym_PIPE,
      anon_sym_PERCENT,
      sym_Name,
  [2486] = 4,
    ACTIONS(360), 1,
      anon_sym_PIPE,
    ACTIONS(499), 1,
      anon_sym_RPAREN,
    ACTIONS(501), 1,
      sym__S,
    STATE(189), 1,
      aux_sym_Mixed_repeat1,
  [2499] = 2,
    ACTIONS(505), 1,
      anon_sym_LT,
    ACTIONS(503), 3,
      sym_Comment,
      sym__S,
      anon_sym_LT_QMARK,
  [2508] = 1,
    ACTIONS(340), 4,
      sym_Comment,
      ts_builtin_sym_end,
      sym__S,
      anon_sym_LT_QMARK,
  [2515] = 1,
    ACTIONS(476), 4,
      anon_sym_PIPE,
      anon_sym_PERCENT,
      sym__S,
      sym_Name,
  [2522] = 4,
    ACTIONS(507), 1,
      sym_Name,
    ACTIONS(509), 1,
      anon_sym_GT,
    ACTIONS(511), 1,
      anon_sym_SLASH_GT,
    STATE(213), 1,
      sym_Attribute,
  [2535] = 4,
    ACTIONS(360), 1,
      anon_sym_PIPE,
    ACTIONS(378), 1,
      anon_sym_RPAREN,
    ACTIONS(380), 1,
      sym__S,
    STATE(134), 1,
      aux_sym_Mixed_repeat1,
  [2548] = 4,
    ACTIONS(513), 1,
      anon_sym_GT,
    ACTIONS(515), 1,
      sym__S,
    ACTIONS(517), 1,
      anon_sym_SLASH_GT,
    STATE(155), 1,
      aux_sym_EmptyElemTag_repeat1,
  [2561] = 2,
    ACTIONS(521), 1,
      sym__S,
    ACTIONS(519), 3,
      anon_sym_PIPE,
      anon_sym_PERCENT,
      sym_Name,
  [2570] = 4,
    ACTIONS(524), 1,
      anon_sym_xml,
    ACTIONS(526), 1,
      anon_sym_xml_DASHstylesheet,
    ACTIONS(528), 1,
      anon_sym_xml_DASHmodel,
    ACTIONS(530), 1,
      sym_PITarget,
  [2583] = 3,
    ACTIONS(532), 1,
      anon_sym_PERCENT,
    ACTIONS(534), 1,
      sym__S,
    STATE(129), 2,
      sym__DeclSep,
      sym_PEReference,
  [2594] = 4,
    ACTIONS(513), 1,
      anon_sym_GT,
    ACTIONS(536), 1,
      sym__S,
    ACTIONS(538), 1,
      anon_sym_SLASH_GT,
    STATE(166), 1,
      aux_sym_EmptyElemTag_repeat1,
  [2607] = 2,
    ACTIONS(542), 1,
      anon_sym_LT,
    ACTIONS(540), 3,
      sym_Comment,
      sym__S,
      anon_sym_LT_QMARK,
  [2616] = 3,
    ACTIONS(544), 1,
      anon_sym_GT,
    ACTIONS(546), 1,
      sym__S,
    STATE(146), 2,
      sym_AttDef,
      aux_sym_AttlistDecl_repeat1,
  [2627] = 4,
    ACTIONS(102), 1,
      anon_sym_PERCENT,
    ACTIONS(549), 1,
      sym_Name,
    ACTIONS(551), 1,
      anon_sym_GT,
    STATE(416), 1,
      sym_PEReference,
  [2640] = 4,
    ACTIONS(553), 1,
      anon_sym_PIPE,
    ACTIONS(556), 1,
      anon_sym_RPAREN,
    ACTIONS(558), 1,
      sym__S,
    STATE(148), 1,
      aux_sym_Enumeration_repeat1,
  [2653] = 3,
    ACTIONS(532), 1,
      anon_sym_PERCENT,
    ACTIONS(561), 1,
      sym__S,
    STATE(121), 2,
      sym__DeclSep,
      sym_PEReference,
  [2664] = 4,
    ACTIONS(563), 1,
      anon_sym_LT,
    STATE(3), 1,
      sym_STag,
    STATE(54), 1,
      sym_element,
    STATE(173), 1,
      sym_EmptyElemTag,
  [2677] = 4,
    ACTIONS(565), 1,
      anon_sym_PIPE,
    ACTIONS(567), 1,
      anon_sym_RPAREN,
    ACTIONS(569), 1,
      sym__S,
    STATE(148), 1,
      aux_sym_Enumeration_repeat1,
  [2690] = 1,
    ACTIONS(194), 4,
      sym_Comment,
      ts_builtin_sym_end,
      sym__S,
      anon_sym_LT_QMARK,
  [2697] = 2,
    ACTIONS(573), 1,
      anon_sym_LT,
    ACTIONS(571), 3,
      sym_Comment,
      sym__S,
      anon_sym_LT_QMARK,
  [2706] = 4,
    ACTIONS(102), 1,
      anon_sym_PERCENT,
    ACTIONS(575), 1,
      sym_Name,
    ACTIONS(577), 1,
      sym__S,
    STATE(199), 1,
      sym_PEReference,
  [2719] = 4,
    ACTIONS(509), 1,
      anon_sym_GT,
    ACTIONS(511), 1,
      anon_sym_SLASH_GT,
    ACTIONS(579), 1,
      sym__S,
    STATE(172), 1,
      aux_sym_EmptyElemTag_repeat1,
  [2732] = 2,
    ACTIONS(583), 1,
      anon_sym_LT,
    ACTIONS(581), 3,
      sym_Comment,
      sym__S,
      anon_sym_LT_QMARK,
  [2741] = 1,
    ACTIONS(585), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__S,
  [2748] = 2,
    ACTIONS(589), 1,
      anon_sym_LT,
    ACTIONS(587), 3,
      sym_Comment,
      sym__S,
      anon_sym_LT_QMARK,
  [2757] = 1,
    ACTIONS(330), 4,
      sym_Comment,
      ts_builtin_sym_end,
      sym__S,
      anon_sym_LT_QMARK,
  [2764] = 4,
    ACTIONS(102), 1,
      anon_sym_PERCENT,
    ACTIONS(591), 1,
      sym_Name,
    ACTIONS(593), 1,
      sym__S,
    STATE(94), 1,
      sym_PEReference,
  [2777] = 4,
    ACTIONS(565), 1,
      anon_sym_PIPE,
    ACTIONS(595), 1,
      anon_sym_RPAREN,
    ACTIONS(597), 1,
      sym__S,
    STATE(148), 1,
      aux_sym_Enumeration_repeat1,
  [2790] = 4,
    ACTIONS(565), 1,
      anon_sym_PIPE,
    ACTIONS(595), 1,
      anon_sym_RPAREN,
    ACTIONS(597), 1,
      sym__S,
    STATE(151), 1,
      aux_sym_Enumeration_repeat1,
  [2803] = 1,
    ACTIONS(599), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__S,
  [2810] = 3,
    ACTIONS(601), 1,
      anon_sym_GT,
    ACTIONS(603), 1,
      sym__S,
    STATE(146), 2,
      sym_AttDef,
      aux_sym_AttlistDecl_repeat1,
  [2821] = 4,
    ACTIONS(605), 1,
      anon_sym_ELEMENT,
    ACTIONS(607), 1,
      anon_sym_ATTLIST,
    ACTIONS(609), 1,
      anon_sym_NOTATION,
    ACTIONS(611), 1,
      anon_sym_ENTITY,
  [2834] = 4,
    ACTIONS(509), 1,
      anon_sym_GT,
    ACTIONS(613), 1,
      sym__S,
    ACTIONS(615), 1,
      anon_sym_SLASH_GT,
    STATE(172), 1,
      aux_sym_EmptyElemTag_repeat1,
  [2847] = 4,
    ACTIONS(102), 1,
      anon_sym_PERCENT,
    ACTIONS(549), 1,
      sym_Name,
    ACTIONS(601), 1,
      anon_sym_GT,
    STATE(416), 1,
      sym_PEReference,
  [2860] = 1,
    ACTIONS(242), 4,
      sym_Comment,
      ts_builtin_sym_end,
      sym__S,
      anon_sym_LT_QMARK,
  [2867] = 4,
    ACTIONS(507), 1,
      sym_Name,
    ACTIONS(509), 1,
      anon_sym_GT,
    ACTIONS(615), 1,
      anon_sym_SLASH_GT,
    STATE(213), 1,
      sym_Attribute,
  [2880] = 4,
    ACTIONS(360), 1,
      anon_sym_PIPE,
    ACTIONS(362), 1,
      anon_sym_RPAREN,
    ACTIONS(368), 1,
      sym__S,
    STATE(190), 1,
      aux_sym_Mixed_repeat1,
  [2893] = 4,
    ACTIONS(507), 1,
      sym_Name,
    ACTIONS(617), 1,
      anon_sym_GT,
    ACTIONS(619), 1,
      anon_sym_SLASH_GT,
    STATE(213), 1,
      sym_Attribute,
  [2906] = 3,
    ACTIONS(623), 1,
      sym__S,
    STATE(172), 1,
      aux_sym_EmptyElemTag_repeat1,
    ACTIONS(621), 2,
      anon_sym_GT,
      anon_sym_SLASH_GT,
  [2917] = 1,
    ACTIONS(350), 4,
      sym_Comment,
      ts_builtin_sym_end,
      sym__S,
      anon_sym_LT_QMARK,
  [2924] = 1,
    ACTIONS(626), 4,
      anon_sym_PIPE,
      anon_sym_PERCENT,
      sym__S,
      sym_Name,
  [2931] = 1,
    ACTIONS(628), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__S,
  [2938] = 2,
    ACTIONS(632), 1,
      anon_sym_LT,
    ACTIONS(630), 3,
      sym_Comment,
      sym__S,
      anon_sym_LT_QMARK,
  [2947] = 1,
    ACTIONS(250), 4,
      sym_Comment,
      ts_builtin_sym_end,
      sym__S,
      anon_sym_LT_QMARK,
  [2954] = 2,
    ACTIONS(636), 1,
      anon_sym_LT,
    ACTIONS(634), 3,
      sym_Comment,
      sym__S,
      anon_sym_LT_QMARK,
  [2963] = 4,
    ACTIONS(638), 1,
      sym__S,
    ACTIONS(640), 1,
      anon_sym_QMARK_GT,
    STATE(235), 1,
      sym__EncodingDecl,
    STATE(295), 1,
      sym__SDDecl,
  [2976] = 4,
    ACTIONS(563), 1,
      anon_sym_LT,
    STATE(3), 1,
      sym_STag,
    STATE(46), 1,
      sym_element,
    STATE(173), 1,
      sym_EmptyElemTag,
  [2989] = 2,
    ACTIONS(644), 1,
      anon_sym_LT,
    ACTIONS(642), 3,
      sym_Comment,
      sym__S,
      anon_sym_LT_QMARK,
  [2998] = 4,
    ACTIONS(565), 1,
      anon_sym_PIPE,
    ACTIONS(646), 1,
      anon_sym_RPAREN,
    ACTIONS(648), 1,
      sym__S,
    STATE(161), 1,
      aux_sym_Enumeration_repeat1,
  [3011] = 1,
    ACTIONS(182), 4,
      sym_Comment,
      ts_builtin_sym_end,
      sym__S,
      anon_sym_LT_QMARK,
  [3018] = 1,
    ACTIONS(186), 4,
      sym_Comment,
      ts_builtin_sym_end,
      sym__S,
      anon_sym_LT_QMARK,
  [3025] = 4,
    ACTIONS(507), 1,
      sym_Name,
    ACTIONS(617), 1,
      anon_sym_GT,
    ACTIONS(650), 1,
      anon_sym_SLASH_GT,
    STATE(213), 1,
      sym_Attribute,
  [3038] = 4,
    ACTIONS(102), 1,
      anon_sym_PERCENT,
    ACTIONS(652), 1,
      sym_Name,
    ACTIONS(654), 1,
      sym__S,
    STATE(206), 1,
      sym_PEReference,
  [3051] = 1,
    ACTIONS(465), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__S,
  [3058] = 3,
    ACTIONS(656), 1,
      anon_sym_GT,
    ACTIONS(658), 1,
      sym__S,
    STATE(164), 2,
      sym_AttDef,
      aux_sym_AttlistDecl_repeat1,
  [3069] = 4,
    ACTIONS(660), 1,
      anon_sym_PIPE,
    ACTIONS(663), 1,
      anon_sym_RPAREN,
    ACTIONS(665), 1,
      sym__S,
    STATE(189), 1,
      aux_sym_Mixed_repeat1,
  [3082] = 4,
    ACTIONS(360), 1,
      anon_sym_PIPE,
    ACTIONS(501), 1,
      sym__S,
    ACTIONS(668), 1,
      anon_sym_RPAREN,
    STATE(189), 1,
      aux_sym_Mixed_repeat1,
  [3095] = 3,
    ACTIONS(670), 1,
      sym__S,
    ACTIONS(672), 1,
      anon_sym_EQ,
    STATE(197), 1,
      sym__Eq,
  [3105] = 3,
    ACTIONS(674), 1,
      sym__S,
    ACTIONS(677), 1,
      anon_sym_QMARK_GT,
    STATE(192), 1,
      aux_sym_StyleSheetPI_repeat1,
  [3115] = 3,
    ACTIONS(670), 1,
      sym__S,
    ACTIONS(672), 1,
      anon_sym_EQ,
    STATE(323), 1,
      sym__Eq,
  [3125] = 3,
    ACTIONS(679), 1,
      sym_Name,
    ACTIONS(681), 1,
      anon_sym_QMARK_GT,
    STATE(297), 1,
      sym_PseudoAtt,
  [3135] = 1,
    ACTIONS(683), 3,
      anon_sym_GT,
      sym__S,
      anon_sym_SLASH_GT,
  [3141] = 3,
    ACTIONS(685), 1,
      anon_sym_DQUOTE,
    ACTIONS(687), 1,
      anon_sym_SQUOTE,
    STATE(325), 1,
      sym_PseudoAttValue,
  [3151] = 3,
    ACTIONS(689), 1,
      anon_sym_DQUOTE,
    ACTIONS(691), 1,
      anon_sym_SQUOTE,
    STATE(242), 1,
      sym_AttValue,
  [3161] = 3,
    ACTIONS(679), 1,
      sym_Name,
    ACTIONS(693), 1,
      anon_sym_QMARK_GT,
    STATE(297), 1,
      sym_PseudoAtt,
  [3171] = 2,
    ACTIONS(695), 1,
      sym__S,
    ACTIONS(663), 2,
      anon_sym_PIPE,
      anon_sym_RPAREN,
  [3179] = 3,
    ACTIONS(102), 1,
      anon_sym_PERCENT,
    ACTIONS(652), 1,
      sym_Name,
    STATE(206), 1,
      sym_PEReference,
  [3189] = 3,
    ACTIONS(670), 1,
      sym__S,
    ACTIONS(672), 1,
      anon_sym_EQ,
    STATE(320), 1,
      sym__Eq,
  [3199] = 1,
    ACTIONS(698), 3,
      anon_sym_LBRACK,
      anon_sym_GT,
      sym__S,
  [3205] = 3,
    ACTIONS(693), 1,
      anon_sym_QMARK_GT,
    ACTIONS(700), 1,
      sym__S,
    STATE(192), 1,
      aux_sym_StyleSheetPI_repeat1,
  [3215] = 3,
    ACTIONS(102), 1,
      anon_sym_PERCENT,
    ACTIONS(702), 1,
      sym_Name,
    STATE(341), 1,
      sym_PEReference,
  [3225] = 2,
    ACTIONS(706), 1,
      sym__S,
    ACTIONS(704), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3233] = 2,
    ACTIONS(710), 1,
      sym__S,
    ACTIONS(708), 2,
      anon_sym_PIPE,
      anon_sym_RPAREN,
  [3241] = 1,
    ACTIONS(708), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [3247] = 3,
    ACTIONS(713), 1,
      anon_sym_DQUOTE,
    ACTIONS(715), 1,
      anon_sym_SQUOTE,
    STATE(223), 1,
      sym_SystemLiteral,
  [3257] = 3,
    ACTIONS(102), 1,
      anon_sym_PERCENT,
    ACTIONS(717), 1,
      sym_Name,
    STATE(228), 1,
      sym_PEReference,
  [3267] = 3,
    ACTIONS(719), 1,
      sym_Name,
    ACTIONS(721), 1,
      anon_sym_PERCENT,
    STATE(390), 1,
      sym_PEReference,
  [3277] = 3,
    ACTIONS(102), 1,
      anon_sym_PERCENT,
    ACTIONS(723), 1,
      sym_Name,
    STATE(385), 1,
      sym_PEReference,
  [3287] = 3,
    ACTIONS(102), 1,
      anon_sym_PERCENT,
    ACTIONS(725), 1,
      sym_Name,
    STATE(188), 1,
      sym_PEReference,
  [3297] = 1,
    ACTIONS(621), 3,
      anon_sym_GT,
      sym__S,
      anon_sym_SLASH_GT,
  [3303] = 3,
    ACTIONS(102), 1,
      anon_sym_PERCENT,
    ACTIONS(727), 1,
      sym_Name,
    STATE(384), 1,
      sym_PEReference,
  [3313] = 1,
    ACTIONS(729), 3,
      anon_sym_GT,
      sym__S,
      anon_sym_SLASH_GT,
  [3319] = 3,
    ACTIONS(731), 1,
      anon_sym_LBRACK,
    ACTIONS(733), 1,
      anon_sym_GT,
    ACTIONS(735), 1,
      sym__S,
  [3329] = 1,
    ACTIONS(737), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [3335] = 1,
    ACTIONS(739), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [3341] = 2,
    ACTIONS(743), 1,
      anon_sym_STAR,
    ACTIONS(741), 2,
      anon_sym_GT,
      sym__S,
  [3349] = 1,
    ACTIONS(745), 3,
      anon_sym_LBRACK,
      anon_sym_GT,
      sym__S,
  [3355] = 3,
    ACTIONS(681), 1,
      anon_sym_QMARK_GT,
    ACTIONS(747), 1,
      sym__S,
    STATE(192), 1,
      aux_sym_StyleSheetPI_repeat1,
  [3365] = 2,
    ACTIONS(751), 1,
      anon_sym_STAR,
    ACTIONS(749), 2,
      anon_sym_GT,
      sym__S,
  [3373] = 1,
    ACTIONS(753), 3,
      anon_sym_LBRACK,
      anon_sym_GT,
      sym__S,
  [3379] = 3,
    ACTIONS(755), 1,
      anon_sym_DQUOTE,
    ACTIONS(757), 1,
      anon_sym_SQUOTE,
    STATE(377), 1,
      sym_PubidLiteral,
  [3389] = 3,
    ACTIONS(679), 1,
      sym_Name,
    ACTIONS(759), 1,
      anon_sym_QMARK_GT,
    STATE(297), 1,
      sym_PseudoAtt,
  [3399] = 3,
    ACTIONS(713), 1,
      anon_sym_DQUOTE,
    ACTIONS(715), 1,
      anon_sym_SQUOTE,
    STATE(202), 1,
      sym_SystemLiteral,
  [3409] = 3,
    ACTIONS(761), 1,
      sym__S,
    ACTIONS(763), 1,
      anon_sym_QMARK_GT,
    STATE(203), 1,
      aux_sym_StyleSheetPI_repeat1,
  [3419] = 2,
    ACTIONS(765), 1,
      sym__S,
    ACTIONS(737), 2,
      anon_sym_PIPE,
      anon_sym_RPAREN,
  [3427] = 3,
    ACTIONS(679), 1,
      sym_Name,
    ACTIONS(768), 1,
      anon_sym_QMARK_GT,
    STATE(297), 1,
      sym_PseudoAtt,
  [3437] = 3,
    ACTIONS(770), 1,
      sym__S,
    ACTIONS(772), 1,
      anon_sym_QMARK_GT,
    STATE(221), 1,
      aux_sym_StyleSheetPI_repeat1,
  [3447] = 1,
    ACTIONS(556), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [3453] = 3,
    ACTIONS(102), 1,
      anon_sym_PERCENT,
    ACTIONS(774), 1,
      sym_Name,
    STATE(102), 1,
      sym_PEReference,
  [3463] = 3,
    ACTIONS(386), 1,
      anon_sym_DQUOTE,
    ACTIONS(388), 1,
      anon_sym_SQUOTE,
    STATE(318), 1,
      sym_AttValue,
  [3473] = 3,
    ACTIONS(670), 1,
      sym__S,
    ACTIONS(672), 1,
      anon_sym_EQ,
    STATE(196), 1,
      sym__Eq,
  [3483] = 3,
    ACTIONS(776), 1,
      sym__S,
    ACTIONS(778), 1,
      anon_sym_QMARK_GT,
    STATE(302), 1,
      sym__SDDecl,
  [3493] = 3,
    ACTIONS(755), 1,
      anon_sym_DQUOTE,
    ACTIONS(757), 1,
      anon_sym_SQUOTE,
    STATE(290), 1,
      sym_PubidLiteral,
  [3503] = 3,
    ACTIONS(102), 1,
      anon_sym_PERCENT,
    ACTIONS(549), 1,
      sym_Name,
    STATE(416), 1,
      sym_PEReference,
  [3513] = 3,
    ACTIONS(778), 1,
      anon_sym_QMARK_GT,
    ACTIONS(780), 1,
      anon_sym_encoding,
    ACTIONS(782), 1,
      anon_sym_standalone,
  [3523] = 3,
    ACTIONS(670), 1,
      sym__S,
    ACTIONS(672), 1,
      anon_sym_EQ,
    STATE(299), 1,
      sym__Eq,
  [3533] = 3,
    ACTIONS(755), 1,
      anon_sym_DQUOTE,
    ACTIONS(757), 1,
      anon_sym_SQUOTE,
    STATE(289), 1,
      sym_PubidLiteral,
  [3543] = 3,
    ACTIONS(784), 1,
      anon_sym_GT,
    ACTIONS(786), 1,
      sym__S,
    STATE(267), 1,
      sym_NDataDecl,
  [3553] = 1,
    ACTIONS(788), 3,
      anon_sym_GT,
      sym__S,
      anon_sym_SLASH_GT,
  [3559] = 1,
    ACTIONS(790), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [3565] = 1,
    ACTIONS(792), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym__S,
  [3571] = 2,
    ACTIONS(796), 1,
      sym__S,
    ACTIONS(794), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3579] = 3,
    ACTIONS(798), 1,
      anon_sym_LBRACK,
    ACTIONS(800), 1,
      anon_sym_GT,
    ACTIONS(802), 1,
      sym__S,
  [3589] = 3,
    ACTIONS(526), 1,
      anon_sym_xml_DASHstylesheet,
    ACTIONS(528), 1,
      anon_sym_xml_DASHmodel,
    ACTIONS(530), 1,
      sym_PITarget,
  [3599] = 1,
    ACTIONS(804), 2,
      anon_sym_PERCENT,
      sym__S,
  [3604] = 2,
    ACTIONS(567), 1,
      anon_sym_RPAREN,
    ACTIONS(806), 1,
      anon_sym_PIPE,
  [3611] = 2,
    ACTIONS(808), 1,
      anon_sym_GT,
    ACTIONS(810), 1,
      sym__S,
  [3618] = 2,
    ACTIONS(812), 1,
      sym__S,
    ACTIONS(814), 1,
      anon_sym_QMARK_GT,
  [3625] = 2,
    ACTIONS(784), 1,
      anon_sym_GT,
    ACTIONS(816), 1,
      sym__S,
  [3632] = 2,
    ACTIONS(818), 1,
      sym__S,
    ACTIONS(820), 1,
      anon_sym_QMARK_GT,
  [3639] = 1,
    ACTIONS(822), 2,
      anon_sym_PERCENT,
      sym__S,
  [3644] = 2,
    ACTIONS(824), 1,
      sym__S,
    STATE(179), 1,
      sym__VersionInfo,
  [3651] = 1,
    ACTIONS(826), 2,
      anon_sym_GT,
      sym__S,
  [3656] = 1,
    ACTIONS(828), 2,
      anon_sym_PERCENT,
      sym__S,
  [3661] = 1,
    ACTIONS(830), 2,
      anon_sym_PERCENT,
      sym__S,
  [3666] = 2,
    ACTIONS(832), 1,
      anon_sym_GT,
    ACTIONS(834), 1,
      sym__S,
  [3673] = 2,
    ACTIONS(836), 1,
      sym_Name,
    ACTIONS(838), 1,
      sym__S,
  [3680] = 1,
    ACTIONS(840), 2,
      anon_sym_GT,
      sym__S,
  [3685] = 2,
    ACTIONS(25), 1,
      anon_sym_LT_SLASH,
    STATE(70), 1,
      sym_ETag,
  [3692] = 2,
    ACTIONS(842), 1,
      sym__S,
    ACTIONS(844), 1,
      anon_sym_QMARK_GT,
  [3699] = 1,
    ACTIONS(846), 2,
      anon_sym_PERCENT,
      sym__S,
  [3704] = 2,
    ACTIONS(29), 1,
      anon_sym_LT_SLASH,
    STATE(136), 1,
      sym_ETag,
  [3711] = 2,
    ACTIONS(848), 1,
      anon_sym_GT,
    ACTIONS(850), 1,
      anon_sym_NDATA,
  [3718] = 2,
    ACTIONS(848), 1,
      anon_sym_GT,
    ACTIONS(852), 1,
      sym__S,
  [3725] = 2,
    ACTIONS(854), 1,
      anon_sym_GT,
    ACTIONS(856), 1,
      sym__S,
  [3732] = 1,
    ACTIONS(858), 2,
      anon_sym_GT,
      sym__S,
  [3737] = 2,
    ACTIONS(860), 1,
      anon_sym_GT,
    ACTIONS(862), 1,
      sym__S,
  [3744] = 2,
    ACTIONS(864), 1,
      anon_sym_RBRACK_RBRACK_GT,
    ACTIONS(866), 1,
      sym_CData,
  [3751] = 2,
    ACTIONS(751), 1,
      anon_sym_RPAREN,
    ACTIONS(868), 1,
      anon_sym_PIPE,
  [3758] = 1,
    ACTIONS(870), 2,
      anon_sym_GT,
      sym__S,
  [3763] = 1,
    ACTIONS(296), 2,
      anon_sym_PERCENT,
      sym__S,
  [3768] = 1,
    ACTIONS(872), 2,
      anon_sym_PERCENT,
      sym__S,
  [3773] = 1,
    ACTIONS(874), 2,
      sym__S,
      anon_sym_QMARK_GT,
  [3778] = 1,
    ACTIONS(876), 2,
      sym__S,
      anon_sym_QMARK_GT,
  [3783] = 2,
    ACTIONS(878), 1,
      anon_sym_GT,
    ACTIONS(880), 1,
      sym__S,
  [3790] = 1,
    ACTIONS(210), 2,
      anon_sym_PERCENT,
      sym__S,
  [3795] = 1,
    ACTIONS(882), 2,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [3800] = 2,
    ACTIONS(884), 1,
      anon_sym_GT,
    ACTIONS(886), 1,
      sym__S,
  [3807] = 1,
    ACTIONS(888), 2,
      anon_sym_PERCENT,
      sym__S,
  [3812] = 2,
    ACTIONS(890), 1,
      sym__S,
    ACTIONS(892), 1,
      sym_Nmtoken,
  [3819] = 1,
    ACTIONS(894), 2,
      anon_sym_GT,
      sym__S,
  [3824] = 1,
    ACTIONS(896), 2,
      anon_sym_GT,
      sym__S,
  [3829] = 1,
    ACTIONS(683), 2,
      anon_sym_GT,
      sym__S,
  [3834] = 2,
    ACTIONS(898), 1,
      anon_sym_GT,
    ACTIONS(900), 1,
      sym__S,
  [3841] = 1,
    ACTIONS(902), 2,
      anon_sym_GT,
      sym__S,
  [3846] = 2,
    ACTIONS(904), 1,
      anon_sym_GT,
    ACTIONS(906), 1,
      sym__S,
  [3853] = 1,
    ACTIONS(904), 2,
      anon_sym_GT,
      sym__S,
  [3858] = 1,
    ACTIONS(908), 2,
      anon_sym_PERCENT,
      sym__S,
  [3863] = 2,
    ACTIONS(910), 1,
      anon_sym_GT,
    ACTIONS(912), 1,
      sym__S,
  [3870] = 1,
    ACTIONS(914), 2,
      anon_sym_GT,
      sym__S,
  [3875] = 1,
    ACTIONS(729), 2,
      anon_sym_GT,
      sym__S,
  [3880] = 2,
    ACTIONS(778), 1,
      anon_sym_QMARK_GT,
    ACTIONS(916), 1,
      sym__S,
  [3887] = 1,
    ACTIONS(918), 2,
      anon_sym_PERCENT,
      sym__S,
  [3892] = 1,
    ACTIONS(677), 2,
      sym__S,
      anon_sym_QMARK_GT,
  [3897] = 1,
    ACTIONS(920), 2,
      sym_CData,
      anon_sym_RBRACK_RBRACK_GT,
  [3902] = 2,
    ACTIONS(922), 1,
      anon_sym_DQUOTE,
    ACTIONS(924), 1,
      anon_sym_SQUOTE,
  [3909] = 2,
    ACTIONS(782), 1,
      anon_sym_standalone,
    ACTIONS(926), 1,
      anon_sym_QMARK_GT,
  [3916] = 1,
    ACTIONS(741), 2,
      anon_sym_GT,
      sym__S,
  [3921] = 2,
    ACTIONS(926), 1,
      anon_sym_QMARK_GT,
    ACTIONS(928), 1,
      sym__S,
  [3928] = 2,
    ACTIONS(679), 1,
      sym_Name,
    STATE(297), 1,
      sym_PseudoAtt,
  [3935] = 2,
    ACTIONS(507), 1,
      sym_Name,
    STATE(213), 1,
      sym_Attribute,
  [3942] = 1,
    ACTIONS(930), 2,
      anon_sym_PERCENT,
      sym__S,
  [3947] = 1,
    ACTIONS(932), 2,
      anon_sym_GT,
      sym__S,
  [3952] = 2,
    ACTIONS(743), 1,
      anon_sym_RPAREN,
    ACTIONS(868), 1,
      anon_sym_PIPE,
  [3959] = 1,
    ACTIONS(934), 2,
      sym__S,
      anon_sym_QMARK_GT,
  [3964] = 1,
    ACTIONS(936), 2,
      anon_sym_GT,
      sym__S,
  [3969] = 1,
    ACTIONS(938), 2,
      anon_sym_PERCENT,
      sym__S,
  [3974] = 2,
    ACTIONS(940), 1,
      anon_sym_RPAREN,
    ACTIONS(942), 1,
      sym__S,
  [3981] = 1,
    ACTIONS(944), 2,
      anon_sym_GT,
      sym__S,
  [3986] = 1,
    ACTIONS(946), 2,
      sym__S,
      anon_sym_QMARK_GT,
  [3991] = 1,
    ACTIONS(948), 2,
      anon_sym_GT,
      sym__S,
  [3996] = 1,
    ACTIONS(794), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [4001] = 2,
    ACTIONS(950), 1,
      anon_sym_RPAREN,
    ACTIONS(952), 1,
      sym__S,
  [4008] = 1,
    ACTIONS(954), 2,
      anon_sym_GT,
      sym__S,
  [4013] = 1,
    ACTIONS(956), 2,
      anon_sym_GT,
      sym__S,
  [4018] = 1,
    ACTIONS(958), 2,
      anon_sym_PERCENT,
      sym__S,
  [4023] = 2,
    ACTIONS(960), 1,
      anon_sym_DQUOTE,
    ACTIONS(962), 1,
      anon_sym_SQUOTE,
  [4030] = 2,
    ACTIONS(964), 1,
      anon_sym_RPAREN,
    ACTIONS(966), 1,
      sym__S,
  [4037] = 1,
    ACTIONS(968), 2,
      anon_sym_PERCENT,
      sym__S,
  [4042] = 2,
    ACTIONS(970), 1,
      anon_sym_DQUOTE,
    ACTIONS(972), 1,
      anon_sym_SQUOTE,
  [4049] = 2,
    ACTIONS(974), 1,
      anon_sym_GT,
    ACTIONS(976), 1,
      sym__S,
  [4056] = 1,
    ACTIONS(978), 2,
      sym__S,
      anon_sym_QMARK_GT,
  [4061] = 1,
    ACTIONS(980), 2,
      anon_sym_GT,
      sym__S,
  [4066] = 2,
    ACTIONS(806), 1,
      anon_sym_PIPE,
    ACTIONS(982), 1,
      anon_sym_RPAREN,
  [4073] = 1,
    ACTIONS(984), 2,
      anon_sym_GT,
      sym__S,
  [4078] = 1,
    ACTIONS(986), 2,
      sym__S,
      anon_sym_QMARK_GT,
  [4083] = 1,
    ACTIONS(988), 2,
      anon_sym_yes,
      anon_sym_no,
  [4088] = 1,
    ACTIONS(990), 2,
      anon_sym_yes,
      anon_sym_no,
  [4093] = 2,
    ACTIONS(992), 1,
      sym__S,
    ACTIONS(994), 1,
      sym_Nmtoken,
  [4100] = 1,
    ACTIONS(996), 2,
      anon_sym_GT,
      sym__S,
  [4105] = 2,
    ACTIONS(595), 1,
      anon_sym_RPAREN,
    ACTIONS(806), 1,
      anon_sym_PIPE,
  [4112] = 2,
    ACTIONS(998), 1,
      sym__S,
    ACTIONS(1000), 1,
      sym_Nmtoken,
  [4119] = 2,
    ACTIONS(1002), 1,
      anon_sym_GT,
    ACTIONS(1004), 1,
      sym__S,
  [4126] = 1,
    ACTIONS(1006), 2,
      anon_sym_GT,
      sym__S,
  [4131] = 2,
    ACTIONS(1002), 1,
      anon_sym_GT,
    ACTIONS(1008), 1,
      anon_sym_LBRACK,
  [4138] = 1,
    ACTIONS(1010), 2,
      anon_sym_GT,
      sym__S,
  [4143] = 1,
    ACTIONS(1012), 2,
      anon_sym_PERCENT,
      sym__S,
  [4148] = 1,
    ACTIONS(1014), 2,
      anon_sym_GT,
      sym__S,
  [4153] = 1,
    ACTIONS(1016), 2,
      anon_sym_GT,
      sym__S,
  [4158] = 1,
    ACTIONS(1018), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [4163] = 1,
    ACTIONS(1020), 2,
      anon_sym_GT,
      sym__S,
  [4168] = 1,
    ACTIONS(1022), 1,
      sym__S,
  [4172] = 1,
    ACTIONS(1024), 1,
      anon_sym_SEMI,
  [4176] = 1,
    ACTIONS(1026), 1,
      anon_sym_DQUOTE,
  [4180] = 1,
    ACTIONS(1028), 1,
      sym__S,
  [4184] = 1,
    ACTIONS(1000), 1,
      sym_Nmtoken,
  [4188] = 1,
    ACTIONS(1030), 1,
      sym__S,
  [4192] = 1,
    ACTIONS(1032), 1,
      sym_EncName,
  [4196] = 1,
    ACTIONS(1034), 1,
      sym_Name,
  [4200] = 1,
    ACTIONS(1036), 1,
      sym__S,
  [4204] = 1,
    ACTIONS(1038), 1,
      sym__S,
  [4208] = 1,
    ACTIONS(1040), 1,
      sym__S,
  [4212] = 1,
    ACTIONS(1042), 1,
      sym__S,
  [4216] = 1,
    ACTIONS(1044), 1,
      sym_EncName,
  [4220] = 1,
    ACTIONS(1046), 1,
      anon_sym_SEMI,
  [4224] = 1,
    ACTIONS(1048), 1,
      anon_sym_STAR,
  [4228] = 1,
    ACTIONS(1050), 1,
      sym_Nmtoken,
  [4232] = 1,
    ACTIONS(806), 1,
      anon_sym_PIPE,
  [4236] = 1,
    ACTIONS(1052), 1,
      anon_sym_QMARK_GT,
  [4240] = 1,
    ACTIONS(974), 1,
      anon_sym_GT,
  [4244] = 1,
    ACTIONS(1054), 1,
      anon_sym_PIPE,
  [4248] = 1,
    ACTIONS(1056), 1,
      aux_sym_SystemLiteral_token1,
  [4252] = 1,
    ACTIONS(1058), 1,
      aux_sym_SystemLiteral_token2,
  [4256] = 1,
    ACTIONS(1060), 1,
      anon_sym_GT,
  [4260] = 1,
    ACTIONS(1062), 1,
      aux_sym_PubidLiteral_token1,
  [4264] = 1,
    ACTIONS(1064), 1,
      anon_sym_DOCTYPE,
  [4268] = 1,
    ACTIONS(1066), 1,
      anon_sym_LPAREN,
  [4272] = 1,
    ACTIONS(1068), 1,
      sym_VersionNum,
  [4276] = 1,
    ACTIONS(1070), 1,
      aux_sym_PubidLiteral_token2,
  [4280] = 1,
    ACTIONS(1072), 1,
      sym__S,
  [4284] = 1,
    ACTIONS(1074), 1,
      sym_Nmtoken,
  [4288] = 1,
    ACTIONS(950), 1,
      anon_sym_RPAREN,
  [4292] = 1,
    ACTIONS(1076), 1,
      sym__S,
  [4296] = 1,
    ACTIONS(906), 1,
      sym__S,
  [4300] = 1,
    ACTIONS(940), 1,
      anon_sym_RPAREN,
  [4304] = 1,
    ACTIONS(1078), 1,
      anon_sym_DQUOTE,
  [4308] = 1,
    ACTIONS(1078), 1,
      anon_sym_SQUOTE,
  [4312] = 1,
    ACTIONS(1080), 1,
      anon_sym_DQUOTE,
  [4316] = 1,
    ACTIONS(1082), 1,
      anon_sym_RPAREN,
  [4320] = 1,
    ACTIONS(1080), 1,
      anon_sym_SQUOTE,
  [4324] = 1,
    ACTIONS(1084), 1,
      sym__S,
  [4328] = 1,
    ACTIONS(1086), 1,
      sym__S,
  [4332] = 1,
    ACTIONS(868), 1,
      anon_sym_PIPE,
  [4336] = 1,
    ACTIONS(926), 1,
      anon_sym_QMARK_GT,
  [4340] = 1,
    ACTIONS(743), 1,
      anon_sym_STAR,
  [4344] = 1,
    ACTIONS(1088), 1,
      sym_VersionNum,
  [4348] = 1,
    ACTIONS(1090), 1,
      sym__S,
  [4352] = 1,
    ACTIONS(1092), 1,
      anon_sym_EQ,
  [4356] = 1,
    ACTIONS(1094), 1,
      anon_sym_GT,
  [4360] = 1,
    ACTIONS(878), 1,
      anon_sym_GT,
  [4364] = 1,
    ACTIONS(1096), 1,
      anon_sym_GT,
  [4368] = 1,
    ACTIONS(1098), 1,
      sym__S,
  [4372] = 1,
    ACTIONS(1100), 1,
      anon_sym_QMARK_GT,
  [4376] = 1,
    ACTIONS(1102), 1,
      anon_sym_DQUOTE,
  [4380] = 1,
    ACTIONS(1102), 1,
      anon_sym_SQUOTE,
  [4384] = 1,
    ACTIONS(1104), 1,
      anon_sym_RBRACK_RBRACK_GT,
  [4388] = 1,
    ACTIONS(1106), 1,
      sym__S,
  [4392] = 1,
    ACTIONS(1108), 1,
      anon_sym_DQUOTE,
  [4396] = 1,
    ACTIONS(1026), 1,
      anon_sym_SQUOTE,
  [4400] = 1,
    ACTIONS(1110), 1,
      anon_sym_SEMI,
  [4404] = 1,
    ACTIONS(1108), 1,
      anon_sym_SQUOTE,
  [4408] = 1,
    ACTIONS(1112), 1,
      anon_sym_LBRACK,
  [4412] = 1,
    ACTIONS(1114), 1,
      anon_sym_version,
  [4416] = 1,
    ACTIONS(1116), 1,
      sym__pi_content,
  [4420] = 1,
    ACTIONS(1118), 1,
      sym_Name,
  [4424] = 1,
    ACTIONS(1120), 1,
      sym_Name,
  [4428] = 1,
    ACTIONS(860), 1,
      anon_sym_GT,
  [4432] = 1,
    ACTIONS(1122), 1,
      sym__end_tag_name,
  [4436] = 1,
    ACTIONS(1124), 1,
      sym_PITarget,
  [4440] = 1,
    ACTIONS(1126), 1,
      aux_sym_CharRef_token2,
  [4444] = 1,
    ACTIONS(848), 1,
      anon_sym_GT,
  [4448] = 1,
    ACTIONS(1126), 1,
      aux_sym_CharRef_token1,
  [4452] = 1,
    ACTIONS(1128), 1,
      sym__S,
  [4456] = 1,
    ACTIONS(1130), 1,
      sym_Name,
  [4460] = 1,
    ACTIONS(1132), 1,
      anon_sym_CDATA,
  [4464] = 1,
    ACTIONS(1134), 1,
      anon_sym_SEMI,
  [4468] = 1,
    ACTIONS(1136), 1,
      anon_sym_SEMI,
  [4472] = 1,
    ACTIONS(1138), 1,
      sym__S,
  [4476] = 1,
    ACTIONS(1140), 1,
      anon_sym_QMARK_GT,
  [4480] = 1,
    ACTIONS(1142), 1,
      anon_sym_GT,
  [4484] = 1,
    ACTIONS(1144), 1,
      anon_sym_GT,
  [4488] = 1,
    ACTIONS(1146), 1,
      anon_sym_GT,
  [4492] = 1,
    ACTIONS(1148), 1,
      sym__S,
  [4496] = 1,
    ACTIONS(1150), 1,
      ts_builtin_sym_end,
  [4500] = 1,
    ACTIONS(1152), 1,
      sym__start_tag_name,
  [4504] = 1,
    ACTIONS(1154), 1,
      anon_sym_SEMI,
  [4508] = 1,
    ACTIONS(1156), 1,
      anon_sym_GT,
  [4512] = 1,
    ACTIONS(1158), 1,
      anon_sym_SEMI,
  [4516] = 1,
    ACTIONS(1160), 1,
      anon_sym_SEMI,
  [4520] = 1,
    ACTIONS(1162), 1,
      anon_sym_QMARK_GT,
  [4524] = 1,
    ACTIONS(1164), 1,
      anon_sym_SEMI,
  [4528] = 1,
    ACTIONS(1166), 1,
      anon_sym_SEMI,
  [4532] = 1,
    ACTIONS(1168), 1,
      anon_sym_SEMI,
  [4536] = 1,
    ACTIONS(1170), 1,
      anon_sym_SEMI,
  [4540] = 1,
    ACTIONS(1172), 1,
      anon_sym_SEMI,
  [4544] = 1,
    ACTIONS(1174), 1,
      anon_sym_SEMI,
  [4548] = 1,
    ACTIONS(1176), 1,
      sym__start_tag_name,
  [4552] = 1,
    ACTIONS(1178), 1,
      sym_Name,
  [4556] = 1,
    ACTIONS(1180), 1,
      aux_sym_CharRef_token1,
  [4560] = 1,
    ACTIONS(1180), 1,
      aux_sym_CharRef_token2,
  [4564] = 1,
    ACTIONS(1182), 1,
      sym_PITarget,
  [4568] = 1,
    ACTIONS(1184), 1,
      sym__end_tag_name,
  [4572] = 1,
    ACTIONS(1186), 1,
      sym__pi_content,
  [4576] = 1,
    ACTIONS(836), 1,
      sym_Name,
  [4580] = 1,
    ACTIONS(1188), 1,
      sym_Name,
  [4584] = 1,
    ACTIONS(1190), 1,
      aux_sym_CharRef_token1,
  [4588] = 1,
    ACTIONS(1190), 1,
      aux_sym_CharRef_token2,
  [4592] = 1,
    ACTIONS(1192), 1,
      sym__pi_content,
  [4596] = 1,
    ACTIONS(1194), 1,
      sym_Name,
  [4600] = 1,
    ACTIONS(1196), 1,
      sym_Name,
  [4604] = 1,
    ACTIONS(1198), 1,
      aux_sym_CharRef_token1,
  [4608] = 1,
    ACTIONS(1198), 1,
      aux_sym_CharRef_token2,
  [4612] = 1,
    ACTIONS(1200), 1,
      sym_Name,
  [4616] = 1,
    ACTIONS(1202), 1,
      sym_Name,
  [4620] = 1,
    ACTIONS(1204), 1,
      aux_sym_CharRef_token1,
  [4624] = 1,
    ACTIONS(1204), 1,
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
  [SMALL_STATE(17)] = 544,
  [SMALL_STATE(18)] = 572,
  [SMALL_STATE(19)] = 600,
  [SMALL_STATE(20)] = 624,
  [SMALL_STATE(21)] = 646,
  [SMALL_STATE(22)] = 674,
  [SMALL_STATE(23)] = 698,
  [SMALL_STATE(24)] = 726,
  [SMALL_STATE(25)] = 750,
  [SMALL_STATE(26)] = 778,
  [SMALL_STATE(27)] = 806,
  [SMALL_STATE(28)] = 834,
  [SMALL_STATE(29)] = 847,
  [SMALL_STATE(30)] = 861,
  [SMALL_STATE(31)] = 875,
  [SMALL_STATE(32)] = 889,
  [SMALL_STATE(33)] = 903,
  [SMALL_STATE(34)] = 927,
  [SMALL_STATE(35)] = 945,
  [SMALL_STATE(36)] = 963,
  [SMALL_STATE(37)] = 977,
  [SMALL_STATE(38)] = 1001,
  [SMALL_STATE(39)] = 1025,
  [SMALL_STATE(40)] = 1039,
  [SMALL_STATE(41)] = 1057,
  [SMALL_STATE(42)] = 1071,
  [SMALL_STATE(43)] = 1089,
  [SMALL_STATE(44)] = 1103,
  [SMALL_STATE(45)] = 1125,
  [SMALL_STATE(46)] = 1139,
  [SMALL_STATE(47)] = 1157,
  [SMALL_STATE(48)] = 1175,
  [SMALL_STATE(49)] = 1199,
  [SMALL_STATE(50)] = 1213,
  [SMALL_STATE(51)] = 1237,
  [SMALL_STATE(52)] = 1261,
  [SMALL_STATE(53)] = 1285,
  [SMALL_STATE(54)] = 1299,
  [SMALL_STATE(55)] = 1317,
  [SMALL_STATE(56)] = 1331,
  [SMALL_STATE(57)] = 1355,
  [SMALL_STATE(58)] = 1379,
  [SMALL_STATE(59)] = 1393,
  [SMALL_STATE(60)] = 1417,
  [SMALL_STATE(61)] = 1441,
  [SMALL_STATE(62)] = 1465,
  [SMALL_STATE(63)] = 1483,
  [SMALL_STATE(64)] = 1501,
  [SMALL_STATE(65)] = 1519,
  [SMALL_STATE(66)] = 1543,
  [SMALL_STATE(67)] = 1561,
  [SMALL_STATE(68)] = 1575,
  [SMALL_STATE(69)] = 1599,
  [SMALL_STATE(70)] = 1613,
  [SMALL_STATE(71)] = 1627,
  [SMALL_STATE(72)] = 1645,
  [SMALL_STATE(73)] = 1659,
  [SMALL_STATE(74)] = 1673,
  [SMALL_STATE(75)] = 1684,
  [SMALL_STATE(76)] = 1695,
  [SMALL_STATE(77)] = 1706,
  [SMALL_STATE(78)] = 1727,
  [SMALL_STATE(79)] = 1752,
  [SMALL_STATE(80)] = 1773,
  [SMALL_STATE(81)] = 1793,
  [SMALL_STATE(82)] = 1813,
  [SMALL_STATE(83)] = 1833,
  [SMALL_STATE(84)] = 1853,
  [SMALL_STATE(85)] = 1875,
  [SMALL_STATE(86)] = 1887,
  [SMALL_STATE(87)] = 1898,
  [SMALL_STATE(88)] = 1917,
  [SMALL_STATE(89)] = 1936,
  [SMALL_STATE(90)] = 1947,
  [SMALL_STATE(91)] = 1958,
  [SMALL_STATE(92)] = 1969,
  [SMALL_STATE(93)] = 1986,
  [SMALL_STATE(94)] = 2003,
  [SMALL_STATE(95)] = 2022,
  [SMALL_STATE(96)] = 2033,
  [SMALL_STATE(97)] = 2044,
  [SMALL_STATE(98)] = 2055,
  [SMALL_STATE(99)] = 2072,
  [SMALL_STATE(100)] = 2089,
  [SMALL_STATE(101)] = 2106,
  [SMALL_STATE(102)] = 2117,
  [SMALL_STATE(103)] = 2136,
  [SMALL_STATE(104)] = 2147,
  [SMALL_STATE(105)] = 2158,
  [SMALL_STATE(106)] = 2169,
  [SMALL_STATE(107)] = 2180,
  [SMALL_STATE(108)] = 2191,
  [SMALL_STATE(109)] = 2202,
  [SMALL_STATE(110)] = 2221,
  [SMALL_STATE(111)] = 2232,
  [SMALL_STATE(112)] = 2243,
  [SMALL_STATE(113)] = 2259,
  [SMALL_STATE(114)] = 2267,
  [SMALL_STATE(115)] = 2281,
  [SMALL_STATE(116)] = 2291,
  [SMALL_STATE(117)] = 2305,
  [SMALL_STATE(118)] = 2315,
  [SMALL_STATE(119)] = 2329,
  [SMALL_STATE(120)] = 2339,
  [SMALL_STATE(121)] = 2353,
  [SMALL_STATE(122)] = 2361,
  [SMALL_STATE(123)] = 2371,
  [SMALL_STATE(124)] = 2381,
  [SMALL_STATE(125)] = 2391,
  [SMALL_STATE(126)] = 2405,
  [SMALL_STATE(127)] = 2415,
  [SMALL_STATE(128)] = 2425,
  [SMALL_STATE(129)] = 2439,
  [SMALL_STATE(130)] = 2447,
  [SMALL_STATE(131)] = 2457,
  [SMALL_STATE(132)] = 2467,
  [SMALL_STATE(133)] = 2477,
  [SMALL_STATE(134)] = 2486,
  [SMALL_STATE(135)] = 2499,
  [SMALL_STATE(136)] = 2508,
  [SMALL_STATE(137)] = 2515,
  [SMALL_STATE(138)] = 2522,
  [SMALL_STATE(139)] = 2535,
  [SMALL_STATE(140)] = 2548,
  [SMALL_STATE(141)] = 2561,
  [SMALL_STATE(142)] = 2570,
  [SMALL_STATE(143)] = 2583,
  [SMALL_STATE(144)] = 2594,
  [SMALL_STATE(145)] = 2607,
  [SMALL_STATE(146)] = 2616,
  [SMALL_STATE(147)] = 2627,
  [SMALL_STATE(148)] = 2640,
  [SMALL_STATE(149)] = 2653,
  [SMALL_STATE(150)] = 2664,
  [SMALL_STATE(151)] = 2677,
  [SMALL_STATE(152)] = 2690,
  [SMALL_STATE(153)] = 2697,
  [SMALL_STATE(154)] = 2706,
  [SMALL_STATE(155)] = 2719,
  [SMALL_STATE(156)] = 2732,
  [SMALL_STATE(157)] = 2741,
  [SMALL_STATE(158)] = 2748,
  [SMALL_STATE(159)] = 2757,
  [SMALL_STATE(160)] = 2764,
  [SMALL_STATE(161)] = 2777,
  [SMALL_STATE(162)] = 2790,
  [SMALL_STATE(163)] = 2803,
  [SMALL_STATE(164)] = 2810,
  [SMALL_STATE(165)] = 2821,
  [SMALL_STATE(166)] = 2834,
  [SMALL_STATE(167)] = 2847,
  [SMALL_STATE(168)] = 2860,
  [SMALL_STATE(169)] = 2867,
  [SMALL_STATE(170)] = 2880,
  [SMALL_STATE(171)] = 2893,
  [SMALL_STATE(172)] = 2906,
  [SMALL_STATE(173)] = 2917,
  [SMALL_STATE(174)] = 2924,
  [SMALL_STATE(175)] = 2931,
  [SMALL_STATE(176)] = 2938,
  [SMALL_STATE(177)] = 2947,
  [SMALL_STATE(178)] = 2954,
  [SMALL_STATE(179)] = 2963,
  [SMALL_STATE(180)] = 2976,
  [SMALL_STATE(181)] = 2989,
  [SMALL_STATE(182)] = 2998,
  [SMALL_STATE(183)] = 3011,
  [SMALL_STATE(184)] = 3018,
  [SMALL_STATE(185)] = 3025,
  [SMALL_STATE(186)] = 3038,
  [SMALL_STATE(187)] = 3051,
  [SMALL_STATE(188)] = 3058,
  [SMALL_STATE(189)] = 3069,
  [SMALL_STATE(190)] = 3082,
  [SMALL_STATE(191)] = 3095,
  [SMALL_STATE(192)] = 3105,
  [SMALL_STATE(193)] = 3115,
  [SMALL_STATE(194)] = 3125,
  [SMALL_STATE(195)] = 3135,
  [SMALL_STATE(196)] = 3141,
  [SMALL_STATE(197)] = 3151,
  [SMALL_STATE(198)] = 3161,
  [SMALL_STATE(199)] = 3171,
  [SMALL_STATE(200)] = 3179,
  [SMALL_STATE(201)] = 3189,
  [SMALL_STATE(202)] = 3199,
  [SMALL_STATE(203)] = 3205,
  [SMALL_STATE(204)] = 3215,
  [SMALL_STATE(205)] = 3225,
  [SMALL_STATE(206)] = 3233,
  [SMALL_STATE(207)] = 3241,
  [SMALL_STATE(208)] = 3247,
  [SMALL_STATE(209)] = 3257,
  [SMALL_STATE(210)] = 3267,
  [SMALL_STATE(211)] = 3277,
  [SMALL_STATE(212)] = 3287,
  [SMALL_STATE(213)] = 3297,
  [SMALL_STATE(214)] = 3303,
  [SMALL_STATE(215)] = 3313,
  [SMALL_STATE(216)] = 3319,
  [SMALL_STATE(217)] = 3329,
  [SMALL_STATE(218)] = 3335,
  [SMALL_STATE(219)] = 3341,
  [SMALL_STATE(220)] = 3349,
  [SMALL_STATE(221)] = 3355,
  [SMALL_STATE(222)] = 3365,
  [SMALL_STATE(223)] = 3373,
  [SMALL_STATE(224)] = 3379,
  [SMALL_STATE(225)] = 3389,
  [SMALL_STATE(226)] = 3399,
  [SMALL_STATE(227)] = 3409,
  [SMALL_STATE(228)] = 3419,
  [SMALL_STATE(229)] = 3427,
  [SMALL_STATE(230)] = 3437,
  [SMALL_STATE(231)] = 3447,
  [SMALL_STATE(232)] = 3453,
  [SMALL_STATE(233)] = 3463,
  [SMALL_STATE(234)] = 3473,
  [SMALL_STATE(235)] = 3483,
  [SMALL_STATE(236)] = 3493,
  [SMALL_STATE(237)] = 3503,
  [SMALL_STATE(238)] = 3513,
  [SMALL_STATE(239)] = 3523,
  [SMALL_STATE(240)] = 3533,
  [SMALL_STATE(241)] = 3543,
  [SMALL_STATE(242)] = 3553,
  [SMALL_STATE(243)] = 3559,
  [SMALL_STATE(244)] = 3565,
  [SMALL_STATE(245)] = 3571,
  [SMALL_STATE(246)] = 3579,
  [SMALL_STATE(247)] = 3589,
  [SMALL_STATE(248)] = 3599,
  [SMALL_STATE(249)] = 3604,
  [SMALL_STATE(250)] = 3611,
  [SMALL_STATE(251)] = 3618,
  [SMALL_STATE(252)] = 3625,
  [SMALL_STATE(253)] = 3632,
  [SMALL_STATE(254)] = 3639,
  [SMALL_STATE(255)] = 3644,
  [SMALL_STATE(256)] = 3651,
  [SMALL_STATE(257)] = 3656,
  [SMALL_STATE(258)] = 3661,
  [SMALL_STATE(259)] = 3666,
  [SMALL_STATE(260)] = 3673,
  [SMALL_STATE(261)] = 3680,
  [SMALL_STATE(262)] = 3685,
  [SMALL_STATE(263)] = 3692,
  [SMALL_STATE(264)] = 3699,
  [SMALL_STATE(265)] = 3704,
  [SMALL_STATE(266)] = 3711,
  [SMALL_STATE(267)] = 3718,
  [SMALL_STATE(268)] = 3725,
  [SMALL_STATE(269)] = 3732,
  [SMALL_STATE(270)] = 3737,
  [SMALL_STATE(271)] = 3744,
  [SMALL_STATE(272)] = 3751,
  [SMALL_STATE(273)] = 3758,
  [SMALL_STATE(274)] = 3763,
  [SMALL_STATE(275)] = 3768,
  [SMALL_STATE(276)] = 3773,
  [SMALL_STATE(277)] = 3778,
  [SMALL_STATE(278)] = 3783,
  [SMALL_STATE(279)] = 3790,
  [SMALL_STATE(280)] = 3795,
  [SMALL_STATE(281)] = 3800,
  [SMALL_STATE(282)] = 3807,
  [SMALL_STATE(283)] = 3812,
  [SMALL_STATE(284)] = 3819,
  [SMALL_STATE(285)] = 3824,
  [SMALL_STATE(286)] = 3829,
  [SMALL_STATE(287)] = 3834,
  [SMALL_STATE(288)] = 3841,
  [SMALL_STATE(289)] = 3846,
  [SMALL_STATE(290)] = 3853,
  [SMALL_STATE(291)] = 3858,
  [SMALL_STATE(292)] = 3863,
  [SMALL_STATE(293)] = 3870,
  [SMALL_STATE(294)] = 3875,
  [SMALL_STATE(295)] = 3880,
  [SMALL_STATE(296)] = 3887,
  [SMALL_STATE(297)] = 3892,
  [SMALL_STATE(298)] = 3897,
  [SMALL_STATE(299)] = 3902,
  [SMALL_STATE(300)] = 3909,
  [SMALL_STATE(301)] = 3916,
  [SMALL_STATE(302)] = 3921,
  [SMALL_STATE(303)] = 3928,
  [SMALL_STATE(304)] = 3935,
  [SMALL_STATE(305)] = 3942,
  [SMALL_STATE(306)] = 3947,
  [SMALL_STATE(307)] = 3952,
  [SMALL_STATE(308)] = 3959,
  [SMALL_STATE(309)] = 3964,
  [SMALL_STATE(310)] = 3969,
  [SMALL_STATE(311)] = 3974,
  [SMALL_STATE(312)] = 3981,
  [SMALL_STATE(313)] = 3986,
  [SMALL_STATE(314)] = 3991,
  [SMALL_STATE(315)] = 3996,
  [SMALL_STATE(316)] = 4001,
  [SMALL_STATE(317)] = 4008,
  [SMALL_STATE(318)] = 4013,
  [SMALL_STATE(319)] = 4018,
  [SMALL_STATE(320)] = 4023,
  [SMALL_STATE(321)] = 4030,
  [SMALL_STATE(322)] = 4037,
  [SMALL_STATE(323)] = 4042,
  [SMALL_STATE(324)] = 4049,
  [SMALL_STATE(325)] = 4056,
  [SMALL_STATE(326)] = 4061,
  [SMALL_STATE(327)] = 4066,
  [SMALL_STATE(328)] = 4073,
  [SMALL_STATE(329)] = 4078,
  [SMALL_STATE(330)] = 4083,
  [SMALL_STATE(331)] = 4088,
  [SMALL_STATE(332)] = 4093,
  [SMALL_STATE(333)] = 4100,
  [SMALL_STATE(334)] = 4105,
  [SMALL_STATE(335)] = 4112,
  [SMALL_STATE(336)] = 4119,
  [SMALL_STATE(337)] = 4126,
  [SMALL_STATE(338)] = 4131,
  [SMALL_STATE(339)] = 4138,
  [SMALL_STATE(340)] = 4143,
  [SMALL_STATE(341)] = 4148,
  [SMALL_STATE(342)] = 4153,
  [SMALL_STATE(343)] = 4158,
  [SMALL_STATE(344)] = 4163,
  [SMALL_STATE(345)] = 4168,
  [SMALL_STATE(346)] = 4172,
  [SMALL_STATE(347)] = 4176,
  [SMALL_STATE(348)] = 4180,
  [SMALL_STATE(349)] = 4184,
  [SMALL_STATE(350)] = 4188,
  [SMALL_STATE(351)] = 4192,
  [SMALL_STATE(352)] = 4196,
  [SMALL_STATE(353)] = 4200,
  [SMALL_STATE(354)] = 4204,
  [SMALL_STATE(355)] = 4208,
  [SMALL_STATE(356)] = 4212,
  [SMALL_STATE(357)] = 4216,
  [SMALL_STATE(358)] = 4220,
  [SMALL_STATE(359)] = 4224,
  [SMALL_STATE(360)] = 4228,
  [SMALL_STATE(361)] = 4232,
  [SMALL_STATE(362)] = 4236,
  [SMALL_STATE(363)] = 4240,
  [SMALL_STATE(364)] = 4244,
  [SMALL_STATE(365)] = 4248,
  [SMALL_STATE(366)] = 4252,
  [SMALL_STATE(367)] = 4256,
  [SMALL_STATE(368)] = 4260,
  [SMALL_STATE(369)] = 4264,
  [SMALL_STATE(370)] = 4268,
  [SMALL_STATE(371)] = 4272,
  [SMALL_STATE(372)] = 4276,
  [SMALL_STATE(373)] = 4280,
  [SMALL_STATE(374)] = 4284,
  [SMALL_STATE(375)] = 4288,
  [SMALL_STATE(376)] = 4292,
  [SMALL_STATE(377)] = 4296,
  [SMALL_STATE(378)] = 4300,
  [SMALL_STATE(379)] = 4304,
  [SMALL_STATE(380)] = 4308,
  [SMALL_STATE(381)] = 4312,
  [SMALL_STATE(382)] = 4316,
  [SMALL_STATE(383)] = 4320,
  [SMALL_STATE(384)] = 4324,
  [SMALL_STATE(385)] = 4328,
  [SMALL_STATE(386)] = 4332,
  [SMALL_STATE(387)] = 4336,
  [SMALL_STATE(388)] = 4340,
  [SMALL_STATE(389)] = 4344,
  [SMALL_STATE(390)] = 4348,
  [SMALL_STATE(391)] = 4352,
  [SMALL_STATE(392)] = 4356,
  [SMALL_STATE(393)] = 4360,
  [SMALL_STATE(394)] = 4364,
  [SMALL_STATE(395)] = 4368,
  [SMALL_STATE(396)] = 4372,
  [SMALL_STATE(397)] = 4376,
  [SMALL_STATE(398)] = 4380,
  [SMALL_STATE(399)] = 4384,
  [SMALL_STATE(400)] = 4388,
  [SMALL_STATE(401)] = 4392,
  [SMALL_STATE(402)] = 4396,
  [SMALL_STATE(403)] = 4400,
  [SMALL_STATE(404)] = 4404,
  [SMALL_STATE(405)] = 4408,
  [SMALL_STATE(406)] = 4412,
  [SMALL_STATE(407)] = 4416,
  [SMALL_STATE(408)] = 4420,
  [SMALL_STATE(409)] = 4424,
  [SMALL_STATE(410)] = 4428,
  [SMALL_STATE(411)] = 4432,
  [SMALL_STATE(412)] = 4436,
  [SMALL_STATE(413)] = 4440,
  [SMALL_STATE(414)] = 4444,
  [SMALL_STATE(415)] = 4448,
  [SMALL_STATE(416)] = 4452,
  [SMALL_STATE(417)] = 4456,
  [SMALL_STATE(418)] = 4460,
  [SMALL_STATE(419)] = 4464,
  [SMALL_STATE(420)] = 4468,
  [SMALL_STATE(421)] = 4472,
  [SMALL_STATE(422)] = 4476,
  [SMALL_STATE(423)] = 4480,
  [SMALL_STATE(424)] = 4484,
  [SMALL_STATE(425)] = 4488,
  [SMALL_STATE(426)] = 4492,
  [SMALL_STATE(427)] = 4496,
  [SMALL_STATE(428)] = 4500,
  [SMALL_STATE(429)] = 4504,
  [SMALL_STATE(430)] = 4508,
  [SMALL_STATE(431)] = 4512,
  [SMALL_STATE(432)] = 4516,
  [SMALL_STATE(433)] = 4520,
  [SMALL_STATE(434)] = 4524,
  [SMALL_STATE(435)] = 4528,
  [SMALL_STATE(436)] = 4532,
  [SMALL_STATE(437)] = 4536,
  [SMALL_STATE(438)] = 4540,
  [SMALL_STATE(439)] = 4544,
  [SMALL_STATE(440)] = 4548,
  [SMALL_STATE(441)] = 4552,
  [SMALL_STATE(442)] = 4556,
  [SMALL_STATE(443)] = 4560,
  [SMALL_STATE(444)] = 4564,
  [SMALL_STATE(445)] = 4568,
  [SMALL_STATE(446)] = 4572,
  [SMALL_STATE(447)] = 4576,
  [SMALL_STATE(448)] = 4580,
  [SMALL_STATE(449)] = 4584,
  [SMALL_STATE(450)] = 4588,
  [SMALL_STATE(451)] = 4592,
  [SMALL_STATE(452)] = 4596,
  [SMALL_STATE(453)] = 4600,
  [SMALL_STATE(454)] = 4604,
  [SMALL_STATE(455)] = 4608,
  [SMALL_STATE(456)] = 4612,
  [SMALL_STATE(457)] = 4616,
  [SMALL_STATE(458)] = 4620,
  [SMALL_STATE(459)] = 4624,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(428),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(417),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(415),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(440),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(418),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(417),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(415),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(413),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(412),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(440),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(5),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__intSubset, 2), SHIFT_REPEAT(165),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__intSubset, 2), SHIFT_REPEAT(22),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__intSubset, 2), SHIFT_REPEAT(444),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__intSubset, 2),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__intSubset, 2), SHIFT_REPEAT(305),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prolog, 1),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat2, 2), SHIFT_REPEAT(456),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat2, 2),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat2, 2), SHIFT_REPEAT(18),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_EntityValue_repeat2, 2), SHIFT_REPEAT(457),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_EntityValue_repeat2, 2), SHIFT_REPEAT(458),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat2, 2), SHIFT_REPEAT(459),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(20),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(247),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat1, 2), SHIFT_REPEAT(452),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat1, 2),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat1, 2), SHIFT_REPEAT(21),
  [141] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_EntityValue_repeat1, 2), SHIFT_REPEAT(453),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_EntityValue_repeat1, 2), SHIFT_REPEAT(454),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EntityValue_repeat1, 2), SHIFT_REPEAT(455),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(457),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(458),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prolog, 2),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(453),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(454),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PEReference, 3),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ETag, 4),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ETag, 4),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_EmptyElemTag, 5),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_EmptyElemTag, 5),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_STag, 4),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_STag, 4),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 2),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 2),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(448),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(449),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2, .production_id = 1),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PI, 3),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_PI, 3),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(441),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(442),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CDSect, 3),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_CDSect, 3),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__Reference, 1),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__Reference, 1),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, .production_id = 1),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_EmptyElemTag, 3),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_EmptyElemTag, 3),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ETag, 3),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ETag, 3),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 3, .production_id = 3),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 3, .production_id = 2),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CharRef, 3),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_CharRef, 3),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat2, 2),
  [270] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_AttValue_repeat2, 2), SHIFT_REPEAT(448),
  [273] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_AttValue_repeat2, 2), SHIFT_REPEAT(449),
  [276] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat2, 2), SHIFT_REPEAT(450),
  [279] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat2, 2), SHIFT_REPEAT(51),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat1, 2),
  [284] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_AttValue_repeat1, 2), SHIFT_REPEAT(441),
  [287] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_AttValue_repeat1, 2), SHIFT_REPEAT(442),
  [290] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat1, 2), SHIFT_REPEAT(443),
  [293] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_AttValue_repeat1, 2), SHIFT_REPEAT(52),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PI, 5),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_PI, 5),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2, .production_id = 2),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_EntityRef, 3),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_EntityRef, 3),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_STag, 3),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_STag, 3),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prolog, 3),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prolog, 4),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_EmptyElemTag, 4),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_EmptyElemTag, 4),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CDSect, 2),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_CDSect, 2),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 3),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 4, .production_id = 3),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_STag, 5),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_STag, 5),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 1),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 1),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice, 5),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice, 4),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__choice, 3),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cp, 1),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_XmlModelPI, 4),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_XmlModelPI, 4),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_StyleSheetPI, 4),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_StyleSheetPI, 4),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_PEReference, 3),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_XmlModelPI, 3),
  [430] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_XmlModelPI, 3),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_XmlModelPI, 5),
  [434] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_XmlModelPI, 5),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_StyleSheetPI, 5),
  [438] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_StyleSheetPI, 5),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_StyleSheetPI, 3),
  [442] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_StyleSheetPI, 3),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_XMLDecl, 5),
  [456] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_XMLDecl, 5),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [462] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__choice_repeat1, 2), SHIFT_REPEAT(82),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__choice_repeat1, 2),
  [467] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__choice_repeat1, 2), SHIFT_REPEAT(280),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__intSubset, 3),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_XMLDecl, 7),
  [474] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_XMLDecl, 7),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 2),
  [478] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 2), SHIFT_REPEAT(141),
  [481] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 2), SHIFT_REPEAT(364),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_XMLDecl, 6),
  [486] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_XMLDecl, 6),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 1),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_XMLDecl, 4),
  [494] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_XMLDecl, 4),
  [496] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 2), SHIFT_REPEAT(174),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctypedecl, 6),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctypedecl, 6),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 1),
  [521] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 1), SHIFT_REPEAT(137),
  [524] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctypedecl, 11),
  [542] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctypedecl, 11),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_AttlistDecl_repeat1, 2),
  [546] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_AttlistDecl_repeat1, 2), SHIFT_REPEAT(237),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [553] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Enumeration_repeat1, 2), SHIFT_REPEAT(332),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Enumeration_repeat1, 2),
  [558] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Enumeration_repeat1, 2), SHIFT_REPEAT(361),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctypedecl, 12),
  [573] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctypedecl, 12),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctypedecl, 7),
  [583] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctypedecl, 7),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__choice_repeat1, 4),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctypedecl, 10),
  [589] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctypedecl, 10),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__choice_repeat1, 3),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_EmptyElemTag_repeat1, 2),
  [623] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_EmptyElemTag_repeat1, 2), SHIFT_REPEAT(304),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_NotationType_repeat1, 3),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cp, 2),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctypedecl, 8),
  [632] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctypedecl, 8),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctypedecl, 5),
  [636] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctypedecl, 5),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctypedecl, 9),
  [644] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctypedecl, 9),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [660] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 2), SHIFT_REPEAT(154),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 2),
  [665] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 2), SHIFT_REPEAT(386),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [674] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_StyleSheetPI_repeat1, 2), SHIFT_REPEAT(303),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_StyleSheetPI_repeat1, 2),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttValue, 3, .production_id = 4),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [695] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 2), SHIFT_REPEAT(207),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ExternalID, 3),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__Eq, 1),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 3),
  [710] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 3), SHIFT_REPEAT(217),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttValue, 2),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 4),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 5),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Mixed, 4),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_SystemLiteral, 3),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Mixed, 3),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ExternalID, 5),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [765] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_Mixed_repeat1, 4), SHIFT_REPEAT(218),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Attribute, 3),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Enumeration_repeat1, 3),
  [792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Enumeration_repeat1, 4),
  [794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__Eq, 2),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttlistDecl, 6),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [822] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elementdecl, 7),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [826] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 2),
  [828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttlistDecl, 7),
  [830] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NotationDecl, 7),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [840] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_EntityValue, 2),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [846] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_GEDecl, 7),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [858] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contentspec, 1),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [870] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PubidLiteral, 3),
  [872] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttlistDecl, 5),
  [874] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__SDDecl, 6),
  [876] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__EncodingDecl, 6),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [888] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elementdecl, 8),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [894] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_StringType, 1),
  [896] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__AttType, 1),
  [898] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttDef, 4),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [902] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__EnumeratedType, 1),
  [904] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PublicID, 3),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [908] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NotationDecl, 8),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [914] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_EntityValue, 3, .production_id = 4),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [918] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_GEDecl, 8),
  [920] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CDStart, 3),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [930] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__markupdecl, 1),
  [932] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NotationType, 9),
  [934] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PseudoAttValue, 3, .production_id = 4),
  [936] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NotationType, 8),
  [938] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__EntityDecl, 1),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [944] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NotationType, 7),
  [946] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__VersionInfo, 6),
  [948] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NotationType, 6),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [954] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Enumeration, 6),
  [956] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_DefaultDecl, 3),
  [958] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PEDecl, 9),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [968] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_GEDecl, 9),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [978] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PseudoAtt, 3),
  [980] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Mixed, 5),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [984] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Enumeration, 5),
  [986] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PseudoAttValue, 2),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [996] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Enumeration, 3),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [1006] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_DefaultDecl, 1),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [1010] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttDef, 6),
  [1012] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PEDecl, 10),
  [1014] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NDataDecl, 4),
  [1016] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Mixed, 6),
  [1018] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__Eq, 3),
  [1020] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Enumeration, 4),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [1034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [1094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [1096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [1102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [1108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [1116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [1120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [1124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [1126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [1134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [1138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [1140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [1144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [1150] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [1158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [1160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [1162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [1174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [1176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [1178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [1182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [1184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [1186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [1188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [1192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [1194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [1196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [1200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [1202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [1204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
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
