{
  "targets": [
    {
      "target_name": "tree_sitter_xml_binding",
      "dependencies": [
        "<!(node -p \"require('node-addon-api').targets\"):node_addon_api_except",
      ],
      "include_dirs": [
        "xml/src",
      ],
      "sources": [
        "dtd/src/parser.c",
        "dtd/src/scanner.c",
        "xml/src/parser.c",
        "xml/src/scanner.c",
        "bindings/node/binding.cc",
      ],
      "conditions": [
        ["OS!='win'", {
          "cflags_c": [
            "-std=c11",
          ],
        }, { # OS == "win"
          "cflags_c": [
            "/std:c11",
            "/utf-8",
          ],
        }],
      ],
    }
  ]
}
