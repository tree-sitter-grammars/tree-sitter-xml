// swift-tools-version:5.3
import PackageDescription

let excludes = [
    "Cargo.toml",
    "Makefile",
    "binding.gyp",
    "bindings/go",
    "bindings/node",
    "bindings/python",
    "bindings/rust",
    "common/common.mak",
    "common/index.js"
    "examples",
    "package.json",
    "package-lock.json",
    "pyproject.toml",
    "setup.py",
    "test",
    ".editorconfig",
    ".github",
    ".gitignore",
    ".gitattributes",
]

let package = Package(
    name: "TreeSitterXML",
    platforms: [.macOS(.v10_13), .iOS(.v11)],
    products: [
        .library(name: "TreeSitterXML", targets: ["TreeSitterXML", "TreeSitterDTD"]),
    ],
    dependencies: [],
    targets: [
        .target(name: "TreeSitterXML",
                path: ".",
                exclude: excludes + [
                    "bindings/swift/TreeSitterDTD",
                    "xml/Makefile",
                    "xml/grammar.js",
                    "dtd",
                ],
                sources: [
                    "xml/src/parser.c",
                    "xml/src/scanner.c",
                ],
                resources: [
                    .copy("queries/xml")
                ],
                publicHeadersPath: "bindings/swift",
                cSettings: [.headerSearchPath("xml/src")]),
        .target(name: "TreeSitterDTD",
                path: ".",
                exclude: excludes + [
                    "bindings/swift/TreeSitterXML",
                    "dtd/Makefile",
                    "dtd/grammar.js",
                    "xml",
                ],
                sources: [
                    "dtd/src/parser.c",
                    "dtd/src/scanner.c",
                ],
                resources: [
                    .copy("queries/dtd")
                ],
                publicHeadersPath: "bindings/swift",
                cSettings: [.headerSearchPath("dtd/src")])
    ],
    cLanguageStandard: .c11
)
