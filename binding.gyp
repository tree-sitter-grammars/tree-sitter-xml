{
  "targets": [
    {
      "target_name": "tree_sitter_xml_binding",
      "include_dirs": [
        "<!(node -e \"require('nan')\")",
        "xml/src",
      ],
      "sources": [
        "dtd/src/parser.c",
        "dtd/src/scanner.c",
        "xml/src/parser.c",
        "xml/src/scanner.c",
        "bindings/node/binding.cc",
      ],
      "cflags_c": [
        "-std=c99",
        "-Wno-misleading-indentation",
        "-Wno-unused-parameter",
        "-Wno-unused-but-set-variable"
      ],
      "cflags_cc": [
        "-Wno-cast-function-type",
      ]
    },
  ]
}
