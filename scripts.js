/// <reference types="node"/>

const {execSync} = require('node:child_process');
const {join} = require('node:path');
const assert = require('node:assert/strict');

const generate = 'tree-sitter generate --no-bindings';

/** @param {'dtd'|'xml'} dir */
function build(dir) {
  process.chdir(join(__dirname, dir));
  execSync(generate, {stdio: 'inherit'});
}

function build_all() {
  console.log('building dtd...');
  build('dtd');
  console.log('building xml...');
  build('xml');
}

/** @param {'dtd'|'xml'} dir */
function playground(dir) {
  process.chdir(join(__dirname, dir));
  execSync('tree-sitter build-wasm', {stdio: 'inherit'});
  execSync('tree-sitter playground', {stdio: 'inherit'});
}

module.exports = {
  build,
  build_all,
  playground,
}
