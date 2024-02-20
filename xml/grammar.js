/**
 * @file Tree-sitter grammar definition for XML
 * @author ObserverOfTime
 * @license MIT
 */

const c = require('../common');

const DTD = require('../dtd/grammar');

const O = optional;

module.exports = grammar(DTD, {
  name: 'xml',

  externals: $ => [
    // DTD
    $.PITarget,
    $._pi_content,
    $.Comment,

    // XML
    $.CharData,
    $.CData,
    'xml-model',
    'xml-stylesheet',

    $._start_tag_name,
    $._end_tag_name,
    $._erroneous_end_name,
    '/>',
    $._implicit_end_tag,
  ],

  inline: $ => [
    $._extSubsetDecl,
    $.conditionalSect,
  ],

  rules: {
    document: $ => prec(2, seq(
      O($._S),
      O($.prolog),
      field('root', $.element),
      repeat($._Misc),
    )),

    prolog: $ => choice(
      seq(
        $.XMLDecl,
        repeat($._Misc),
      ),
      seq(
        O($.XMLDecl),
        repeat($._Misc),
        $.doctypedecl,
        repeat($._Misc),
      ),
      repeat1($._Misc)
    ),

    _Misc: $ => choice(
      $.PI,
      $.StyleSheetPI,
      $.XmlModelPI,
      $.Comment,
      $._S
    ),

    XMLDecl: $ => seq(
      '<?',
      'xml',
      $._VersionInfo,
      O($._EncodingDecl),
      O($._SDDecl),
      O($._S),
      '?>'
    ),

    _SDDecl: $ => seq(
      $._S,
      'standalone',
      $._Eq,
      c.str(choice('yes', 'no'))
    ),

    doctypedecl: $ => seq(
      '<!',
      'DOCTYPE',
      $._S,
      $.Name,
      O(seq($._S, $.ExternalID)),
      O($._S),
      O(seq(
        '[',
        $._intSubset,
        ']',
        O($._S)
      )),
      '>'
    ),

    _intSubset: $ => c.rseq1(
      O($._S),
      $._markupdecl,
      $._DeclSep
    ),

    element: $ => choice(
      $.EmptyElemTag,
      seq($.STag, O($.content), $.ETag)
    ),

    EmptyElemTag: $ => seq(
      '<',
      alias($._start_tag_name, $.Name),
      c.rseq($._S, $.Attribute),
      O($._S),
      '/>'
    ),

    Attribute: $ => seq($.Name, $._Eq, $.AttValue),

    STag: $ => seq(
      '<',
      alias($._start_tag_name, $.Name),
      c.rseq($._S, $.Attribute),
      O($._S),
      '>'
    ),

    ETag: $ => seq('</', alias($._end_tag_name, $.Name), O($._S), '>'),

    ErroneousETag: $ => seq(
      '</',
      alias($._erroneous_end_name, $.ErroneousName),
      O($._S),
      '>',
    ),

    content: $ => repeat1(
      choice(
        $.CharData,
        $.element,
        $._Reference,
        $.CDSect,
        $.PI,
        $.Comment
      )
    ),

    CDSect: $ => prec.left(
      seq($.CDStart, optional($.CData), ']]>')
    ),

    CDStart: _ => seq('<![', 'CDATA', '['),

    StyleSheetPI: $ => seq(
      '<?',
      'xml-stylesheet',
      c.rseq($._S, $.PseudoAtt),
      O($._S),
      '?>'
    ),

    XmlModelPI: $ => seq(
      '<?',
      'xml-model',
      c.rseq($._S, $.PseudoAtt),
      O($._S),
      '?>'
    ),

    PseudoAtt: $ => seq($.Name, $._Eq, $.PseudoAttValue),

    PseudoAttValue: $ => choice(
      c.att_value($, '"'),
      c.att_value($, "'")
    )
  }
});
