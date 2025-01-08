#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 20
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 19
#define ALIAS_COUNT 0
#define TOKEN_COUNT 9
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 2

enum ts_symbol_identifiers {
  anon_sym_fn = 1,
  anon_sym_LPAREN = 2,
  anon_sym_RPAREN = 3,
  anon_sym_struct = 4,
  anon_sym_enum = 5,
  anon_sym_LBRACE = 6,
  anon_sym_RBRACE = 7,
  sym_ident = 8,
  sym_source = 9,
  sym__stmt = 10,
  sym__item = 11,
  sym_fn_item = 12,
  sym_fn_params = 13,
  sym_struct_item = 14,
  sym_enum_item = 15,
  sym_block = 16,
  aux_sym_source_repeat1 = 17,
  aux_sym_block_repeat1 = 18,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_fn] = "fn",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_struct] = "struct",
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
  [sym_enum_item] = "enum_item",
  [sym_block] = "block",
  [aux_sym_source_repeat1] = "source_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_fn] = anon_sym_fn,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_struct] = anon_sym_struct,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(11);
      if (lookahead == '(') ADVANCE(13);
      if (lookahead == ')') ADVANCE(14);
      if (lookahead == 'e') ADVANCE(3);
      if (lookahead == 'f') ADVANCE(4);
      if (lookahead == 's') ADVANCE(6);
      if (lookahead == '{') ADVANCE(17);
      if (lookahead == '}') ADVANCE(18);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == 'c') ADVANCE(7);
      END_STATE();
    case 2:
      if (lookahead == 'm') ADVANCE(16);
      END_STATE();
    case 3:
      if (lookahead == 'n') ADVANCE(8);
      END_STATE();
    case 4:
      if (lookahead == 'n') ADVANCE(12);
      END_STATE();
    case 5:
      if (lookahead == 'r') ADVANCE(9);
      END_STATE();
    case 6:
      if (lookahead == 't') ADVANCE(5);
      END_STATE();
    case 7:
      if (lookahead == 't') ADVANCE(15);
      END_STATE();
    case 8:
      if (lookahead == 'u') ADVANCE(2);
      END_STATE();
    case 9:
      if (lookahead == 'u') ADVANCE(1);
      END_STATE();
    case 10:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_fn);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_ident);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
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
  [14] = {.lex_state = 10},
  [15] = {.lex_state = 10},
  [16] = {.lex_state = 10},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_fn] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_struct] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(17),
    [sym__item] = STATE(5),
    [sym_fn_item] = STATE(5),
    [sym_struct_item] = STATE(5),
    [sym_enum_item] = STATE(5),
    [aux_sym_source_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_fn] = ACTIONS(5),
    [anon_sym_struct] = ACTIONS(7),
    [anon_sym_enum] = ACTIONS(9),
  },
  [2] = {
    [sym__stmt] = STATE(3),
    [sym__item] = STATE(3),
    [sym_fn_item] = STATE(3),
    [sym_struct_item] = STATE(3),
    [sym_enum_item] = STATE(3),
    [aux_sym_block_repeat1] = STATE(3),
    [anon_sym_fn] = ACTIONS(5),
    [anon_sym_struct] = ACTIONS(7),
    [anon_sym_enum] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(11),
  },
  [3] = {
    [sym__stmt] = STATE(4),
    [sym__item] = STATE(4),
    [sym_fn_item] = STATE(4),
    [sym_struct_item] = STATE(4),
    [sym_enum_item] = STATE(4),
    [aux_sym_block_repeat1] = STATE(4),
    [anon_sym_fn] = ACTIONS(5),
    [anon_sym_struct] = ACTIONS(7),
    [anon_sym_enum] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(13),
  },
  [4] = {
    [sym__stmt] = STATE(4),
    [sym__item] = STATE(4),
    [sym_fn_item] = STATE(4),
    [sym_struct_item] = STATE(4),
    [sym_enum_item] = STATE(4),
    [aux_sym_block_repeat1] = STATE(4),
    [anon_sym_fn] = ACTIONS(15),
    [anon_sym_struct] = ACTIONS(18),
    [anon_sym_enum] = ACTIONS(21),
    [anon_sym_RBRACE] = ACTIONS(24),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(5), 1,
      anon_sym_fn,
    ACTIONS(7), 1,
      anon_sym_struct,
    ACTIONS(9), 1,
      anon_sym_enum,
    ACTIONS(26), 1,
      ts_builtin_sym_end,
    STATE(6), 5,
      sym__item,
      sym_fn_item,
      sym_struct_item,
      sym_enum_item,
      aux_sym_source_repeat1,
  [20] = 5,
    ACTIONS(28), 1,
      ts_builtin_sym_end,
    ACTIONS(30), 1,
      anon_sym_fn,
    ACTIONS(33), 1,
      anon_sym_struct,
    ACTIONS(36), 1,
      anon_sym_enum,
    STATE(6), 5,
      sym__item,
      sym_fn_item,
      sym_struct_item,
      sym_enum_item,
      aux_sym_source_repeat1,
  [40] = 1,
    ACTIONS(39), 5,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_struct,
      anon_sym_enum,
      anon_sym_RBRACE,
  [48] = 1,
    ACTIONS(41), 5,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_struct,
      anon_sym_enum,
      anon_sym_RBRACE,
  [56] = 1,
    ACTIONS(43), 5,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_struct,
      anon_sym_enum,
      anon_sym_RBRACE,
  [64] = 1,
    ACTIONS(45), 5,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_struct,
      anon_sym_enum,
      anon_sym_RBRACE,
  [72] = 1,
    ACTIONS(47), 5,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_struct,
      anon_sym_enum,
      anon_sym_RBRACE,
  [80] = 2,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    STATE(13), 1,
      sym_fn_params,
  [87] = 2,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
    STATE(9), 1,
      sym_block,
  [94] = 1,
    ACTIONS(53), 1,
      sym_ident,
  [98] = 1,
    ACTIONS(55), 1,
      sym_ident,
  [102] = 1,
    ACTIONS(57), 1,
      sym_ident,
  [106] = 1,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
  [110] = 1,
    ACTIONS(61), 1,
      anon_sym_RPAREN,
  [114] = 1,
    ACTIONS(63), 1,
      anon_sym_LBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 20,
  [SMALL_STATE(7)] = 40,
  [SMALL_STATE(8)] = 48,
  [SMALL_STATE(9)] = 56,
  [SMALL_STATE(10)] = 64,
  [SMALL_STATE(11)] = 72,
  [SMALL_STATE(12)] = 80,
  [SMALL_STATE(13)] = 87,
  [SMALL_STATE(14)] = 94,
  [SMALL_STATE(15)] = 98,
  [SMALL_STATE(16)] = 102,
  [SMALL_STATE(17)] = 106,
  [SMALL_STATE(18)] = 110,
  [SMALL_STATE(19)] = 114,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [18] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1, 0, 0),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_item, 2, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_item, 2, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_item, 4, 0, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [59] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_params, 2, 0, 0),
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
