// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterXML",
    products: [
        .library(name: "TreeSitterXML", targets: ["TreeSitterXML", "TreeSitterDTD"]),
    ],
    dependencies: [
        .package(name: "SwiftTreeSitter", url: "https://github.com/tree-sitter/swift-tree-sitter", from: "0.9.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterXML",
            dependencies: [],
            path: ".",
            sources: [
                "xml/src/parser.c",
                "xml/src/scanner.c",
            ],
            resources: [
                .copy("queries/xml")
            ],
            publicHeadersPath: "bindings/swift/xml",
            cSettings: [.headerSearchPath("xml/src")]
        ),
        .target(
            name: "TreeSitterDTD",
            dependencies: [],
            path: ".",
            sources: [
                "dtd/src/parser.c",
                "dtd/src/scanner.c",
            ],
            resources: [
                .copy("queries/dtd")
            ],
            publicHeadersPath: "bindings/swift/dtd",
            cSettings: [.headerSearchPath("dtd/src")]
        ),
        .testTarget(
            name: "TreeSitterXMLTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterXML",
                "TreeSitterDTD",
            ],
            path: "bindings/swift/TreeSitterXMLTests"
        )
    ],
    cLanguageStandard: .c11
)
