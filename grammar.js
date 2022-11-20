/**
 * @file Tree-sitter grammar definition
 * @author ObserverOfTime
 * @license MIT
 * @see {@link https://github.com/rodrigopivi/Chatito/blob/master/spec.md|specification}
 */

/**
 * @param {any} $
 * @param {string} quote
 */
const __string = ($, quote) => seq(
  quote,
  field(
    'content',
    repeat(choice(
      new RegExp(`[^${quote}\\\n]`),
      $.escape
    ))
  ),
  quote
)

module.exports = grammar({
  name: 'chatito',

  extras: _ => [],

  supertypes: $ => [$._definition],

  rules: {
    source: $ => repeat(choice(
      $._definition,
      $.import,
      $.comment,
      prec(-2, $._eol)
    )),

    _definition: $ => choice(
      $.intent_def,
      $.slot_def,
      $.alias_def
    ),

    intent_def: $ => seq(
      '%[',
      alias(/[^\]?]+/, $.intent),
      ']',
      optional($._space),
      optional($.arguments),
      $._eol,
      $.intent_body
    ),

    slot_def: $ => seq(
      '@[',
      alias(/[^\]#?]+/, $.slot),
      optional($.variation),
      ']',
      optional($._space),
      optional($.arguments),
      $._eol,
      $.slot_body
    ),

    alias_def: $ => seq(
      '~[',
      alias(/[^\]?]+/, $.alias),
      ']',
      optional($._space),
      optional($.arguments),
      $._eol,
      $.alias_body
    ),

    import: $ => seq(
      'import',
      $._space,
      alias(/.+/, $.file),
      optional($._space),
      $._eol
    ),

    comment: $ => seq(/(\/\/|#).*/, $._eol),

    intent_body: $ => repeat1(seq(
      $._indent,
      optional($.probability),
      repeat1(choice(
        prec(1, $.slot_ref),
        prec(1, $.alias_ref),
        $._space,
        $.word
      )),
      $._eol
    )),

    slot_body: $ => repeat1(seq(
      $._indent,
      optional($.probability),
      repeat1(choice(
        prec(1, $.alias_ref),
        $._space,
        $.word
      )),
      $._eol
    )),

    alias_body: $ => repeat1(seq(
      $._indent,
      repeat1(choice(
        prec(1, $.slot_ref),
        prec(1, $.alias_ref),
        $._space,
        $.word
      )),
      $._eol
    )),

    slot_ref: $ => seq(
      '@[',
      alias(/[^\]#?]+/, $.slot),
      optional($.variation),
      optional('?'),
      ']',
    ),

    alias_ref: $ => seq(
      '~[',
      alias(/[^\]?]+/, $.alias),
      optional('?'),
      ']',
    ),

    word: _ => token(prec(-1, /\S+/)),

    variation: _ => seq(
      '#', field('id', /[^\]#?]+/)
    ),

    probability: $ => seq(
      '*[', $.number, optional('%'), ']'
    ),

    number: _ => /(0|[1-9][0-9]*)(\.[0-9]+)?/,

    arguments: $ => seq(
      '(',
      optional($._space),
      $.argument,
      repeat(seq(
        optional($._space),
        ',',
        optional($._space),
        $.argument
      )),
      optional($._space),
      ')'
    ),

    argument: $ => seq(
      field('key', $.string),
      optional($._space),
      ':',
      optional($._space),
      field('value', $.string)
    ),

    string: $ => choice(
      __string($, '"'),
      __string($, "'")
    ),

    escape: _ => token(choice(
      /\\['"\\bfnrtv]/,
      /\\u[0-9a-fA-F]{4}/
    )),

    _eol: _ => /\r?\n/,

    _indent: _ => '    ',

    _space: _ => token(prec(-1, /[ ]+/))
  }
});
