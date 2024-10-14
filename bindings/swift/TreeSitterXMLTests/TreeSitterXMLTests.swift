import XCTest
import SwiftTreeSitter
import TreeSitterXML
import TreeSitterDTD

final class TreeSitterXMLTests: XCTestCase {
    func testCanLoadXMLGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_xml())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading XML grammar")
    }

    func testCanLoadDTDGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_dtd())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading DTD grammar")
    }
}
