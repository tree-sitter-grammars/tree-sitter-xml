//! This crate provides XML and DTD grammars for the [tree-sitter][] parsing library.
//!
//! Typically, you will use the [language_xml][language func] function to add this grammar to a
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
//! parser
//!     .set_language(&tree_sitter_xml::language_xml())
//!     .expect("Error loading XML grammar");
//! let tree = parser.parse(code, None).unwrap();
//! assert!(!tree.root_node().has_error());
//! ```
//!
//! [Language]: https://docs.rs/tree-sitter/*/tree_sitter/struct.Language.html
//! [language func]: fn.language_xml.html
//! [Parser]: https://docs.rs/tree-sitter/*/tree_sitter/struct.Parser.html
//! [tree-sitter]: https://tree-sitter.github.io/

use tree_sitter::Language;

extern "C" {
    fn tree_sitter_dtd() -> Language;
    fn tree_sitter_xml() -> Language;
}

/// Returns the tree-sitter [Language][] for DTD.
///
/// [Language]: https://docs.rs/tree-sitter/*/tree_sitter/struct.Language.html
pub fn language_dtd() -> Language {
    unsafe { tree_sitter_dtd() }
}

/// Returns the tree-sitter [Language][] for XML.
///
/// [Language]: https://docs.rs/tree-sitter/*/tree_sitter/struct.Language.html
pub fn language_xml() -> Language {
    unsafe { tree_sitter_xml() }
}

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
            .set_language(&super::language_xml())
            .expect("Error loading xml language");
    }

    #[test]
    fn test_can_load_dtd_grammar() {
        let mut parser = tree_sitter::Parser::new();
        parser
            .set_language(&super::language_dtd())
            .expect("Error loading dtd language");
    }
}
