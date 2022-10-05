#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 55
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 50
#define ALIAS_COUNT 0
#define TOKEN_COUNT 33
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 2

enum {
  aux_sym_source_token1 = 1,
  anon_sym_GTdiff = 2,
  anon_sym_DASH_DASHgit = 3,
  aux_sym_file_change_token1 = 4,
  anon_sym_file = 5,
  anon_sym_mode = 6,
  anon_sym_from = 7,
  anon_sym_to = 8,
  anon_sym_GTBinary = 9,
  anon_sym_files = 10,
  anon_sym_and = 11,
  anon_sym_differ = 12,
  anon_sym_GTindex = 13,
  anon_sym_DOT_DOT = 14,
  anon_sym_GTsimilarity = 15,
  anon_sym_index = 16,
  aux_sym_similarity_token1 = 17,
  anon_sym_PERCENT = 18,
  anon_sym_GT_DASH_DASH_DASH = 19,
  anon_sym_GT_PLUS_PLUS_PLUS = 20,
  anon_sym_GT_AT_AT = 21,
  anon_sym_AT_AT = 22,
  aux_sym_location_token1 = 23,
  anon_sym_GT_PLUS = 24,
  anon_sym_GT_DASH = 25,
  anon_sym_GT_DASH_DASH = 26,
  anon_sym_GT_DASH_DASH_DASH_DASH = 27,
  anon_sym_GT = 28,
  aux_sym_context_token1 = 29,
  sym_linerange = 30,
  aux_sym_filename_token1 = 31,
  sym_commit = 32,
  sym_source = 33,
  sym__line = 34,
  sym_command = 35,
  sym_file_change = 36,
  sym_binary_change = 37,
  sym_index = 38,
  sym_similarity = 39,
  sym_old_file = 40,
  sym_new_file = 41,
  sym_location = 42,
  sym_addition = 43,
  sym_deletion = 44,
  sym_context = 45,
  sym_filename = 46,
  sym_mode = 47,
  aux_sym_source_repeat1 = 48,
  aux_sym_filename_repeat1 = 49,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_source_token1] = "source_token1",
  [anon_sym_GTdiff] = "> diff",
  [anon_sym_DASH_DASHgit] = "--git",
  [aux_sym_file_change_token1] = "file_change_token1",
  [anon_sym_file] = "file",
  [anon_sym_mode] = "mode",
  [anon_sym_from] = "from",
  [anon_sym_to] = "to",
  [anon_sym_GTBinary] = "> Binary",
  [anon_sym_files] = "files",
  [anon_sym_and] = "and",
  [anon_sym_differ] = "differ",
  [anon_sym_GTindex] = "> index",
  [anon_sym_DOT_DOT] = "..",
  [anon_sym_GTsimilarity] = "> similarity",
  [anon_sym_index] = "index",
  [aux_sym_similarity_token1] = "similarity_token1",
  [anon_sym_PERCENT] = "%",
  [anon_sym_GT_DASH_DASH_DASH] = "> ---",
  [anon_sym_GT_PLUS_PLUS_PLUS] = "> +++",
  [anon_sym_GT_AT_AT] = "> @@",
  [anon_sym_AT_AT] = "@@",
  [aux_sym_location_token1] = "location_token1",
  [anon_sym_GT_PLUS] = "> +",
  [anon_sym_GT_DASH] = "> -",
  [anon_sym_GT_DASH_DASH] = "> --",
  [anon_sym_GT_DASH_DASH_DASH_DASH] = "> ----",
  [anon_sym_GT] = "> ",
  [aux_sym_context_token1] = "context_token1",
  [sym_linerange] = "linerange",
  [aux_sym_filename_token1] = "filename_token1",
  [sym_commit] = "commit",
  [sym_source] = "source",
  [sym__line] = "_line",
  [sym_command] = "command",
  [sym_file_change] = "file_change",
  [sym_binary_change] = "binary_change",
  [sym_index] = "index",
  [sym_similarity] = "similarity",
  [sym_old_file] = "old_file",
  [sym_new_file] = "new_file",
  [sym_location] = "location",
  [sym_addition] = "addition",
  [sym_deletion] = "deletion",
  [sym_context] = "context",
  [sym_filename] = "filename",
  [sym_mode] = "mode",
  [aux_sym_source_repeat1] = "source_repeat1",
  [aux_sym_filename_repeat1] = "filename_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_source_token1] = aux_sym_source_token1,
  [anon_sym_GTdiff] = anon_sym_GTdiff,
  [anon_sym_DASH_DASHgit] = anon_sym_DASH_DASHgit,
  [aux_sym_file_change_token1] = aux_sym_file_change_token1,
  [anon_sym_file] = anon_sym_file,
  [anon_sym_mode] = anon_sym_mode,
  [anon_sym_from] = anon_sym_from,
  [anon_sym_to] = anon_sym_to,
  [anon_sym_GTBinary] = anon_sym_GTBinary,
  [anon_sym_files] = anon_sym_files,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_differ] = anon_sym_differ,
  [anon_sym_GTindex] = anon_sym_GTindex,
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
  [anon_sym_GTsimilarity] = anon_sym_GTsimilarity,
  [anon_sym_index] = anon_sym_index,
  [aux_sym_similarity_token1] = aux_sym_similarity_token1,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_GT_DASH_DASH_DASH] = anon_sym_GT_DASH_DASH_DASH,
  [anon_sym_GT_PLUS_PLUS_PLUS] = anon_sym_GT_PLUS_PLUS_PLUS,
  [anon_sym_GT_AT_AT] = anon_sym_GT_AT_AT,
  [anon_sym_AT_AT] = anon_sym_AT_AT,
  [aux_sym_location_token1] = aux_sym_location_token1,
  [anon_sym_GT_PLUS] = anon_sym_GT_PLUS,
  [anon_sym_GT_DASH] = anon_sym_GT_DASH,
  [anon_sym_GT_DASH_DASH] = anon_sym_GT_DASH_DASH,
  [anon_sym_GT_DASH_DASH_DASH_DASH] = anon_sym_GT_DASH_DASH_DASH_DASH,
  [anon_sym_GT] = anon_sym_GT,
  [aux_sym_context_token1] = aux_sym_context_token1,
  [sym_linerange] = sym_linerange,
  [aux_sym_filename_token1] = aux_sym_filename_token1,
  [sym_commit] = sym_commit,
  [sym_source] = sym_source,
  [sym__line] = sym__line,
  [sym_command] = sym_command,
  [sym_file_change] = sym_file_change,
  [sym_binary_change] = sym_binary_change,
  [sym_index] = sym_index,
  [sym_similarity] = sym_similarity,
  [sym_old_file] = sym_old_file,
  [sym_new_file] = sym_new_file,
  [sym_location] = sym_location,
  [sym_addition] = sym_addition,
  [sym_deletion] = sym_deletion,
  [sym_context] = sym_context,
  [sym_filename] = sym_filename,
  [sym_mode] = sym_mode,
  [aux_sym_source_repeat1] = aux_sym_source_repeat1,
  [aux_sym_filename_repeat1] = aux_sym_filename_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_GTdiff] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASHgit] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_file_change_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_file] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mode] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_from] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_to] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GTBinary] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_files] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_differ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GTindex] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GTsimilarity] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_index] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_similarity_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_DASH_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_PLUS_PLUS_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_AT_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT_AT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_location_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_GT_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_DASH_DASH_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_context_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_linerange] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_filename_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_commit] = {
    .visible = true,
    .named = true,
  },
  [sym_source] = {
    .visible = true,
    .named = true,
  },
  [sym__line] = {
    .visible = false,
    .named = true,
  },
  [sym_command] = {
    .visible = true,
    .named = true,
  },
  [sym_file_change] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_change] = {
    .visible = true,
    .named = true,
  },
  [sym_index] = {
    .visible = true,
    .named = true,
  },
  [sym_similarity] = {
    .visible = true,
    .named = true,
  },
  [sym_old_file] = {
    .visible = true,
    .named = true,
  },
  [sym_new_file] = {
    .visible = true,
    .named = true,
  },
  [sym_location] = {
    .visible = true,
    .named = true,
  },
  [sym_addition] = {
    .visible = true,
    .named = true,
  },
  [sym_deletion] = {
    .visible = true,
    .named = true,
  },
  [sym_context] = {
    .visible = true,
    .named = true,
  },
  [sym_filename] = {
    .visible = true,
    .named = true,
  },
  [sym_mode] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_filename_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_score = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_score] = "score",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_score, 2},
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
  [9] = 8,
  [10] = 10,
  [11] = 11,
  [12] = 8,
  [13] = 13,
  [14] = 14,
  [15] = 7,
  [16] = 16,
  [17] = 7,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(87);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '%') ADVANCE(147);
      if (lookahead == '+') ADVANCE(75);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '.') ADVANCE(5);
      if (lookahead == '>') ADVANCE(2);
      if (lookahead == '@') ADVANCE(6);
      if (lookahead == 'a') ADVANCE(54);
      if (lookahead == 'd') ADVANCE(37);
      if (lookahead == 'f') ADVANCE(38);
      if (lookahead == 'i') ADVANCE(56);
      if (lookahead == 'm') ADVANCE(61);
      if (lookahead == 't') ADVANCE(59);
      if (('b' <= lookahead && lookahead <= 'e')) ADVANCE(82);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(83)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(88);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(158);
      END_STATE();
    case 3:
      if (lookahead == '+') ADVANCE(149);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(161);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(104);
      END_STATE();
    case 6:
      if (lookahead == '@') ADVANCE(151);
      END_STATE();
    case 7:
      if (lookahead == '@') ADVANCE(150);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(8)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(163);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(173);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(63);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(53);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(64);
      END_STATE();
    case 12:
      if (lookahead == 'd') ADVANCE(99);
      END_STATE();
    case 13:
      if (lookahead == 'd') ADVANCE(91);
      END_STATE();
    case 14:
      if (lookahead == 'd') ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(14)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(165);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(173);
      END_STATE();
    case 15:
      if (lookahead == 'd') ADVANCE(20);
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(21);
      END_STATE();
    case 17:
      if (lookahead == 'd') ADVANCE(27);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(47);
      if (lookahead == 'i') ADVANCE(34);
      END_STATE();
    case 31:
      if (lookahead == 'f') ADVANCE(89);
      END_STATE();
    case 32:
      if (lookahead == 'f') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(32)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(82);
      END_STATE();
    case 33:
      if (lookahead == 'f') ADVANCE(35);
      END_STATE();
    case 34:
      if (lookahead == 'f') ADVANCE(31);
      END_STATE();
    case 35:
      if (lookahead == 'f') ADVANCE(23);
      END_STATE();
    case 36:
      if (lookahead == 'g') ADVANCE(39);
      END_STATE();
    case 37:
      if (lookahead == 'i') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(81);
      END_STATE();
    case 38:
      if (lookahead == 'i') ADVANCE(46);
      if (lookahead == 'r') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(81);
      END_STATE();
    case 39:
      if (lookahead == 'i') ADVANCE(66);
      END_STATE();
    case 40:
      if (lookahead == 'i') ADVANCE(55);
      END_STATE();
    case 41:
      if (lookahead == 'i') ADVANCE(50);
      END_STATE();
    case 42:
      if (lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 43:
      if (lookahead == 'i') ADVANCE(67);
      END_STATE();
    case 44:
      if (lookahead == 'i') ADVANCE(48);
      if (lookahead == 'r') ADVANCE(60);
      END_STATE();
    case 45:
      if (lookahead == 'i') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(81);
      END_STATE();
    case 46:
      if (lookahead == 'l') ADVANCE(19);
      END_STATE();
    case 47:
      if (lookahead == 'l') ADVANCE(26);
      END_STATE();
    case 48:
      if (lookahead == 'l') ADVANCE(24);
      END_STATE();
    case 49:
      if (lookahead == 'l') ADVANCE(25);
      END_STATE();
    case 50:
      if (lookahead == 'l') ADVANCE(11);
      END_STATE();
    case 51:
      if (lookahead == 'm') ADVANCE(95);
      END_STATE();
    case 52:
      if (lookahead == 'm') ADVANCE(41);
      END_STATE();
    case 53:
      if (lookahead == 'm') ADVANCE(22);
      END_STATE();
    case 54:
      if (lookahead == 'n') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(81);
      END_STATE();
    case 55:
      if (lookahead == 'n') ADVANCE(9);
      END_STATE();
    case 56:
      if (lookahead == 'n') ADVANCE(15);
      END_STATE();
    case 57:
      if (lookahead == 'n') ADVANCE(10);
      END_STATE();
    case 58:
      if (lookahead == 'n') ADVANCE(17);
      END_STATE();
    case 59:
      if (lookahead == 'o') ADVANCE(96);
      END_STATE();
    case 60:
      if (lookahead == 'o') ADVANCE(51);
      END_STATE();
    case 61:
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 62:
      if (lookahead == 'r') ADVANCE(101);
      END_STATE();
    case 63:
      if (lookahead == 'r') ADVANCE(72);
      END_STATE();
    case 64:
      if (lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 65:
      if (lookahead == 's') ADVANCE(98);
      END_STATE();
    case 66:
      if (lookahead == 't') ADVANCE(90);
      END_STATE();
    case 67:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 68:
      if (lookahead == 't') ADVANCE(29);
      END_STATE();
    case 69:
      if (lookahead == 'w') ADVANCE(91);
      END_STATE();
    case 70:
      if (lookahead == 'x') ADVANCE(106);
      END_STATE();
    case 71:
      if (lookahead == 'x') ADVANCE(103);
      END_STATE();
    case 72:
      if (lookahead == 'y') ADVANCE(97);
      END_STATE();
    case 73:
      if (lookahead == 'y') ADVANCE(105);
      END_STATE();
    case 74:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(159);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(160);
      END_STATE();
    case 75:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(161);
      END_STATE();
    case 76:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(162);
      END_STATE();
    case 77:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(207);
      END_STATE();
    case 78:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(77);
      END_STATE();
    case 79:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(78);
      END_STATE();
    case 80:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(79);
      END_STATE();
    case 81:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(80);
      END_STATE();
    case 82:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(81);
      END_STATE();
    case 83:
      if (eof) ADVANCE(87);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '%') ADVANCE(147);
      if (lookahead == '+') ADVANCE(75);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '.') ADVANCE(5);
      if (lookahead == '@') ADVANCE(6);
      if (lookahead == 'a') ADVANCE(54);
      if (lookahead == 'd') ADVANCE(37);
      if (lookahead == 'f') ADVANCE(38);
      if (lookahead == 'i') ADVANCE(56);
      if (lookahead == 'm') ADVANCE(61);
      if (lookahead == 't') ADVANCE(59);
      if (('b' <= lookahead && lookahead <= 'e')) ADVANCE(82);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(83)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      END_STATE();
    case 84:
      if (eof) ADVANCE(87);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'f') ADVANCE(44);
      if (lookahead == 't') ADVANCE(59);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(84)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(146);
      END_STATE();
    case 85:
      if (eof) ADVANCE(87);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(85)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(172);
      if (lookahead != 0) ADVANCE(173);
      END_STATE();
    case 86:
      if (eof) ADVANCE(87);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '\r') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(152);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_source_token1);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_GTdiff);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_DASH_DASHgit);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_file_change_token1);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_file);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_file);
      if (lookahead == 's') ADVANCE(98);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_mode);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_GTBinary);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_files);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_and);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(173);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_differ);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_differ);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(173);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_GTindex);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_GTsimilarity);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_index);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(146);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(111);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(118);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(119);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(125);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(126);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(131);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(132);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(136);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(139);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(141);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(143);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(146);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_GT_DASH_DASH_DASH);
      if (lookahead == '-') ADVANCE(157);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_GT_PLUS_PLUS_PLUS);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_GT_AT_AT);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_location_token1);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(152);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(153);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_location_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(153);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_GT_PLUS);
      if (lookahead == '+') ADVANCE(3);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_GT_DASH);
      if (lookahead == '-') ADVANCE(156);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_GT_DASH_DASH);
      if (lookahead == '-') ADVANCE(148);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_GT_DASH_DASH_DASH_DASH);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '+') ADVANCE(154);
      if (lookahead == '-') ADVANCE(155);
      if (lookahead == '@') ADVANCE(7);
      if (lookahead == 'B') ADVANCE(40);
      if (lookahead == 'd') ADVANCE(30);
      if (lookahead == 'i') ADVANCE(58);
      if (lookahead == 'n') ADVANCE(18);
      if (lookahead == 'r') ADVANCE(28);
      if (lookahead == 's') ADVANCE(42);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_context_token1);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(159);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(160);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_context_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(160);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_linerange);
      if (lookahead == ',') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(161);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_linerange);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(162);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == 'a') ADVANCE(170);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(163);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(173);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == 'd') ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(173);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == 'd') ADVANCE(169);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(165);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(173);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == 'e') ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(173);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == 'f') ADVANCE(166);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(173);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == 'f') ADVANCE(167);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(173);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == 'i') ADVANCE(168);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(173);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == 'n') ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(173);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == 'r') ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(173);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(172);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(173);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(173);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_commit);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(174);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(175);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(176);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(177);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(178);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(179);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(180);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(181);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(182);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(183);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(184);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(185);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(186);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(187);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(188);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(189);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(190);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(191);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(192);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(193);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(194);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(195);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(196);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(197);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(198);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(199);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(200);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(201);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(202);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(203);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(204);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(205);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(206);
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
  [5] = {.lex_state = 85},
  [6] = {.lex_state = 84},
  [7] = {.lex_state = 85},
  [8] = {.lex_state = 85},
  [9] = {.lex_state = 8},
  [10] = {.lex_state = 86},
  [11] = {.lex_state = 86},
  [12] = {.lex_state = 14},
  [13] = {.lex_state = 85},
  [14] = {.lex_state = 85},
  [15] = {.lex_state = 8},
  [16] = {.lex_state = 85},
  [17] = {.lex_state = 14},
  [18] = {.lex_state = 85},
  [19] = {.lex_state = 85},
  [20] = {.lex_state = 86},
  [21] = {.lex_state = 84},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 84},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 74},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 32},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 84},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 32},
  [54] = {.lex_state = 32},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_source_token1] = ACTIONS(1),
    [anon_sym_GTdiff] = ACTIONS(1),
    [anon_sym_DASH_DASHgit] = ACTIONS(1),
    [aux_sym_file_change_token1] = ACTIONS(1),
    [anon_sym_file] = ACTIONS(1),
    [anon_sym_mode] = ACTIONS(1),
    [anon_sym_from] = ACTIONS(1),
    [anon_sym_to] = ACTIONS(1),
    [anon_sym_GTBinary] = ACTIONS(1),
    [anon_sym_files] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_differ] = ACTIONS(1),
    [anon_sym_GTindex] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [anon_sym_GTsimilarity] = ACTIONS(1),
    [anon_sym_index] = ACTIONS(1),
    [aux_sym_similarity_token1] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_GT_DASH_DASH_DASH] = ACTIONS(1),
    [anon_sym_GT_PLUS_PLUS_PLUS] = ACTIONS(1),
    [anon_sym_GT_AT_AT] = ACTIONS(1),
    [anon_sym_AT_AT] = ACTIONS(1),
    [anon_sym_GT_PLUS] = ACTIONS(1),
    [anon_sym_GT_DASH] = ACTIONS(1),
    [anon_sym_GT_DASH_DASH] = ACTIONS(1),
    [anon_sym_GT_DASH_DASH_DASH_DASH] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [sym_linerange] = ACTIONS(1),
    [sym_commit] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(50),
    [sym__line] = STATE(35),
    [sym_command] = STATE(35),
    [sym_file_change] = STATE(35),
    [sym_binary_change] = STATE(35),
    [sym_index] = STATE(35),
    [sym_similarity] = STATE(35),
    [sym_old_file] = STATE(35),
    [sym_new_file] = STATE(35),
    [sym_location] = STATE(35),
    [sym_addition] = STATE(35),
    [sym_deletion] = STATE(35),
    [sym_context] = STATE(35),
    [aux_sym_source_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_source_token1] = ACTIONS(5),
    [anon_sym_GTdiff] = ACTIONS(7),
    [aux_sym_file_change_token1] = ACTIONS(9),
    [anon_sym_GTBinary] = ACTIONS(11),
    [anon_sym_GTindex] = ACTIONS(13),
    [anon_sym_GTsimilarity] = ACTIONS(15),
    [anon_sym_GT_DASH_DASH_DASH] = ACTIONS(17),
    [anon_sym_GT_PLUS_PLUS_PLUS] = ACTIONS(19),
    [anon_sym_GT_AT_AT] = ACTIONS(21),
    [anon_sym_GT_PLUS] = ACTIONS(23),
    [anon_sym_GT_DASH] = ACTIONS(25),
    [anon_sym_GT_DASH_DASH] = ACTIONS(25),
    [anon_sym_GT_DASH_DASH_DASH_DASH] = ACTIONS(27),
    [anon_sym_GT] = ACTIONS(29),
  },
  [2] = {
    [sym__line] = STATE(30),
    [sym_command] = STATE(30),
    [sym_file_change] = STATE(30),
    [sym_binary_change] = STATE(30),
    [sym_index] = STATE(30),
    [sym_similarity] = STATE(30),
    [sym_old_file] = STATE(30),
    [sym_new_file] = STATE(30),
    [sym_location] = STATE(30),
    [sym_addition] = STATE(30),
    [sym_deletion] = STATE(30),
    [sym_context] = STATE(30),
    [aux_sym_source_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(31),
    [aux_sym_source_token1] = ACTIONS(33),
    [anon_sym_GTdiff] = ACTIONS(7),
    [aux_sym_file_change_token1] = ACTIONS(9),
    [anon_sym_GTBinary] = ACTIONS(11),
    [anon_sym_GTindex] = ACTIONS(13),
    [anon_sym_GTsimilarity] = ACTIONS(15),
    [anon_sym_GT_DASH_DASH_DASH] = ACTIONS(17),
    [anon_sym_GT_PLUS_PLUS_PLUS] = ACTIONS(19),
    [anon_sym_GT_AT_AT] = ACTIONS(21),
    [anon_sym_GT_PLUS] = ACTIONS(23),
    [anon_sym_GT_DASH] = ACTIONS(25),
    [anon_sym_GT_DASH_DASH] = ACTIONS(25),
    [anon_sym_GT_DASH_DASH_DASH_DASH] = ACTIONS(27),
    [anon_sym_GT] = ACTIONS(29),
  },
  [3] = {
    [sym__line] = STATE(40),
    [sym_command] = STATE(40),
    [sym_file_change] = STATE(40),
    [sym_binary_change] = STATE(40),
    [sym_index] = STATE(40),
    [sym_similarity] = STATE(40),
    [sym_old_file] = STATE(40),
    [sym_new_file] = STATE(40),
    [sym_location] = STATE(40),
    [sym_addition] = STATE(40),
    [sym_deletion] = STATE(40),
    [sym_context] = STATE(40),
    [aux_sym_source_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(35),
    [aux_sym_source_token1] = ACTIONS(37),
    [anon_sym_GTdiff] = ACTIONS(40),
    [aux_sym_file_change_token1] = ACTIONS(43),
    [anon_sym_GTBinary] = ACTIONS(46),
    [anon_sym_GTindex] = ACTIONS(49),
    [anon_sym_GTsimilarity] = ACTIONS(52),
    [anon_sym_GT_DASH_DASH_DASH] = ACTIONS(55),
    [anon_sym_GT_PLUS_PLUS_PLUS] = ACTIONS(58),
    [anon_sym_GT_AT_AT] = ACTIONS(61),
    [anon_sym_GT_PLUS] = ACTIONS(64),
    [anon_sym_GT_DASH] = ACTIONS(67),
    [anon_sym_GT_DASH_DASH] = ACTIONS(67),
    [anon_sym_GT_DASH_DASH_DASH_DASH] = ACTIONS(70),
    [anon_sym_GT] = ACTIONS(73),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(76), 5,
      anon_sym_GT_DASH_DASH_DASH,
      anon_sym_GT_PLUS,
      anon_sym_GT_DASH,
      anon_sym_GT_DASH_DASH,
      anon_sym_GT,
    ACTIONS(35), 10,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      anon_sym_GTdiff,
      aux_sym_file_change_token1,
      anon_sym_GTBinary,
      anon_sym_GTindex,
      anon_sym_GTsimilarity,
      anon_sym_GT_PLUS_PLUS_PLUS,
      anon_sym_GT_AT_AT,
      anon_sym_GT_DASH_DASH_DASH_DASH,
  [20] = 5,
    ACTIONS(78), 1,
      ts_builtin_sym_end,
    ACTIONS(80), 1,
      aux_sym_source_token1,
    ACTIONS(82), 1,
      aux_sym_filename_token1,
    STATE(7), 1,
      aux_sym_filename_repeat1,
    STATE(23), 1,
      sym_filename,
  [36] = 3,
    ACTIONS(86), 1,
      aux_sym_similarity_token1,
    STATE(31), 1,
      sym_mode,
    ACTIONS(84), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [47] = 4,
    ACTIONS(88), 1,
      ts_builtin_sym_end,
    ACTIONS(90), 1,
      aux_sym_source_token1,
    ACTIONS(92), 1,
      aux_sym_filename_token1,
    STATE(8), 1,
      aux_sym_filename_repeat1,
  [60] = 4,
    ACTIONS(94), 1,
      ts_builtin_sym_end,
    ACTIONS(96), 1,
      aux_sym_source_token1,
    ACTIONS(98), 1,
      aux_sym_filename_token1,
    STATE(8), 1,
      aux_sym_filename_repeat1,
  [73] = 3,
    ACTIONS(96), 1,
      anon_sym_and,
    ACTIONS(101), 1,
      aux_sym_filename_token1,
    STATE(9), 1,
      aux_sym_filename_repeat1,
  [83] = 3,
    ACTIONS(104), 1,
      ts_builtin_sym_end,
    ACTIONS(106), 1,
      aux_sym_source_token1,
    ACTIONS(108), 1,
      aux_sym_location_token1,
  [93] = 3,
    ACTIONS(78), 1,
      ts_builtin_sym_end,
    ACTIONS(80), 1,
      aux_sym_source_token1,
    ACTIONS(110), 1,
      aux_sym_location_token1,
  [103] = 3,
    ACTIONS(96), 1,
      anon_sym_differ,
    ACTIONS(112), 1,
      aux_sym_filename_token1,
    STATE(12), 1,
      aux_sym_filename_repeat1,
  [113] = 3,
    ACTIONS(115), 1,
      aux_sym_filename_token1,
    STATE(17), 1,
      aux_sym_filename_repeat1,
    STATE(47), 1,
      sym_filename,
  [123] = 3,
    ACTIONS(82), 1,
      aux_sym_filename_token1,
    STATE(7), 1,
      aux_sym_filename_repeat1,
    STATE(24), 1,
      sym_filename,
  [133] = 3,
    ACTIONS(90), 1,
      anon_sym_and,
    ACTIONS(117), 1,
      aux_sym_filename_token1,
    STATE(9), 1,
      aux_sym_filename_repeat1,
  [143] = 3,
    ACTIONS(82), 1,
      aux_sym_filename_token1,
    STATE(7), 1,
      aux_sym_filename_repeat1,
    STATE(32), 1,
      sym_filename,
  [153] = 3,
    ACTIONS(90), 1,
      anon_sym_differ,
    ACTIONS(119), 1,
      aux_sym_filename_token1,
    STATE(12), 1,
      aux_sym_filename_repeat1,
  [163] = 3,
    ACTIONS(82), 1,
      aux_sym_filename_token1,
    STATE(7), 1,
      aux_sym_filename_repeat1,
    STATE(34), 1,
      sym_filename,
  [173] = 3,
    ACTIONS(121), 1,
      aux_sym_filename_token1,
    STATE(15), 1,
      aux_sym_filename_repeat1,
    STATE(43), 1,
      sym_filename,
  [183] = 3,
    ACTIONS(123), 1,
      ts_builtin_sym_end,
    ACTIONS(125), 1,
      aux_sym_source_token1,
    ACTIONS(127), 1,
      aux_sym_location_token1,
  [193] = 2,
    ACTIONS(129), 1,
      anon_sym_file,
    ACTIONS(131), 2,
      anon_sym_from,
      anon_sym_to,
  [201] = 1,
    ACTIONS(133), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [206] = 1,
    ACTIONS(135), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [211] = 1,
    ACTIONS(137), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [216] = 1,
    ACTIONS(139), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [221] = 1,
    ACTIONS(141), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [226] = 1,
    ACTIONS(143), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [231] = 1,
    ACTIONS(145), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [236] = 1,
    ACTIONS(147), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [241] = 2,
    ACTIONS(149), 1,
      ts_builtin_sym_end,
    ACTIONS(151), 1,
      aux_sym_source_token1,
  [248] = 1,
    ACTIONS(153), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [253] = 1,
    ACTIONS(155), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [258] = 2,
    ACTIONS(86), 1,
      aux_sym_similarity_token1,
    STATE(37), 1,
      sym_mode,
  [265] = 1,
    ACTIONS(157), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [270] = 2,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(151), 1,
      aux_sym_source_token1,
  [277] = 1,
    ACTIONS(159), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [282] = 1,
    ACTIONS(161), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [287] = 1,
    ACTIONS(163), 1,
      aux_sym_context_token1,
  [291] = 1,
    ACTIONS(165), 1,
      anon_sym_AT_AT,
  [295] = 1,
    ACTIONS(151), 1,
      aux_sym_source_token1,
  [299] = 1,
    ACTIONS(167), 1,
      sym_commit,
  [303] = 1,
    ACTIONS(169), 1,
      anon_sym_PERCENT,
  [307] = 1,
    ACTIONS(171), 1,
      anon_sym_and,
  [311] = 1,
    ACTIONS(173), 1,
      anon_sym_DASH_DASHgit,
  [315] = 1,
    ACTIONS(175), 1,
      sym_linerange,
  [319] = 1,
    ACTIONS(177), 1,
      aux_sym_similarity_token1,
  [323] = 1,
    ACTIONS(179), 1,
      anon_sym_differ,
  [327] = 1,
    ACTIONS(181), 1,
      anon_sym_DOT_DOT,
  [331] = 1,
    ACTIONS(183), 1,
      anon_sym_mode,
  [335] = 1,
    ACTIONS(185), 1,
      ts_builtin_sym_end,
  [339] = 1,
    ACTIONS(187), 1,
      sym_linerange,
  [343] = 1,
    ACTIONS(189), 1,
      anon_sym_index,
  [347] = 1,
    ACTIONS(191), 1,
      sym_commit,
  [351] = 1,
    ACTIONS(193), 1,
      anon_sym_files,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 20,
  [SMALL_STATE(6)] = 36,
  [SMALL_STATE(7)] = 47,
  [SMALL_STATE(8)] = 60,
  [SMALL_STATE(9)] = 73,
  [SMALL_STATE(10)] = 83,
  [SMALL_STATE(11)] = 93,
  [SMALL_STATE(12)] = 103,
  [SMALL_STATE(13)] = 113,
  [SMALL_STATE(14)] = 123,
  [SMALL_STATE(15)] = 133,
  [SMALL_STATE(16)] = 143,
  [SMALL_STATE(17)] = 153,
  [SMALL_STATE(18)] = 163,
  [SMALL_STATE(19)] = 173,
  [SMALL_STATE(20)] = 183,
  [SMALL_STATE(21)] = 193,
  [SMALL_STATE(22)] = 201,
  [SMALL_STATE(23)] = 206,
  [SMALL_STATE(24)] = 211,
  [SMALL_STATE(25)] = 216,
  [SMALL_STATE(26)] = 221,
  [SMALL_STATE(27)] = 226,
  [SMALL_STATE(28)] = 231,
  [SMALL_STATE(29)] = 236,
  [SMALL_STATE(30)] = 241,
  [SMALL_STATE(31)] = 248,
  [SMALL_STATE(32)] = 253,
  [SMALL_STATE(33)] = 258,
  [SMALL_STATE(34)] = 265,
  [SMALL_STATE(35)] = 270,
  [SMALL_STATE(36)] = 277,
  [SMALL_STATE(37)] = 282,
  [SMALL_STATE(38)] = 287,
  [SMALL_STATE(39)] = 291,
  [SMALL_STATE(40)] = 295,
  [SMALL_STATE(41)] = 299,
  [SMALL_STATE(42)] = 303,
  [SMALL_STATE(43)] = 307,
  [SMALL_STATE(44)] = 311,
  [SMALL_STATE(45)] = 315,
  [SMALL_STATE(46)] = 319,
  [SMALL_STATE(47)] = 323,
  [SMALL_STATE(48)] = 327,
  [SMALL_STATE(49)] = 331,
  [SMALL_STATE(50)] = 335,
  [SMALL_STATE(51)] = 339,
  [SMALL_STATE(52)] = 343,
  [SMALL_STATE(53)] = 347,
  [SMALL_STATE(54)] = 351,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(3),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(44),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(21),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(54),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(53),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(52),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(5),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(14),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(51),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(10),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(11),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(11),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(38),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deletion, 1),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deletion, 1),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 4),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filename, 1),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filename, 1),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_filename_repeat1, 2),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_filename_repeat1, 2), SHIFT_REPEAT(8),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2), SHIFT_REPEAT(9),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addition, 1),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_addition, 1),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2), SHIFT_REPEAT(12),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_location, 4),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_location, 4),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_change, 6),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_old_file, 2),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new_file, 2),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_location, 5),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addition, 2),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deletion, 2),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 2),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_similarity, 4, .production_id = 1),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 2),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 5),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_change, 3),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mode, 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_change, 4),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [185] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_prr(void) {
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
