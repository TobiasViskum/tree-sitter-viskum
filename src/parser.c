#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 18
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 17
#define ALIAS_COUNT 0
#define TOKEN_COUNT 8
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_fn = 1,
  anon_sym_LPAREN = 2,
  anon_sym_RPAREN = 3,
  anon_sym_struct = 4,
  anon_sym_LBRACE = 5,
  anon_sym_RBRACE = 6,
  sym_ident = 7,
  sym_source = 8,
  sym__item = 9,
  sym_fn_item = 10,
  sym_fn_params = 11,
  sym_struct_item = 12,
  sym_block = 13,
  sym__stmt = 14,
  aux_sym_source_repeat1 = 15,
  aux_sym_block_repeat1 = 16,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_fn] = "fn",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_struct] = "struct",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_ident] = "ident",
  [sym_source] = "source",
  [sym__item] = "_item",
  [sym_fn_item] = "fn_item",
  [sym_fn_params] = "fn_params",
  [sym_struct_item] = "struct_item",
  [sym_block] = "block",
  [sym__stmt] = "_stmt",
  [aux_sym_source_repeat1] = "source_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_fn] = anon_sym_fn,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_struct] = anon_sym_struct,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_ident] = sym_ident,
  [sym_source] = sym_source,
  [sym__item] = sym__item,
  [sym_fn_item] = sym_fn_item,
  [sym_fn_params] = sym_fn_params,
  [sym_struct_item] = sym_struct_item,
  [sym_block] = sym_block,
  [sym__stmt] = sym__stmt,
  [aux_sym_source_repeat1] = aux_sym_source_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
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
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym__stmt] = {
    .visible = false,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(8);
      if (lookahead == '(') ADVANCE(10);
      if (lookahead == ')') ADVANCE(11);
      if (lookahead == 'f') ADVANCE(2);
      if (lookahead == 's') ADVANCE(4);
      if (lookahead == '{') ADVANCE(13);
      if (lookahead == '}') ADVANCE(14);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == 'c') ADVANCE(5);
      END_STATE();
    case 2:
      if (lookahead == 'n') ADVANCE(9);
      END_STATE();
    case 3:
      if (lookahead == 'r') ADVANCE(6);
      END_STATE();
    case 4:
      if (lookahead == 't') ADVANCE(3);
      END_STATE();
    case 5:
      if (lookahead == 't') ADVANCE(12);
      END_STATE();
    case 6:
      if (lookahead == 'u') ADVANCE(1);
      END_STATE();
    case 7:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_fn);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_ident);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
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
  [13] = {.lex_state = 7},
  [14] = {.lex_state = 7},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_fn] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_struct] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(15),
    [sym__item] = STATE(5),
    [sym_fn_item] = STATE(5),
    [sym_struct_item] = STATE(5),
    [aux_sym_source_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_fn] = ACTIONS(5),
    [anon_sym_struct] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(5), 1,
      anon_sym_fn,
    ACTIONS(7), 1,
      anon_sym_struct,
    ACTIONS(9), 1,
      anon_sym_RBRACE,
    STATE(3), 5,
      sym__item,
      sym_fn_item,
      sym_struct_item,
      sym__stmt,
      aux_sym_block_repeat1,
  [17] = 4,
    ACTIONS(5), 1,
      anon_sym_fn,
    ACTIONS(7), 1,
      anon_sym_struct,
    ACTIONS(11), 1,
      anon_sym_RBRACE,
    STATE(4), 5,
      sym__item,
      sym_fn_item,
      sym_struct_item,
      sym__stmt,
      aux_sym_block_repeat1,
  [34] = 4,
    ACTIONS(13), 1,
      anon_sym_fn,
    ACTIONS(16), 1,
      anon_sym_struct,
    ACTIONS(19), 1,
      anon_sym_RBRACE,
    STATE(4), 5,
      sym__item,
      sym_fn_item,
      sym_struct_item,
      sym__stmt,
      aux_sym_block_repeat1,
  [51] = 4,
    ACTIONS(5), 1,
      anon_sym_fn,
    ACTIONS(7), 1,
      anon_sym_struct,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    STATE(6), 4,
      sym__item,
      sym_fn_item,
      sym_struct_item,
      aux_sym_source_repeat1,
  [67] = 4,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(25), 1,
      anon_sym_fn,
    ACTIONS(28), 1,
      anon_sym_struct,
    STATE(6), 4,
      sym__item,
      sym_fn_item,
      sym_struct_item,
      aux_sym_source_repeat1,
  [83] = 1,
    ACTIONS(31), 4,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_struct,
      anon_sym_RBRACE,
  [90] = 1,
    ACTIONS(33), 4,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_struct,
      anon_sym_RBRACE,
  [97] = 1,
    ACTIONS(35), 4,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_struct,
      anon_sym_RBRACE,
  [104] = 1,
    ACTIONS(37), 4,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_struct,
      anon_sym_RBRACE,
  [111] = 2,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    STATE(12), 1,
      sym_fn_params,
  [118] = 2,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    STATE(8), 1,
      sym_block,
  [125] = 1,
    ACTIONS(43), 1,
      sym_ident,
  [129] = 1,
    ACTIONS(45), 1,
      sym_ident,
  [133] = 1,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
  [137] = 1,
    ACTIONS(49), 1,
      anon_sym_RPAREN,
  [141] = 1,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 17,
  [SMALL_STATE(4)] = 34,
  [SMALL_STATE(5)] = 51,
  [SMALL_STATE(6)] = 67,
  [SMALL_STATE(7)] = 83,
  [SMALL_STATE(8)] = 90,
  [SMALL_STATE(9)] = 97,
  [SMALL_STATE(10)] = 104,
  [SMALL_STATE(11)] = 111,
  [SMALL_STATE(12)] = 118,
  [SMALL_STATE(13)] = 125,
  [SMALL_STATE(14)] = 129,
  [SMALL_STATE(15)] = 133,
  [SMALL_STATE(16)] = 137,
  [SMALL_STATE(17)] = 141,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [13] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [16] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1, 0, 0),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_item, 2, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_item, 4, 0, 0),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, 0, 0),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [47] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_params, 2, 0, 0),
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
