#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 85
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 60
#define ALIAS_COUNT 0
#define TOKEN_COUNT 35
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 4

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
  anon_sym_GT_PLUS_PLUS = 25,
  anon_sym_GT_PLUS_PLUS_PLUS_PLUS = 26,
  anon_sym_GT_DASH = 27,
  anon_sym_GT_DASH_DASH = 28,
  anon_sym_GT_DASH_DASH_DASH_DASH = 29,
  anon_sym_GT = 30,
  aux_sym_context_token1 = 31,
  sym_linerange = 32,
  aux_sym_filename_token1 = 33,
  sym_commit = 34,
  sym_source = 35,
  sym__line = 36,
  sym_block = 37,
  sym_hunks = 38,
  sym_hunk = 39,
  sym_changes = 40,
  sym_command = 41,
  sym_file_change = 42,
  sym_binary_change = 43,
  sym_index = 44,
  sym_similarity = 45,
  sym_old_file = 46,
  sym_new_file = 47,
  sym_location = 48,
  sym_addition = 49,
  sym_deletion = 50,
  sym_context = 51,
  sym_filename = 52,
  sym_mode = 53,
  aux_sym_source_repeat1 = 54,
  aux_sym_block_repeat1 = 55,
  aux_sym_hunks_repeat1 = 56,
  aux_sym_changes_repeat1 = 57,
  aux_sym_changes_repeat2 = 58,
  aux_sym_filename_repeat1 = 59,
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
  [anon_sym_GT_PLUS_PLUS] = "> ++",
  [anon_sym_GT_PLUS_PLUS_PLUS_PLUS] = "> ++++",
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
  [sym_block] = "block",
  [sym_hunks] = "hunks",
  [sym_hunk] = "hunk",
  [sym_changes] = "changes",
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
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_hunks_repeat1] = "hunks_repeat1",
  [aux_sym_changes_repeat1] = "changes_repeat1",
  [aux_sym_changes_repeat2] = "changes_repeat2",
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
  [anon_sym_GT_PLUS_PLUS] = anon_sym_GT_PLUS_PLUS,
  [anon_sym_GT_PLUS_PLUS_PLUS_PLUS] = anon_sym_GT_PLUS_PLUS_PLUS_PLUS,
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
  [sym_block] = sym_block,
  [sym_hunks] = sym_hunks,
  [sym_hunk] = sym_hunk,
  [sym_changes] = sym_changes,
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
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_hunks_repeat1] = aux_sym_hunks_repeat1,
  [aux_sym_changes_repeat1] = aux_sym_changes_repeat1,
  [aux_sym_changes_repeat2] = aux_sym_changes_repeat2,
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
  [anon_sym_GT_PLUS_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_PLUS_PLUS_PLUS_PLUS] = {
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
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_hunks] = {
    .visible = true,
    .named = true,
  },
  [sym_hunk] = {
    .visible = true,
    .named = true,
  },
  [sym_changes] = {
    .visible = true,
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
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_hunks_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_changes_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_changes_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_filename_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_changes = 1,
  field_location = 2,
  field_score = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_changes] = "changes",
  [field_location] = "location",
  [field_score] = "score",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_score, 2},
  [1] =
    {field_location, 0},
  [2] =
    {field_changes, 2},
    {field_location, 0},
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
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 24,
  [31] = 31,
  [32] = 25,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 24,
  [38] = 38,
  [39] = 25,
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
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(91);
      if (lookahead == '\n') ADVANCE(92);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '%') ADVANCE(151);
      if (lookahead == '+') ADVANCE(78);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == '>') ADVANCE(2);
      if (lookahead == '@') ADVANCE(9);
      if (lookahead == 'a') ADVANCE(57);
      if (lookahead == 'd') ADVANCE(40);
      if (lookahead == 'f') ADVANCE(41);
      if (lookahead == 'i') ADVANCE(59);
      if (lookahead == 'm') ADVANCE(64);
      if (lookahead == 't') ADVANCE(62);
      if (('b' <= lookahead && lookahead <= 'e')) ADVANCE(85);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(86)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(92);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(165);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(6);
      END_STATE();
    case 4:
      if (lookahead == '+') ADVANCE(153);
      END_STATE();
    case 5:
      if (lookahead == '+') ADVANCE(4);
      END_STATE();
    case 6:
      if (lookahead == '+') ADVANCE(5);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(108);
      END_STATE();
    case 9:
      if (lookahead == '@') ADVANCE(156);
      END_STATE();
    case 10:
      if (lookahead == '@') ADVANCE(155);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(177);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(11)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(170);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(180);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(66);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(56);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(67);
      END_STATE();
    case 15:
      if (lookahead == 'd') ADVANCE(103);
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(95);
      END_STATE();
    case 17:
      if (lookahead == 'd') ADVANCE(176);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(17)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(171);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(180);
      END_STATE();
    case 18:
      if (lookahead == 'd') ADVANCE(23);
      END_STATE();
    case 19:
      if (lookahead == 'd') ADVANCE(24);
      END_STATE();
    case 20:
      if (lookahead == 'd') ADVANCE(30);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(98);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(37);
      END_STATE();
    case 34:
      if (lookahead == 'f') ADVANCE(93);
      END_STATE();
    case 35:
      if (lookahead == 'f') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(35)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(85);
      END_STATE();
    case 36:
      if (lookahead == 'f') ADVANCE(38);
      END_STATE();
    case 37:
      if (lookahead == 'f') ADVANCE(34);
      END_STATE();
    case 38:
      if (lookahead == 'f') ADVANCE(26);
      END_STATE();
    case 39:
      if (lookahead == 'g') ADVANCE(42);
      END_STATE();
    case 40:
      if (lookahead == 'i') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(84);
      END_STATE();
    case 41:
      if (lookahead == 'i') ADVANCE(49);
      if (lookahead == 'r') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(84);
      END_STATE();
    case 42:
      if (lookahead == 'i') ADVANCE(69);
      END_STATE();
    case 43:
      if (lookahead == 'i') ADVANCE(58);
      END_STATE();
    case 44:
      if (lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 45:
      if (lookahead == 'i') ADVANCE(55);
      END_STATE();
    case 46:
      if (lookahead == 'i') ADVANCE(70);
      END_STATE();
    case 47:
      if (lookahead == 'i') ADVANCE(51);
      if (lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 48:
      if (lookahead == 'i') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(84);
      END_STATE();
    case 49:
      if (lookahead == 'l') ADVANCE(22);
      END_STATE();
    case 50:
      if (lookahead == 'l') ADVANCE(29);
      END_STATE();
    case 51:
      if (lookahead == 'l') ADVANCE(27);
      END_STATE();
    case 52:
      if (lookahead == 'l') ADVANCE(28);
      END_STATE();
    case 53:
      if (lookahead == 'l') ADVANCE(14);
      END_STATE();
    case 54:
      if (lookahead == 'm') ADVANCE(99);
      END_STATE();
    case 55:
      if (lookahead == 'm') ADVANCE(44);
      END_STATE();
    case 56:
      if (lookahead == 'm') ADVANCE(25);
      END_STATE();
    case 57:
      if (lookahead == 'n') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(84);
      END_STATE();
    case 58:
      if (lookahead == 'n') ADVANCE(12);
      END_STATE();
    case 59:
      if (lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 60:
      if (lookahead == 'n') ADVANCE(13);
      END_STATE();
    case 61:
      if (lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 62:
      if (lookahead == 'o') ADVANCE(100);
      END_STATE();
    case 63:
      if (lookahead == 'o') ADVANCE(54);
      END_STATE();
    case 64:
      if (lookahead == 'o') ADVANCE(19);
      END_STATE();
    case 65:
      if (lookahead == 'r') ADVANCE(105);
      END_STATE();
    case 66:
      if (lookahead == 'r') ADVANCE(75);
      END_STATE();
    case 67:
      if (lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 68:
      if (lookahead == 's') ADVANCE(102);
      END_STATE();
    case 69:
      if (lookahead == 't') ADVANCE(94);
      END_STATE();
    case 70:
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 71:
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 72:
      if (lookahead == 'w') ADVANCE(95);
      END_STATE();
    case 73:
      if (lookahead == 'x') ADVANCE(110);
      END_STATE();
    case 74:
      if (lookahead == 'x') ADVANCE(107);
      END_STATE();
    case 75:
      if (lookahead == 'y') ADVANCE(101);
      END_STATE();
    case 76:
      if (lookahead == 'y') ADVANCE(109);
      END_STATE();
    case 77:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(166);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(167);
      END_STATE();
    case 78:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      END_STATE();
    case 79:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(169);
      END_STATE();
    case 80:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(214);
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
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(82);
      END_STATE();
    case 84:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(83);
      END_STATE();
    case 85:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(84);
      END_STATE();
    case 86:
      if (eof) ADVANCE(91);
      if (lookahead == '\n') ADVANCE(92);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '%') ADVANCE(151);
      if (lookahead == '+') ADVANCE(78);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == '@') ADVANCE(9);
      if (lookahead == 'a') ADVANCE(57);
      if (lookahead == 'd') ADVANCE(40);
      if (lookahead == 'f') ADVANCE(41);
      if (lookahead == 'i') ADVANCE(59);
      if (lookahead == 'm') ADVANCE(64);
      if (lookahead == 't') ADVANCE(62);
      if (('b' <= lookahead && lookahead <= 'e')) ADVANCE(85);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(86)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      END_STATE();
    case 87:
      if (eof) ADVANCE(91);
      if (lookahead == '\n') ADVANCE(92);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '>') ADVANCE(3);
      if (lookahead == 'f') ADVANCE(47);
      if (lookahead == 't') ADVANCE(62);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(88)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(150);
      END_STATE();
    case 88:
      if (eof) ADVANCE(91);
      if (lookahead == '\n') ADVANCE(92);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'f') ADVANCE(47);
      if (lookahead == 't') ADVANCE(62);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(88)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(150);
      END_STATE();
    case 89:
      if (eof) ADVANCE(91);
      if (lookahead == '\n') ADVANCE(92);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(89)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(179);
      if (lookahead != 0) ADVANCE(180);
      END_STATE();
    case 90:
      if (eof) ADVANCE(91);
      if (lookahead == '\n') ADVANCE(92);
      if (lookahead == '\r') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(157);
      if (lookahead != 0) ADVANCE(158);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_source_token1);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_GTdiff);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_DASH_DASHgit);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_file_change_token1);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_file);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_file);
      if (lookahead == 's') ADVANCE(102);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_mode);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_GTBinary);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_files);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_and);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(180);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_differ);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_differ);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(180);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_GTindex);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_GTsimilarity);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_index);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(150);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(111);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(118);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(119);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(125);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(126);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(131);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(132);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(136);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(139);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(141);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(143);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(146);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(150);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_GT_DASH_DASH_DASH);
      if (lookahead == '-') ADVANCE(164);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_GT_PLUS_PLUS_PLUS);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_GT_PLUS_PLUS_PLUS);
      if (lookahead == '+') ADVANCE(161);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_GT_AT_AT);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_location_token1);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(157);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(158);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_location_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(158);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_GT_PLUS);
      if (lookahead == '+') ADVANCE(160);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_GT_PLUS_PLUS);
      if (lookahead == '+') ADVANCE(154);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_GT_PLUS_PLUS_PLUS_PLUS);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_GT_DASH);
      if (lookahead == '-') ADVANCE(163);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_GT_DASH_DASH);
      if (lookahead == '-') ADVANCE(152);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_GT_DASH_DASH_DASH_DASH);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '+') ADVANCE(159);
      if (lookahead == '-') ADVANCE(162);
      if (lookahead == '@') ADVANCE(10);
      if (lookahead == 'B') ADVANCE(43);
      if (lookahead == 'd') ADVANCE(33);
      if (lookahead == 'i') ADVANCE(61);
      if (lookahead == 'n') ADVANCE(21);
      if (lookahead == 'r') ADVANCE(31);
      if (lookahead == 's') ADVANCE(45);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_context_token1);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(166);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(167);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_context_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(167);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_linerange);
      if (lookahead == ',') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_linerange);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(169);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == 'a') ADVANCE(177);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(170);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(180);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == 'd') ADVANCE(176);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(171);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(180);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == 'd') ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(180);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == 'e') ADVANCE(178);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(180);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == 'f') ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(180);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == 'f') ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(180);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(180);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == 'n') ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(180);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == 'r') ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(180);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(179);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(180);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(180);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_commit);
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
    case 208:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(207);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(208);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(209);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(210);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(211);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(212);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(213);
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
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 89},
  [21] = {.lex_state = 89},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 87},
  [24] = {.lex_state = 89},
  [25] = {.lex_state = 89},
  [26] = {.lex_state = 89},
  [27] = {.lex_state = 90},
  [28] = {.lex_state = 90},
  [29] = {.lex_state = 89},
  [30] = {.lex_state = 17},
  [31] = {.lex_state = 89},
  [32] = {.lex_state = 17},
  [33] = {.lex_state = 89},
  [34] = {.lex_state = 87},
  [35] = {.lex_state = 89},
  [36] = {.lex_state = 90},
  [37] = {.lex_state = 11},
  [38] = {.lex_state = 89},
  [39] = {.lex_state = 11},
  [40] = {.lex_state = 87},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 87},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 87},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 35},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 87},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 77},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 35},
  [84] = {.lex_state = 35},
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
    [anon_sym_GT_PLUS_PLUS] = ACTIONS(1),
    [anon_sym_GT_PLUS_PLUS_PLUS_PLUS] = ACTIONS(1),
    [anon_sym_GT_DASH] = ACTIONS(1),
    [anon_sym_GT_DASH_DASH] = ACTIONS(1),
    [anon_sym_GT_DASH_DASH_DASH_DASH] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [sym_linerange] = ACTIONS(1),
    [sym_commit] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(79),
    [sym__line] = STATE(42),
    [sym_block] = STATE(3),
    [sym_command] = STATE(78),
    [sym_file_change] = STATE(42),
    [sym_binary_change] = STATE(42),
    [sym_index] = STATE(42),
    [sym_similarity] = STATE(42),
    [sym_old_file] = STATE(42),
    [sym_new_file] = STATE(42),
    [sym_location] = STATE(42),
    [sym_addition] = STATE(42),
    [sym_deletion] = STATE(42),
    [sym_context] = STATE(42),
    [aux_sym_source_repeat1] = STATE(3),
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
    [anon_sym_GT_PLUS_PLUS] = ACTIONS(23),
    [anon_sym_GT_PLUS_PLUS_PLUS_PLUS] = ACTIONS(25),
    [anon_sym_GT_DASH] = ACTIONS(27),
    [anon_sym_GT_DASH_DASH] = ACTIONS(27),
    [anon_sym_GT_DASH_DASH_DASH_DASH] = ACTIONS(29),
    [anon_sym_GT] = ACTIONS(31),
  },
  [2] = {
    [sym__line] = STATE(62),
    [sym_block] = STATE(2),
    [sym_command] = STATE(78),
    [sym_file_change] = STATE(62),
    [sym_binary_change] = STATE(62),
    [sym_index] = STATE(62),
    [sym_similarity] = STATE(62),
    [sym_old_file] = STATE(62),
    [sym_new_file] = STATE(62),
    [sym_location] = STATE(62),
    [sym_addition] = STATE(62),
    [sym_deletion] = STATE(62),
    [sym_context] = STATE(62),
    [aux_sym_source_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(33),
    [aux_sym_source_token1] = ACTIONS(35),
    [anon_sym_GTdiff] = ACTIONS(38),
    [aux_sym_file_change_token1] = ACTIONS(41),
    [anon_sym_GTBinary] = ACTIONS(44),
    [anon_sym_GTindex] = ACTIONS(47),
    [anon_sym_GTsimilarity] = ACTIONS(50),
    [anon_sym_GT_DASH_DASH_DASH] = ACTIONS(53),
    [anon_sym_GT_PLUS_PLUS_PLUS] = ACTIONS(56),
    [anon_sym_GT_AT_AT] = ACTIONS(59),
    [anon_sym_GT_PLUS] = ACTIONS(62),
    [anon_sym_GT_PLUS_PLUS] = ACTIONS(62),
    [anon_sym_GT_PLUS_PLUS_PLUS_PLUS] = ACTIONS(65),
    [anon_sym_GT_DASH] = ACTIONS(68),
    [anon_sym_GT_DASH_DASH] = ACTIONS(68),
    [anon_sym_GT_DASH_DASH_DASH_DASH] = ACTIONS(71),
    [anon_sym_GT] = ACTIONS(74),
  },
  [3] = {
    [sym__line] = STATE(43),
    [sym_block] = STATE(2),
    [sym_command] = STATE(78),
    [sym_file_change] = STATE(43),
    [sym_binary_change] = STATE(43),
    [sym_index] = STATE(43),
    [sym_similarity] = STATE(43),
    [sym_old_file] = STATE(43),
    [sym_new_file] = STATE(43),
    [sym_location] = STATE(43),
    [sym_addition] = STATE(43),
    [sym_deletion] = STATE(43),
    [sym_context] = STATE(43),
    [aux_sym_source_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(77),
    [aux_sym_source_token1] = ACTIONS(79),
    [anon_sym_GTdiff] = ACTIONS(7),
    [aux_sym_file_change_token1] = ACTIONS(9),
    [anon_sym_GTBinary] = ACTIONS(11),
    [anon_sym_GTindex] = ACTIONS(13),
    [anon_sym_GTsimilarity] = ACTIONS(15),
    [anon_sym_GT_DASH_DASH_DASH] = ACTIONS(17),
    [anon_sym_GT_PLUS_PLUS_PLUS] = ACTIONS(19),
    [anon_sym_GT_AT_AT] = ACTIONS(21),
    [anon_sym_GT_PLUS] = ACTIONS(23),
    [anon_sym_GT_PLUS_PLUS] = ACTIONS(23),
    [anon_sym_GT_PLUS_PLUS_PLUS_PLUS] = ACTIONS(25),
    [anon_sym_GT_DASH] = ACTIONS(27),
    [anon_sym_GT_DASH_DASH] = ACTIONS(27),
    [anon_sym_GT_DASH_DASH_DASH_DASH] = ACTIONS(29),
    [anon_sym_GT] = ACTIONS(31),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(9), 1,
      aux_sym_file_change_token1,
    ACTIONS(11), 1,
      anon_sym_GTBinary,
    ACTIONS(13), 1,
      anon_sym_GTindex,
    ACTIONS(15), 1,
      anon_sym_GTsimilarity,
    ACTIONS(83), 1,
      anon_sym_GT_DASH_DASH_DASH,
    STATE(6), 1,
      aux_sym_block_repeat1,
    STATE(60), 1,
      sym_old_file,
    STATE(59), 4,
      sym_file_change,
      sym_binary_change,
      sym_index,
      sym_similarity,
    ACTIONS(81), 6,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      anon_sym_GTdiff,
      anon_sym_GT_AT_AT,
      anon_sym_GT_PLUS_PLUS_PLUS_PLUS,
      anon_sym_GT_DASH_DASH_DASH_DASH,
    ACTIONS(85), 6,
      anon_sym_GT_PLUS_PLUS_PLUS,
      anon_sym_GT_PLUS,
      anon_sym_GT_PLUS_PLUS,
      anon_sym_GT_DASH,
      anon_sym_GT_DASH_DASH,
      anon_sym_GT,
  [44] = 10,
    ACTIONS(9), 1,
      aux_sym_file_change_token1,
    ACTIONS(11), 1,
      anon_sym_GTBinary,
    ACTIONS(13), 1,
      anon_sym_GTindex,
    ACTIONS(15), 1,
      anon_sym_GTsimilarity,
    ACTIONS(83), 1,
      anon_sym_GT_DASH_DASH_DASH,
    STATE(4), 1,
      aux_sym_block_repeat1,
    STATE(64), 1,
      sym_old_file,
    STATE(59), 4,
      sym_file_change,
      sym_binary_change,
      sym_index,
      sym_similarity,
    ACTIONS(87), 6,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      anon_sym_GTdiff,
      anon_sym_GT_AT_AT,
      anon_sym_GT_PLUS_PLUS_PLUS_PLUS,
      anon_sym_GT_DASH_DASH_DASH_DASH,
    ACTIONS(89), 6,
      anon_sym_GT_PLUS_PLUS_PLUS,
      anon_sym_GT_PLUS,
      anon_sym_GT_PLUS_PLUS,
      anon_sym_GT_DASH,
      anon_sym_GT_DASH_DASH,
      anon_sym_GT,
  [88] = 8,
    ACTIONS(93), 1,
      aux_sym_file_change_token1,
    ACTIONS(96), 1,
      anon_sym_GTBinary,
    ACTIONS(99), 1,
      anon_sym_GTindex,
    ACTIONS(102), 1,
      anon_sym_GTsimilarity,
    STATE(6), 1,
      aux_sym_block_repeat1,
    STATE(59), 4,
      sym_file_change,
      sym_binary_change,
      sym_index,
      sym_similarity,
    ACTIONS(91), 6,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      anon_sym_GTdiff,
      anon_sym_GT_AT_AT,
      anon_sym_GT_PLUS_PLUS_PLUS_PLUS,
      anon_sym_GT_DASH_DASH_DASH_DASH,
    ACTIONS(105), 7,
      anon_sym_GT_DASH_DASH_DASH,
      anon_sym_GT_PLUS_PLUS_PLUS,
      anon_sym_GT_PLUS,
      anon_sym_GT_PLUS_PLUS,
      anon_sym_GT_DASH,
      anon_sym_GT_DASH_DASH,
      anon_sym_GT,
  [127] = 11,
    ACTIONS(25), 1,
      anon_sym_GT_PLUS_PLUS_PLUS_PLUS,
    ACTIONS(29), 1,
      anon_sym_GT_DASH_DASH_DASH_DASH,
    ACTIONS(31), 1,
      anon_sym_GT,
    ACTIONS(109), 1,
      anon_sym_GT_DASH_DASH_DASH,
    ACTIONS(111), 1,
      anon_sym_GT_PLUS_PLUS_PLUS,
    STATE(8), 1,
      aux_sym_changes_repeat2,
    STATE(18), 1,
      sym_changes,
    ACTIONS(23), 2,
      anon_sym_GT_PLUS,
      anon_sym_GT_PLUS_PLUS,
    ACTIONS(27), 2,
      anon_sym_GT_DASH,
      anon_sym_GT_DASH_DASH,
    STATE(55), 3,
      sym_addition,
      sym_deletion,
      sym_context,
    ACTIONS(107), 8,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      anon_sym_GTdiff,
      aux_sym_file_change_token1,
      anon_sym_GTBinary,
      anon_sym_GTindex,
      anon_sym_GTsimilarity,
      anon_sym_GT_AT_AT,
  [172] = 10,
    ACTIONS(25), 1,
      anon_sym_GT_PLUS_PLUS_PLUS_PLUS,
    ACTIONS(29), 1,
      anon_sym_GT_DASH_DASH_DASH_DASH,
    ACTIONS(31), 1,
      anon_sym_GT,
    ACTIONS(109), 1,
      anon_sym_GT_DASH_DASH_DASH,
    ACTIONS(111), 1,
      anon_sym_GT_PLUS_PLUS_PLUS,
    STATE(9), 1,
      aux_sym_changes_repeat2,
    ACTIONS(23), 2,
      anon_sym_GT_PLUS,
      anon_sym_GT_PLUS_PLUS,
    ACTIONS(27), 2,
      anon_sym_GT_DASH,
      anon_sym_GT_DASH_DASH,
    STATE(55), 3,
      sym_addition,
      sym_deletion,
      sym_context,
    ACTIONS(113), 8,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      anon_sym_GTdiff,
      aux_sym_file_change_token1,
      anon_sym_GTBinary,
      anon_sym_GTindex,
      anon_sym_GTsimilarity,
      anon_sym_GT_AT_AT,
  [214] = 10,
    ACTIONS(117), 1,
      anon_sym_GT_DASH_DASH_DASH,
    ACTIONS(120), 1,
      anon_sym_GT_PLUS_PLUS_PLUS,
    ACTIONS(126), 1,
      anon_sym_GT_PLUS_PLUS_PLUS_PLUS,
    ACTIONS(132), 1,
      anon_sym_GT_DASH_DASH_DASH_DASH,
    ACTIONS(135), 1,
      anon_sym_GT,
    STATE(9), 1,
      aux_sym_changes_repeat2,
    ACTIONS(123), 2,
      anon_sym_GT_PLUS,
      anon_sym_GT_PLUS_PLUS,
    ACTIONS(129), 2,
      anon_sym_GT_DASH,
      anon_sym_GT_DASH_DASH,
    STATE(55), 3,
      sym_addition,
      sym_deletion,
      sym_context,
    ACTIONS(115), 8,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      anon_sym_GTdiff,
      aux_sym_file_change_token1,
      anon_sym_GTBinary,
      anon_sym_GTindex,
      anon_sym_GTsimilarity,
      anon_sym_GT_AT_AT,
  [256] = 5,
    ACTIONS(21), 1,
      anon_sym_GT_AT_AT,
    STATE(67), 1,
      sym_location,
    STATE(11), 2,
      sym_hunk,
      aux_sym_hunks_repeat1,
    ACTIONS(140), 7,
      anon_sym_GT_DASH_DASH_DASH,
      anon_sym_GT_PLUS_PLUS_PLUS,
      anon_sym_GT_PLUS,
      anon_sym_GT_PLUS_PLUS,
      anon_sym_GT_DASH,
      anon_sym_GT_DASH_DASH,
      anon_sym_GT,
    ACTIONS(138), 9,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      anon_sym_GTdiff,
      aux_sym_file_change_token1,
      anon_sym_GTBinary,
      anon_sym_GTindex,
      anon_sym_GTsimilarity,
      anon_sym_GT_PLUS_PLUS_PLUS_PLUS,
      anon_sym_GT_DASH_DASH_DASH_DASH,
  [287] = 5,
    ACTIONS(146), 1,
      anon_sym_GT_AT_AT,
    STATE(67), 1,
      sym_location,
    STATE(11), 2,
      sym_hunk,
      aux_sym_hunks_repeat1,
    ACTIONS(144), 7,
      anon_sym_GT_DASH_DASH_DASH,
      anon_sym_GT_PLUS_PLUS_PLUS,
      anon_sym_GT_PLUS,
      anon_sym_GT_PLUS_PLUS,
      anon_sym_GT_DASH,
      anon_sym_GT_DASH_DASH,
      anon_sym_GT,
    ACTIONS(142), 9,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      anon_sym_GTdiff,
      aux_sym_file_change_token1,
      anon_sym_GTBinary,
      anon_sym_GTindex,
      anon_sym_GTsimilarity,
      anon_sym_GT_PLUS_PLUS_PLUS_PLUS,
      anon_sym_GT_DASH_DASH_DASH_DASH,
  [318] = 4,
    ACTIONS(151), 1,
      aux_sym_source_token1,
    STATE(12), 1,
      aux_sym_changes_repeat1,
    ACTIONS(154), 7,
      anon_sym_GT_DASH_DASH_DASH,
      anon_sym_GT_PLUS_PLUS_PLUS,
      anon_sym_GT_PLUS,
      anon_sym_GT_PLUS_PLUS,
      anon_sym_GT_DASH,
      anon_sym_GT_DASH_DASH,
      anon_sym_GT,
    ACTIONS(149), 9,
      ts_builtin_sym_end,
      anon_sym_GTdiff,
      aux_sym_file_change_token1,
      anon_sym_GTBinary,
      anon_sym_GTindex,
      anon_sym_GTsimilarity,
      anon_sym_GT_AT_AT,
      anon_sym_GT_PLUS_PLUS_PLUS_PLUS,
      anon_sym_GT_DASH_DASH_DASH_DASH,
  [345] = 4,
    ACTIONS(156), 1,
      aux_sym_source_token1,
    STATE(12), 1,
      aux_sym_changes_repeat1,
    ACTIONS(158), 7,
      anon_sym_GT_DASH_DASH_DASH,
      anon_sym_GT_PLUS_PLUS_PLUS,
      anon_sym_GT_PLUS,
      anon_sym_GT_PLUS_PLUS,
      anon_sym_GT_DASH,
      anon_sym_GT_DASH_DASH,
      anon_sym_GT,
    ACTIONS(115), 9,
      ts_builtin_sym_end,
      anon_sym_GTdiff,
      aux_sym_file_change_token1,
      anon_sym_GTBinary,
      anon_sym_GTindex,
      anon_sym_GTsimilarity,
      anon_sym_GT_AT_AT,
      anon_sym_GT_PLUS_PLUS_PLUS_PLUS,
      anon_sym_GT_DASH_DASH_DASH_DASH,
  [372] = 2,
    ACTIONS(162), 7,
      anon_sym_GT_DASH_DASH_DASH,
      anon_sym_GT_PLUS_PLUS_PLUS,
      anon_sym_GT_PLUS,
      anon_sym_GT_PLUS_PLUS,
      anon_sym_GT_DASH,
      anon_sym_GT_DASH_DASH,
      anon_sym_GT,
    ACTIONS(160), 10,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      anon_sym_GTdiff,
      aux_sym_file_change_token1,
      anon_sym_GTBinary,
      anon_sym_GTindex,
      anon_sym_GTsimilarity,
      anon_sym_GT_AT_AT,
      anon_sym_GT_PLUS_PLUS_PLUS_PLUS,
      anon_sym_GT_DASH_DASH_DASH_DASH,
  [394] = 2,
    ACTIONS(105), 7,
      anon_sym_GT_DASH_DASH_DASH,
      anon_sym_GT_PLUS_PLUS_PLUS,
      anon_sym_GT_PLUS,
      anon_sym_GT_PLUS_PLUS,
      anon_sym_GT_DASH,
      anon_sym_GT_DASH_DASH,
      anon_sym_GT,
    ACTIONS(91), 10,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      anon_sym_GTdiff,
      aux_sym_file_change_token1,
      anon_sym_GTBinary,
      anon_sym_GTindex,
      anon_sym_GTsimilarity,
      anon_sym_GT_AT_AT,
      anon_sym_GT_PLUS_PLUS_PLUS_PLUS,
      anon_sym_GT_DASH_DASH_DASH_DASH,
  [416] = 2,
    ACTIONS(164), 7,
      anon_sym_GT_DASH_DASH_DASH,
      anon_sym_GT_PLUS_PLUS_PLUS,
      anon_sym_GT_PLUS,
      anon_sym_GT_PLUS_PLUS,
      anon_sym_GT_DASH,
      anon_sym_GT_DASH_DASH,
      anon_sym_GT,
    ACTIONS(33), 10,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      anon_sym_GTdiff,
      aux_sym_file_change_token1,
      anon_sym_GTBinary,
      anon_sym_GTindex,
      anon_sym_GTsimilarity,
      anon_sym_GT_AT_AT,
      anon_sym_GT_PLUS_PLUS_PLUS_PLUS,
      anon_sym_GT_DASH_DASH_DASH_DASH,
  [438] = 2,
    ACTIONS(168), 7,
      anon_sym_GT_DASH_DASH_DASH,
      anon_sym_GT_PLUS_PLUS_PLUS,
      anon_sym_GT_PLUS,
      anon_sym_GT_PLUS_PLUS,
      anon_sym_GT_DASH,
      anon_sym_GT_DASH_DASH,
      anon_sym_GT,
    ACTIONS(166), 10,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      anon_sym_GTdiff,
      aux_sym_file_change_token1,
      anon_sym_GTBinary,
      anon_sym_GTindex,
      anon_sym_GTsimilarity,
      anon_sym_GT_AT_AT,
      anon_sym_GT_PLUS_PLUS_PLUS_PLUS,
      anon_sym_GT_DASH_DASH_DASH_DASH,
  [460] = 2,
    ACTIONS(172), 7,
      anon_sym_GT_DASH_DASH_DASH,
      anon_sym_GT_PLUS_PLUS_PLUS,
      anon_sym_GT_PLUS,
      anon_sym_GT_PLUS_PLUS,
      anon_sym_GT_DASH,
      anon_sym_GT_DASH_DASH,
      anon_sym_GT,
    ACTIONS(170), 10,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      anon_sym_GTdiff,
      aux_sym_file_change_token1,
      anon_sym_GTBinary,
      anon_sym_GTindex,
      anon_sym_GTsimilarity,
      anon_sym_GT_AT_AT,
      anon_sym_GT_PLUS_PLUS_PLUS_PLUS,
      anon_sym_GT_DASH_DASH_DASH_DASH,
  [482] = 4,
    ACTIONS(21), 1,
      anon_sym_GT_AT_AT,
    STATE(17), 1,
      sym_hunks,
    STATE(67), 1,
      sym_location,
    STATE(10), 2,
      sym_hunk,
      aux_sym_hunks_repeat1,
  [496] = 5,
    ACTIONS(174), 1,
      ts_builtin_sym_end,
    ACTIONS(176), 1,
      aux_sym_source_token1,
    ACTIONS(178), 1,
      aux_sym_filename_token1,
    STATE(24), 1,
      aux_sym_filename_repeat1,
    STATE(52), 1,
      sym_filename,
  [512] = 5,
    ACTIONS(178), 1,
      aux_sym_filename_token1,
    ACTIONS(180), 1,
      ts_builtin_sym_end,
    ACTIONS(182), 1,
      aux_sym_source_token1,
    STATE(24), 1,
      aux_sym_filename_repeat1,
    STATE(50), 1,
      sym_filename,
  [528] = 4,
    ACTIONS(21), 1,
      anon_sym_GT_AT_AT,
    STATE(14), 1,
      sym_hunks,
    STATE(67), 1,
      sym_location,
    STATE(10), 2,
      sym_hunk,
      aux_sym_hunks_repeat1,
  [542] = 3,
    ACTIONS(186), 1,
      aux_sym_similarity_token1,
    STATE(53), 1,
      sym_mode,
    ACTIONS(184), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [553] = 4,
    ACTIONS(188), 1,
      ts_builtin_sym_end,
    ACTIONS(190), 1,
      aux_sym_source_token1,
    ACTIONS(192), 1,
      aux_sym_filename_token1,
    STATE(25), 1,
      aux_sym_filename_repeat1,
  [566] = 4,
    ACTIONS(194), 1,
      ts_builtin_sym_end,
    ACTIONS(196), 1,
      aux_sym_source_token1,
    ACTIONS(198), 1,
      aux_sym_filename_token1,
    STATE(25), 1,
      aux_sym_filename_repeat1,
  [579] = 3,
    ACTIONS(201), 1,
      aux_sym_filename_token1,
    STATE(37), 1,
      aux_sym_filename_repeat1,
    STATE(71), 1,
      sym_filename,
  [589] = 3,
    ACTIONS(203), 1,
      ts_builtin_sym_end,
    ACTIONS(205), 1,
      aux_sym_source_token1,
    ACTIONS(207), 1,
      aux_sym_location_token1,
  [599] = 3,
    ACTIONS(174), 1,
      ts_builtin_sym_end,
    ACTIONS(176), 1,
      aux_sym_source_token1,
    ACTIONS(209), 1,
      aux_sym_location_token1,
  [609] = 3,
    ACTIONS(211), 1,
      aux_sym_filename_token1,
    STATE(30), 1,
      aux_sym_filename_repeat1,
    STATE(63), 1,
      sym_filename,
  [619] = 3,
    ACTIONS(190), 1,
      anon_sym_differ,
    ACTIONS(213), 1,
      aux_sym_filename_token1,
    STATE(32), 1,
      aux_sym_filename_repeat1,
  [629] = 3,
    ACTIONS(178), 1,
      aux_sym_filename_token1,
    STATE(24), 1,
      aux_sym_filename_repeat1,
    STATE(41), 1,
      sym_filename,
  [639] = 3,
    ACTIONS(196), 1,
      anon_sym_differ,
    ACTIONS(215), 1,
      aux_sym_filename_token1,
    STATE(32), 1,
      aux_sym_filename_repeat1,
  [649] = 3,
    ACTIONS(178), 1,
      aux_sym_filename_token1,
    STATE(24), 1,
      aux_sym_filename_repeat1,
    STATE(52), 1,
      sym_filename,
  [659] = 2,
    ACTIONS(218), 1,
      anon_sym_file,
    ACTIONS(220), 2,
      anon_sym_from,
      anon_sym_to,
  [667] = 3,
    ACTIONS(178), 1,
      aux_sym_filename_token1,
    STATE(24), 1,
      aux_sym_filename_repeat1,
    STATE(72), 1,
      sym_filename,
  [677] = 3,
    ACTIONS(180), 1,
      ts_builtin_sym_end,
    ACTIONS(182), 1,
      aux_sym_source_token1,
    ACTIONS(222), 1,
      aux_sym_location_token1,
  [687] = 3,
    ACTIONS(190), 1,
      anon_sym_and,
    ACTIONS(224), 1,
      aux_sym_filename_token1,
    STATE(39), 1,
      aux_sym_filename_repeat1,
  [697] = 3,
    ACTIONS(178), 1,
      aux_sym_filename_token1,
    STATE(24), 1,
      aux_sym_filename_repeat1,
    STATE(50), 1,
      sym_filename,
  [707] = 3,
    ACTIONS(196), 1,
      anon_sym_and,
    ACTIONS(226), 1,
      aux_sym_filename_token1,
    STATE(39), 1,
      aux_sym_filename_repeat1,
  [717] = 2,
    ACTIONS(186), 1,
      aux_sym_similarity_token1,
    STATE(45), 1,
      sym_mode,
  [724] = 1,
    ACTIONS(229), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [729] = 2,
    ACTIONS(77), 1,
      ts_builtin_sym_end,
    ACTIONS(231), 1,
      aux_sym_source_token1,
  [736] = 2,
    ACTIONS(231), 1,
      aux_sym_source_token1,
    ACTIONS(233), 1,
      ts_builtin_sym_end,
  [743] = 1,
    ACTIONS(235), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [748] = 1,
    ACTIONS(237), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [753] = 1,
    ACTIONS(239), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [758] = 1,
    ACTIONS(241), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [763] = 1,
    ACTIONS(243), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [768] = 1,
    ACTIONS(245), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [773] = 1,
    ACTIONS(247), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [778] = 2,
    ACTIONS(249), 1,
      anon_sym_GT_PLUS_PLUS_PLUS,
    STATE(61), 1,
      sym_new_file,
  [785] = 1,
    ACTIONS(251), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [790] = 1,
    ACTIONS(253), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [795] = 1,
    ACTIONS(255), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [800] = 2,
    ACTIONS(257), 1,
      aux_sym_source_token1,
    STATE(13), 1,
      aux_sym_changes_repeat1,
  [807] = 2,
    ACTIONS(249), 1,
      anon_sym_GT_PLUS_PLUS_PLUS,
    STATE(65), 1,
      sym_new_file,
  [814] = 1,
    ACTIONS(259), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [819] = 1,
    ACTIONS(261), 1,
      anon_sym_DOT_DOT,
  [823] = 1,
    ACTIONS(263), 1,
      aux_sym_source_token1,
  [827] = 1,
    ACTIONS(265), 1,
      aux_sym_source_token1,
  [831] = 1,
    ACTIONS(267), 1,
      aux_sym_source_token1,
  [835] = 1,
    ACTIONS(231), 1,
      aux_sym_source_token1,
  [839] = 1,
    ACTIONS(269), 1,
      anon_sym_differ,
  [843] = 1,
    ACTIONS(271), 1,
      aux_sym_source_token1,
  [847] = 1,
    ACTIONS(273), 1,
      aux_sym_source_token1,
  [851] = 1,
    ACTIONS(275), 1,
      anon_sym_DASH_DASHgit,
  [855] = 1,
    ACTIONS(277), 1,
      aux_sym_source_token1,
  [859] = 1,
    ACTIONS(279), 1,
      anon_sym_AT_AT,
  [863] = 1,
    ACTIONS(281), 1,
      anon_sym_PERCENT,
  [867] = 1,
    ACTIONS(283), 1,
      sym_commit,
  [871] = 1,
    ACTIONS(285), 1,
      anon_sym_and,
  [875] = 1,
    ACTIONS(287), 1,
      aux_sym_source_token1,
  [879] = 1,
    ACTIONS(174), 1,
      aux_sym_source_token1,
  [883] = 1,
    ACTIONS(180), 1,
      aux_sym_source_token1,
  [887] = 1,
    ACTIONS(289), 1,
      sym_linerange,
  [891] = 1,
    ACTIONS(291), 1,
      aux_sym_similarity_token1,
  [895] = 1,
    ACTIONS(293), 1,
      anon_sym_mode,
  [899] = 1,
    ACTIONS(295), 1,
      aux_sym_source_token1,
  [903] = 1,
    ACTIONS(297), 1,
      ts_builtin_sym_end,
  [907] = 1,
    ACTIONS(299), 1,
      aux_sym_context_token1,
  [911] = 1,
    ACTIONS(301), 1,
      sym_linerange,
  [915] = 1,
    ACTIONS(303), 1,
      anon_sym_index,
  [919] = 1,
    ACTIONS(305), 1,
      sym_commit,
  [923] = 1,
    ACTIONS(307), 1,
      anon_sym_files,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 44,
  [SMALL_STATE(6)] = 88,
  [SMALL_STATE(7)] = 127,
  [SMALL_STATE(8)] = 172,
  [SMALL_STATE(9)] = 214,
  [SMALL_STATE(10)] = 256,
  [SMALL_STATE(11)] = 287,
  [SMALL_STATE(12)] = 318,
  [SMALL_STATE(13)] = 345,
  [SMALL_STATE(14)] = 372,
  [SMALL_STATE(15)] = 394,
  [SMALL_STATE(16)] = 416,
  [SMALL_STATE(17)] = 438,
  [SMALL_STATE(18)] = 460,
  [SMALL_STATE(19)] = 482,
  [SMALL_STATE(20)] = 496,
  [SMALL_STATE(21)] = 512,
  [SMALL_STATE(22)] = 528,
  [SMALL_STATE(23)] = 542,
  [SMALL_STATE(24)] = 553,
  [SMALL_STATE(25)] = 566,
  [SMALL_STATE(26)] = 579,
  [SMALL_STATE(27)] = 589,
  [SMALL_STATE(28)] = 599,
  [SMALL_STATE(29)] = 609,
  [SMALL_STATE(30)] = 619,
  [SMALL_STATE(31)] = 629,
  [SMALL_STATE(32)] = 639,
  [SMALL_STATE(33)] = 649,
  [SMALL_STATE(34)] = 659,
  [SMALL_STATE(35)] = 667,
  [SMALL_STATE(36)] = 677,
  [SMALL_STATE(37)] = 687,
  [SMALL_STATE(38)] = 697,
  [SMALL_STATE(39)] = 707,
  [SMALL_STATE(40)] = 717,
  [SMALL_STATE(41)] = 724,
  [SMALL_STATE(42)] = 729,
  [SMALL_STATE(43)] = 736,
  [SMALL_STATE(44)] = 743,
  [SMALL_STATE(45)] = 748,
  [SMALL_STATE(46)] = 753,
  [SMALL_STATE(47)] = 758,
  [SMALL_STATE(48)] = 763,
  [SMALL_STATE(49)] = 768,
  [SMALL_STATE(50)] = 773,
  [SMALL_STATE(51)] = 778,
  [SMALL_STATE(52)] = 785,
  [SMALL_STATE(53)] = 790,
  [SMALL_STATE(54)] = 795,
  [SMALL_STATE(55)] = 800,
  [SMALL_STATE(56)] = 807,
  [SMALL_STATE(57)] = 814,
  [SMALL_STATE(58)] = 819,
  [SMALL_STATE(59)] = 823,
  [SMALL_STATE(60)] = 827,
  [SMALL_STATE(61)] = 831,
  [SMALL_STATE(62)] = 835,
  [SMALL_STATE(63)] = 839,
  [SMALL_STATE(64)] = 843,
  [SMALL_STATE(65)] = 847,
  [SMALL_STATE(66)] = 851,
  [SMALL_STATE(67)] = 855,
  [SMALL_STATE(68)] = 859,
  [SMALL_STATE(69)] = 863,
  [SMALL_STATE(70)] = 867,
  [SMALL_STATE(71)] = 871,
  [SMALL_STATE(72)] = 875,
  [SMALL_STATE(73)] = 879,
  [SMALL_STATE(74)] = 883,
  [SMALL_STATE(75)] = 887,
  [SMALL_STATE(76)] = 891,
  [SMALL_STATE(77)] = 895,
  [SMALL_STATE(78)] = 899,
  [SMALL_STATE(79)] = 903,
  [SMALL_STATE(80)] = 907,
  [SMALL_STATE(81)] = 911,
  [SMALL_STATE(82)] = 915,
  [SMALL_STATE(83)] = 919,
  [SMALL_STATE(84)] = 923,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(2),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(66),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(34),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(84),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(83),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(82),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(20),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(21),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(81),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(36),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(36),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(28),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(28),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(80),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(34),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(84),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(83),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(82),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hunk, 2, .production_id = 2),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_changes, 1),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_changes_repeat2, 2),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_changes_repeat2, 2), SHIFT_REPEAT(73),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_changes_repeat2, 2), SHIFT_REPEAT(74),
  [123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_changes_repeat2, 2), SHIFT_REPEAT(36),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_changes_repeat2, 2), SHIFT_REPEAT(36),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_changes_repeat2, 2), SHIFT_REPEAT(28),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_changes_repeat2, 2), SHIFT_REPEAT(28),
  [135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_changes_repeat2, 2), SHIFT_REPEAT(80),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hunks, 1),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hunks, 1),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hunks_repeat1, 2),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_hunks_repeat1, 2),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hunks_repeat1, 2), SHIFT_REPEAT(81),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_changes_repeat1, 2),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_changes_repeat1, 2), SHIFT_REPEAT(12),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_changes_repeat1, 2),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_changes_repeat2, 2),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 7),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 7),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 8),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 8),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hunk, 3, .production_id = 3),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hunk, 3, .production_id = 3),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deletion, 1),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deletion, 1),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addition, 1),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_addition, 1),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 4),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filename, 1),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filename, 1),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_filename_repeat1, 2),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2),
  [198] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_filename_repeat1, 2), SHIFT_REPEAT(25),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_location, 4),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_location, 4),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [215] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2), SHIFT_REPEAT(32),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [226] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2), SHIFT_REPEAT(39),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_change, 3),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 2),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mode, 1),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_change, 4),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 2),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deletion, 2),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_similarity, 4, .production_id = 1),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addition, 2),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new_file, 2),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_old_file, 2),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 5),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_location, 5),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_change, 6),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [297] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
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
