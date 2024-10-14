//! This crate provides XML and DTD language support for the [tree-sitter][] parsing library.
//!
//! Typically, you will use the [LANGUAGE_XML][] constant to add this language to a
//! tree-sitter [Parser][], and then use the parser to parse some code:
//!
//! ```
//! use tree_sitter::Parser;
//!
//! let code = r#"
//! <?xml version="1.0" encoding="UTF-8"?>
//! <note>
//!   <to>Tove</to>
//!   <from>Jani</from>
//!   <heading>Reminder</heading>
//!   <body>Don't forget me this weekend!</body>
//! </note>
//! "#;
//! let mut parser = Parser::new();
//! let language = tree_sitter_xml::LANGUAGE_XML;
//! parser
//!     .set_language(&language.into())
//!     .expect("Error loading XML parser");
//! let tree = parser.parse(code, None).unwrap();
//! assert!(!tree.root_node().has_error());
//! ```
//!
//! [Parser]: https://docs.rs/tree-sitter/*/tree_sitter/struct.Parser.html
//! [tree-sitter]: https://tree-sitter.github.io/

use tree_sitter_language::LanguageFn;

extern "C" {
    fn tree_sitter_dtd() -> *const ();
    fn tree_sitter_xml() -> *const ();
}

/// The tree-sitter [`LanguageFn`][LanguageFn] for the DTD grammar.
///
/// [LanguageFn]: https://docs.rs/tree-sitter-language/*/tree_sitter_language/struct.LanguageFn.html
pub const LANGUAGE_DTD: LanguageFn = unsafe { LanguageFn::from_raw(tree_sitter_dtd) };

/// The tree-sitter [`LanguageFn`][LanguageFn] for the XML grammar.
///
/// [LanguageFn]: https://docs.rs/tree-sitter-language/*/tree_sitter_language/struct.LanguageFn.html
pub const LANGUAGE_XML: LanguageFn = unsafe { LanguageFn::from_raw(tree_sitter_xml) };

/// The syntax highlighting queries for XML.
pub const XML_HIGHLIGHT_QUERY: &str = include_str!("../../queries/xml/highlights.scm");

/// The syntax highlighting queries for DTD.
pub const DTD_HIGHLIGHT_QUERY: &str = include_str!("../../queries/dtd/highlights.scm");

/// The content of the [`node-types.json`][] file for XML.
///
/// [`node-types.json`]: https://tree-sitter.github.io/tree-sitter/using-parsers#static-node-types
pub const XML_NODE_TYPES: &str = include_str!("../../xml/src/node-types.json");

/// The content of the [`node-types.json`][] file for DTD.
///
/// [`node-types.json`]: https://tree-sitter.github.io/tree-sitter/using-parsers#static-node-types
pub const DTD_NODE_TYPES: &str = include_str!("../../dtd/src/node-types.json");

#[cfg(test)]
mod tests {
    #[test]
    fn test_can_load_xml_grammar() {
        let mut parser = tree_sitter::Parser::new();
        parser
            .set_language(&super::LANGUAGE_XML.into())
            .expect("Error loading XML parser");
    }

    #[test]
    fn test_can_load_dtd_grammar() {
        let mut parser = tree_sitter::Parser::new();
        parser
            .set_language(&super::LANGUAGE_DTD.into())
            .expect("Error loading DTD parser");
    }
}
