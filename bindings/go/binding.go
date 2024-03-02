package tree_sitter_xml

// #cgo CFLAGS: -std=c11 -fPIC
// #cgo LDFLAGS: -L../../xml -l:libtree-sitter-xml.a
// #cgo LDFLAGS: -L../../dtd -l:libtree-sitter-dtd.a
// #include "../c/tree-sitter-xml.h"
// #include "../c/tree-sitter-dtd.h"
import "C"

import "unsafe"

// Get the tree-sitter Language for XML.
func LanguageXML() unsafe.Pointer {
	return unsafe.Pointer(C.tree_sitter_xml())
}

// Get the tree-sitter Language for DTD.
func LanguageDTD() unsafe.Pointer {
	return unsafe.Pointer(C.tree_sitter_dtd())
}
