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
    source: $ => repeat($._item),

    _stmt: $ => choice(
      $._item
    ),

    _item: $ => choice(
      $.fn_item,
      $.struct_item,
      $.enum_item
    ),

    fn_item: $ => seq(
      "fn",
      field("name", $.ident),
      $.fn_params,
      $.block
    ),
    fn_params: $ => seq(
      "(",
      ")"
    ),

    struct_item: $ => seq(
      "struct",
      $.ident,
    ),

    enum_item: $ => seq(
      "enum",
      $.ident
    ),

    block: $ => seq(
      "{",
      repeat($._stmt),
      "}"
    ),

    ident: $ => /[a-zA-Z]+/
  }
});
