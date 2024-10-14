/**
 * @file Tree-sitter grammar definition for DTD
 * @author ObserverOfTime
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

import * as c from '../common/common.mjs';

const O = optional;

export default grammar({
  name: 'dtd',

  externals: $ => [
    $.PITarget,
    $._pi_content,
    $.Comment,
  ],

  extras: _ => [],

  supertypes: $ => [
    $._markupdecl,
    $._AttType,
    $._EnumeratedType,
    $._EntityDecl,
    $._Reference,
  ],

  conflicts: $ => [
    [$.AttlistDecl, $.AttDef]
  ],

  word: $ => $.Name,

  rules: {
    extSubset: $ => seq(
      O($.TextDecl),
      repeat1($._extSubsetDecl)
    ),

    TextDecl: $ => seq(
      '<?',
      'xml',
      $._VersionInfo,
      O($._EncodingDecl),
      O($._S),
      '?>'
    ),

    _extSubsetDecl: $ => choice(
      $._markupdecl,
      $.conditionalSect,
      $._DeclSep
    ),

    conditionalSect: $ => seq(
      '<![',
      O($._S),
      c.ref($, 'IGNORE', 'INCLUDE'),
      O($._S),
      '[',
      repeat($._extSubsetDecl),
      ']]>'
    ),

    ...c.rules
  }
});
