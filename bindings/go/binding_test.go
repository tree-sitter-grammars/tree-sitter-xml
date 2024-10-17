package tree_sitter_xml_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_xml "github.com/tree-sitter-grammars/tree-sitter-xml/bindings/go"
)

func TestCanLoadXMLGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_xml.LanguageXML())
	if language == nil {
		t.Errorf("Error loading XML grammar")
	}
}

func TestCanLoadDTDGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_xml.LanguageDTD())
	if language == nil {
		t.Errorf("Error loading DTD grammar")
	}
}
