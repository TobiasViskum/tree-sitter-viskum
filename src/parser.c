#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 22
#define LARGE_STATE_COUNT 7
#define SYMBOL_COUNT 24
#define ALIAS_COUNT 0
#define TOKEN_COUNT 13
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 2

enum ts_symbol_identifiers {
  anon_sym_ret = 1,
  anon_sym_break = 2,
  anon_sym_continue = 3,
  anon_sym_fn = 4,
  anon_sym_LPAREN = 5,
  anon_sym_RPAREN = 6,
  anon_sym_struct = 7,
  anon_sym_typedef = 8,
  anon_sym_enum = 9,
  anon_sym_LBRACE = 10,
  anon_sym_RBRACE = 11,
  sym_ident = 12,
  sym_source = 13,
  sym__stmt = 14,
  sym__item = 15,
  sym_fn_item = 16,
  sym_fn_params = 17,
  sym_struct_item = 18,
  sym_typedef_item = 19,
  sym_enum_item = 20,
  sym_block = 21,
  aux_sym_source_repeat1 = 22,
  aux_sym_block_repeat1 = 23,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_ret] = "ret",
  [anon_sym_break] = "break",
  [anon_sym_continue] = "continue",
  [anon_sym_fn] = "fn",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_struct] = "struct",
  [anon_sym_typedef] = "typedef",
  [anon_sym_enum] = "enum",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_ident] = "ident",
  [sym_source] = "source",
  [sym__stmt] = "_stmt",
  [sym__item] = "_item",
  [sym_fn_item] = "fn_item",
  [sym_fn_params] = "fn_params",
  [sym_struct_item] = "struct_item",
  [sym_typedef_item] = "typedef_item",
  [sym_enum_item] = "enum_item",
  [sym_block] = "block",
  [aux_sym_source_repeat1] = "source_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_ret] = anon_sym_ret,
  [anon_sym_break] = anon_sym_break,
  [anon_sym_continue] = anon_sym_continue,
  [anon_sym_fn] = anon_sym_fn,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_struct] = anon_sym_struct,
  [anon_sym_typedef] = anon_sym_typedef,
  [anon_sym_enum] = anon_sym_enum,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_ident] = sym_ident,
  [sym_source] = sym_source,
  [sym__stmt] = sym__stmt,
  [sym__item] = sym__item,
  [sym_fn_item] = sym_fn_item,
  [sym_fn_params] = sym_fn_params,
  [sym_struct_item] = sym_struct_item,
  [sym_typedef_item] = sym_typedef_item,
  [sym_enum_item] = sym_enum_item,
  [sym_block] = sym_block,
  [aux_sym_source_repeat1] = aux_sym_source_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_ret] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_break] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_continue] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_struct] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_typedef] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_ident] = {
    .visible = true,
    .named = true,
  },
  [sym_source] = {
    .visible = true,
    .named = true,
  },
  [sym__stmt] = {
    .visible = false,
    .named = true,
  },
  [sym__item] = {
    .visible = false,
    .named = true,
  },
  [sym_fn_item] = {
    .visible = true,
    .named = true,
  },
  [sym_fn_params] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_item] = {
    .visible = true,
    .named = true,
  },
  [sym_typedef_item] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_item] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_name = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_name] = "name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(30);
      ADVANCE_MAP(
        '(', 35,
        ')', 36,
        'b', 19,
        'c', 17,
        'e', 13,
        'f', 14,
        'r', 8,
        's', 24,
        't', 28,
        '{', 40,
        '}', 41,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == 'a') ADVANCE(11);
      END_STATE();
    case 2:
      if (lookahead == 'c') ADVANCE(23);
      END_STATE();
    case 3:
      if (lookahead == 'd') ADVANCE(6);
      END_STATE();
    case 4:
      if (lookahead == 'e') ADVANCE(1);
      END_STATE();
    case 5:
      if (lookahead == 'e') ADVANCE(3);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(9);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 9:
      if (lookahead == 'f') ADVANCE(38);
      END_STATE();
    case 10:
      if (lookahead == 'i') ADVANCE(16);
      END_STATE();
    case 11:
      if (lookahead == 'k') ADVANCE(32);
      END_STATE();
    case 12:
      if (lookahead == 'm') ADVANCE(39);
      END_STATE();
    case 13:
      if (lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 14:
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 15:
      if (lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 16:
      if (lookahead == 'n') ADVANCE(27);
      END_STATE();
    case 17:
      if (lookahead == 'o') ADVANCE(15);
      END_STATE();
    case 18:
      if (lookahead == 'p') ADVANCE(5);
      END_STATE();
    case 19:
      if (lookahead == 'r') ADVANCE(4);
      END_STATE();
    case 20:
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 21:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 22:
      if (lookahead == 't') ADVANCE(10);
      END_STATE();
    case 23:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 24:
      if (lookahead == 't') ADVANCE(20);
      END_STATE();
    case 25:
      if (lookahead == 'u') ADVANCE(12);
      END_STATE();
    case 26:
      if (lookahead == 'u') ADVANCE(2);
      END_STATE();
    case 27:
      if (lookahead == 'u') ADVANCE(7);
      END_STATE();
    case 28:
      if (lookahead == 'y') ADVANCE(18);
      END_STATE();
    case 29:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(29);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_ret);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_break);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_continue);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_fn);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_typedef);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_ident);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 29},
  [16] = {.lex_state = 29},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 29},
  [19] = {.lex_state = 29},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_ret] = ACTIONS(1),
    [anon_sym_break] = ACTIONS(1),
    [anon_sym_continue] = ACTIONS(1),
    [anon_sym_fn] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_struct] = ACTIONS(1),
    [anon_sym_typedef] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(17),
    [sym__item] = STATE(5),
    [sym_fn_item] = STATE(5),
    [sym_struct_item] = STATE(5),
    [sym_typedef_item] = STATE(5),
    [sym_enum_item] = STATE(5),
    [aux_sym_source_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_ret] = ACTIONS(5),
    [anon_sym_break] = ACTIONS(5),
    [anon_sym_continue] = ACTIONS(5),
    [anon_sym_fn] = ACTIONS(7),
    [anon_sym_struct] = ACTIONS(9),
    [anon_sym_typedef] = ACTIONS(11),
    [anon_sym_enum] = ACTIONS(13),
  },
  [2] = {
    [sym__stmt] = STATE(3),
    [sym__item] = STATE(3),
    [sym_fn_item] = STATE(3),
    [sym_struct_item] = STATE(3),
    [sym_typedef_item] = STATE(3),
    [sym_enum_item] = STATE(3),
    [aux_sym_block_repeat1] = STATE(3),
    [anon_sym_ret] = ACTIONS(15),
    [anon_sym_break] = ACTIONS(15),
    [anon_sym_continue] = ACTIONS(15),
    [anon_sym_fn] = ACTIONS(7),
    [anon_sym_struct] = ACTIONS(9),
    [anon_sym_typedef] = ACTIONS(11),
    [anon_sym_enum] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(17),
  },
  [3] = {
    [sym__stmt] = STATE(4),
    [sym__item] = STATE(4),
    [sym_fn_item] = STATE(4),
    [sym_struct_item] = STATE(4),
    [sym_typedef_item] = STATE(4),
    [sym_enum_item] = STATE(4),
    [aux_sym_block_repeat1] = STATE(4),
    [anon_sym_ret] = ACTIONS(19),
    [anon_sym_break] = ACTIONS(19),
    [anon_sym_continue] = ACTIONS(19),
    [anon_sym_fn] = ACTIONS(7),
    [anon_sym_struct] = ACTIONS(9),
    [anon_sym_typedef] = ACTIONS(11),
    [anon_sym_enum] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(21),
  },
  [4] = {
    [sym__stmt] = STATE(4),
    [sym__item] = STATE(4),
    [sym_fn_item] = STATE(4),
    [sym_struct_item] = STATE(4),
    [sym_typedef_item] = STATE(4),
    [sym_enum_item] = STATE(4),
    [aux_sym_block_repeat1] = STATE(4),
    [anon_sym_ret] = ACTIONS(23),
    [anon_sym_break] = ACTIONS(23),
    [anon_sym_continue] = ACTIONS(23),
    [anon_sym_fn] = ACTIONS(26),
    [anon_sym_struct] = ACTIONS(29),
    [anon_sym_typedef] = ACTIONS(32),
    [anon_sym_enum] = ACTIONS(35),
    [anon_sym_RBRACE] = ACTIONS(38),
  },
  [5] = {
    [sym__item] = STATE(6),
    [sym_fn_item] = STATE(6),
    [sym_struct_item] = STATE(6),
    [sym_typedef_item] = STATE(6),
    [sym_enum_item] = STATE(6),
    [aux_sym_source_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(40),
    [anon_sym_ret] = ACTIONS(42),
    [anon_sym_break] = ACTIONS(42),
    [anon_sym_continue] = ACTIONS(42),
    [anon_sym_fn] = ACTIONS(7),
    [anon_sym_struct] = ACTIONS(9),
    [anon_sym_typedef] = ACTIONS(11),
    [anon_sym_enum] = ACTIONS(13),
  },
  [6] = {
    [sym__item] = STATE(6),
    [sym_fn_item] = STATE(6),
    [sym_struct_item] = STATE(6),
    [sym_typedef_item] = STATE(6),
    [sym_enum_item] = STATE(6),
    [aux_sym_source_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(44),
    [anon_sym_ret] = ACTIONS(46),
    [anon_sym_break] = ACTIONS(46),
    [anon_sym_continue] = ACTIONS(46),
    [anon_sym_fn] = ACTIONS(49),
    [anon_sym_struct] = ACTIONS(52),
    [anon_sym_typedef] = ACTIONS(55),
    [anon_sym_enum] = ACTIONS(58),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(61), 9,
      ts_builtin_sym_end,
      anon_sym_ret,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_fn,
      anon_sym_struct,
      anon_sym_typedef,
      anon_sym_enum,
      anon_sym_RBRACE,
  [12] = 1,
    ACTIONS(63), 9,
      ts_builtin_sym_end,
      anon_sym_ret,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_fn,
      anon_sym_struct,
      anon_sym_typedef,
      anon_sym_enum,
      anon_sym_RBRACE,
  [24] = 1,
    ACTIONS(65), 9,
      ts_builtin_sym_end,
      anon_sym_ret,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_fn,
      anon_sym_struct,
      anon_sym_typedef,
      anon_sym_enum,
      anon_sym_RBRACE,
  [36] = 1,
    ACTIONS(67), 9,
      ts_builtin_sym_end,
      anon_sym_ret,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_fn,
      anon_sym_struct,
      anon_sym_typedef,
      anon_sym_enum,
      anon_sym_RBRACE,
  [48] = 1,
    ACTIONS(69), 9,
      ts_builtin_sym_end,
      anon_sym_ret,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_fn,
      anon_sym_struct,
      anon_sym_typedef,
      anon_sym_enum,
      anon_sym_RBRACE,
  [60] = 1,
    ACTIONS(71), 9,
      ts_builtin_sym_end,
      anon_sym_ret,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_fn,
      anon_sym_struct,
      anon_sym_typedef,
      anon_sym_enum,
      anon_sym_RBRACE,
  [72] = 2,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    STATE(14), 1,
      sym_fn_params,
  [79] = 2,
    ACTIONS(75), 1,
      anon_sym_LBRACE,
    STATE(9), 1,
      sym_block,
  [86] = 1,
    ACTIONS(77), 1,
      sym_ident,
  [90] = 1,
    ACTIONS(79), 1,
      sym_ident,
  [94] = 1,
    ACTIONS(81), 1,
      ts_builtin_sym_end,
  [98] = 1,
    ACTIONS(83), 1,
      sym_ident,
  [102] = 1,
    ACTIONS(85), 1,
      sym_ident,
  [106] = 1,
    ACTIONS(87), 1,
      anon_sym_RPAREN,
  [110] = 1,
    ACTIONS(89), 1,
      anon_sym_LBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(7)] = 0,
  [SMALL_STATE(8)] = 12,
  [SMALL_STATE(9)] = 24,
  [SMALL_STATE(10)] = 36,
  [SMALL_STATE(11)] = 48,
  [SMALL_STATE(12)] = 60,
  [SMALL_STATE(13)] = 72,
  [SMALL_STATE(14)] = 79,
  [SMALL_STATE(15)] = 86,
  [SMALL_STATE(16)] = 90,
  [SMALL_STATE(17)] = 94,
  [SMALL_STATE(18)] = 98,
  [SMALL_STATE(19)] = 102,
  [SMALL_STATE(20)] = 106,
  [SMALL_STATE(21)] = 110,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1, 0, 0),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_item, 2, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typedef_item, 2, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_item, 4, 0, 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_item, 2, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [81] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_params, 2, 0, 0),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_viskum(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
