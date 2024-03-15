const root = require("path").join(__dirname, "..", "..");

module.exports = require("node-gyp-build")(root);

try {
  module.exports.xml.nodeTypeInfo = require("../../xml/src/node-types.json");
  module.exports.dtd.nodeTypeInfo = require("../../dtd/src/node-types.json");
} catch (_) { }
