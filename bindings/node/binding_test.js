const assert = require("node:assert");
const { test } = require("node:test");

const Parser = require("tree-sitter");

test("can load XML grammar", () => {
  const parser = new Parser();
  assert.doesNotThrow(() => parser.setLanguage(require("./xml")));
});

test("can load DTD grammar", () => {
  const parser = new Parser();
  assert.doesNotThrow(() => parser.setLanguage(require("./dtd")));
});
