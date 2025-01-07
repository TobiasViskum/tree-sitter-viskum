/**
 * @file The tree sitter parser for the Viskum language
 * @author Tobias Viskum <tobias.t.viskum@gmail.com>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "viskum",

  rules: {
    // TODO: add the actual grammar rules
    source_file: $ => repeat($._definition),

    _definition: $ => choice(
      $.function_definition
      // TODO: other kinds of definitions
    ),

    function_definition: $ => seq(
      'fn',
      $.ident
    ),

    ident: $ => /[(a-z)|(A-Z)]+/
  }
});
