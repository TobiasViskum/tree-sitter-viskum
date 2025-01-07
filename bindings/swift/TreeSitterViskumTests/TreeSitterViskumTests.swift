import XCTest
import SwiftTreeSitter
import TreeSitterViskum

final class TreeSitterViskumTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_viskum())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Viskum grammar")
    }
}
