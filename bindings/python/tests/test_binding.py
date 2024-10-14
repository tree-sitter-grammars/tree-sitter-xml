from unittest import TestCase

import tree_sitter, tree_sitter_xml


class TestLanguage(TestCase):
    def test_can_load_xml_grammar(self):
        try:
            tree_sitter.Language(tree_sitter_xml.language_xml())
        except Exception:
            self.fail("Error loading XML grammar")

    def test_can_load_dtd_grammar(self):
        try:
            tree_sitter.Language(tree_sitter_xml.language_dtd())
        except Exception:
            self.fail("Error loading DTD grammar")
