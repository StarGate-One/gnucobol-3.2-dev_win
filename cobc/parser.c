/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 28 "parser.y"

#include <config.h>

#include <stdlib.h>
#include <string.h>

#define	COB_IN_PARSER	1
#include "cobc.h"
#include "tree.h"

#define _PARSER_H	/* work around bad Windows SDK header */

#ifndef	_STDLIB_H
#define	_STDLIB_H 1
#endif

#define YYSTYPE			cb_tree
#define yyerror(x)		cb_error_always ("%s", x)

#define emit_statement(x) \
do { \
  if (!skip_statements) { \
	CB_ADD_TO_CHAIN (x, current_program->exec_list); \
  } \
}  ONCE_COB

#define push_expr(type, node) \
  current_expr = cb_build_list (cb_int (type), node, current_expr)

/* Statement terminator definitions */
#define TERM_NONE		0
#define TERM_ACCEPT		1U
#define TERM_ADD		2U
#define TERM_CALL		3U
#define TERM_COMPUTE		4U
#define TERM_DELETE		5U
#define TERM_DISPLAY		6U
#define TERM_DIVIDE		7U
#define TERM_EVALUATE		8U
#define TERM_IF			9U
#define TERM_JSON		10U
#define TERM_MODIFY		11U
#define TERM_MULTIPLY		12U
#define TERM_PERFORM		13U
#define TERM_READ		14U
#define TERM_RECEIVE		15U
#define TERM_RETURN		16U
#define TERM_REWRITE		17U
#define TERM_SEARCH		18U
#define TERM_START		19U
#define TERM_STRING		20U
#define TERM_SUBTRACT		21U
#define TERM_UNSTRING		22U
#define TERM_WRITE		23U
#define TERM_XML		24U
#define TERM_MAX		25U	/* Always last entry, used for array size */

#define	TERMINATOR_WARNING(x,z)	terminator_warning (x, TERM_##z, #z)
#define	TERMINATOR_ERROR(x,z)	terminator_error (x, TERM_##z, #z)
#define	TERMINATOR_CLEAR(x,z)	terminator_clear (x, TERM_##z)

/* Defines for duplicate checks */
/* Note - We use <= 16 for common item definitions and */
/* > 16 for non-common item definitions e.g. REPORT and SCREEN */
#define	SYN_CLAUSE_1		(1U << 0)
#define	SYN_CLAUSE_2		(1U << 1)
#define	SYN_CLAUSE_3		(1U << 2)
#define	SYN_CLAUSE_4		(1U << 3)
#define	SYN_CLAUSE_5		(1U << 4)
#define	SYN_CLAUSE_6		(1U << 5)
#define	SYN_CLAUSE_7		(1U << 6)
#define	SYN_CLAUSE_8		(1U << 7)
#define	SYN_CLAUSE_9		(1U << 8)
#define	SYN_CLAUSE_10		(1U << 9)
#define	SYN_CLAUSE_11		(1U << 10)
#define	SYN_CLAUSE_12		(1U << 11)
#define	SYN_CLAUSE_13		(1U << 12)
#define	SYN_CLAUSE_14		(1U << 13)
#define	SYN_CLAUSE_15		(1U << 14)
#define	SYN_CLAUSE_16		(1U << 15)
#define	SYN_CLAUSE_17		(1U << 16)
#define	SYN_CLAUSE_18		(1U << 17)
#define	SYN_CLAUSE_19		(1U << 18)
#define	SYN_CLAUSE_20		(1U << 19)
#define	SYN_CLAUSE_21		(1U << 20)
#define	SYN_CLAUSE_22		(1U << 21)
#define	SYN_CLAUSE_23		(1U << 22)
#define	SYN_CLAUSE_24		(1U << 23)
#define	SYN_CLAUSE_25		(1U << 24)
#define	SYN_CLAUSE_26		(1U << 25)
#define	SYN_CLAUSE_27		(1U << 26)
#define	SYN_CLAUSE_28		(1U << 27)
#define	SYN_CLAUSE_29		(1U << 28)
#define	SYN_CLAUSE_30		(1U << 29)
#define	SYN_CLAUSE_31		(1U << 30)
#define	SYN_CLAUSE_32		(1U << 31)

#define	EVAL_DEPTH		32
#define	PROG_DEPTH		16

/* Global variables */

struct cb_program		*current_program = NULL;    /* program in parse/syntax check/codegen */
struct cb_statement		*current_statement = NULL;
struct cb_label			*current_section = NULL;
struct cb_label			*current_paragraph = NULL;
struct cb_field		*external_defined_fields_ws;
struct cb_field		*external_defined_fields_global;
cb_tree				defined_prog_list = NULL;
int				cb_exp_line = 0;

cb_tree				cobc_printer_node = NULL;
int				functions_are_all = 0;
int				non_const_word = 0;
int				suppress_data_exceptions = 0;
unsigned int			cobc_repeat_last_token = 0;
unsigned int			cobc_in_id = 0;
unsigned int			cobc_in_procedure = 0;
unsigned int			cobc_in_repository = 0;
unsigned int			cobc_force_literal = 0;
unsigned int			cobc_cs_check = 0;
unsigned int			cobc_allow_program_name = 0;
unsigned int			cobc_in_xml_generate_body = 0;
unsigned int			cobc_in_json_generate_body = 0;

/* Local variables */

enum tallying_phrase {
	NO_PHRASE,
	FOR_PHRASE,
	CHARACTERS_PHRASE,
	ALL_LEADING_TRAILING_PHRASES,
	VALUE_REGION_PHRASE
};

enum key_clause_type {
	NO_KEY,
	RECORD_KEY,
	RELATIVE_KEY
};

static cb_tree			current_expr;
static struct cb_field		*current_field;
static struct cb_field		*control_field;
static struct cb_field		*description_field;
static struct cb_file		*current_file;
static struct cb_cd		*current_cd;
static struct cb_report		*current_report;
static struct cb_report		*report_instance;
static struct cb_key_component	*key_component_list;

static struct cb_file		*linage_file;
static cb_tree			next_label_list;

static const char			*stack_progid[PROG_DEPTH];

static enum cb_storage		current_storage;

static cb_tree			perform_stack;
static cb_tree			qualifier;
static cb_tree			keys_list;

static cb_tree			save_tree;
static cb_tree			start_tree;

static unsigned int		check_unreached;
static unsigned int		within_typedef_definition;
static unsigned int		in_declaratives;
static unsigned int		in_debugging;
static unsigned int		current_linage;
static unsigned int		report_count;
static unsigned int		first_prog;
static unsigned int		setup_from_identification;
static unsigned int		use_global_ind;
static unsigned int		same_area;
static unsigned int		inspect_keyword;
static unsigned int		main_flag_set;
static int			next_label_id;
static int			eval_level;
static int			eval_inc;
static int			eval_inc2;
static int			depth;
static int			first_nested_program;
static int			call_mode;
static int			size_mode;
static cob_flags_t		set_attr_val_on;
static cob_flags_t		set_attr_val_off;
static cob_flags_t		check_duplicate;
static cob_flags_t		check_on_off_duplicate;
static cob_flags_t		check_pic_duplicate;
static cob_flags_t		check_line_col_duplicate;
static unsigned int		skip_statements;
static unsigned int		start_debug;
static unsigned int		save_debug;
static unsigned int		needs_field_debug;
static unsigned int		needs_debug_item;
static unsigned int		env_div_seen;
static cob_flags_t		header_check;
static unsigned int		call_nothing;
static enum tallying_phrase	previous_tallying_phrase;
static cb_tree			default_rounded_mode;
static enum key_clause_type	key_type;

static int			ext_dyn_specified;
static enum cb_assign_device	assign_device;
 
static enum cb_display_type	display_type;
static int			is_first_display_item;
static cb_tree			advancing_value;
static cb_tree			upon_value;
static cb_tree			line_column;

static unsigned int		exhibit_changed;
static unsigned int		exhibit_named;

static cb_tree			ml_suppress_list;
static cb_tree			xml_encoding;
static int			with_xml_dec;
static int			with_attrs;

static cb_tree			alphanumeric_collation;
static cb_tree			national_collation;

static enum cb_ml_suppress_category	ml_suppress_category;

static int			term_array[TERM_MAX];
static cb_tree			eval_check[EVAL_DEPTH][EVAL_DEPTH];

static const char		*backup_source_file = NULL;
static int			backup_source_line = 0;

/* Defines for header presence */

#define	COBC_HD_ENVIRONMENT_DIVISION	(1U << 0)
#define	COBC_HD_CONFIGURATION_SECTION	(1U << 1)
#define	COBC_HD_SPECIAL_NAMES		(1U << 2)
#define	COBC_HD_INPUT_OUTPUT_SECTION	(1U << 3)
#define	COBC_HD_FILE_CONTROL		(1U << 4)
#define	COBC_HD_I_O_CONTROL		(1U << 5)
#define	COBC_HD_DATA_DIVISION		(1U << 6)
#define	COBC_HD_FILE_SECTION		(1U << 7)
#define	COBC_HD_WORKING_STORAGE_SECTION	(1U << 8)
#define	COBC_HD_LOCAL_STORAGE_SECTION	(1U << 9)
#define	COBC_HD_LINKAGE_SECTION		(1U << 10)
#define	COBC_HD_COMMUNICATION_SECTION	(1U << 11)
#define	COBC_HD_REPORT_SECTION		(1U << 12)
#define	COBC_HD_SCREEN_SECTION		(1U << 13)
#define	COBC_HD_PROCEDURE_DIVISION	(1U << 14)
#define	COBC_HD_PROGRAM_ID		(1U << 15)
#define	COBC_HD_SOURCE_COMPUTER		(1U << 16)
#define	COBC_HD_OBJECT_COMPUTER		(1U << 17)
#define	COBC_HD_REPOSITORY		(1U << 18)

/* Static functions */

static void
begin_statement (const char *name, const unsigned int term)
{
	if (check_unreached) {
		cb_warning (cb_warn_unreachable, _("unreachable statement '%s'"), name);
	}
	current_paragraph->flag_statement = 1;
	current_statement = cb_build_statement (name);
	CB_TREE (current_statement)->source_file = cb_source_file;
	CB_TREE (current_statement)->source_line = cb_source_line;
	current_statement->flag_in_debug = in_debugging;
	emit_statement (CB_TREE (current_statement));
	if (term) {
		term_array[term]++;
	}
}

static void
restore_backup_pos (cb_tree item)
{
	item->source_file = backup_source_file;
	item->source_line = backup_source_line;
}

static void
begin_statement_from_backup_pos (const char *name, const unsigned int term)
{
	current_paragraph->flag_statement = 1;
	current_statement = cb_build_statement (name);
	restore_backup_pos (CB_TREE (current_statement));
	current_statement->flag_in_debug = in_debugging;
	emit_statement (CB_TREE (current_statement));
	if (term) {
		term_array[term]++;
	}
	if (check_unreached) {
		cb_warning_x (cb_warn_unreachable, CB_TREE (current_statement), _("unreachable statement '%s'"), name);
	}
}

/* create a new statement with base attributes of current_statement
   and set this as new current_statement */
static void
begin_implicit_statement (void)
{
	struct cb_statement	*new_statement;
	new_statement = cb_build_statement (NULL);
	new_statement->common = current_statement->common;
	new_statement->name = current_statement->name;
	new_statement->flag_in_debug = !!in_debugging;
	new_statement->flag_implicit = 1;
	current_statement->body = cb_list_add (current_statement->body,
					    CB_TREE (new_statement));
	current_statement = new_statement;
}

# if 0 /* activate only for debugging purposes for attribs
	FIXME: Replace by DEBUG_LOG function */
static
void print_bits (cob_flags_t num)
{
	unsigned int 	size = sizeof (cob_flags_t);
	unsigned int	max_pow = 1 << (size * 8 - 1);
	int 		i = 0;

	for(; i < size * 8; ++i){
		/* Print last bit and shift left. */
		fprintf (stderr, "%u ", num & max_pow ? 1 : 0);
		num = num << 1;
	}
	fprintf (stderr, "\n");
}
#endif

/* functions for storing current position and
   assigning it to a cb_tree after its parsing is finished */
static COB_INLINE
void backup_current_pos (void)
{
	backup_source_file = cb_source_file;
	backup_source_line = cb_source_line;
}

#if 0 /* currently not used */
static COB_INLINE
void set_pos_from_backup (cb_tree x)
{
	x->source_file = backup_source_file;
	x->source_line = backup_source_line;
}
#endif

static void
emit_entry (const char *name, const int encode, cb_tree using_list, cb_tree convention, int override_source_line)
{
	cb_tree		l;
	cb_tree		check_list;
	cb_tree		label;
	cb_tree		x;
	cb_tree		entry_conv;
	struct cb_field	*f, *ret_f;
	int			param_num;
	char		buff[COB_MINI_BUFF];

	snprintf (buff, (size_t)COB_MINI_MAX, "E$%s", name);
	label = cb_build_label (cb_build_reference (buff), NULL);
	if (encode) {
		CB_LABEL (label)->name = cb_encode_program_id (name, 0, cb_fold_call);
		CB_LABEL (label)->orig_name = name;
	} else {
		CB_LABEL (label)->name = name;
		CB_LABEL (label)->orig_name = current_program->orig_program_id;
	}
	CB_LABEL (label)->flag_begin = 1;
	CB_LABEL (label)->flag_entry = 1;
	if (override_source_line) {
		label->source_line = override_source_line;
	}
	emit_statement (label);

	if (current_program->flag_debugging) {
		emit_statement (cb_build_debug (cb_debug_contents,
						"START PROGRAM", NULL));
	}

	param_num = 1;
	check_list = NULL;
	for (l = using_list; l; l = CB_CHAIN (l)) {
		x = CB_VALUE (l);
		if (cb_try_ref (x) != cb_error_node) {
			f = CB_FIELD (cb_ref (x));
			if (!current_program->flag_chained) {
				if (f->storage != CB_STORAGE_LINKAGE) {
					cb_error_x (x, _("'%s' is not in LINKAGE SECTION"), f->name);
				}
				if (f->flag_item_based || f->flag_external) {
					cb_error_x (x, _("'%s' cannot be BASED/EXTERNAL"), f->name);
				}
				f->flag_is_pdiv_parm = 1;
			} else {
				if (f->storage != CB_STORAGE_WORKING) {
					cb_error_x (x, _("'%s' is not in WORKING-STORAGE SECTION"), f->name);
				}
				f->flag_chained = 1;
				f->param_num = param_num;
				param_num++;
			}
			if (f->level != 01 && f->level != 77) {
				cb_error_x (x, _("'%s' not level 01 or 77"), f->name);
			}
			if (f->redefines) {
				cb_error_x (x, _("'%s' REDEFINES field not allowed here"), f->name);
			}
			/* add a "receiving" entry for the USING parameter */
			if (cb_listing_xref) {
				cobc_xref_link (&f->xref, CB_REFERENCE (x)->common.source_line, 1);
			}
			if (CB_PURPOSE_INT (l) == CB_CALL_BY_REFERENCE) {
				check_list = cb_list_add (check_list, x);
			}
		}
	}

	if (check_list != NULL) {
		for (l = check_list; l; l = CB_CHAIN (l)) {
			cb_tree	l2 = CB_VALUE (l);
			x = cb_ref (l2);
			if (x != cb_error_node) {
				for (l2 = check_list; l2 != l; l2 = CB_CHAIN (l2)) {
					if (cb_ref (CB_VALUE (l2)) == x) {
						cb_error_x (l,
							_("duplicate USING BY REFERENCE item '%s'"),
							cb_name (CB_VALUE (l)));
						CB_VALUE (l) = cb_error_node;
						break;
					}
				}
			}
		}
	}

	if (current_program->returning &&
		cb_ref (current_program->returning) != cb_error_node) {
		ret_f = CB_FIELD (cb_ref (current_program->returning));
		if (ret_f->redefines) {
			cb_error_x (current_program->returning,
				_("'%s' REDEFINES field not allowed here"), ret_f->name);
		}
	} else {
		ret_f = NULL;
	}

	/* Check returning item against using items when FUNCTION */
	if (current_program->prog_type == COB_MODULE_TYPE_FUNCTION && ret_f) {
		for (l = using_list; l; l = CB_CHAIN (l)) {
			x = CB_VALUE (l);
			if (CB_VALID_TREE (x) && cb_ref (x) != cb_error_node) {
				f = CB_FIELD (cb_ref (x));
				if (ret_f == f) {
					cb_error_x (x, _("'%s' USING item duplicates RETURNING item"), f->name);
				}
			}
		}
	}

	for (l = current_program->entry_list; l; l = CB_CHAIN (l)) {
		struct cb_label *check = CB_LABEL (CB_PURPOSE (l));
		if (strcmp (name, check->name) == 0) {
			cb_error_x (CB_TREE (current_statement),
				    _("ENTRY '%s' duplicated"), name);
		}
	}

	if (convention) {
		entry_conv = convention;
	} else {
		entry_conv = current_program->entry_convention;
	}

	current_program->entry_list =
		cb_list_append (current_program->entry_list,
				CB_BUILD_PAIR (label, CB_BUILD_PAIR(entry_conv, using_list)));
}

/* Main entry point and the number of its main parameters */
static void
emit_main_entry (struct cb_program *program, cb_tree using_list)
{
	if (using_list) {
		program->num_proc_params = cb_list_length (using_list);
	}

	emit_entry (program->program_id, 0, using_list, NULL, 0);
	if (program->source_name) {
		emit_entry (program->source_name, 1, using_list, NULL, 0);
	}
}

static void
emit_entry_goto (const char *name)
{
	cb_tree		l;
	cb_tree		label;
	char		buff[COB_MINI_BUFF];

	snprintf (buff, (size_t)COB_MINI_MAX, "E$%s", name);
	label = cb_build_label (cb_build_reference (buff), NULL);
	CB_LABEL (label)->name = name;
	CB_LABEL (label)->orig_name = name;
	CB_LABEL (label)->flag_begin = 1;
	CB_LABEL (label)->flag_entry = 1;
	CB_LABEL (label)->flag_entry_for_goto = 1;
	label->source_line = backup_source_line;	/* CHECKME: is that correct? */
	emit_statement (label);

	for (l = current_program->entry_list_goto; l; l = CB_CHAIN (l)) {
		struct cb_label *real_label = CB_LABEL (CB_VALUE (l));
		if (strcmp (name, real_label->name) == 0) {
			cb_error_x (CB_TREE (current_statement),
				    _("ENTRY FOR GO TO '%s' duplicated"), name);
		}
	}

	if (current_program->entry_list_goto) {
		current_program->entry_list_goto =
			cb_list_add (current_program->entry_list_goto, label);
	} else {
		current_program->entry_list_goto = CB_LIST_INIT (label);
	}
}

static size_t
increment_depth (void)
{
	if (++depth >= PROG_DEPTH) {
		cb_error (_("maximum nested program depth exceeded (%d)"),
			  PROG_DEPTH);
		return 1;
	}
	return 0;
}

static void
terminator_warning (cb_tree stmt, const unsigned int termid,
		    const char *name)
{
	char		terminator[32];

	check_unreached = 0;
	if (term_array[termid]) {
		term_array[termid]--;
	/* LCOV_EXCL_START */
	} else {
		cobc_err_msg ("call to '%s' without any open term for %s",
			"terminator_warning", name);
		COBC_ABORT ();
	}
	/* LCOV_EXCL_STOP */
	snprintf (terminator, 32, "END-%s", name);
	if (is_reserved_word (terminator)) {
		cb_warning_x (cb_warn_terminator, CB_TREE (current_statement),
			_("%s statement not terminated by %s"), name, terminator);
	}

	/* Free tree associated with terminator */
	if (stmt) {
		cobc_parse_free (stmt);
	}
}

static void
terminator_error (cb_tree stmt, const unsigned int termid, const char *name)
{
	char		terminator[32];

	check_unreached = 0;
	if (term_array[termid]) {
		term_array[termid]--;
	/* LCOV_EXCL_START */
	} else {
		cobc_err_msg ("call to '%s' without any open term for %s",
			"terminator_error", name);
		COBC_ABORT ();
	}
	/* LCOV_EXCL_STOP */
	snprintf (terminator, 32, "END-%s", name);
	if (is_reserved_word (terminator)) {
		cb_error_x (CB_TREE (current_statement),
			_("%s statement not terminated by %s"), name, terminator);
	} else {
		cb_error_x (CB_TREE (current_statement),
			_("%s statement not terminated"), name);
	}

	/* Free tree associated with terminator */
	if (stmt) {
		cobc_parse_free (stmt);
	}
}

static void
terminator_clear (cb_tree stmt, const unsigned int termid)
{
	struct cb_perform	*p;
	check_unreached = 0;
	if (term_array[termid]) {
		term_array[termid]--;
	/* LCOV_EXCL_START */
	} else {
		cobc_err_msg ("call to '%s' without any open term for %s",
			"terminator_warning", current_statement->name);
		COBC_ABORT ();
	}
	/* LCOV_EXCL_STOP */
	if (termid == TERM_PERFORM
	 && perform_stack) {
		p = CB_PERFORM (CB_VALUE (perform_stack));
		if (p->perform_type == CB_PERFORM_UNTIL) {
			cb_terminate_cond ();
		}
	}
	/* Free tree associated with terminator */
	if (stmt) {
		cobc_parse_free (stmt);
	}
}

static int
literal_value (cb_tree x)
{
	if (x == cb_space) {
		return ' ';
	} else if (x == cb_zero) {
		return '0';
	} else if (x == cb_quote) {
		return cb_flag_apostrophe ? '\'' : '"';
	} else if (x == cb_null) {
		return 0;
	} else if (x == cb_low) {
		return 0;
	} else if (x == cb_high) {
		return 255;
	} else if (CB_TREE_CLASS (x) == CB_CLASS_NUMERIC) {
		return cb_get_int (x);
	} else {
		return CB_LITERAL (x)->data[0];
	}
}

static void
setup_use_file (struct cb_file *fileptr)
{
	struct cb_file	*newptr;

	if (fileptr->organization == COB_ORG_SORT) {
		cb_error (_("USE statement invalid for SORT file"));
	}
	if (fileptr->flag_global) {
		newptr = cobc_parse_malloc (sizeof(struct cb_file));
		*newptr = *fileptr;
		newptr->handler = current_section;
		newptr->handler_prog = current_program;
		if (!use_global_ind) {
			current_program->local_file_list =
				cb_list_add (current_program->local_file_list,
					     CB_TREE (newptr));
		} else {
			current_program->global_file_list =
				cb_list_add (current_program->global_file_list,
					     CB_TREE (newptr));
		}
	} else {
		fileptr->handler = current_section;
	}
}

/* note: same message in field.c */
static int
emit_duplicate_clause_message (const char *clause)
{
	/* FIXME: replace by a new warning level that is set
	   to warn/error depending on cb_relaxed_syntax_checks */
	if (cb_relaxed_syntax_checks) {
		cb_warning (COBC_WARN_FILLER, _("duplicate %s clause"), clause);
		return 0;
	}
	cb_error (_("duplicate %s clause"), clause);
	return 1;
}

static int
check_repeated (const char *clause, const cob_flags_t bitval,
			cob_flags_t *already_seen)
{
	if (*already_seen & bitval) {
		return emit_duplicate_clause_message (clause);
	}
	*already_seen |= bitval;
	return 0;
}

static void
emit_conflicting_clause_message (const char *clause, const char *conflicting)
{
	if (cb_relaxed_syntax_checks) {
		cb_warning (COBC_WARN_FILLER, _("cannot specify both %s and %s; %s is ignored"),
			clause, conflicting, clause);
	} else {
		cb_error (_("cannot specify both %s and %s"),
			clause, conflicting);
	}

}


static void
error_if_no_page_lines_limit (const char *phrase)
{
	if (!current_report->lines && !current_report->t_lines) {
		cb_error (_("Cannot specify %s without number of lines on page"),
			  phrase);
	}
}

static void
setup_occurs (void)
{
	check_repeated ("OCCURS", SYN_CLAUSE_7, &check_pic_duplicate);
	if (current_field->indexes == COB_MAX_SUBSCRIPTS) {
		cb_error (_("maximum OCCURS depth exceeded (%d)"),
			COB_MAX_SUBSCRIPTS);
	} else {
		current_field->indexes++;
	}

	if (current_field->flag_unbounded) {
		if (current_field->storage != CB_STORAGE_LINKAGE) {
			cb_error_x (CB_TREE(current_field), _("'%s' is not in LINKAGE SECTION"),
				cb_name (CB_TREE(current_field)));
		}
	}

	if (current_field->flag_item_based) {
		cb_error (_("%s and %s are mutually exclusive"), "BASED", "OCCURS");
	} else if (current_field->flag_external) {
		cb_error (_("%s and %s are mutually exclusive"), "EXTERNAL", "OCCURS");
	}
	current_field->flag_occurs = 1;
}

static void
setup_occurs_min_max (cb_tree occurs_min, cb_tree occurs_max)
{
	if (occurs_max) {
		current_field->occurs_min = cb_get_int (occurs_min);
		if (occurs_max != cb_int0) {
			current_field->occurs_max = cb_get_int (occurs_max);
			if (!current_field->depending) {
				if (cb_relaxed_syntax_checks) {
					cb_warning (COBC_WARN_FILLER, _("TO phrase without DEPENDING phrase"));
					cb_warning (COBC_WARN_FILLER, _("maximum number of occurrences assumed to be exact number"));
					current_field->occurs_min = 1; /* CHECKME: why using 1 ? */
				} else {
					cb_error (_("TO phrase without DEPENDING phrase"));
				}
			}
			if (current_field->occurs_max <= current_field->occurs_min) {
				cb_error (_("OCCURS TO must be greater than OCCURS FROM"));
			}
		} else {
			current_field->occurs_max = 0;
		}
	} else {
		current_field->occurs_min = 1; /* CHECKME: why using 1 ? */
		current_field->occurs_max = cb_get_int (occurs_min);
		if (current_field->depending) {
			cb_verify (cb_odo_without_to, _("OCCURS DEPENDING ON without TO phrase"));
		}
	}
}

static void
check_relaxed_syntax (const cob_flags_t lev)
{
	const char	*s;

	switch (lev) {
	case COBC_HD_ENVIRONMENT_DIVISION:
		s = "ENVIRONMENT DIVISION";
		break;
	case COBC_HD_CONFIGURATION_SECTION:
		s = "CONFIGURATION SECTION";
		break;
	case COBC_HD_SPECIAL_NAMES:
		s = "SPECIAL-NAMES";
		break;
	case COBC_HD_INPUT_OUTPUT_SECTION:
		s = "INPUT-OUTPUT SECTION";
		break;
	case COBC_HD_FILE_CONTROL:
		s = "FILE-CONTROL";
		break;
	case COBC_HD_I_O_CONTROL:
		s = "I-O-CONTROL";
		break;
	case COBC_HD_DATA_DIVISION:
		s = "DATA DIVISION";
		break;
	case COBC_HD_FILE_SECTION:
		s = "FILE SECTION";
		break;
	case COBC_HD_WORKING_STORAGE_SECTION:
		s = "WORKING-STORAGE SECTION";
		break;
	case COBC_HD_LOCAL_STORAGE_SECTION:
		s = "LOCAL-STORAGE SECTION";
		break;
	case COBC_HD_LINKAGE_SECTION:
		s = "LINKAGE SECTION";
		break;
	case COBC_HD_COMMUNICATION_SECTION:
		s = "COMMUNICATION SECTION";
		break;
	case COBC_HD_REPORT_SECTION:
		s = "REPORT SECTION";
		break;
	case COBC_HD_SCREEN_SECTION:
		s = "SCREEN SECTION";
		break;
	case COBC_HD_PROCEDURE_DIVISION:
		s = "PROCEDURE DIVISION";
		break;
	case COBC_HD_PROGRAM_ID:
		s = "PROGRAM-ID";
		break;
	/* LCOV_EXCL_START */
	default:
		s = _("unknown");
		break;
	/* LCOV_EXCL_STOP */
	}
	if (cb_relaxed_syntax_checks) {
		cb_warning (COBC_WARN_FILLER, _("%s header missing - assumed"), s);
	} else {
		cb_error (_("%s header missing"), s);
	}
}

static void
program_init_without_program_id (void)
{
	cb_tree		l;

	current_section = NULL;
	current_paragraph = NULL;
	l = cb_build_alphanumeric_literal (demangle_name,
		strlen (demangle_name));
	current_program->program_name = (char *)CB_LITERAL (l)->data;
	current_program->program_id
		= cb_build_program_id (current_program->program_name, 0);
	current_program->prog_type = COB_MODULE_TYPE_PROGRAM;
	if (!main_flag_set) {
		main_flag_set = 1;
		current_program->flag_main = cobc_flag_main;
	}
	check_relaxed_syntax (COBC_HD_PROGRAM_ID);
}

/* check if headers are present - return 0 if fine, 1 if missing
   Lev1 must always be present and is checked
   Lev2/3/4, if non-zero (forced) may be present
*/
static int
check_headers_present (const cob_flags_t lev1, const cob_flags_t lev2,
		       const cob_flags_t lev3, const cob_flags_t lev4)
{
	int ret = 0;
	if (!(header_check & lev1)) {
		header_check |= lev1;
		check_relaxed_syntax (lev1);
		ret = 1;
	}
	if (lev2) {
		if (!(header_check & lev2)) {
			header_check |= lev2;
			check_relaxed_syntax (lev2);
			ret = 1;
		}
	}
	if (lev3) {
		if (!(header_check & lev3)) {
			header_check |= lev3;
			check_relaxed_syntax (lev3);
			ret = 1;
		}
	}
	if (lev4) {
		if (!(header_check & lev4)) {
			header_check |= lev4;
			check_relaxed_syntax (lev4);
			ret = 1;
		}
	}
	return ret;
}

/*
  TO-DO: Refactor header checks - have several header_checks: division_header,
  section_header, paragraph_header, sentence_type
*/
static void
set_conf_section_part (const cob_flags_t part)
{
	header_check &= ~COBC_HD_SOURCE_COMPUTER;
	header_check &= ~COBC_HD_OBJECT_COMPUTER;
	header_check &= ~COBC_HD_SPECIAL_NAMES;
	header_check &= ~COBC_HD_REPOSITORY;
	header_check |= part;
}

static const char *
get_conf_section_part_name (const cob_flags_t part)
{
	if (part == COBC_HD_SOURCE_COMPUTER) {
		return "SOURCE-COMPUTER";
	} else if (part == COBC_HD_OBJECT_COMPUTER) {
		return "OBJECT-COMPUTER";
	} else if (part == COBC_HD_SPECIAL_NAMES) {
		return "SPECIAL-NAMES";
	} else if (part == COBC_HD_REPOSITORY) {
		return "REPOSITORY";
	/* LCOV_EXCL_START */
	} else {
		/* This should never happen (and therefore doesn't get a translation) */
		cb_error ("unexpected configuration section part " CB_FMT_LLU, part);
		COBC_ABORT ();
	/* LCOV_EXCL_STOP */
	}
}

static int
get_conf_section_part_order (const cob_flags_t part)
{
	if (part == COBC_HD_SOURCE_COMPUTER) {
		return 1;
	} else if (part == COBC_HD_OBJECT_COMPUTER) {
		return 2;
	} else if (part == COBC_HD_SPECIAL_NAMES) {
		return 3;
	} else if (part == COBC_HD_REPOSITORY) {
		return 4;
	/* LCOV_EXCL_START */
	} else {
		/* This should never happen (and therefore doesn't get a translation) */
		cb_error ("unexpected configuration section part " CB_FMT_LLU, part);
		COBC_ABORT ();
	/* LCOV_EXCL_STOP */
	}
}

static void
check_conf_section_order (const cob_flags_t part)
{
	const cob_flags_t	prev_part
		= header_check & (COBC_HD_SOURCE_COMPUTER
				  | COBC_HD_OBJECT_COMPUTER
				  | COBC_HD_SPECIAL_NAMES
				  | COBC_HD_REPOSITORY);
#define MESSAGE_LEN 100
	char			message[MESSAGE_LEN] = { '\0' };

	if (prev_part == 0) {
		return;
	}

	if (prev_part == part) {
		cb_error (_("duplicate %s"), get_conf_section_part_name (part));
	} else if (get_conf_section_part_order (part) < get_conf_section_part_order (prev_part)) {
		snprintf (message, MESSAGE_LEN, _("%s incorrectly after %s"),
			  get_conf_section_part_name (part),
			  get_conf_section_part_name (prev_part));
		cb_verify (cb_incorrect_conf_sec_order, message);
	}
}

#undef MESSAGE_LEN

static void
build_words_for_nested_programs (void)
{
	cb_tree		x;
	cb_tree		y;

	/* Inherit special name mnemonics from parent */
	for (x = current_program->mnemonic_spec_list; x; x = CB_CHAIN (x)) {
		y = cb_build_reference (cb_name(CB_PURPOSE(x)));
		if (CB_SYSTEM_NAME_P (CB_VALUE(x))) {
			cb_define (y, CB_VALUE(x));
		} else {
			cb_build_constant (y, CB_VALUE(x));
		}
	}

	/* Inherit class names from parent */
	for (x = current_program->class_name_list; x; x = CB_CHAIN(x)) {
		y = cb_build_reference (cb_name(CB_VALUE(x)));
		cb_define (y, CB_VALUE(x));
	}
}

static void
clear_initial_values (void)
{
	perform_stack = NULL;
	current_statement = NULL;
	qualifier = NULL;
	in_declaratives = 0;
	in_debugging = 0;
	use_global_ind = 0;
	check_duplicate = 0;
	check_pic_duplicate = 0;
	skip_statements = 0;
	start_debug = 0;
	save_debug = 0;
	needs_field_debug = 0;
	needs_debug_item = 0;
	env_div_seen = 0;
	header_check = 0;
	next_label_id = 0;
	current_linage = 0;
	set_attr_val_on = 0;
	set_attr_val_off = 0;
	report_count = 0;
	current_storage = CB_STORAGE_WORKING;
	eval_level = 0;
	eval_inc = 0;
	eval_inc2 = 0;
	inspect_keyword = 0;
	check_unreached = 0;
	cobc_in_id = 0;
	cobc_in_procedure = 0;
	cobc_in_repository = 0;
	cobc_force_literal = 0;
	cobc_in_xml_generate_body = 0;
	cobc_in_json_generate_body = 0;
	non_const_word = 0;
	suppress_data_exceptions = 0;
	same_area = 1;
	memset ((void *)eval_check, 0, sizeof(eval_check));
	memset ((void *)term_array, 0, sizeof(term_array));
	linage_file = NULL;
	current_file = NULL;
	current_cd = NULL;
	current_report = NULL;
	report_instance = NULL;
	next_label_list = NULL;
	default_rounded_mode = cb_int (COB_STORE_ROUND);
}

/*
  We must check for redefinitions of program-names and external program names
  outside of the usual reference/word_list methods as it may have to be done in
  a case-sensitive way.
*/
static void
begin_scope_of_program_name (struct cb_program *program)
{
	const char	*prog_name = program->program_name;
	const char	*prog_id = program->orig_program_id;
	const char	*elt_name;
	const char	*elt_id;
	cb_tree		l;

	/* Error if a program with the same name has been defined. */
	for (l = defined_prog_list; l; l = CB_CHAIN (l)) {
		elt_name = ((struct cb_program *) CB_VALUE (l))->program_name;
		elt_id = ((struct cb_program *) CB_VALUE (l))->orig_program_id;
		if (cb_fold_call && strcasecmp (prog_name, elt_name) == 0) {
			cb_error_x ((cb_tree) program,
				    _("redefinition of program name '%s'"),
				    elt_name);
		} else if (strcmp (prog_id, elt_id) == 0) {
		        cb_error_x ((cb_tree) program,
				    _("redefinition of program ID '%s'"),
				    elt_id);
			return;
		}
	}

	/* Otherwise, add the program to the list. */
	defined_prog_list = cb_list_add (defined_prog_list,
					 (cb_tree) program);
}

static void
remove_program_name (struct cb_list *l, struct cb_list *prev)
{
	if (prev == NULL) {
		defined_prog_list = l->chain;
	} else {
		prev->chain = l->chain;
	}
	cobc_parse_free (l);
}

/* Remove the program from defined_prog_list, if necessary. */
static void
end_scope_of_program_name (struct cb_program *program, const unsigned char type)
{
	struct	cb_list	*prev = NULL;
	struct	cb_list *l = (struct cb_list *) defined_prog_list;

	/* create empty entry if the program has no PROCEDURE DIVISION, error for UDF */
	if (!program->entry_list) {
		if (type == COB_MODULE_TYPE_FUNCTION) {
			cb_error (_("FUNCTION '%s' has no PROCEDURE DIVISION"), program->program_name);
		} else {
			emit_main_entry (program, NULL);
		}
	}
	program->last_source_line = backup_source_line;

	if (program->nested_level == 0) {
		return;
	}

	/* Remove any subprograms */
	l = CB_LIST (defined_prog_list);
	while (l) {
		if (CB_PROGRAM (l->value)->nested_level > program->nested_level) {
			remove_program_name (l, prev);
		} else {
			prev = l;
		}
		if (prev && prev->chain != NULL) {
			l = CB_LIST (prev->chain);
		} else {
			l = NULL;
		}
	}

	/* Remove the specified program, if it is not COMMON */
	if (!program->flag_common) {
		l = (struct cb_list *) defined_prog_list;
		while (l) {
			/* The nested_level check is for the pathological case
			   where two nested programs have the same name */
			if (0 == strcmp (program->orig_program_id,
					 CB_PROGRAM (l->value)->orig_program_id)
			    && program->nested_level == CB_PROGRAM (l->value)->nested_level) {
				remove_program_name (l, prev);
				if (prev && prev->chain != NULL) {
					l = CB_LIST (prev->chain);
				} else {
					l = NULL;
				}
				break;
			} else {
				prev = l;
				if (l->chain != NULL) {
					l = CB_LIST (l->chain);
				} else {
					l = NULL;
				}
			}
		}
	}
}

static void
setup_program_start (void)
{
	if (setup_from_identification) {
		setup_from_identification = 0;
		return;
	}
	current_section = NULL;
	current_paragraph = NULL;

	if (depth != 0 && first_nested_program) {
		check_headers_present (COBC_HD_PROCEDURE_DIVISION, 0, 0, 0);
	}
	first_nested_program = 1;
}

static int
setup_program (cb_tree id, cb_tree as_literal, const unsigned char type)
{
	const char	*external_name = NULL;

	setup_program_start ();

	/* finish last program/function */
	if (!first_prog) {
		if (!current_program->flag_validated) {
			current_program->flag_validated = 1;
			cb_validate_program_body (current_program);
		}

		clear_initial_values ();
		current_program = cb_build_program (current_program, depth);
		if (depth) {
			build_words_for_nested_programs();
		}
		cb_set_intr_when_compiled ();
		cb_build_registers ();
		cb_add_external_defined_registers ();
	} else {
		first_prog = 0;
	}

	/* set internal name */
	if (CB_LITERAL_P (id)) {
		current_program->program_name = (char *)CB_LITERAL (id)->data;
	} else {
		current_program->program_name = CB_NAME (id);
	}
	stack_progid[depth] = current_program->program_name;
	current_program->prog_type = type;

	if (depth != 0 && type == COB_MODULE_TYPE_FUNCTION) {
		cb_error (_("functions may not be defined within a program/function"));
	}

	if (increment_depth ()) {
		return 1;
	}

	/* set external name if specified */
	if (as_literal) {
		external_name = (const char *)CB_LITERAL (as_literal)->data;
	} else {
		external_name = current_program->program_name;
	}

	/* build encoded external PROGRAM-ID */
	current_program->program_id
		= cb_build_program_id (external_name, type == COB_MODULE_TYPE_FUNCTION);

	if (type == COB_MODULE_TYPE_PROGRAM) {
		if (!main_flag_set) {
			main_flag_set = 1;
			current_program->flag_main = !!cobc_flag_main;
		}
	} else { /* COB_MODULE_TYPE_FUNCTION */
		current_program->flag_recursive = 1;
	}

	if (CB_REFERENCE_P (id)) {
		cb_define (id, CB_TREE (current_program));
	}

	begin_scope_of_program_name (current_program);

	return 0;
}

static void
decrement_depth (const char *name, const unsigned char type)
{
	int	d;

	if (depth) {
		depth--;
	}

	if (!strcmp (stack_progid[depth], name)) {
		return;
	}

	if (type == COB_MODULE_TYPE_FUNCTION) {
		cb_error (_("END FUNCTION '%s' is different from FUNCTION-ID '%s'"),
			  name, stack_progid[depth]);
		return;
	}

	/* Set depth to that of whatever program we just ended, if it exists. */
	for (d = depth; d >= 0; --d) {
		if (!strcmp (stack_progid[d], name)) {
			depth = d;
			return;
		}
	}

	if (depth != d) {
		cb_error (_("END PROGRAM '%s' is different from PROGRAM-ID '%s'"),
			  name, stack_progid[depth]);
	}
}

static void
clean_up_program (cb_tree name, const unsigned char type)
{
	char		*s;

	end_scope_of_program_name (current_program, type);

	if (name) {
		if (CB_LITERAL_P (name)) {
			s = (char *)(CB_LITERAL (name)->data);
		} else {
			s = (char *)(CB_NAME (name));
		}

		decrement_depth (s, type);
	}

	current_section = NULL;
	current_paragraph = NULL;
	if (!current_program->flag_validated) {
		current_program->flag_validated = 1;
		cb_validate_program_body (current_program);
	}
}

static const char *
get_literal_or_word_name (const cb_tree x)
{
	if (CB_LITERAL_P (x)) {
		return (const char *) CB_LITERAL (x)->data;
	} else { /* CB_REFERENCE_P (x) */
		return (const char *) CB_NAME (x);
	}
}

/* verify and set currency symbol used in picture (compile time) and - if no currency
   string is explicitly set (which is currently not implemented) - as currency string
   (run time for display and [de-]editing)*/
static void
set_currency_picture_symbol (const cb_tree x)
{
	unsigned char	*s		= CB_LITERAL (x)->data;

	if (CB_LITERAL (x)->size != 1) {
		cb_error_x (x, _("currency symbol must be one character long"));
		return;
	}
	switch (*s) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
	case 'A':
	case 'B':
	case 'C':
	case 'D':
	case 'E':
	case 'N':
	case 'P':
	case 'R':
	case 'S':
	case 'V':
	case 'X':
	case 'Z':
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'n':
	case 'p':
	case 'r':
	case 's':
	case 'v':
	case 'x':
	case 'z':
	case '+':
	case '-':
	case ',':
	case '.':
	case '*':
	case '/':
	case ';':
	case '(':
	case ')':
	case '=':
	case '\'':
	case '"':
	case ' ':
#if 0 /* note: MicroFocus also dissalows L (VAX) and G (OSVS) */
	case 'L':
	case 'G':
	case 'l':
	case 'g':
#endif
		cb_error_x (x, _("invalid character '%c' in currency symbol"), s[0]);
		return;
	default:
		break;
	}
	current_program->currency_symbol = s[0];
}

/* Return 1 if the prototype name is the same as the current function's. */
static int
check_prototype_redefines_current_element (const cb_tree prototype_name)
{
	const char	*name = get_literal_or_word_name (prototype_name);

	if (strcasecmp (name, current_program->program_name) == 0) {
		cb_warning_x (COBC_WARN_FILLER, prototype_name,
			_("prototype has same name as current function and will be ignored"));
		return 1;
	}

	return 0;
}

/* Returns 1 if the prototype has been duplicated. */
static int
check_for_duplicate_prototype (const cb_tree prototype_name,
			       const cb_tree prototype)
{
	cb_tree	dup;

	if (CB_WORD_COUNT (prototype_name) > 0) {
		/* Make sure the duplicate is a prototype */
		dup = cb_ref (prototype_name);
		if (!CB_PROTOTYPE_P (dup)) {
			redefinition_error (prototype_name);
			return 1;
		}

		/* Check the duplicate prototypes match */
		if (strcmp (CB_PROTOTYPE (prototype)->ext_name,
			    CB_PROTOTYPE (dup)->ext_name)
		    || CB_PROTOTYPE (prototype)->type != CB_PROTOTYPE (dup)->type) {
			cb_error_x (prototype_name,
				    _("duplicate REPOSITORY entries for '%s' do not match"),
				    get_literal_or_word_name (prototype_name));
		} else {
			cb_warning_x (COBC_WARN_FILLER, prototype_name,
				      _("duplicate REPOSITORY entry for '%s'"),
				      get_literal_or_word_name (prototype_name));
		}
		return 1;
	}

	return 0;
}

static void
setup_prototype (cb_tree prototype_name, cb_tree ext_name,
		  const int type, const int is_current_element)
{
	cb_tree	prototype;
	int	name_redefinition_allowed;

	if (!is_current_element
	    && check_prototype_redefines_current_element (prototype_name)) {
		return;
	}

	prototype = cb_build_prototype (prototype_name, ext_name, type);

	if (!is_current_element
	    && check_for_duplicate_prototype (prototype_name, prototype)) {
		return;
	}

	name_redefinition_allowed = type == COB_MODULE_TYPE_PROGRAM
		&& is_current_element && cb_program_name_redefinition;
	if (!name_redefinition_allowed) {
		if (CB_LITERAL_P (prototype_name)) {
			cb_define (cb_build_reference ((const char *)CB_LITERAL (prototype_name)->data), prototype);
		} else {
			cb_define (prototype_name, prototype);
		}

		if (type == COB_MODULE_TYPE_PROGRAM) {
			current_program->program_spec_list =
				cb_list_add (current_program->program_spec_list, prototype);
		} else { /* COB_MODULE_TYPE_FUNCTION */
			current_program->user_spec_list =
				cb_list_add (current_program->user_spec_list, prototype);
		}
	}
}

static void
error_if_record_delimiter_incompatible (const int organization,
					const char *organization_name)
{
	int	is_compatible;

	if (!current_file->flag_delimiter) {
		return;
	}

	if (organization == COB_ORG_LINE_SEQUENTIAL) {
		is_compatible = current_file->organization == COB_ORG_SEQUENTIAL
			|| current_file->organization == COB_ORG_LINE_SEQUENTIAL;
	} else {
		is_compatible = current_file->organization == organization;
	}

	if (!is_compatible) {
		cb_error (_("ORGANIZATION %s is incompatible with RECORD DELIMITER"),
			  organization_name);
	}
}

static int
set_current_field (cb_tree level, cb_tree name)
{
	cb_tree	x  = cb_build_field_tree (level, name, current_field,
					  current_storage, current_file, 0);
	/* Free tree associated with level number */
	cobc_parse_free (level);

	if (CB_INVALID_TREE (x)) {
		return 1;
	} else {
		current_field = CB_FIELD (x);
		check_pic_duplicate = 0;
		if (current_field->level == 1 || current_field->level == 77) {
			within_typedef_definition = 0;
		}
	}

	return 0;
}

static void
setup_external_definition (cb_tree x, const int type)
{
	/* note: syntax checks for conflicting clauses
	         are done in inherit_external_definition */

	if (x != cb_error_node) {
		struct cb_field *f = CB_FIELD (cb_ref (x));

		/* additional checks if the definition isn't provided by type */
		if (type != 1 /* called with SAME AS / LIKE data-name */ ) {
			if (f->level == 88) {
				cb_error (_("condition-name not allowed here: '%s'"), cb_name (x));
				x = cb_error_node;
			}
			/* note: the following are not explicit specified but implied with
			   LIKE as ILE-COBOL does not have those sections */
			if (f->storage == CB_STORAGE_SCREEN) {
				cb_error (_("SCREEN item cannot be used here"));
				x = cb_error_node;
			} else if (f->storage == CB_STORAGE_REPORT) {
				cb_error (_("REPORT item cannot be used here"));
				x = cb_error_node;
			}
			if (type == 0) {
				/* rules that apply only to SAME AS */
				if (f->flag_is_typedef) {
					cb_error (_("TYPEDEF item cannot be used here"));
					x = cb_error_node;
				}
			}
		}

		if (current_field->level == 77) {
			if (type != 2 /* called with LIKE */
			 && f->children) {
				cb_error (_("elementary item expected"));
				x = cb_error_node;
			}
		} else {
			struct cb_field *p;
			for (p = current_field; p; p = p->parent) {
				if (p == f) {
					cb_error (_("item may not reference itself"));
					x = cb_error_node;
					break;
				}
			}
			for (p = f->parent; p; p = p->parent) {
				if (p->usage != CB_USAGE_DISPLAY) {
					cb_error (_("item may not be subordinate to any item with USAGE clause"));
				} else if (p->flag_sign_clause) {
					cb_error (_("item may not be subordinate to any item with SIGN clause"));
				} else {
					continue;
				}
				x = cb_error_node;
				break;
			}
		}
	}

	if (x == cb_error_node) {
		current_field->flag_is_verified = 1;
		current_field->flag_invalid = 1;
		current_field->external_definition = cb_error_node;
	} else {
		current_field->external_definition = cb_ref (x);
	}
}

static void
setup_external_definition_type (cb_tree x)
{
	if (!check_repeated ("TYPE TO", SYN_CLAUSE_31, &check_pic_duplicate)) {
		if (current_field->external_definition) {
			emit_conflicting_clause_message ("SAME AS", "TYPE TO");
		}
		setup_external_definition (x, 1);
	}
}

/* verifies that no conflicting clauses are used and
   inherits the definition of the original field specified
   by SAME AS or by type_name */
static void
inherit_external_definition (cb_tree lvl)
{
	/* note: REDEFINES (clause 1) is allowed with RM/COBOL but not COBOL 2002+ */
	static const cob_flags_t	allowed_clauses =
		SYN_CLAUSE_1 | SYN_CLAUSE_2 | SYN_CLAUSE_3 | SYN_CLAUSE_7 | SYN_CLAUSE_12;
	cob_flags_t	tested = check_pic_duplicate & ~(allowed_clauses);
	if (tested != SYN_CLAUSE_30 && tested != SYN_CLAUSE_31
	 && tested != 0 /* USAGE as TYPE TO */) {
		struct cb_field *fld = CB_FIELD (current_field->external_definition);
		cb_error_x (CB_TREE(current_field), _("illegal combination of %s with other clauses"),
			fld->flag_is_typedef ? "TYPE TO" : "SAME AS");
		current_field->flag_is_verified = 1;
		current_field->flag_invalid = 1;
	} else {
		struct cb_field *fld = CB_FIELD (current_field->external_definition);
		int new_level = lvl ? cb_get_level (lvl) : 0;
		int old_level = current_field->level;
		copy_into_field (fld, current_field);
		if (new_level > 1 && new_level < 66 && new_level > old_level) {
			cb_error_x (lvl, _("entry following %s may not be subordinate to it"),
				fld->flag_is_typedef ? "TYPE TO" : "SAME AS");
		}
	}
}

static cb_tree
get_finalized_description_tree (void)
{
	struct cb_field *p;

	/* finalize last field if target of SAME AS / TYPEDEF */
	if (current_field && !CB_INVALID_TREE (current_field->external_definition)) {
		inherit_external_definition (NULL);
	}

	/* validate the complete current "block" */
	for (p = description_field; p; p = p->sister) {
		cb_validate_field (p);
	}
	return CB_TREE (description_field);
}

static void
check_not_both (const cob_flags_t flag1, const cob_flags_t flag2,
		const char *flag1_name, const char *flag2_name,
		const cob_flags_t flags, const cob_flags_t flag_to_set)
{
	if (flag_to_set == flag1 && (flags & flag2)) {
		cb_error (_("cannot specify both %s and %s"),
			  flag1_name, flag2_name);
	} else if (flag_to_set == flag2 && (flags & flag1)) {
		cb_error (_("cannot specify both %s and %s"),
			  flag1_name, flag2_name);

	}
}

static COB_INLINE COB_A_INLINE void
check_not_highlight_and_lowlight (const cob_flags_t flags,
				  const cob_flags_t flag_to_set)
{
	check_not_both (COB_SCREEN_HIGHLIGHT, COB_SCREEN_LOWLIGHT,
			"HIGHLIGHT", "LOWLIGHT", flags, flag_to_set);
}

static void
set_screen_attr (const char *clause, const cob_flags_t bitval)
{
	if (current_field->screen_flag & bitval) {
		emit_duplicate_clause_message (clause);
	} else {
		current_field->screen_flag |= bitval;
	}
}

static void
set_attr_with_conflict (const char *clause, const cob_flags_t bitval,
			const char *confl_clause, const cob_flags_t confl_bit,
			const int local_check_duplicate, cob_flags_t *flags)
{
	if (local_check_duplicate && (*flags & bitval)) {
		emit_duplicate_clause_message (clause);
	} else if (*flags & confl_bit) {
		emit_conflicting_clause_message (clause, confl_clause);
	} else {
		*flags |= bitval;
	}
}

static COB_INLINE COB_A_INLINE void
set_screen_attr_with_conflict (const char *clause, const cob_flags_t bitval,
			       const char *confl_clause,
			       const cob_flags_t confl_bit)
{
	set_attr_with_conflict (clause, bitval, confl_clause, confl_bit, 1,
				&current_field->screen_flag);
}

static COB_INLINE COB_A_INLINE int
has_dispattr (const cob_flags_t attrib)
{
	return current_statement->attr_ptr
		&& current_statement->attr_ptr->dispattrs & attrib;
}

static void
attach_attrib_to_cur_stmt (void)
{
	if (!current_statement->attr_ptr) {
		current_statement->attr_ptr =
			cobc_parse_malloc (sizeof(struct cb_attr_struct));
	}
}

static COB_INLINE COB_A_INLINE void
set_dispattr (const cob_flags_t attrib)
{
	attach_attrib_to_cur_stmt ();
	current_statement->attr_ptr->dispattrs |= attrib;
}

static COB_INLINE COB_A_INLINE void
set_dispattr_with_conflict (const char *attrib_name, const cob_flags_t attrib,
			    const char *confl_name,
			    const cob_flags_t confl_attrib)
{
	attach_attrib_to_cur_stmt ();
	set_attr_with_conflict (attrib_name, attrib, confl_name, confl_attrib, 0,
				&current_statement->attr_ptr->dispattrs);
}

static void
bit_set_attr (const cb_tree on_off, const cob_flags_t attr_val)
{
	if (on_off == cb_int1) {
		set_attr_val_on |= attr_val;
	} else {
		set_attr_val_off |= attr_val;
	}
}

static void
set_field_attribs (cb_tree fgc, cb_tree bgc, cb_tree scroll,
		   cb_tree timeout, cb_tree prompt, cb_tree size_is)
{
	/* [WITH] FOREGROUND-COLOR [IS] */
	if (fgc) {
		current_statement->attr_ptr->fgc = fgc;
	}
	/* [WITH] BACKGROUND-COLOR [IS] */
	if (bgc) {
		current_statement->attr_ptr->bgc = bgc;
	}
	/* [WITH] SCROLL UP | DOWN */
	if (scroll) {
		current_statement->attr_ptr->scroll = scroll;
	}
	/* [WITH] TIME-OUT [AFTER] */
	if (timeout) {
		current_statement->attr_ptr->timeout = timeout;
	}
	/* [WITH] PROMPT CHARACTER [IS] */
	if (prompt) {
		current_statement->attr_ptr->prompt = prompt;
	}
	/* [WITH] SIZE [IS] */
	if (size_is) {
		current_statement->attr_ptr->size_is = size_is;
	}
}

static void
set_attribs (cb_tree fgc, cb_tree bgc, cb_tree scroll,
	     cb_tree timeout, cb_tree prompt, cb_tree size_is,
	     const cob_flags_t attrib)
{
	attach_attrib_to_cur_stmt ();
	set_field_attribs (fgc, bgc, scroll, timeout, prompt, size_is);

	current_statement->attr_ptr->dispattrs |= attrib;
}

static void
set_attribs_with_conflict  (cb_tree fgc, cb_tree bgc, cb_tree scroll,
			    cb_tree timeout, cb_tree prompt, cb_tree size_is,
			    const char *clause_name, const cob_flags_t attrib,
			    const char *confl_name, const cob_flags_t confl_attrib)
{
	attach_attrib_to_cur_stmt ();
	set_field_attribs (fgc, bgc, scroll, timeout, prompt, size_is);

	set_dispattr_with_conflict (clause_name, attrib, confl_name,
				    confl_attrib);
}

static cob_flags_t
zero_conflicting_flag (const cob_flags_t screen_flag, cob_flags_t parent_flag,
				const cob_flags_t flag1, const cob_flags_t flag2)
{
	if (screen_flag & flag1) {
		parent_flag &= ~flag2;
	} else if (screen_flag & flag2) {
		parent_flag &= ~flag1;
	}

	return parent_flag;
}

static cob_flags_t
zero_conflicting_flags (const cob_flags_t screen_flag, cob_flags_t parent_flag)
{
	parent_flag = zero_conflicting_flag (screen_flag, parent_flag,
					     COB_SCREEN_BLANK_LINE,
					     COB_SCREEN_BLANK_SCREEN);
	parent_flag = zero_conflicting_flag (screen_flag, parent_flag,
					     COB_SCREEN_ERASE_EOL,
					     COB_SCREEN_ERASE_EOS);
	parent_flag = zero_conflicting_flag (screen_flag, parent_flag,
					     COB_SCREEN_HIGHLIGHT,
					     COB_SCREEN_LOWLIGHT);

	return parent_flag;
}

static void
check_and_set_usage (const enum cb_usage usage)
{
	check_repeated ("USAGE", SYN_CLAUSE_5, &check_pic_duplicate);
	current_field->usage = usage;
}

static void
check_preceding_tallying_phrases (const enum tallying_phrase phrase)
{
	switch (phrase) {
	case FOR_PHRASE:
		if (previous_tallying_phrase == ALL_LEADING_TRAILING_PHRASES) {
			cb_error (_("FOR phrase cannot immediately follow ALL/LEADING/TRAILING"));
		} else if (previous_tallying_phrase == FOR_PHRASE) {
			cb_error (_("missing CHARACTERS/ALL/LEADING/TRAILING phrase after FOR phrase"));
		}
		break;

	case ALL_LEADING_TRAILING_PHRASES:
		if (previous_tallying_phrase == CHARACTERS_PHRASE
			   || previous_tallying_phrase == ALL_LEADING_TRAILING_PHRASES) {
			cb_error (_("missing value between ALL/LEADING/TRAILING words"));
		}
		/* fall through */
	case CHARACTERS_PHRASE:
		if (previous_tallying_phrase == NO_PHRASE) {
			cb_error (_("missing FOR phrase before CHARACTERS/ALL/LEADING/TRAILING phrase"));
		}
		break;

	case VALUE_REGION_PHRASE:
		if (!(previous_tallying_phrase == ALL_LEADING_TRAILING_PHRASES
		      || previous_tallying_phrase == VALUE_REGION_PHRASE)) {
			cb_error (_("missing ALL/LEADING/TRAILING before value"));
		}
		break;

	/* LCOV_EXCL_START */
	default:
		/* This should never happen (and therefore doesn't get a translation) */
		cb_error ("unexpected tallying phrase");
		COBC_ABORT();
	/* LCOV_EXCL_STOP */
	}

	previous_tallying_phrase = phrase;
}

static int
has_relative_pos (struct cb_field const *field)
{
	return !!(field->screen_flag
		  & (COB_SCREEN_LINE_PLUS | COB_SCREEN_LINE_MINUS
		     | COB_SCREEN_COLUMN_PLUS | COB_SCREEN_COLUMN_MINUS));
}

static int
is_recursive_call (cb_tree target)
{
	const char *target_name = "";

	if (CB_LITERAL_P (target)) {
		target_name = (const char *)(CB_LITERAL(target)->data);
	} else if (CB_REFERENCE_P (target)
		   && CB_PROTOTYPE_P (cb_ref (target))) {
		target_name = CB_PROTOTYPE (cb_ref (target))->ext_name;
	}

	return !strcmp (target_name, current_program->orig_program_id);
}

static cb_tree
check_not_88_level (cb_tree x)
{
	struct cb_field	*f;

	if (x == cb_error_node) {
		return cb_error_node;
	}
	if (!CB_REF_OR_FIELD_P(x)) {
		return x;
	}

	f = CB_FIELD_PTR (x);

	if (f->level == 88) {
#if 0	/* note: we may consider to support the extension (if existing) to
		         reference a condition-name target by the condition-name */
		if (cb_verify (cb_condition_references_data, _("use of condition-name in place of data-name"))) {
			return CB_TREE (f->parent);
		}
#else
		cb_error (_("condition-name not allowed here: '%s'"), cb_name (x));
		/* invalidate field to prevent same error in typeck.c (validate_one) */
		/* FIXME: If we really need the additional check here then we missed
		          a call to cb_validate_one() somewhere */
		return cb_error_node; 
#endif
	} else {
		return x;
	}
}

static int
is_screen_field (cb_tree x)
{
	if (CB_FIELD_P (x)) {
		return (CB_FIELD (x))->storage == CB_STORAGE_SCREEN;
	} else if (CB_REFERENCE_P (x)) {
		return is_screen_field (cb_ref (x));
	} else {
		return 0;
	}
}

static void
error_if_no_advancing_in_screen_display (cb_tree advancing)
{
	if (advancing != cb_int1) {
		cb_error (_("cannot specify NO ADVANCING in screen DISPLAY"));
	}
}

static cb_tree
get_default_display_device (void)
{
	if (current_program->flag_console_is_crt
	    || cb_console_is_crt) {
		return cb_null;
	} else {
		return cb_int0;
	}
}

static COB_INLINE COB_A_INLINE int
contains_one_screen_field (struct cb_list *x_list)
{
	return (cb_tree) x_list != cb_null
		&& cb_list_length ((cb_tree) x_list) == 1
		&& is_screen_field (x_list->value);
}

static int
contains_only_screen_fields (struct cb_list *x_list)
{
	if ((cb_tree) x_list == cb_null) {
		return 0;
	}

	for (; x_list; x_list = (struct cb_list *) x_list->chain) {
		if (!is_screen_field (x_list->value)) {
			return 0;
		}
	}

	return 1;
}

static int
contains_fields_and_screens (struct cb_list *x_list)
{
	int	field_seen = 0;
	int	screen_seen = 0;

	if ((cb_tree) x_list == cb_null) {
		return 0;
	}

	for (; x_list; x_list = (struct cb_list *) x_list->chain) {
		if (is_screen_field (x_list->value)) {
			screen_seen = 1;
		} else {
			field_seen = 1;
		}
	}

	return screen_seen && field_seen;
}

static enum cb_display_type
deduce_display_type (cb_tree x_list, cb_tree local_upon_value, cb_tree local_line_column,
		     struct cb_attr_struct * const attr_ptr)
{
	int	using_default_device_which_is_crt =
		local_upon_value == NULL && get_default_display_device () == cb_null;

	/* TODO: Separate CGI DISPLAYs here */
	if (contains_only_screen_fields ((struct cb_list *) x_list)) {
		if (!contains_one_screen_field ((struct cb_list *) x_list)
		    || attr_ptr) {
			cb_verify_x (x_list, cb_accept_display_extensions,
				     _("non-standard DISPLAY"));
		}

		if (local_upon_value != NULL && local_upon_value != cb_null) {
			cb_error_x (x_list, _("screens may only be displayed on CRT"));
		}

		return SCREEN_DISPLAY;
	} else if (contains_fields_and_screens ((struct cb_list *) x_list)) {
		cb_error_x (x_list, _("cannot mix screens and fields in the same DISPLAY statement"));
		return MIXED_DISPLAY;
	} else if (local_line_column || attr_ptr) {
		if (local_upon_value != NULL && local_upon_value != cb_null) {
			cb_error_x (x_list, _("screen clauses may only be used for DISPLAY on CRT"));
		}

		cb_verify_x (x_list, cb_accept_display_extensions,
			     _("non-standard DISPLAY"));

		return FIELD_ON_SCREEN_DISPLAY;
	} else if (local_upon_value == cb_null || using_default_device_which_is_crt) {
		/* This is the only format permitted by the standard */
		return FIELD_ON_SCREEN_DISPLAY;
	} else if (display_type == FIELD_ON_SCREEN_DISPLAY && local_upon_value == NULL) {
		/* This is for when fields without clauses follow fields with screen clauses */
		return FIELD_ON_SCREEN_DISPLAY;
	} else {
		return DEVICE_DISPLAY;
	}
}

static void
set_display_type (cb_tree x_list, cb_tree local_upon_value,
		  cb_tree local_line_column, struct cb_attr_struct * const attr_ptr)
{
	display_type = deduce_display_type (x_list, local_upon_value, local_line_column, attr_ptr);
}

static void
error_if_different_display_type (cb_tree x_list, cb_tree local_upon_value,
				 cb_tree local_line_column, struct cb_attr_struct * const attr_ptr)
{
	const enum cb_display_type	type =
		deduce_display_type (x_list, local_upon_value, local_line_column, attr_ptr);

	/* Avoid re-displaying the same error for mixed DISPLAYs */
	if (type == display_type || display_type == MIXED_DISPLAY) {
		return;
	}

	if (type != MIXED_DISPLAY) {
		if (type == SCREEN_DISPLAY || display_type == SCREEN_DISPLAY) {
			cb_error_x (x_list, _("cannot mix screens and fields in the same DISPLAY statement"));
		} else {
			/*
			  The only other option is that there is a mix of
			  FIELD_ON_SCREEN_DISPLAY and DEVICE_DISPLAY.
			*/
			cb_error_x (x_list, _("ambiguous DISPLAY; put items to display on device in separate DISPLAY"));
		}
	}

	display_type = MIXED_DISPLAY;
}

static void
error_if_not_usage_display_or_nonnumeric_lit (cb_tree x)
{
	const int	is_numeric_literal = CB_NUMERIC_LITERAL_P (x);
	const int	is_field_with_usage_not_display =
		CB_REFERENCE_P (x) && CB_FIELD (cb_ref (x))
		&& CB_FIELD (cb_ref (x))->usage != CB_USAGE_DISPLAY;

	if (is_numeric_literal) {
		cb_error_x (x, _("%s is not an alphanumeric literal"), CB_LITERAL (x)->data);
	} else if (is_field_with_usage_not_display) {
		cb_error_x (x, _("'%s' is not USAGE DISPLAY"), cb_name (x));
	}
}

static void
check_validate_item (cb_tree x)
{
	struct cb_field	*f;
	enum cb_class	tree_class;

	if (CB_INVALID_TREE(x) || x->tag != CB_TAG_REFERENCE) {
		return;
	}
	x = cb_ref (x);
	if (CB_INVALID_TREE (x) || !CB_FIELD_P (x)) {
		cb_error (_("invalid target for %s"), "VALIDATE");
		return;
	}

	f = CB_FIELD (x);
	tree_class = CB_TREE_CLASS(f);
	if (is_screen_field(x)) {
		cb_error (_("SCREEN item cannot be used here"));
	} else if (f->level == 66) {
		cb_error (_("RENAMES item may not be used here"));
	} else if (f->flag_any_length) {
		cb_error (_("ANY LENGTH item not allowed here"));
	} else if (tree_class == CB_CLASS_INDEX
		|| tree_class == CB_CLASS_OBJECT
		|| tree_class == CB_CLASS_POINTER) {
		cb_error (_("item '%s' has wrong class for VALIDATE"), cb_name (x));
	}
}

static void
error_if_following_every_clause (void)
{
	if (ml_suppress_list
	    && CB_ML_SUPPRESS (CB_VALUE (ml_suppress_list))->target == CB_ML_SUPPRESS_TYPE) {
		cb_error (_("WHEN clause must follow EVERY clause"));
	}
}

static void
prepend_to_ml_suppress_list (cb_tree suppress_entry)
{
	cb_tree	new_list_head = CB_LIST_INIT (suppress_entry);
	cb_list_append (new_list_head, ml_suppress_list);
	ml_suppress_list = new_list_head;
}

static void
add_identifier_to_ml_suppress_conds (cb_tree identifier)
{
	cb_tree suppress_id = cb_build_ml_suppress_clause ();
	CB_ML_SUPPRESS (suppress_id)->target = CB_ML_SUPPRESS_IDENTIFIER;
	CB_ML_SUPPRESS (suppress_id)->identifier = identifier;
	prepend_to_ml_suppress_list (suppress_id);
}

static void
add_when_to_ml_suppress_conds (cb_tree when_list)
{
	struct cb_ml_suppress_clause	*last_suppress_clause;
	cb_tree	suppress_all;

	/*
	  If the preceding clause in SUPPRESS was an identifier, the WHEN
	  belongs to the identifier. If EVERY was preceding, the WHEN belongs to
	  the EVERY. Otherwise, the WHEN acts on the entire record.
	*/
	if (ml_suppress_list) {
		last_suppress_clause = CB_ML_SUPPRESS (CB_VALUE (ml_suppress_list));
		if ((last_suppress_clause->target == CB_ML_SUPPRESS_IDENTIFIER
		     || last_suppress_clause->target == CB_ML_SUPPRESS_TYPE)
		    && !last_suppress_clause->when_list) {
			last_suppress_clause->when_list = when_list;
			return;
		}
	}

	suppress_all = cb_build_ml_suppress_clause ();
	CB_ML_SUPPRESS (suppress_all)->when_list = when_list;
	prepend_to_ml_suppress_list (suppress_all);
}

static void
add_type_to_ml_suppress_conds (enum cb_ml_suppress_category category,
			       enum cb_ml_type ml_type)
{
	cb_tree	suppress_type = cb_build_ml_suppress_clause ();
	CB_ML_SUPPRESS (suppress_type)->target = CB_ML_SUPPRESS_TYPE;
	CB_ML_SUPPRESS (suppress_type)->category = category;
	CB_ML_SUPPRESS (suppress_type)->ml_type = ml_type;
	prepend_to_ml_suppress_list (suppress_type);
}

static void
set_record_size (cb_tree min, cb_tree max)
{
	int record_min, record_max;

	if (min) {
		record_min = cb_get_int (min);
		if (record_min < 0) {
			/* already handled by integer check */
		} else {
			current_file->record_min = record_min;
		}
	} else {
		record_min = 0;
	}
	if (!max) {
		return;
	}

	record_max = cb_get_int (max);
	if (record_max < 0) {
		/* already handled by integer check */
		return;
	} else if (record_max == 0) {
		/* Note: standard COBOL does not allow zero at all, use the related
		         configuration option */
		if (cb_records_mismatch_record_clause >= CB_ERROR) {
			cb_error (_("non-zero value expected"));
		}
		return;
	}
	if (current_file->organization == COB_ORG_INDEXED
	 && record_max > MAX_FD_RECORD_IDX)  {
		cb_error (_("RECORD size (IDX) exceeds maximum allowed (%d)"),
			MAX_FD_RECORD_IDX);
		current_file->record_max = MAX_FD_RECORD_IDX;
	} else if (record_max > MAX_FD_RECORD)  {
		cb_error (_("RECORD size exceeds maximum allowed (%d)"),
			MAX_FD_RECORD);
		current_file->record_max = MAX_FD_RECORD;
	} else {
		if (record_max <= record_min)  {
			cb_error (_("RECORD clause invalid"));
		}
		current_file->record_max = record_max;
	}
}


#line 2319 "parser.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_PARSER_H_INCLUDED
# define YY_YY_PARSER_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    TOKEN_EOF = 0,
    THREEDIMENSIONAL = 258,
    ABSENT = 259,
    ACCEPT = 260,
    ACCESS = 261,
    ACTIVEX = 262,
    ACTION = 263,
    ACTUAL = 264,
    ADD = 265,
    ADDRESS = 266,
    ADJUSTABLE_COLUMNS = 267,
    ADVANCING = 268,
    AFTER = 269,
    ALIGNMENT = 270,
    ALL = 271,
    ALLOCATE = 272,
    ALLOWING = 273,
    ALPHABET = 274,
    ALPHABETIC = 275,
    ALPHABETIC_LOWER = 276,
    ALPHABETIC_UPPER = 277,
    ALPHANUMERIC = 278,
    ALPHANUMERIC_EDITED = 279,
    ALSO = 280,
    ALTER = 281,
    ALTERNATE = 282,
    AND = 283,
    ANY = 284,
    APPLY = 285,
    ARE = 286,
    AREA = 287,
    AREAS = 288,
    ARGUMENT_NUMBER = 289,
    ARGUMENT_VALUE = 290,
    ARITHMETIC = 291,
    AS = 292,
    ASCENDING = 293,
    ASCII = 294,
    ASSIGN = 295,
    AT = 296,
    ATTRIBUTE = 297,
    ATTRIBUTES = 298,
    AUTO = 299,
    AUTO_DECIMAL = 300,
    AUTO_SPIN = 301,
    AUTOMATIC = 302,
    AWAY_FROM_ZERO = 303,
    BACKGROUND_COLOR = 304,
    BACKGROUND_HIGH = 305,
    BACKGROUND_LOW = 306,
    BACKGROUND_STANDARD = 307,
    BAR = 308,
    BASED = 309,
    BEFORE = 310,
    BELL = 311,
    BINARY = 312,
    BINARY_C_LONG = 313,
    BINARY_CHAR = 314,
    BINARY_DOUBLE = 315,
    BINARY_LONG = 316,
    BINARY_SEQUENTIAL = 317,
    BINARY_SHORT = 318,
    BIT = 319,
    BITMAP = 320,
    BITMAP_END = 321,
    BITMAP_HANDLE = 322,
    BITMAP_NUMBER = 323,
    BITMAP_START = 324,
    BITMAP_TIMER = 325,
    BITMAP_TRAILING = 326,
    BITMAP_TRANSPARENT_COLOR = 327,
    BITMAP_WIDTH = 328,
    BLANK = 329,
    BLINK = 330,
    BLOCK = 331,
    BOTTOM = 332,
    BOX = 333,
    BOXED = 334,
    BULK_ADDITION = 335,
    BUSY = 336,
    BUTTONS = 337,
    BY = 338,
    BYTE_LENGTH = 339,
    C = 340,
    CALENDAR_FONT = 341,
    CALL = 342,
    CANCEL = 343,
    CANCEL_BUTTON = 344,
    CAPACITY = 345,
    CARD_PUNCH = 346,
    CARD_READER = 347,
    CASSETTE = 348,
    CCOL = 349,
    CD = 350,
    CELL = 351,
    CELL_COLOR = 352,
    CELL_DATA = 353,
    CELL_FONT = 354,
    CELL_PROTECTION = 355,
    CENTER = 356,
    CENTERED = 357,
    CENTERED_HEADINGS = 358,
    CENTURY_DATE = 359,
    CF = 360,
    CH = 361,
    CHAINING = 362,
    CHANGED = 363,
    CHARACTER = 364,
    CHARACTERS = 365,
    CHECK_BOX = 366,
    CLASS = 367,
    CLASSIFICATION = 368,
    CLASS_NAME = 369,
    CLEAR_SELECTION = 370,
    CLINE = 371,
    CLINES = 372,
    CLOSE = 373,
    COBOL = 374,
    CODE = 375,
    CODE_SET = 376,
    COLLATING = 377,
    COL = 378,
    COLOR = 379,
    COLORS = 380,
    COLS = 381,
    COLUMN = 382,
    COLUMN_COLOR = 383,
    COLUMN_DIVIDERS = 384,
    COLUMN_FONT = 385,
    COLUMN_HEADINGS = 386,
    COLUMN_PROTECTION = 387,
    COLUMNS = 388,
    COMBO_BOX = 389,
    COMMA = 390,
    COMMAND_LINE = 391,
    COMMA_DELIM = 392,
    COMMIT = 393,
    COMMON = 394,
    COMMUNICATION = 395,
    COMP = 396,
    COMPUTE = 397,
    COMP_0 = 398,
    COMP_1 = 399,
    COMP_2 = 400,
    COMP_3 = 401,
    COMP_4 = 402,
    COMP_5 = 403,
    COMP_6 = 404,
    COMP_N = 405,
    COMP_X = 406,
    CONCATENATE_FUNC = 407,
    CONDITION = 408,
    CONFIGURATION = 409,
    CONSTANT = 410,
    CONTAINS = 411,
    CONTENT = 412,
    CONTENT_LENGTH_FUNC = 413,
    CONTENT_OF_FUNC = 414,
    CONTINUE = 415,
    CONTROL = 416,
    CONTROLS = 417,
    CONVERSION = 418,
    CONVERTING = 419,
    COPY = 420,
    COPY_SELECTION = 421,
    CORE_INDEX = 422,
    CORRESPONDING = 423,
    COUNT = 424,
    CRT = 425,
    CRT_UNDER = 426,
    CSIZE = 427,
    CURRENCY = 428,
    CURRENT_DATE_FUNC = 429,
    CURSOR = 430,
    CURSOR_COL = 431,
    CURSOR_COLOR = 432,
    CURSOR_FRAME_WIDTH = 433,
    CURSOR_ROW = 434,
    CURSOR_X = 435,
    CURSOR_Y = 436,
    CUSTOM_PRINT_TEMPLATE = 437,
    CYCLE = 438,
    CYL_INDEX = 439,
    CYL_OVERFLOW = 440,
    DASHED = 441,
    DATA = 442,
    DATA_COLUMNS = 443,
    DATA_TYPES = 444,
    DATE = 445,
    DATE_ENTRY = 446,
    DAY = 447,
    DAY_OF_WEEK = 448,
    DE = 449,
    DEBUGGING = 450,
    DECIMAL_POINT = 451,
    DECLARATIVES = 452,
    DEFAULT = 453,
    DEFAULT_BUTTON = 454,
    DEFAULT_FONT = 455,
    DELETE = 456,
    DELIMITED = 457,
    DELIMITER = 458,
    DEPENDING = 459,
    DESCENDING = 460,
    DESTINATION = 461,
    DESTROY = 462,
    DETAIL = 463,
    DISABLE = 464,
    DISC = 465,
    DISK = 466,
    DISP = 467,
    DISPLAY = 468,
    DISPLAY_COLUMNS = 469,
    DISPLAY_FORMAT = 470,
    DISPLAY_OF_FUNC = 471,
    DIVIDE = 472,
    DIVIDERS = 473,
    DIVIDER_COLOR = 474,
    DIVISION = 475,
    DOTDASH = 476,
    DOTTED = 477,
    DRAG_COLOR = 478,
    DROP_DOWN = 479,
    DROP_LIST = 480,
    DOWN = 481,
    DUPLICATES = 482,
    DYNAMIC = 483,
    EBCDIC = 484,
    EC = 485,
    ECHO = 486,
    EGI = 487,
    EIGHTY_EIGHT = 488,
    ENABLE = 489,
    ELEMENT = 490,
    ELSE = 491,
    EMI = 492,
    ENCRYPTION = 493,
    ENCODING = 494,
    END = 495,
    END_ACCEPT = 496,
    END_ADD = 497,
    END_CALL = 498,
    END_COMPUTE = 499,
    END_COLOR = 500,
    END_DELETE = 501,
    END_DISPLAY = 502,
    END_DIVIDE = 503,
    END_EVALUATE = 504,
    END_FUNCTION = 505,
    END_IF = 506,
    END_JSON = 507,
    END_MODIFY = 508,
    END_MULTIPLY = 509,
    END_PERFORM = 510,
    END_PROGRAM = 511,
    END_READ = 512,
    END_RECEIVE = 513,
    END_RETURN = 514,
    END_REWRITE = 515,
    END_SEARCH = 516,
    END_START = 517,
    END_STRING = 518,
    END_SUBTRACT = 519,
    END_UNSTRING = 520,
    END_WRITE = 521,
    END_XML = 522,
    ENGRAVED = 523,
    ENSURE_VISIBLE = 524,
    ENTRY = 525,
    ENTRY_CONVENTION = 526,
    ENTRY_FIELD = 527,
    ENTRY_REASON = 528,
    ENVIRONMENT = 529,
    ENVIRONMENT_NAME = 530,
    ENVIRONMENT_VALUE = 531,
    EOL = 532,
    EOP = 533,
    EOS = 534,
    EQUAL = 535,
    ERASE = 536,
    ERROR = 537,
    ESCAPE = 538,
    ESCAPE_BUTTON = 539,
    ESI = 540,
    EVALUATE = 541,
    EVENT = 542,
    EVENT_LIST = 543,
    EVENT_STATUS = 544,
    EVERY = 545,
    EXCEPTION = 546,
    EXCEPTION_CONDITION = 547,
    EXCEPTION_VALUE = 548,
    EXPAND = 549,
    EXCLUSIVE = 550,
    EXHIBIT = 551,
    EXIT = 552,
    EXPONENTIATION = 553,
    EXTEND = 554,
    EXTENDED_SEARCH = 555,
    EXTERNAL = 556,
    EXTERNAL_FORM = 557,
    F = 558,
    FD = 559,
    FH__FCD = 560,
    FH__KEYDEF = 561,
    FILE_CONTROL = 562,
    FILE_ID = 563,
    FILE_LIMIT = 564,
    FILE_LIMITS = 565,
    FILE_NAME = 566,
    FILE_POS = 567,
    FILL_COLOR = 568,
    FILL_COLOR2 = 569,
    FILL_PERCENT = 570,
    FILLER = 571,
    FINAL = 572,
    FINISH_REASON = 573,
    FIRST = 574,
    FIXED = 575,
    FIXED_FONT = 576,
    FIXED_WIDTH = 577,
    FLAT = 578,
    FLAT_BUTTONS = 579,
    FLOAT_BINARY_128 = 580,
    FLOAT_BINARY_32 = 581,
    FLOAT_BINARY_64 = 582,
    FLOAT_DECIMAL_16 = 583,
    FLOAT_DECIMAL_34 = 584,
    FLOAT_DECIMAL_7 = 585,
    FLOAT_EXTENDED = 586,
    FLOAT_LONG = 587,
    FLOAT_SHORT = 588,
    FLOATING = 589,
    FONT = 590,
    FOOTING = 591,
    FOR = 592,
    FOREGROUND_COLOR = 593,
    FOREVER = 594,
    FORMATTED_DATE_FUNC = 595,
    FORMATTED_DATETIME_FUNC = 596,
    FORMATTED_TIME_FUNC = 597,
    FRAME = 598,
    FRAMED = 599,
    FREE = 600,
    FROM = 601,
    FROM_CRT = 602,
    FULL = 603,
    FULL_HEIGHT = 604,
    FUNCTION = 605,
    FUNCTION_ID = 606,
    FUNCTION_NAME = 607,
    GENERATE = 608,
    GIVING = 609,
    GLOBAL = 610,
    GO = 611,
    GO_BACK = 612,
    GO_FORWARD = 613,
    GO_HOME = 614,
    GO_SEARCH = 615,
    GOBACK = 616,
    GRAPHICAL = 617,
    GREATER = 618,
    GREATER_OR_EQUAL = 619,
    GRID = 620,
    GROUP = 621,
    GROUP_VALUE = 622,
    HANDLE = 623,
    HAS_CHILDREN = 624,
    HEADING = 625,
    HEADING_COLOR = 626,
    HEADING_DIVIDER_COLOR = 627,
    HEADING_FONT = 628,
    HEAVY = 629,
    HEIGHT_IN_CELLS = 630,
    HIDDEN_DATA = 631,
    HIGHLIGHT = 632,
    HIGH_COLOR = 633,
    HIGH_VALUE = 634,
    HOT_TRACK = 635,
    HSCROLL = 636,
    HSCROLL_POS = 637,
    ICON = 638,
    ID = 639,
    IDENTIFIED = 640,
    IDENTIFICATION = 641,
    IF = 642,
    IGNORE = 643,
    IGNORING = 644,
    IN = 645,
    INDEPENDENT = 646,
    INDEX = 647,
    INDEXED = 648,
    INDICATE = 649,
    INITIALIZE = 650,
    INITIALIZED = 651,
    INITIATE = 652,
    INPUT = 653,
    INPUT_OUTPUT = 654,
    INQUIRE = 655,
    INSERTION_INDEX = 656,
    INSERT_ROWS = 657,
    INSPECT = 658,
    INTERMEDIATE = 659,
    INTO = 660,
    INTRINSIC = 661,
    INVALID = 662,
    INVALID_KEY = 663,
    IS = 664,
    ITEM = 665,
    ITEM_TEXT = 666,
    ITEM_TO_ADD = 667,
    ITEM_TO_DELETE = 668,
    ITEM_TO_EMPTY = 669,
    ITEM_VALUE = 670,
    I_O = 671,
    I_O_CONTROL = 672,
    JSON = 673,
    JUSTIFIED = 674,
    KEPT = 675,
    KEY = 676,
    KEYBOARD = 677,
    LABEL = 678,
    LABEL_OFFSET = 679,
    LARGE_FONT = 680,
    LARGE_OFFSET = 681,
    LAST = 682,
    LAST_ROW = 683,
    LAYOUT_DATA = 684,
    LAYOUT_MANAGER = 685,
    LEADING = 686,
    LEADING_SHIFT = 687,
    LEAVE = 688,
    LEFT = 689,
    LEFTLINE = 690,
    LEFT_TEXT = 691,
    LENGTH = 692,
    LENGTH_OF = 693,
    LENGTH_FUNC = 694,
    LESS = 695,
    LESS_OR_EQUAL = 696,
    LEVEL_NUMBER = 697,
    LIKE = 698,
    LIMIT = 699,
    LIMITS = 700,
    LINAGE = 701,
    LINAGE_COUNTER = 702,
    LINE = 703,
    LINE_COUNTER = 704,
    LINE_LIMIT = 705,
    LINE_SEQUENTIAL = 706,
    LINES = 707,
    LINES_AT_ROOT = 708,
    LINKAGE = 709,
    LIST_BOX = 710,
    LITERAL = 711,
    LM_RESIZE = 712,
    LOC = 713,
    LOCALE = 714,
    LOCALE_DATE_FUNC = 715,
    LOCALE_TIME_FUNC = 716,
    LOCALE_TIME_FROM_FUNC = 717,
    LOCAL_STORAGE = 718,
    LOCK = 719,
    LOCK_HOLDING = 720,
    LONG_DATE = 721,
    LOWER = 722,
    LOWERED = 723,
    LOWER_CASE_FUNC = 724,
    LOWLIGHT = 725,
    LOW_COLOR = 726,
    LOW_VALUE = 727,
    MAGNETIC_TAPE = 728,
    MANUAL = 729,
    MASS_UPDATE = 730,
    MASTER_INDEX = 731,
    MAX_LINES = 732,
    MAX_PROGRESS = 733,
    MAX_TEXT = 734,
    MAX_VAL = 735,
    MEMORY = 736,
    MEDIUM_FONT = 737,
    MENU = 738,
    MERGE = 739,
    MESSAGE = 740,
    MINUS = 741,
    MIN_VAL = 742,
    MNEMONIC_NAME = 743,
    MODE = 744,
    MODIFY = 745,
    MODULES = 746,
    MOVE = 747,
    MULTILINE = 748,
    MULTIPLE = 749,
    MULTIPLY = 750,
    NAME = 751,
    NAMED = 752,
    NAMESPACE = 753,
    NAMESPACE_PREFIX = 754,
    NATIONAL = 755,
    NATIONAL_EDITED = 756,
    NATIONAL_OF_FUNC = 757,
    NATIVE = 758,
    NAVIGATE_URL = 759,
    NEAREST_AWAY_FROM_ZERO = 760,
    NEAREST_EVEN = 761,
    NEAREST_TOWARD_ZERO = 762,
    NEGATIVE = 763,
    NESTED = 764,
    NEW = 765,
    NEXT = 766,
    NEXT_ITEM = 767,
    NEXT_GROUP = 768,
    NEXT_PAGE = 769,
    NO = 770,
    NO_ADVANCING = 771,
    NO_AUTOSEL = 772,
    NO_AUTO_DEFAULT = 773,
    NO_BOX = 774,
    NO_DATA = 775,
    NO_DIVIDERS = 776,
    NO_ECHO = 777,
    NO_F4 = 778,
    NO_FOCUS = 779,
    NO_GROUP_TAB = 780,
    NO_KEY_LETTER = 781,
    NOMINAL = 782,
    NO_SEARCH = 783,
    NO_UPDOWN = 784,
    NONNUMERIC = 785,
    NORMAL = 786,
    NOT = 787,
    NOTAB = 788,
    NOTHING = 789,
    NOTIFY = 790,
    NOTIFY_CHANGE = 791,
    NOTIFY_DBLCLICK = 792,
    NOTIFY_SELCHANGE = 793,
    NOT_END = 794,
    NOT_EOP = 795,
    NOT_ESCAPE = 796,
    NOT_EQUAL = 797,
    NOT_EXCEPTION = 798,
    NOT_INVALID_KEY = 799,
    NOT_OVERFLOW = 800,
    NOT_SIZE_ERROR = 801,
    NUM_COL_HEADINGS = 802,
    NUM_ROWS = 803,
    NUMBER = 804,
    NUMBERS = 805,
    NUMERIC = 806,
    NUMERIC_EDITED = 807,
    NUMVALC_FUNC = 808,
    OBJECT = 809,
    OBJECT_COMPUTER = 810,
    OCCURS = 811,
    OF = 812,
    OFF = 813,
    OK_BUTTON = 814,
    OMITTED = 815,
    ON = 816,
    ONLY = 817,
    OPEN = 818,
    OPTIONAL = 819,
    OPTIONS = 820,
    OR = 821,
    ORDER = 822,
    ORGANIZATION = 823,
    OTHER = 824,
    OTHERS = 825,
    OUTPUT = 826,
    OVERLAP_LEFT = 827,
    OVERLAP_TOP = 828,
    OVERLINE = 829,
    PACKED_DECIMAL = 830,
    PADDING = 831,
    PASCAL = 832,
    PAGE = 833,
    PAGE_COUNTER = 834,
    PAGE_SETUP = 835,
    PAGED = 836,
    PARAGRAPH = 837,
    PARENT = 838,
    PARSE = 839,
    PASSWORD = 840,
    PERFORM = 841,
    PERMANENT = 842,
    PH = 843,
    PF = 844,
    PHYSICAL = 845,
    PICTURE = 846,
    PICTURE_SYMBOL = 847,
    PIXEL = 848,
    PLACEMENT = 849,
    PLUS = 850,
    POINTER = 851,
    POP_UP = 852,
    POS = 853,
    POSITION = 854,
    POSITION_SHIFT = 855,
    POSITIVE = 856,
    PRESENT = 857,
    PREVIOUS = 858,
    PRINT = 859,
    PRINT_CONTROL = 860,
    PRINT_NO_PROMPT = 861,
    PRINT_PREVIEW = 862,
    PRINTER = 863,
    PRINTER_1 = 864,
    PRINTING = 865,
    PRIORITY = 866,
    PROCEDURE = 867,
    PROCEDURES = 868,
    PROCEED = 869,
    PROCESSING = 870,
    PROGRAM = 871,
    PROGRAM_ID = 872,
    PROGRAM_NAME = 873,
    PROGRAM_POINTER = 874,
    PROGRESS = 875,
    PROHIBITED = 876,
    PROMPT = 877,
    PROPERTIES = 878,
    PROPERTY = 879,
    PROTECTED = 880,
    PURGE = 881,
    PUSH_BUTTON = 882,
    QUERY_INDEX = 883,
    QUEUE = 884,
    QUOTE = 885,
    RADIO_BUTTON = 886,
    RAISE = 887,
    RAISED = 888,
    RANDOM = 889,
    RD = 890,
    READ = 891,
    READERS = 892,
    READ_ONLY = 893,
    READY_TRACE = 894,
    RECEIVE = 895,
    RECORD = 896,
    RECORD_DATA = 897,
    RECORD_OVERFLOW = 898,
    RECORD_TO_ADD = 899,
    RECORD_TO_DELETE = 900,
    RECORDING = 901,
    RECORDS = 902,
    RECURSIVE = 903,
    REDEFINES = 904,
    REEL = 905,
    REFERENCE = 906,
    REFERENCES = 907,
    REFRESH = 908,
    REGION_COLOR = 909,
    RELATIVE = 910,
    RELEASE = 911,
    REMAINDER = 912,
    REMOVAL = 913,
    RENAMES = 914,
    REORG_CRITERIA = 915,
    REPLACE = 916,
    REPLACING = 917,
    REPORT = 918,
    REPORTING = 919,
    REPORTS = 920,
    REPOSITORY = 921,
    REQUIRED = 922,
    REREAD = 923,
    RERUN = 924,
    RESERVE = 925,
    RESET = 926,
    RESET_TRACE = 927,
    RESET_GRID = 928,
    RESET_LIST = 929,
    RESET_TABS = 930,
    RETRY = 931,
    RETURN = 932,
    RETURNING = 933,
    REVERSE = 934,
    REVERSE_FUNC = 935,
    REVERSE_VIDEO = 936,
    REVERSED = 937,
    REWIND = 938,
    REWRITE = 939,
    RF = 940,
    RH = 941,
    RIGHT = 942,
    RIGHT_ALIGN = 943,
    RIMMED = 944,
    ROLLBACK = 945,
    ROUNDED = 946,
    ROUNDING = 947,
    ROW_COLOR = 948,
    ROW_COLOR_PATTERN = 949,
    ROW_DIVIDERS = 950,
    ROW_FONT = 951,
    ROW_HEADINGS = 952,
    ROW_PROTECTION = 953,
    RUN = 954,
    S = 955,
    SAME = 956,
    SAVE_AS = 957,
    SAVE_AS_NO_PROMPT = 958,
    SCREEN = 959,
    SCREEN_CONTROL = 960,
    SCROLL = 961,
    SCROLL_BAR = 962,
    SD = 963,
    SEARCH = 964,
    SEARCH_OPTIONS = 965,
    SEARCH_TEXT = 966,
    SECONDS = 967,
    SECTION = 968,
    SECURE = 969,
    SEGMENT = 970,
    SEGMENT_LIMIT = 971,
    SELECT = 972,
    SELECTION_INDEX = 973,
    SELECTION_TEXT = 974,
    SELECT_ALL = 975,
    SELF_ACT = 976,
    SEMI_COLON = 977,
    SEND = 978,
    SENTENCE = 979,
    SEPARATE = 980,
    SEPARATION = 981,
    SEQUENCE = 982,
    SEQUENTIAL = 983,
    SET = 984,
    SEVENTY_EIGHT = 985,
    SHADING = 986,
    SHADOW = 987,
    SHARING = 988,
    SHORT_DATE = 989,
    SHOW_LINES = 990,
    SHOW_NONE = 991,
    SHOW_SEL_ALWAYS = 992,
    SIGN = 993,
    SIGNED = 994,
    SIGNED_INT = 995,
    SIGNED_LONG = 996,
    SIGNED_SHORT = 997,
    SIXTY_SIX = 998,
    SIZE = 999,
    SIZE_ERROR = 1000,
    SMALL_FONT = 1001,
    SORT = 1002,
    SORT_MERGE = 1003,
    SORT_ORDER = 1004,
    SOURCE = 1005,
    SOURCE_COMPUTER = 1006,
    SPACE = 1007,
    SPECIAL_NAMES = 1008,
    SPINNER = 1009,
    SQUARE = 1010,
    STANDARD = 1011,
    STANDARD_1 = 1012,
    STANDARD_2 = 1013,
    STANDARD_BINARY = 1014,
    STANDARD_DECIMAL = 1015,
    START = 1016,
    START_X = 1017,
    START_Y = 1018,
    STATIC = 1019,
    STATIC_LIST = 1020,
    STATUS = 1021,
    STATUS_BAR = 1022,
    STATUS_TEXT = 1023,
    STDCALL = 1024,
    STEP = 1025,
    STOP = 1026,
    STRING = 1027,
    STRONG = 1028,
    STYLE = 1029,
    SUB_QUEUE_1 = 1030,
    SUB_QUEUE_2 = 1031,
    SUB_QUEUE_3 = 1032,
    SUBSTITUTE_FUNC = 1033,
    SUBSTITUTE_CASE_FUNC = 1034,
    SUBTRACT = 1035,
    SUBWINDOW = 1036,
    SUM = 1037,
    SUPPRESS = 1038,
    SUPPRESS_XML = 1039,
    SYMBOLIC = 1040,
    SYNCHRONIZED = 1041,
    SYSTEM_DEFAULT = 1042,
    SYSTEM_INFO = 1043,
    SYSTEM_OFFSET = 1044,
    TAB = 1045,
    TAB_TO_ADD = 1046,
    TAB_TO_DELETE = 1047,
    TABLE = 1048,
    TALLYING = 1049,
    TEMPORARY = 1050,
    TAPE = 1051,
    TERMINAL = 1052,
    TERMINATE = 1053,
    TERMINAL_INFO = 1054,
    TERMINATION_VALUE = 1055,
    TEST = 1056,
    TEXT = 1057,
    THAN = 1058,
    THEN = 1059,
    THREAD = 1060,
    THREADS = 1061,
    THRU = 1062,
    THUMB_POSITION = 1063,
    TILED_HEADINGS = 1064,
    TIME = 1065,
    TIME_OUT = 1066,
    TIMES = 1067,
    TITLE = 1068,
    TITLE_POSITION = 1069,
    TO = 1070,
    TOK_AMPER = 1071,
    TOK_CLOSE_PAREN = 1072,
    TOK_COLON = 1073,
    TOK_DIV = 1074,
    TOK_DOT = 1075,
    TOK_EQUAL = 1076,
    TOK_EXTERN = 1077,
    TOK_FALSE = 1078,
    TOK_FILE = 1079,
    TOK_GREATER = 1080,
    TOK_INITIAL = 1081,
    TOK_LESS = 1082,
    TOK_MINUS = 1083,
    TOK_MUL = 1084,
    TOK_NULL = 1085,
    TOK_OVERFLOW = 1086,
    TOK_OPEN_PAREN = 1087,
    TOK_PLUS = 1088,
    TOK_TRUE = 1089,
    TOP = 1090,
    TOWARD_GREATER = 1091,
    TOWARD_LESSER = 1092,
    TRACK = 1093,
    TRACKS = 1094,
    TRACK_AREA = 1095,
    TRACK_LIMIT = 1096,
    TRADITIONAL_FONT = 1097,
    TRAILING = 1098,
    TRAILING_SHIFT = 1099,
    TRANSFORM = 1100,
    TRANSPARENT = 1101,
    TREE_VIEW = 1102,
    TRIM_FUNC = 1103,
    TRUNCATION = 1104,
    TYPE = 1105,
    TYPEDEF = 1106,
    U = 1107,
    UCS_4 = 1108,
    UNBOUNDED = 1109,
    UNDERLINE = 1110,
    UNFRAMED = 1111,
    UNIT = 1112,
    UNLOCK = 1113,
    UNSIGNED = 1114,
    UNSIGNED_INT = 1115,
    UNSIGNED_LONG = 1116,
    UNSIGNED_SHORT = 1117,
    UNSORTED = 1118,
    UNSTRING = 1119,
    UNTIL = 1120,
    UP = 1121,
    UPDATE = 1122,
    UPDATERS = 1123,
    UPON = 1124,
    UPON_ARGUMENT_NUMBER = 1125,
    UPON_COMMAND_LINE = 1126,
    UPON_ENVIRONMENT_NAME = 1127,
    UPON_ENVIRONMENT_VALUE = 1128,
    UPPER = 1129,
    UPPER_CASE_FUNC = 1130,
    USAGE = 1131,
    USE = 1132,
    USE_ALT = 1133,
    USE_RETURN = 1134,
    USE_TAB = 1135,
    USER = 1136,
    USER_DEFAULT = 1137,
    USER_FUNCTION_NAME = 1138,
    USING = 1139,
    UTF_8 = 1140,
    UTF_16 = 1141,
    V = 1142,
    VALIDATE = 1143,
    VALIDATING = 1144,
    VALUE = 1145,
    VALUE_FORMAT = 1146,
    VARIABLE = 1147,
    VARIANT = 1148,
    VARYING = 1149,
    VERTICAL = 1150,
    VERY_HEAVY = 1151,
    VIRTUAL_WIDTH = 1152,
    VOLATILE = 1153,
    VPADDING = 1154,
    VSCROLL = 1155,
    VSCROLL_BAR = 1156,
    VSCROLL_POS = 1157,
    VTOP = 1158,
    WAIT = 1159,
    WEB_BROWSER = 1160,
    WHEN = 1161,
    WHEN_COMPILED_FUNC = 1162,
    WHEN_XML = 1163,
    WIDTH = 1164,
    WIDTH_IN_CELLS = 1165,
    WINDOW = 1166,
    WITH = 1167,
    WORD = 1168,
    WORDS = 1169,
    WORKING_STORAGE = 1170,
    WRAP = 1171,
    WRITE = 1172,
    WRITE_ONLY = 1173,
    WRITE_VERIFY = 1174,
    WRITERS = 1175,
    X = 1176,
    XML = 1177,
    XML_DECLARATION = 1178,
    Y = 1179,
    YYYYDDD = 1180,
    YYYYMMDD = 1181,
    ZERO = 1182,
    SHIFT_PREFER = 1183
  };
#endif
/* Tokens.  */
#define TOKEN_EOF 0
#define THREEDIMENSIONAL 258
#define ABSENT 259
#define ACCEPT 260
#define ACCESS 261
#define ACTIVEX 262
#define ACTION 263
#define ACTUAL 264
#define ADD 265
#define ADDRESS 266
#define ADJUSTABLE_COLUMNS 267
#define ADVANCING 268
#define AFTER 269
#define ALIGNMENT 270
#define ALL 271
#define ALLOCATE 272
#define ALLOWING 273
#define ALPHABET 274
#define ALPHABETIC 275
#define ALPHABETIC_LOWER 276
#define ALPHABETIC_UPPER 277
#define ALPHANUMERIC 278
#define ALPHANUMERIC_EDITED 279
#define ALSO 280
#define ALTER 281
#define ALTERNATE 282
#define AND 283
#define ANY 284
#define APPLY 285
#define ARE 286
#define AREA 287
#define AREAS 288
#define ARGUMENT_NUMBER 289
#define ARGUMENT_VALUE 290
#define ARITHMETIC 291
#define AS 292
#define ASCENDING 293
#define ASCII 294
#define ASSIGN 295
#define AT 296
#define ATTRIBUTE 297
#define ATTRIBUTES 298
#define AUTO 299
#define AUTO_DECIMAL 300
#define AUTO_SPIN 301
#define AUTOMATIC 302
#define AWAY_FROM_ZERO 303
#define BACKGROUND_COLOR 304
#define BACKGROUND_HIGH 305
#define BACKGROUND_LOW 306
#define BACKGROUND_STANDARD 307
#define BAR 308
#define BASED 309
#define BEFORE 310
#define BELL 311
#define BINARY 312
#define BINARY_C_LONG 313
#define BINARY_CHAR 314
#define BINARY_DOUBLE 315
#define BINARY_LONG 316
#define BINARY_SEQUENTIAL 317
#define BINARY_SHORT 318
#define BIT 319
#define BITMAP 320
#define BITMAP_END 321
#define BITMAP_HANDLE 322
#define BITMAP_NUMBER 323
#define BITMAP_START 324
#define BITMAP_TIMER 325
#define BITMAP_TRAILING 326
#define BITMAP_TRANSPARENT_COLOR 327
#define BITMAP_WIDTH 328
#define BLANK 329
#define BLINK 330
#define BLOCK 331
#define BOTTOM 332
#define BOX 333
#define BOXED 334
#define BULK_ADDITION 335
#define BUSY 336
#define BUTTONS 337
#define BY 338
#define BYTE_LENGTH 339
#define C 340
#define CALENDAR_FONT 341
#define CALL 342
#define CANCEL 343
#define CANCEL_BUTTON 344
#define CAPACITY 345
#define CARD_PUNCH 346
#define CARD_READER 347
#define CASSETTE 348
#define CCOL 349
#define CD 350
#define CELL 351
#define CELL_COLOR 352
#define CELL_DATA 353
#define CELL_FONT 354
#define CELL_PROTECTION 355
#define CENTER 356
#define CENTERED 357
#define CENTERED_HEADINGS 358
#define CENTURY_DATE 359
#define CF 360
#define CH 361
#define CHAINING 362
#define CHANGED 363
#define CHARACTER 364
#define CHARACTERS 365
#define CHECK_BOX 366
#define CLASS 367
#define CLASSIFICATION 368
#define CLASS_NAME 369
#define CLEAR_SELECTION 370
#define CLINE 371
#define CLINES 372
#define CLOSE 373
#define COBOL 374
#define CODE 375
#define CODE_SET 376
#define COLLATING 377
#define COL 378
#define COLOR 379
#define COLORS 380
#define COLS 381
#define COLUMN 382
#define COLUMN_COLOR 383
#define COLUMN_DIVIDERS 384
#define COLUMN_FONT 385
#define COLUMN_HEADINGS 386
#define COLUMN_PROTECTION 387
#define COLUMNS 388
#define COMBO_BOX 389
#define COMMA 390
#define COMMAND_LINE 391
#define COMMA_DELIM 392
#define COMMIT 393
#define COMMON 394
#define COMMUNICATION 395
#define COMP 396
#define COMPUTE 397
#define COMP_0 398
#define COMP_1 399
#define COMP_2 400
#define COMP_3 401
#define COMP_4 402
#define COMP_5 403
#define COMP_6 404
#define COMP_N 405
#define COMP_X 406
#define CONCATENATE_FUNC 407
#define CONDITION 408
#define CONFIGURATION 409
#define CONSTANT 410
#define CONTAINS 411
#define CONTENT 412
#define CONTENT_LENGTH_FUNC 413
#define CONTENT_OF_FUNC 414
#define CONTINUE 415
#define CONTROL 416
#define CONTROLS 417
#define CONVERSION 418
#define CONVERTING 419
#define COPY 420
#define COPY_SELECTION 421
#define CORE_INDEX 422
#define CORRESPONDING 423
#define COUNT 424
#define CRT 425
#define CRT_UNDER 426
#define CSIZE 427
#define CURRENCY 428
#define CURRENT_DATE_FUNC 429
#define CURSOR 430
#define CURSOR_COL 431
#define CURSOR_COLOR 432
#define CURSOR_FRAME_WIDTH 433
#define CURSOR_ROW 434
#define CURSOR_X 435
#define CURSOR_Y 436
#define CUSTOM_PRINT_TEMPLATE 437
#define CYCLE 438
#define CYL_INDEX 439
#define CYL_OVERFLOW 440
#define DASHED 441
#define DATA 442
#define DATA_COLUMNS 443
#define DATA_TYPES 444
#define DATE 445
#define DATE_ENTRY 446
#define DAY 447
#define DAY_OF_WEEK 448
#define DE 449
#define DEBUGGING 450
#define DECIMAL_POINT 451
#define DECLARATIVES 452
#define DEFAULT 453
#define DEFAULT_BUTTON 454
#define DEFAULT_FONT 455
#define DELETE 456
#define DELIMITED 457
#define DELIMITER 458
#define DEPENDING 459
#define DESCENDING 460
#define DESTINATION 461
#define DESTROY 462
#define DETAIL 463
#define DISABLE 464
#define DISC 465
#define DISK 466
#define DISP 467
#define DISPLAY 468
#define DISPLAY_COLUMNS 469
#define DISPLAY_FORMAT 470
#define DISPLAY_OF_FUNC 471
#define DIVIDE 472
#define DIVIDERS 473
#define DIVIDER_COLOR 474
#define DIVISION 475
#define DOTDASH 476
#define DOTTED 477
#define DRAG_COLOR 478
#define DROP_DOWN 479
#define DROP_LIST 480
#define DOWN 481
#define DUPLICATES 482
#define DYNAMIC 483
#define EBCDIC 484
#define EC 485
#define ECHO 486
#define EGI 487
#define EIGHTY_EIGHT 488
#define ENABLE 489
#define ELEMENT 490
#define ELSE 491
#define EMI 492
#define ENCRYPTION 493
#define ENCODING 494
#define END 495
#define END_ACCEPT 496
#define END_ADD 497
#define END_CALL 498
#define END_COMPUTE 499
#define END_COLOR 500
#define END_DELETE 501
#define END_DISPLAY 502
#define END_DIVIDE 503
#define END_EVALUATE 504
#define END_FUNCTION 505
#define END_IF 506
#define END_JSON 507
#define END_MODIFY 508
#define END_MULTIPLY 509
#define END_PERFORM 510
#define END_PROGRAM 511
#define END_READ 512
#define END_RECEIVE 513
#define END_RETURN 514
#define END_REWRITE 515
#define END_SEARCH 516
#define END_START 517
#define END_STRING 518
#define END_SUBTRACT 519
#define END_UNSTRING 520
#define END_WRITE 521
#define END_XML 522
#define ENGRAVED 523
#define ENSURE_VISIBLE 524
#define ENTRY 525
#define ENTRY_CONVENTION 526
#define ENTRY_FIELD 527
#define ENTRY_REASON 528
#define ENVIRONMENT 529
#define ENVIRONMENT_NAME 530
#define ENVIRONMENT_VALUE 531
#define EOL 532
#define EOP 533
#define EOS 534
#define EQUAL 535
#define ERASE 536
#define ERROR 537
#define ESCAPE 538
#define ESCAPE_BUTTON 539
#define ESI 540
#define EVALUATE 541
#define EVENT 542
#define EVENT_LIST 543
#define EVENT_STATUS 544
#define EVERY 545
#define EXCEPTION 546
#define EXCEPTION_CONDITION 547
#define EXCEPTION_VALUE 548
#define EXPAND 549
#define EXCLUSIVE 550
#define EXHIBIT 551
#define EXIT 552
#define EXPONENTIATION 553
#define EXTEND 554
#define EXTENDED_SEARCH 555
#define EXTERNAL 556
#define EXTERNAL_FORM 557
#define F 558
#define FD 559
#define FH__FCD 560
#define FH__KEYDEF 561
#define FILE_CONTROL 562
#define FILE_ID 563
#define FILE_LIMIT 564
#define FILE_LIMITS 565
#define FILE_NAME 566
#define FILE_POS 567
#define FILL_COLOR 568
#define FILL_COLOR2 569
#define FILL_PERCENT 570
#define FILLER 571
#define FINAL 572
#define FINISH_REASON 573
#define FIRST 574
#define FIXED 575
#define FIXED_FONT 576
#define FIXED_WIDTH 577
#define FLAT 578
#define FLAT_BUTTONS 579
#define FLOAT_BINARY_128 580
#define FLOAT_BINARY_32 581
#define FLOAT_BINARY_64 582
#define FLOAT_DECIMAL_16 583
#define FLOAT_DECIMAL_34 584
#define FLOAT_DECIMAL_7 585
#define FLOAT_EXTENDED 586
#define FLOAT_LONG 587
#define FLOAT_SHORT 588
#define FLOATING 589
#define FONT 590
#define FOOTING 591
#define FOR 592
#define FOREGROUND_COLOR 593
#define FOREVER 594
#define FORMATTED_DATE_FUNC 595
#define FORMATTED_DATETIME_FUNC 596
#define FORMATTED_TIME_FUNC 597
#define FRAME 598
#define FRAMED 599
#define FREE 600
#define FROM 601
#define FROM_CRT 602
#define FULL 603
#define FULL_HEIGHT 604
#define FUNCTION 605
#define FUNCTION_ID 606
#define FUNCTION_NAME 607
#define GENERATE 608
#define GIVING 609
#define GLOBAL 610
#define GO 611
#define GO_BACK 612
#define GO_FORWARD 613
#define GO_HOME 614
#define GO_SEARCH 615
#define GOBACK 616
#define GRAPHICAL 617
#define GREATER 618
#define GREATER_OR_EQUAL 619
#define GRID 620
#define GROUP 621
#define GROUP_VALUE 622
#define HANDLE 623
#define HAS_CHILDREN 624
#define HEADING 625
#define HEADING_COLOR 626
#define HEADING_DIVIDER_COLOR 627
#define HEADING_FONT 628
#define HEAVY 629
#define HEIGHT_IN_CELLS 630
#define HIDDEN_DATA 631
#define HIGHLIGHT 632
#define HIGH_COLOR 633
#define HIGH_VALUE 634
#define HOT_TRACK 635
#define HSCROLL 636
#define HSCROLL_POS 637
#define ICON 638
#define ID 639
#define IDENTIFIED 640
#define IDENTIFICATION 641
#define IF 642
#define IGNORE 643
#define IGNORING 644
#define IN 645
#define INDEPENDENT 646
#define INDEX 647
#define INDEXED 648
#define INDICATE 649
#define INITIALIZE 650
#define INITIALIZED 651
#define INITIATE 652
#define INPUT 653
#define INPUT_OUTPUT 654
#define INQUIRE 655
#define INSERTION_INDEX 656
#define INSERT_ROWS 657
#define INSPECT 658
#define INTERMEDIATE 659
#define INTO 660
#define INTRINSIC 661
#define INVALID 662
#define INVALID_KEY 663
#define IS 664
#define ITEM 665
#define ITEM_TEXT 666
#define ITEM_TO_ADD 667
#define ITEM_TO_DELETE 668
#define ITEM_TO_EMPTY 669
#define ITEM_VALUE 670
#define I_O 671
#define I_O_CONTROL 672
#define JSON 673
#define JUSTIFIED 674
#define KEPT 675
#define KEY 676
#define KEYBOARD 677
#define LABEL 678
#define LABEL_OFFSET 679
#define LARGE_FONT 680
#define LARGE_OFFSET 681
#define LAST 682
#define LAST_ROW 683
#define LAYOUT_DATA 684
#define LAYOUT_MANAGER 685
#define LEADING 686
#define LEADING_SHIFT 687
#define LEAVE 688
#define LEFT 689
#define LEFTLINE 690
#define LEFT_TEXT 691
#define LENGTH 692
#define LENGTH_OF 693
#define LENGTH_FUNC 694
#define LESS 695
#define LESS_OR_EQUAL 696
#define LEVEL_NUMBER 697
#define LIKE 698
#define LIMIT 699
#define LIMITS 700
#define LINAGE 701
#define LINAGE_COUNTER 702
#define LINE 703
#define LINE_COUNTER 704
#define LINE_LIMIT 705
#define LINE_SEQUENTIAL 706
#define LINES 707
#define LINES_AT_ROOT 708
#define LINKAGE 709
#define LIST_BOX 710
#define LITERAL 711
#define LM_RESIZE 712
#define LOC 713
#define LOCALE 714
#define LOCALE_DATE_FUNC 715
#define LOCALE_TIME_FUNC 716
#define LOCALE_TIME_FROM_FUNC 717
#define LOCAL_STORAGE 718
#define LOCK 719
#define LOCK_HOLDING 720
#define LONG_DATE 721
#define LOWER 722
#define LOWERED 723
#define LOWER_CASE_FUNC 724
#define LOWLIGHT 725
#define LOW_COLOR 726
#define LOW_VALUE 727
#define MAGNETIC_TAPE 728
#define MANUAL 729
#define MASS_UPDATE 730
#define MASTER_INDEX 731
#define MAX_LINES 732
#define MAX_PROGRESS 733
#define MAX_TEXT 734
#define MAX_VAL 735
#define MEMORY 736
#define MEDIUM_FONT 737
#define MENU 738
#define MERGE 739
#define MESSAGE 740
#define MINUS 741
#define MIN_VAL 742
#define MNEMONIC_NAME 743
#define MODE 744
#define MODIFY 745
#define MODULES 746
#define MOVE 747
#define MULTILINE 748
#define MULTIPLE 749
#define MULTIPLY 750
#define NAME 751
#define NAMED 752
#define NAMESPACE 753
#define NAMESPACE_PREFIX 754
#define NATIONAL 755
#define NATIONAL_EDITED 756
#define NATIONAL_OF_FUNC 757
#define NATIVE 758
#define NAVIGATE_URL 759
#define NEAREST_AWAY_FROM_ZERO 760
#define NEAREST_EVEN 761
#define NEAREST_TOWARD_ZERO 762
#define NEGATIVE 763
#define NESTED 764
#define NEW 765
#define NEXT 766
#define NEXT_ITEM 767
#define NEXT_GROUP 768
#define NEXT_PAGE 769
#define NO 770
#define NO_ADVANCING 771
#define NO_AUTOSEL 772
#define NO_AUTO_DEFAULT 773
#define NO_BOX 774
#define NO_DATA 775
#define NO_DIVIDERS 776
#define NO_ECHO 777
#define NO_F4 778
#define NO_FOCUS 779
#define NO_GROUP_TAB 780
#define NO_KEY_LETTER 781
#define NOMINAL 782
#define NO_SEARCH 783
#define NO_UPDOWN 784
#define NONNUMERIC 785
#define NORMAL 786
#define NOT 787
#define NOTAB 788
#define NOTHING 789
#define NOTIFY 790
#define NOTIFY_CHANGE 791
#define NOTIFY_DBLCLICK 792
#define NOTIFY_SELCHANGE 793
#define NOT_END 794
#define NOT_EOP 795
#define NOT_ESCAPE 796
#define NOT_EQUAL 797
#define NOT_EXCEPTION 798
#define NOT_INVALID_KEY 799
#define NOT_OVERFLOW 800
#define NOT_SIZE_ERROR 801
#define NUM_COL_HEADINGS 802
#define NUM_ROWS 803
#define NUMBER 804
#define NUMBERS 805
#define NUMERIC 806
#define NUMERIC_EDITED 807
#define NUMVALC_FUNC 808
#define OBJECT 809
#define OBJECT_COMPUTER 810
#define OCCURS 811
#define OF 812
#define OFF 813
#define OK_BUTTON 814
#define OMITTED 815
#define ON 816
#define ONLY 817
#define OPEN 818
#define OPTIONAL 819
#define OPTIONS 820
#define OR 821
#define ORDER 822
#define ORGANIZATION 823
#define OTHER 824
#define OTHERS 825
#define OUTPUT 826
#define OVERLAP_LEFT 827
#define OVERLAP_TOP 828
#define OVERLINE 829
#define PACKED_DECIMAL 830
#define PADDING 831
#define PASCAL 832
#define PAGE 833
#define PAGE_COUNTER 834
#define PAGE_SETUP 835
#define PAGED 836
#define PARAGRAPH 837
#define PARENT 838
#define PARSE 839
#define PASSWORD 840
#define PERFORM 841
#define PERMANENT 842
#define PH 843
#define PF 844
#define PHYSICAL 845
#define PICTURE 846
#define PICTURE_SYMBOL 847
#define PIXEL 848
#define PLACEMENT 849
#define PLUS 850
#define POINTER 851
#define POP_UP 852
#define POS 853
#define POSITION 854
#define POSITION_SHIFT 855
#define POSITIVE 856
#define PRESENT 857
#define PREVIOUS 858
#define PRINT 859
#define PRINT_CONTROL 860
#define PRINT_NO_PROMPT 861
#define PRINT_PREVIEW 862
#define PRINTER 863
#define PRINTER_1 864
#define PRINTING 865
#define PRIORITY 866
#define PROCEDURE 867
#define PROCEDURES 868
#define PROCEED 869
#define PROCESSING 870
#define PROGRAM 871
#define PROGRAM_ID 872
#define PROGRAM_NAME 873
#define PROGRAM_POINTER 874
#define PROGRESS 875
#define PROHIBITED 876
#define PROMPT 877
#define PROPERTIES 878
#define PROPERTY 879
#define PROTECTED 880
#define PURGE 881
#define PUSH_BUTTON 882
#define QUERY_INDEX 883
#define QUEUE 884
#define QUOTE 885
#define RADIO_BUTTON 886
#define RAISE 887
#define RAISED 888
#define RANDOM 889
#define RD 890
#define READ 891
#define READERS 892
#define READ_ONLY 893
#define READY_TRACE 894
#define RECEIVE 895
#define RECORD 896
#define RECORD_DATA 897
#define RECORD_OVERFLOW 898
#define RECORD_TO_ADD 899
#define RECORD_TO_DELETE 900
#define RECORDING 901
#define RECORDS 902
#define RECURSIVE 903
#define REDEFINES 904
#define REEL 905
#define REFERENCE 906
#define REFERENCES 907
#define REFRESH 908
#define REGION_COLOR 909
#define RELATIVE 910
#define RELEASE 911
#define REMAINDER 912
#define REMOVAL 913
#define RENAMES 914
#define REORG_CRITERIA 915
#define REPLACE 916
#define REPLACING 917
#define REPORT 918
#define REPORTING 919
#define REPORTS 920
#define REPOSITORY 921
#define REQUIRED 922
#define REREAD 923
#define RERUN 924
#define RESERVE 925
#define RESET 926
#define RESET_TRACE 927
#define RESET_GRID 928
#define RESET_LIST 929
#define RESET_TABS 930
#define RETRY 931
#define RETURN 932
#define RETURNING 933
#define REVERSE 934
#define REVERSE_FUNC 935
#define REVERSE_VIDEO 936
#define REVERSED 937
#define REWIND 938
#define REWRITE 939
#define RF 940
#define RH 941
#define RIGHT 942
#define RIGHT_ALIGN 943
#define RIMMED 944
#define ROLLBACK 945
#define ROUNDED 946
#define ROUNDING 947
#define ROW_COLOR 948
#define ROW_COLOR_PATTERN 949
#define ROW_DIVIDERS 950
#define ROW_FONT 951
#define ROW_HEADINGS 952
#define ROW_PROTECTION 953
#define RUN 954
#define S 955
#define SAME 956
#define SAVE_AS 957
#define SAVE_AS_NO_PROMPT 958
#define SCREEN 959
#define SCREEN_CONTROL 960
#define SCROLL 961
#define SCROLL_BAR 962
#define SD 963
#define SEARCH 964
#define SEARCH_OPTIONS 965
#define SEARCH_TEXT 966
#define SECONDS 967
#define SECTION 968
#define SECURE 969
#define SEGMENT 970
#define SEGMENT_LIMIT 971
#define SELECT 972
#define SELECTION_INDEX 973
#define SELECTION_TEXT 974
#define SELECT_ALL 975
#define SELF_ACT 976
#define SEMI_COLON 977
#define SEND 978
#define SENTENCE 979
#define SEPARATE 980
#define SEPARATION 981
#define SEQUENCE 982
#define SEQUENTIAL 983
#define SET 984
#define SEVENTY_EIGHT 985
#define SHADING 986
#define SHADOW 987
#define SHARING 988
#define SHORT_DATE 989
#define SHOW_LINES 990
#define SHOW_NONE 991
#define SHOW_SEL_ALWAYS 992
#define SIGN 993
#define SIGNED 994
#define SIGNED_INT 995
#define SIGNED_LONG 996
#define SIGNED_SHORT 997
#define SIXTY_SIX 998
#define SIZE 999
#define SIZE_ERROR 1000
#define SMALL_FONT 1001
#define SORT 1002
#define SORT_MERGE 1003
#define SORT_ORDER 1004
#define SOURCE 1005
#define SOURCE_COMPUTER 1006
#define SPACE 1007
#define SPECIAL_NAMES 1008
#define SPINNER 1009
#define SQUARE 1010
#define STANDARD 1011
#define STANDARD_1 1012
#define STANDARD_2 1013
#define STANDARD_BINARY 1014
#define STANDARD_DECIMAL 1015
#define START 1016
#define START_X 1017
#define START_Y 1018
#define STATIC 1019
#define STATIC_LIST 1020
#define STATUS 1021
#define STATUS_BAR 1022
#define STATUS_TEXT 1023
#define STDCALL 1024
#define STEP 1025
#define STOP 1026
#define STRING 1027
#define STRONG 1028
#define STYLE 1029
#define SUB_QUEUE_1 1030
#define SUB_QUEUE_2 1031
#define SUB_QUEUE_3 1032
#define SUBSTITUTE_FUNC 1033
#define SUBSTITUTE_CASE_FUNC 1034
#define SUBTRACT 1035
#define SUBWINDOW 1036
#define SUM 1037
#define SUPPRESS 1038
#define SUPPRESS_XML 1039
#define SYMBOLIC 1040
#define SYNCHRONIZED 1041
#define SYSTEM_DEFAULT 1042
#define SYSTEM_INFO 1043
#define SYSTEM_OFFSET 1044
#define TAB 1045
#define TAB_TO_ADD 1046
#define TAB_TO_DELETE 1047
#define TABLE 1048
#define TALLYING 1049
#define TEMPORARY 1050
#define TAPE 1051
#define TERMINAL 1052
#define TERMINATE 1053
#define TERMINAL_INFO 1054
#define TERMINATION_VALUE 1055
#define TEST 1056
#define TEXT 1057
#define THAN 1058
#define THEN 1059
#define THREAD 1060
#define THREADS 1061
#define THRU 1062
#define THUMB_POSITION 1063
#define TILED_HEADINGS 1064
#define TIME 1065
#define TIME_OUT 1066
#define TIMES 1067
#define TITLE 1068
#define TITLE_POSITION 1069
#define TO 1070
#define TOK_AMPER 1071
#define TOK_CLOSE_PAREN 1072
#define TOK_COLON 1073
#define TOK_DIV 1074
#define TOK_DOT 1075
#define TOK_EQUAL 1076
#define TOK_EXTERN 1077
#define TOK_FALSE 1078
#define TOK_FILE 1079
#define TOK_GREATER 1080
#define TOK_INITIAL 1081
#define TOK_LESS 1082
#define TOK_MINUS 1083
#define TOK_MUL 1084
#define TOK_NULL 1085
#define TOK_OVERFLOW 1086
#define TOK_OPEN_PAREN 1087
#define TOK_PLUS 1088
#define TOK_TRUE 1089
#define TOP 1090
#define TOWARD_GREATER 1091
#define TOWARD_LESSER 1092
#define TRACK 1093
#define TRACKS 1094
#define TRACK_AREA 1095
#define TRACK_LIMIT 1096
#define TRADITIONAL_FONT 1097
#define TRAILING 1098
#define TRAILING_SHIFT 1099
#define TRANSFORM 1100
#define TRANSPARENT 1101
#define TREE_VIEW 1102
#define TRIM_FUNC 1103
#define TRUNCATION 1104
#define TYPE 1105
#define TYPEDEF 1106
#define U 1107
#define UCS_4 1108
#define UNBOUNDED 1109
#define UNDERLINE 1110
#define UNFRAMED 1111
#define UNIT 1112
#define UNLOCK 1113
#define UNSIGNED 1114
#define UNSIGNED_INT 1115
#define UNSIGNED_LONG 1116
#define UNSIGNED_SHORT 1117
#define UNSORTED 1118
#define UNSTRING 1119
#define UNTIL 1120
#define UP 1121
#define UPDATE 1122
#define UPDATERS 1123
#define UPON 1124
#define UPON_ARGUMENT_NUMBER 1125
#define UPON_COMMAND_LINE 1126
#define UPON_ENVIRONMENT_NAME 1127
#define UPON_ENVIRONMENT_VALUE 1128
#define UPPER 1129
#define UPPER_CASE_FUNC 1130
#define USAGE 1131
#define USE 1132
#define USE_ALT 1133
#define USE_RETURN 1134
#define USE_TAB 1135
#define USER 1136
#define USER_DEFAULT 1137
#define USER_FUNCTION_NAME 1138
#define USING 1139
#define UTF_8 1140
#define UTF_16 1141
#define V 1142
#define VALIDATE 1143
#define VALIDATING 1144
#define VALUE 1145
#define VALUE_FORMAT 1146
#define VARIABLE 1147
#define VARIANT 1148
#define VARYING 1149
#define VERTICAL 1150
#define VERY_HEAVY 1151
#define VIRTUAL_WIDTH 1152
#define VOLATILE 1153
#define VPADDING 1154
#define VSCROLL 1155
#define VSCROLL_BAR 1156
#define VSCROLL_POS 1157
#define VTOP 1158
#define WAIT 1159
#define WEB_BROWSER 1160
#define WHEN 1161
#define WHEN_COMPILED_FUNC 1162
#define WHEN_XML 1163
#define WIDTH 1164
#define WIDTH_IN_CELLS 1165
#define WINDOW 1166
#define WITH 1167
#define WORD 1168
#define WORDS 1169
#define WORKING_STORAGE 1170
#define WRAP 1171
#define WRITE 1172
#define WRITE_ONLY 1173
#define WRITE_VERIFY 1174
#define WRITERS 1175
#define X 1176
#define XML 1177
#define XML_DECLARATION 1178
#define Y 1179
#define YYYYDDD 1180
#define YYYYMMDD 1181
#define ZERO 1182
#define SHIFT_PREFER 1183

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_H_INCLUDED  */



#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   17950

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  929
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  1322
/* YYNRULES -- Number of rules.  */
#define YYNRULES  3193
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  4516

#define YYUNDEFTOK  2
#define YYMAXUTOK   1183


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int16 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   441,   442,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   471,   472,   473,   474,
     475,   476,   477,   478,   479,   480,   481,   482,   483,   484,
     485,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,   497,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   510,   511,   512,   513,   514,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
     525,   526,   527,   528,   529,   530,   531,   532,   533,   534,
     535,   536,   537,   538,   539,   540,   541,   542,   543,   544,
     545,   546,   547,   548,   549,   550,   551,   552,   553,   554,
     555,   556,   557,   558,   559,   560,   561,   562,   563,   564,
     565,   566,   567,   568,   569,   570,   571,   572,   573,   574,
     575,   576,   577,   578,   579,   580,   581,   582,   583,   584,
     585,   586,   587,   588,   589,   590,   591,   592,   593,   594,
     595,   596,   597,   598,   599,   600,   601,   602,   603,   604,
     605,   606,   607,   608,   609,   610,   611,   612,   613,   614,
     615,   616,   617,   618,   619,   620,   621,   622,   623,   624,
     625,   626,   627,   628,   629,   630,   631,   632,   633,   634,
     635,   636,   637,   638,   639,   640,   641,   642,   643,   644,
     645,   646,   647,   648,   649,   650,   651,   652,   653,   654,
     655,   656,   657,   658,   659,   660,   661,   662,   663,   664,
     665,   666,   667,   668,   669,   670,   671,   672,   673,   674,
     675,   676,   677,   678,   679,   680,   681,   682,   683,   684,
     685,   686,   687,   688,   689,   690,   691,   692,   693,   694,
     695,   696,   697,   698,   699,   700,   701,   702,   703,   704,
     705,   706,   707,   708,   709,   710,   711,   712,   713,   714,
     715,   716,   717,   718,   719,   720,   721,   722,   723,   724,
     725,   726,   727,   728,   729,   730,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,   741,   742,   743,   744,
     745,   746,   747,   748,   749,   750,   751,   752,   753,   754,
     755,   756,   757,   758,   759,   760,   761,   762,   763,   764,
     765,   766,   767,   768,   769,   770,   771,   772,   773,   774,
     775,   776,   777,   778,   779,   780,   781,   782,   783,   784,
     785,   786,   787,   788,   789,   790,   791,   792,   793,   794,
     795,   796,   797,   798,   799,   800,   801,   802,   803,   804,
     805,   806,   807,   808,   809,   810,   811,   812,   813,   814,
     815,   816,   817,   818,   819,   820,   821,   822,   823,   824,
     825,   826,   827,   828,   829,   830,   831,   832,   833,   834,
     835,   836,   837,   838,   839,   840,   841,   842,   843,   844,
     845,   846,   847,   848,   849,   850,   851,   852,   853,   854,
     855,   856,   857,   858,   859,   860,   861,   862,   863,   864,
     865,   866,   867,   868,   869,   870,   871,   872,   873,   874,
     875,   876,   877,   878,   879,   880,   881,   882,   883,   884,
     885,   886,   887,   888,   889,   890,   891,   892,   893,   894,
     895,   896,   897,   898,   899,   900,   901,   902,   903,   904,
     905,   906,   907,   908,   909,   910,   911,   912,   913,   914,
     915,   916,   917,   918,   919,   920,   921,   922,   923,   924,
     925,   926,   927,   928
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,  3329,  3329,  3329,  3362,  3363,  3367,  3367,  3376,  3377,
    3381,  3382,  3386,  3386,  3398,  3409,  3417,  3421,  3425,  3426,
    3431,  3430,  3443,  3442,  3457,  3461,  3455,  3473,  3474,  3478,
    3487,  3487,  3492,  3496,  3491,  3512,  3511,  3527,  3538,  3545,
    3546,  3553,  3554,  3557,  3558,  3562,  3571,  3580,  3581,  3588,
    3589,  3593,  3597,  3603,  3605,  3613,  3620,  3622,  3626,  3633,
    3637,  3641,  3657,  3660,  3670,  3672,  3679,  3683,  3687,  3693,
    3695,  3702,  3706,  3710,  3714,  3723,  3728,  3729,  3738,  3742,
    3743,  3753,  3755,  3759,  3760,  3764,  3765,  3766,  3767,  3768,
    3775,  3774,  3785,  3786,  3789,  3790,  3803,  3802,  3816,  3817,
    3818,  3819,  3823,  3824,  3828,  3829,  3830,  3831,  3835,  3843,
    3852,  3851,  3859,  3863,  3869,  3873,  3878,  3885,  3895,  3909,
    3920,  3924,  3928,  3932,  3939,  3940,  3947,  3946,  3959,  3961,
    3962,  3969,  3970,  3974,  3978,  3984,  3985,  3992,  3999,  4004,
    4015,  4029,  4032,  4033,  4036,  4040,  4041,  4042,  4043,  4044,
    4045,  4046,  4047,  4048,  4049,  4050,  4051,  4052,  4053,  4061,
    4060,  4079,  4090,  4111,  4119,  4122,  4123,  4127,  4134,  4149,
    4170,  4169,  4194,  4193,  4202,  4201,  4211,  4213,  4217,  4221,
    4222,  4228,  4234,  4240,  4249,  4250,  4257,  4264,  4274,  4280,
    4288,  4298,  4302,  4309,  4313,  4318,  4317,  4328,  4332,  4339,
    4340,  4341,  4342,  4343,  4344,  4348,  4349,  4356,  4371,  4374,
    4381,  4389,  4393,  4404,  4424,  4432,  4443,  4444,  4451,  4465,
    4466,  4470,  4491,  4512,  4513,  4517,  4521,  4539,  4541,  4545,
    4552,  4554,  4564,  4585,  4652,  4655,  4664,  4683,  4699,  4717,
    4735,  4752,  4770,  4769,  4797,  4803,  4804,  4813,  4814,  4822,
    4823,  4828,  4827,  4874,  4875,  4881,  4882,  4891,  4892,  4893,
    4894,  4895,  4896,  4897,  4898,  4899,  4900,  4901,  4902,  4903,
    4904,  4905,  4906,  4907,  4908,  4909,  4935,  4945,  4955,  4966,
    4977,  5008,  5011,  5015,  5019,  5023,  5028,  5032,  5040,  5044,
    5048,  5056,  5057,  5058,  5059,  5063,  5064,  5065,  5066,  5067,
    5068,  5069,  5073,  5081,  5085,  5093,  5097,  5104,  5105,  5111,
    5118,  5119,  5120,  5127,  5182,  5185,  5190,  5189,  5215,  5218,
    5222,  5232,  5243,  5242,  5250,  5254,  5260,  5264,  5269,  5276,
    5286,  5297,  5312,  5323,  5325,  5326,  5332,  5332,  5339,  5343,
    5347,  5354,  5355,  5356,  5360,  5366,  5367,  5371,  5377,  5378,
    5394,  5395,  5399,  5405,  5411,  5417,  5430,  5441,  5440,  5449,
    5460,  5474,  5487,  5503,  5542,  5545,  5552,  5553,  5557,  5557,
    5561,  5566,  5584,  5595,  5602,  5603,  5609,  5622,  5623,  5624,
    5630,  5638,  5639,  5645,  5655,  5665,  5675,  5685,  5686,  5693,
    5701,  5702,  5703,  5710,  5711,  5715,  5716,  5717,  5718,  5724,
    5752,  5753,  5754,  5755,  5761,  5766,  5770,  5774,  5775,  5782,
    5783,  5784,  5785,  5786,  5787,  5788,  5789,  5796,  5795,  5811,
    5812,  5816,  5819,  5820,  5826,  5830,  5834,  5835,  5844,  5841,
    5855,  5856,  5860,  5868,  5869,  5877,  5878,  5882,  5902,  5901,
    5925,  5932,  5936,  5942,  5943,  5947,  5957,  5972,  5973,  5974,
    5975,  5976,  5977,  5978,  5979,  5980,  5987,  5994,  5994,  5994,
    6000,  6009,  6018,  6028,  6029,  6036,  6037,  6041,  6042,  6049,
    6060,  6065,  6076,  6077,  6081,  6082,  6088,  6099,  6117,  6118,
    6122,  6123,  6124,  6128,  6135,  6142,  6151,  6160,  6161,  6162,
    6163,  6164,  6173,  6174,  6180,  6217,  6218,  6228,  6243,  6244,
    6248,  6262,  6280,  6282,  6281,  6299,  6300,  6304,  6321,  6320,
    6341,  6342,  6346,  6347,  6348,  6351,  6353,  6354,  6358,  6359,
    6363,  6364,  6365,  6366,  6367,  6368,  6369,  6370,  6371,  6372,
    6373,  6377,  6381,  6383,  6387,  6388,  6392,  6393,  6394,  6395,
    6396,  6397,  6398,  6401,  6403,  6404,  6408,  6409,  6413,  6414,
    6415,  6416,  6417,  6418,  6422,  6427,  6429,  6428,  6444,  6448,
    6448,  6461,  6462,  6466,  6467,  6468,  6470,  6469,  6489,  6506,
    6512,  6514,  6518,  6525,  6529,  6540,  6543,  6555,  6556,  6558,
    6562,  6566,  6572,  6576,  6580,  6584,  6588,  6592,  6596,  6604,
    6608,  6612,  6616,  6620,  6624,  6635,  6636,  6640,  6641,  6645,
    6646,  6647,  6651,  6652,  6656,  6700,  6703,  6711,  6710,  6723,
    6751,  6750,  6765,  6769,  6776,  6782,  6786,  6793,  6794,  6798,
    6799,  6800,  6801,  6802,  6803,  6804,  6805,  6806,  6807,  6810,
    6812,  6816,  6820,  6824,  6825,  6826,  6827,  6828,  6829,  6830,
    6831,  6832,  6833,  6834,  6835,  6836,  6837,  6838,  6839,  6840,
    6841,  6842,  6843,  6844,  6851,  6872,  6886,  6887,  6890,  6899,
    6917,  6941,  6942,  6952,  6980,  6983,  6991,  6992,  6996,  7021,
    7020,  7032,  7040,  7057,  7069,  7086,  7103,  7124,  7125,  7132,
    7134,  7142,  7157,  7168,  7169,  7170,  7201,  7208,  7212,  7217,
    7221,  7226,  7235,  7239,  7243,  7247,  7251,  7255,  7259,  7263,
    7267,  7271,  7275,  7279,  7284,  7289,  7293,  7297,  7301,  7306,
    7310,  7315,  7319,  7324,  7329,  7334,  7338,  7342,  7350,  7354,
    7358,  7366,  7370,  7374,  7378,  7382,  7386,  7390,  7394,  7398,
    7406,  7414,  7418,  7422,  7426,  7430,  7434,  7442,  7443,  7446,
    7448,  7449,  7450,  7451,  7452,  7453,  7456,  7458,  7464,  7471,
    7484,  7493,  7494,  7503,  7510,  7522,  7540,  7541,  7545,  7546,
    7550,  7551,  7554,  7555,  7560,  7561,  7568,  7569,  7575,  7577,
    7579,  7578,  7587,  7588,  7592,  7614,  7615,  7619,  7644,  7645,
    7648,  7650,  7653,  7660,  7661,  7666,  7677,  7688,  7697,  7699,
    7700,  7710,  7721,  7748,  7747,  7756,  7757,  7761,  7762,  7765,
    7767,  7779,  7788,  7803,  7826,  7845,  7847,  7846,  7868,  7870,
    7869,  7885,  7887,  7886,  7897,  7898,  7905,  7904,  7930,  7931,
    7932,  7939,  7945,  7950,  7951,  7957,  7964,  7965,  7966,  7970,
    7977,  7978,  7982,  7992,  8031,  8042,  8043,  8057,  8070,  8071,
    8074,  8075,  8080,  8081,  8082,  8083,  8084,  8085,  8097,  8111,
    8125,  8139,  8153,  8166,  8167,  8172,  8171,  8181,  8193,  8194,
    8198,  8199,  8200,  8201,  8202,  8203,  8204,  8205,  8206,  8207,
    8208,  8209,  8210,  8211,  8212,  8213,  8214,  8218,  8225,  8229,
    8233,  8234,  8235,  8242,  8246,  8254,  8257,  8265,  8275,  8276,
    8281,  8284,  8289,  8293,  8301,  8308,  8317,  8322,  8329,  8330,
    8331,  8335,  8343,  8344,  8345,  8352,  8356,  8363,  8368,  8374,
    8381,  8387,  8397,  8401,  8408,  8410,  8414,  8418,  8422,  8426,
    8433,  8441,  8442,  8445,  8447,  8451,  8455,  8469,  8484,  8487,
    8489,  8493,  8497,  8501,  8508,  8529,  8533,  8534,  8538,  8559,
    8567,  8576,  8578,  8577,  8596,  8597,  8601,  8602,  8606,  8609,
    8608,  8659,  8671,  8658,  8715,  8735,  8737,  8741,  8746,  8751,
    8755,  8759,  8764,  8769,  8774,  8779,  8788,  8792,  8796,  8800,
    8804,  8810,  8814,  8819,  8825,  8829,  8834,  8839,  8844,  8849,
    8854,  8859,  8868,  8872,  8876,  8882,  8886,  8890,  8894,  8898,
    8902,  8906,  8910,  8921,  8926,  8931,  8935,  8936,  8937,  8938,
    8939,  8940,  8941,  8942,  8951,  8956,  8967,  8968,  8975,  8976,
    8977,  8978,  8979,  8980,  8981,  8982,  8983,  8986,  8989,  8990,
    8991,  8992,  8993,  8994,  9001,  9002,  9007,  9008,  9011,  9013,
    9017,  9018,  9022,  9023,  9027,  9028,  9032,  9033,  9037,  9038,
    9039,  9040,  9041,  9044,  9045,  9046,  9047,  9048,  9050,  9051,
    9053,  9054,  9058,  9059,  9060,  9061,  9063,  9065,  9067,  9068,
    9069,  9070,  9071,  9072,  9073,  9074,  9075,  9081,  9082,  9083,
    9084,  9085,  9086,  9087,  9088,  9089,  9090,  9094,  9095,  9100,
    9101,  9102,  9103,  9104,  9108,  9116,  9117,  9118,  9119,  9120,
    9121,  9122,  9123,  9124,  9125,  9126,  9128,  9130,  9131,  9132,
    9136,  9137,  9138,  9139,  9140,  9141,  9142,  9143,  9144,  9145,
    9150,  9151,  9152,  9153,  9154,  9155,  9156,  9157,  9158,  9159,
    9164,  9165,  9176,  9177,  9201,  9202,  9219,  9222,  9223,  9224,
    9227,  9231,  9232,  9233,  9234,  9235,  9236,  9237,  9238,  9239,
    9240,  9241,  9242,  9243,  9244,  9245,  9246,  9252,  9253,  9254,
    9274,  9275,  9276,  9277,  9278,  9279,  9280,  9281,  9285,  9286,
    9287,  9288,  9289,  9290,  9296,  9297,  9298,  9299,  9300,  9301,
    9302,  9303,  9308,  9310,  9311,  9312,  9317,  9318,  9319,  9323,
    9324,  9325,  9326,  9327,  9328,  9339,  9340,  9341,  9342,  9347,
    9350,  9351,  9352,  9353,  9354,  9356,  9361,  9362,  9363,  9369,
    9370,  9371,  9372,  9373,  9374,  9375,  9376,  9377,  9378,  9382,
    9383,  9384,  9385,  9386,  9387,  9388,  9389,  9390,  9391,  9392,
    9393,  9394,  9395,  9397,  9398,  9399,  9400,  9401,  9402,  9403,
    9404,  9405,  9406,  9407,  9408,  9409,  9410,  9411,  9412,  9413,
    9416,  9417,  9418,  9426,  9427,  9428,  9432,  9433,  9434,  9438,
    9439,  9442,  9443,  9444,  9447,  9456,  9457,  9458,  9459,  9460,
    9461,  9462,  9463,  9464,  9465,  9466,  9467,  9468,  9470,  9471,
    9472,  9473,  9474,  9475,  9476,  9477,  9478,  9479,  9486,  9490,
    9494,  9495,  9496,  9497,  9498,  9499,  9500,  9501,  9507,  9508,
    9509,  9514,  9515,  9520,  9525,  9526,  9530,  9531,  9536,  9537,
    9541,  9542,  9543,  9548,  9549,  9553,  9554,  9558,  9559,  9563,
    9567,  9567,  9571,  9575,  9575,  9579,  9583,  9584,  9588,  9589,
    9593,  9601,  9603,  9607,  9614,  9624,  9627,  9631,  9638,  9650,
    9660,  9669,  9674,  9684,  9706,  9673,  9730,  9730,  9764,  9768,
    9767,  9781,  9780,  9800,  9801,  9806,  9828,  9830,  9834,  9845,
    9847,  9855,  9863,  9871,  9877,  9881,  9917,  9919,  9927,  9930,
    9943,  9948,  9958,  9993,  9995,  9994, 10031, 10032, 10036, 10037,
   10038, 10056, 10057, 10069, 10068, 10114, 10115, 10119, 10164, 10184,
   10187, 10216, 10222, 10215, 10238, 10238, 10277, 10285, 10286, 10287,
   10288, 10289, 10290, 10291, 10292, 10293, 10294, 10295, 10296, 10297,
   10298, 10299, 10300, 10301, 10302, 10303, 10304, 10305, 10306, 10307,
   10308, 10309, 10310, 10311, 10312, 10313, 10315, 10316, 10317, 10318,
   10319, 10320, 10321, 10322, 10323, 10324, 10325, 10326, 10327, 10328,
   10329, 10331, 10332, 10333, 10334, 10335, 10336, 10337, 10338, 10339,
   10340, 10341, 10342, 10343, 10344, 10345, 10346, 10347, 10348, 10349,
   10350, 10351, 10366, 10378, 10377, 10388, 10387, 10422, 10421, 10432,
   10436, 10440, 10446, 10452, 10457, 10462, 10467, 10472, 10478, 10484,
   10488, 10494, 10498, 10503, 10507, 10511, 10515, 10519, 10523, 10527,
   10531, 10545, 10552, 10553, 10560, 10560, 10571, 10572, 10576, 10580,
   10584, 10591, 10595, 10599, 10606, 10607, 10611, 10613, 10617, 10618,
   10622, 10623, 10627, 10631, 10632, 10641, 10642, 10647, 10648, 10652,
   10653, 10657, 10673, 10689, 10702, 10710, 10718, 10725, 10731, 10737,
   10742, 10748, 10753, 10758, 10771, 10776, 10781, 10787, 10793, 10799,
   10806, 10810, 10814, 10818, 10822, 10833, 10838, 10844, 10849, 10854,
   10859, 10865, 10871, 10876, 10882, 10888, 10894, 10901, 10906, 10911,
   10918, 10925, 10931, 10934, 10934, 10938, 10949, 10950, 10951, 10955,
   10956, 10957, 10961, 10962, 10966, 10970, 10989, 10988, 10997, 11001,
   11008, 11012, 11020, 11021, 11025, 11029, 11040, 11039, 11049, 11053,
   11064, 11066, 11079, 11080, 11088, 11087, 11096, 11097, 11101, 11107,
   11107, 11114, 11113, 11130, 11129, 11199, 11203, 11202, 11218, 11222,
   11226, 11234, 11237, 11245, 11253, 11257, 11261, 11265, 11269, 11288,
   11294, 11314, 11318, 11328, 11332, 11337, 11341, 11340, 11357, 11358,
   11363, 11371, 11405, 11407, 11411, 11420, 11433, 11436, 11440, 11444,
   11449, 11472, 11473, 11477, 11478, 11482, 11486, 11490, 11501, 11505,
   11512, 11516, 11524, 11528, 11535, 11542, 11546, 11557, 11556, 11568,
   11572, 11579, 11580, 11590, 11589, 11597, 11598, 11602, 11609, 11617,
   11618, 11619, 11620, 11621, 11626, 11625, 11637, 11638, 11646, 11645,
   11654, 11661, 11665, 11675, 11687, 11686, 11707, 11708, 11708, 11723,
   11722, 11731, 11738, 11749, 11748, 11757, 11761, 11765, 11772, 11780,
   11784, 11795, 11794, 11803, 11806, 11808, 11814, 11816, 11817, 11818,
   11819, 11827, 11826, 11838, 11842, 11846, 11850, 11854, 11855, 11856,
   11857, 11858, 11859, 11860, 11864, 11872, 11881, 11882, 11887, 11886,
   11930, 11934, 11940, 11942, 11946, 11947, 11951, 11952, 11956, 11960,
   11965, 11969, 11970, 11975, 11978, 11982, 11986, 11990, 11994, 12001,
   12002, 12007, 12006, 12023, 12030, 12030, 12042, 12046, 12054, 12055,
   12056, 12067, 12066, 12084, 12086, 12090, 12091, 12095, 12099, 12100,
   12101, 12102, 12107, 12112, 12106, 12126, 12127, 12132, 12137, 12131,
   12156, 12155, 12177, 12178, 12179, 12183, 12184, 12189, 12192, 12199,
   12212, 12224, 12231, 12232, 12238, 12239, 12243, 12244, 12245, 12246,
   12247, 12248, 12252, 12255, 12259, 12260, 12261, 12265, 12266, 12267,
   12268, 12272, 12273, 12278, 12279, 12283, 12293, 12309, 12314, 12320,
   12326, 12331, 12336, 12342, 12348, 12354, 12360, 12367, 12371, 12375,
   12379, 12383, 12388, 12393, 12398, 12403, 12409, 12414, 12419, 12426,
   12436, 12440, 12451, 12450, 12459, 12463, 12467, 12471, 12475, 12482,
   12486, 12497, 12496, 12508, 12507, 12515, 12514, 12524, 12548, 12561,
   12560, 12587, 12597, 12598, 12603, 12614, 12625, 12639, 12647, 12655,
   12656, 12661, 12667, 12677, 12689, 12695, 12705, 12718, 12717, 12729,
   12727, 12741, 12742, 12747, 12822, 12823, 12824, 12825, 12829, 12830,
   12834, 12838, 12848, 12847, 12861, 12860, 12901, 12901, 12902, 12902,
   12905, 12914, 12925, 12926, 12934, 12933, 12945, 12949, 12974, 12988,
   13011, 13034, 13055, 13079, 13082, 13090, 13089, 13098, 13109, 13108,
   13117, 13132, 13131, 13144, 13149, 13160, 13164, 13175, 13195, 13194,
   13203, 13207, 13213, 13220, 13223, 13230, 13236, 13242, 13247, 13259,
   13258, 13266, 13274, 13275, 13279, 13280, 13281, 13286, 13289, 13296,
   13300, 13308, 13315, 13316, 13317, 13318, 13319, 13320, 13321, 13333,
   13336, 13346, 13345, 13353, 13362, 13375, 13374, 13386, 13387, 13394,
   13393, 13402, 13406, 13407, 13408, 13412, 13413, 13414, 13415, 13422,
   13421, 13442, 13452, 13460, 13464, 13471, 13476, 13481, 13486, 13491,
   13496, 13504, 13505, 13509, 13514, 13520, 13522, 13523, 13524, 13525,
   13529, 13557, 13560, 13564, 13568, 13572, 13579, 13586, 13596, 13595,
   13608, 13613, 13606, 13625, 13628, 13635, 13636, 13640, 13648, 13652,
   13662, 13661, 13671, 13678, 13680, 13687, 13686, 13699, 13698, 13711,
   13712, 13716, 13720, 13731, 13730, 13738, 13742, 13753, 13752, 13761,
   13765, 13772, 13776, 13787, 13786, 13795, 13796, 13800, 13828, 13829,
   13833, 13834, 13835, 13836, 13840, 13841, 13845, 13846, 13847, 13851,
   13852, 13860, 13861, 13865, 13866, 13872, 13881, 13882, 13883, 13888,
   13889, 13890, 13894, 13901, 13917, 13918, 13919, 13925, 13924, 13936,
   13948, 13945, 13962, 13959, 13975, 13983, 13990, 13994, 14007, 14014,
   14026, 14029, 14034, 14038, 14051, 14058, 14059, 14063, 14064, 14067,
   14068, 14073, 14116, 14120, 14130, 14129, 14142, 14141, 14149, 14154,
   14164, 14179, 14178, 14188, 14217, 14218, 14222, 14226, 14230, 14234,
   14241, 14242, 14246, 14250, 14253, 14255, 14259, 14268, 14269, 14270,
   14273, 14275, 14279, 14283, 14287, 14295, 14296, 14300, 14301, 14305,
   14309, 14319, 14330, 14329, 14338, 14343, 14344, 14348, 14349, 14350,
   14354, 14355, 14359, 14363, 14364, 14368, 14372, 14376, 14386, 14385,
   14393, 14403, 14414, 14413, 14422, 14429, 14433, 14444, 14443, 14455,
   14464, 14467, 14471, 14475, 14482, 14486, 14496, 14508, 14507, 14516,
   14520, 14529, 14530, 14535, 14538, 14546, 14550, 14557, 14565, 14569,
   14580, 14579, 14587, 14590, 14595, 14597, 14601, 14607, 14608, 14609,
   14610, 14613, 14615, 14622, 14621, 14635, 14636, 14637, 14638, 14639,
   14640, 14641, 14642, 14646, 14647, 14651, 14652, 14658, 14667, 14674,
   14675, 14679, 14683, 14687, 14693, 14699, 14703, 14707, 14711, 14720,
   14724, 14728, 14737, 14746, 14747, 14751, 14760, 14761, 14765, 14769,
   14778, 14787, 14799, 14798, 14807, 14806, 14858, 14859, 14876, 14877,
   14880, 14881, 14890, 14893, 14898, 14903, 14913, 14930, 14935, 14945,
   14963, 14962, 14972, 14985, 14988, 14996, 14999, 15004, 15009, 15017,
   15018, 15019, 15020, 15021, 15022, 15026, 15034, 15035, 15039, 15043,
   15054, 15053, 15064, 15072, 15083, 15090, 15094, 15098, 15106, 15118,
   15121, 15128, 15132, 15139, 15140, 15141, 15142, 15149, 15148, 15157,
   15164, 15164, 15174, 15175, 15179, 15193, 15194, 15199, 15200, 15204,
   15205, 15209, 15213, 15224, 15223, 15232, 15236, 15240, 15244, 15252,
   15256, 15266, 15277, 15278, 15285, 15284, 15292, 15301, 15314, 15313,
   15321, 15335, 15334, 15342, 15359, 15358, 15368, 15376, 15377, 15382,
   15383, 15388, 15395, 15396, 15401, 15408, 15409, 15413, 15414, 15418,
   15422, 15432, 15431, 15446, 15451, 15463, 15462, 15471, 15472, 15473,
   15474, 15475, 15479, 15507, 15510, 15522, 15532, 15537, 15542, 15547,
   15555, 15595, 15596, 15600, 15660, 15670, 15693, 15694, 15695, 15696,
   15700, 15709, 15715, 15725, 15752, 15756, 15757, 15761, 15767, 15783,
   15784, 15791, 15790, 15802, 15812, 15813, 15818, 15821, 15825, 15829,
   15836, 15837, 15841, 15842, 15843, 15847, 15851, 15861, 15860, 15873,
   15884, 15871, 15895, 15897, 15901, 15902, 15906, 15910, 15922, 15931,
   15941, 15944, 15954, 15957, 15965, 15968, 15977, 15981, 15988, 15996,
   15999, 16006, 16010, 16017, 16021, 16029, 16032, 16041, 16045, 16052,
   16060, 16063, 16067, 16068, 16069, 16072, 16074, 16082, 16083, 16087,
   16092, 16097, 16104, 16109, 16114, 16122, 16126, 16133, 16137, 16148,
   16147, 16164, 16159, 16170, 16172, 16175, 16177, 16180, 16182, 16186,
   16187, 16203, 16204, 16205, 16215, 16219, 16226, 16234, 16235, 16239,
   16240, 16244, 16252, 16253, 16258, 16259, 16260, 16270, 16274, 16281,
   16289, 16290, 16294, 16302, 16303, 16304, 16314, 16318, 16325, 16333,
   16334, 16338, 16346, 16347, 16348, 16358, 16362, 16369, 16377, 16378,
   16382, 16392, 16393, 16394, 16404, 16408, 16415, 16423, 16424, 16428,
   16438, 16439, 16440, 16450, 16454, 16461, 16469, 16470, 16474, 16485,
   16486, 16493, 16495, 16504, 16508, 16515, 16523, 16524, 16528, 16538,
   16539, 16549, 16553, 16560, 16568, 16569, 16573, 16583, 16584, 16588,
   16589, 16599, 16603, 16610, 16618, 16619, 16623, 16634, 16637, 16646,
   16649, 16657, 16661, 16670, 16674, 16681, 16682, 16688, 16693, 16701,
   16708, 16708, 16719, 16720, 16724, 16725, 16727, 16729, 16731, 16732,
   16734, 16735, 16736, 16737, 16738, 16740, 16741, 16742, 16745, 16747,
   16751, 16754, 16756, 16757, 16758, 16759, 16760, 16761, 16763, 16764,
   16765, 16766, 16767, 16770, 16771, 16775, 16776, 16780, 16781, 16785,
   16786, 16790, 16794, 16800, 16804, 16810, 16812, 16813, 16817, 16818,
   16819, 16823, 16824, 16825, 16829, 16833, 16837, 16838, 16839, 16842,
   16843, 16853, 16865, 16874, 16890, 16899, 16915, 16930, 16931, 16936,
   16945, 16951, 16961, 16975, 16995, 16999, 17020, 17024, 17045, 17057,
   17071, 17085, 17086, 17091, 17097, 17098, 17103, 17112, 17114, 17119,
   17133, 17134, 17135, 17142, 17153, 17154, 17158, 17166, 17167, 17171,
   17172, 17176, 17188, 17192, 17199, 17208, 17209, 17215, 17224, 17235,
   17252, 17256, 17263, 17264, 17265, 17272, 17273, 17277, 17281, 17288,
   17289, 17293, 17294, 17298, 17299, 17300, 17301, 17305, 17309, 17313,
   17317, 17321, 17326, 17331, 17352, 17362, 17366, 17373, 17374, 17375,
   17379, 17380, 17381, 17382, 17383, 17387, 17391, 17398, 17399, 17400,
   17401, 17405, 17409, 17416, 17428, 17440, 17454, 17455, 17459, 17460,
   17464, 17471, 17478, 17479, 17486, 17487, 17494, 17495, 17496, 17500,
   17501, 17505, 17509, 17513, 17517, 17518, 17522, 17526, 17527, 17531,
   17535, 17536, 17545, 17549, 17554, 17555, 17561, 17565, 17569, 17573,
   17574, 17580, 17584, 17588, 17589, 17593, 17600, 17610, 17629, 17650,
   17669, 17687, 17694, 17701, 17708, 17718, 17722, 17729, 17733, 17740,
   17750, 17760, 17770, 17783, 17809, 17813, 17821, 17821, 17834, 17839,
   17847, 17855, 17859, 17869, 17884, 17906, 17926, 17930, 17937, 17951,
   17952, 17953, 17954, 17955, 17956, 17960, 17964, 17981, 17985, 17992,
   17993, 17994, 17995, 17996, 17997, 17998, 18002, 18003, 18004, 18005,
   18011, 18015, 18019, 18023, 18027, 18031, 18036, 18040, 18044, 18048,
   18052, 18056, 18060, 18064, 18071, 18072, 18076, 18077, 18078, 18079,
   18083, 18084, 18085, 18086, 18087, 18091, 18095, 18099, 18106, 18110,
   18114, 18121, 18128, 18135, 18145, 18145, 18161, 18168, 18178, 18185,
   18195, 18199, 18212, 18216, 18231, 18239, 18240, 18244, 18245, 18246,
   18250, 18251, 18256, 18259, 18267, 18270, 18277, 18279, 18280, 18284,
   18285, 18289, 18290, 18291, 18296, 18299, 18312, 18316, 18324, 18328,
   18332, 18336, 18340, 18344, 18348, 18352, 18359, 18360, 18364, 18365,
   18375, 18376, 18385, 18389, 18393, 18397, 18404, 18405, 18406, 18407,
   18408, 18409, 18410, 18411, 18412, 18413, 18414, 18415, 18416, 18417,
   18418, 18419, 18420, 18421, 18422, 18423, 18424, 18425, 18426, 18427,
   18428, 18429, 18430, 18431, 18432, 18433, 18434, 18435, 18436, 18437,
   18438, 18439, 18440, 18441, 18442, 18443, 18444, 18445, 18446, 18447,
   18448, 18449, 18450, 18451, 18452, 18453, 18454, 18455, 18459, 18460,
   18461, 18462, 18463, 18464, 18465, 18466, 18467, 18468, 18469, 18470,
   18471, 18472, 18473, 18474, 18475, 18476, 18477, 18478, 18479, 18480,
   18481, 18488, 18488, 18489, 18489, 18490, 18490, 18491, 18491, 18492,
   18492, 18492, 18493, 18493, 18494, 18494, 18495, 18495, 18496, 18496,
   18497, 18497, 18498, 18498, 18499, 18499, 18500, 18500, 18501, 18501,
   18502, 18502, 18503, 18503, 18504, 18504, 18505, 18505, 18506, 18506,
   18507, 18507, 18508, 18508, 18509, 18509, 18510, 18510, 18511, 18511,
   18512, 18512, 18513, 18513, 18513, 18514, 18514, 18514, 18515, 18515,
   18516, 18516, 18517, 18517, 18518, 18518, 18519, 18519, 18520, 18520,
   18520, 18521, 18521, 18521, 18522, 18522, 18522, 18522, 18523, 18523,
   18523, 18524, 18524, 18525, 18525, 18526, 18526, 18526, 18527, 18527,
   18527, 18528, 18528, 18529, 18529, 18530, 18530, 18531, 18531, 18532,
   18532, 18533, 18533, 18534, 18534, 18535, 18535, 18536, 18536, 18537,
   18537, 18537, 18538, 18538, 18538, 18538, 18539, 18539, 18540, 18540,
   18541, 18541, 18542, 18542, 18543, 18543, 18544, 18544, 18545, 18545,
   18545, 18546, 18546, 18547, 18547, 18548, 18548, 18549, 18549, 18549,
   18550, 18550, 18551, 18551, 18552, 18552, 18553, 18553, 18554, 18554,
   18555, 18555, 18556, 18556, 18557, 18557, 18558, 18558, 18559, 18559,
   18560, 18560, 18561, 18561, 18562, 18562, 18563, 18563, 18563, 18567,
   18567, 18568, 18568, 18569, 18569, 18570, 18570, 18570, 18570, 18571,
   18571, 18572, 18572, 18573, 18573, 18574, 18574, 18575, 18575, 18576,
   18576, 18577, 18577, 18578, 18578, 18578, 18579, 18579, 18580, 18580,
   18581, 18581, 18582, 18582, 18583, 18583, 18584, 18584, 18587, 18587,
   18588, 18588, 18589, 18589, 18590, 18590, 18591, 18591, 18592, 18592,
   18593, 18593, 18594, 18594
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "$undefined", "\"3D\"", "ABSENT", "ACCEPT",
  "ACCESS", "\"ACTIVE-X\"", "ACTION", "ACTUAL", "ADD", "ADDRESS",
  "\"ADJUSTABLE-COLUMNS\"", "ADVANCING", "AFTER", "ALIGNMENT", "ALL",
  "ALLOCATE", "ALLOWING", "ALPHABET", "ALPHABETIC", "\"ALPHABETIC-LOWER\"",
  "\"ALPHABETIC-UPPER\"", "ALPHANUMERIC", "\"ALPHANUMERIC-EDITED\"",
  "ALSO", "ALTER", "ALTERNATE", "AND", "ANY", "APPLY", "ARE", "AREA",
  "AREAS", "\"ARGUMENT-NUMBER\"", "\"ARGUMENT-VALUE\"", "ARITHMETIC", "AS",
  "ASCENDING", "ASCII", "ASSIGN", "AT", "ATTRIBUTE", "ATTRIBUTES", "AUTO",
  "\"AUTO-DECIMAL\"", "\"AUTO-SPIN\"", "AUTOMATIC", "\"AWAY-FROM-ZERO\"",
  "\"BACKGROUND-COLOR\"", "\"BACKGROUND-HIGH\"", "\"BACKGROUND-LOW\"",
  "\"BACKGROUND-STANDARD\"", "BAR", "BASED", "BEFORE", "BELL", "BINARY",
  "\"BINARY-C-LONG\"", "\"BINARY-CHAR\"", "\"BINARY-DOUBLE\"",
  "\"BINARY-LONG\"", "\"BINARY-SEQUENTIAL\"", "\"BINARY-SHORT\"", "BIT",
  "BITMAP", "\"BITMAP-END\"", "\"BITMAP-HANDLE\"", "\"BITMAP-NUMBER\"",
  "\"BITMAP-START\"", "\"BITMAP-TIMER\"", "\"BITMAP-TRAILING\"",
  "\"BITMAP-TRANSPARENT-COLOR\"", "\"BITMAP-WIDTH\"", "BLANK", "BLINK",
  "BLOCK", "BOTTOM", "BOX", "BOXED", "\"BULK-ADDITION\"", "BUSY",
  "BUTTONS", "BY", "\"BYTE-LENGTH\"", "C", "\"CALENDAR-FONT\"", "CALL",
  "CANCEL", "\"CANCEL-BUTTON\"", "CAPACITY", "\"CARD-PUNCH\"",
  "\"CARD-READER\"", "CASSETTE", "CCOL", "CD", "CELL", "\"CELL-COLOR\"",
  "\"CELL-DATA\"", "\"CELL-FONT\"", "\"CELL-PROTECTION\"", "CENTER",
  "CENTERED", "\"CENTERED-HEADINGS\"", "\"CENTURY-DATE\"", "CF", "CH",
  "CHAINING", "CHANGED", "CHARACTER", "CHARACTERS", "\"CHECK-BOX\"",
  "CLASS", "CLASSIFICATION", "\"class-name\"", "\"CLEAR-SELECTION\"",
  "CLINE", "CLINES", "CLOSE", "COBOL", "CODE", "\"CODE-SET\"", "COLLATING",
  "COL", "COLOR", "COLORS", "COLS", "COLUMN", "\"COLUMN-COLOR\"",
  "\"COLUMN-DIVIDERS\"", "\"COLUMN-FONT\"", "\"COLUMN-HEADINGS\"",
  "\"COLUMN-PROTECTION\"", "COLUMNS", "\"COMBO-BOX\"", "COMMA",
  "\"COMMAND-LINE\"", "\"comma delimiter\"", "COMMIT", "COMMON",
  "COMMUNICATION", "COMP", "COMPUTE", "\"COMP-0\"", "\"COMP-1\"",
  "\"COMP-2\"", "\"COMP-3\"", "\"COMP-4\"", "\"COMP-5\"", "\"COMP-6\"",
  "\"COMP-N\"", "\"COMP-X\"", "\"FUNCTION CONCATENATE\"", "CONDITION",
  "CONFIGURATION", "CONSTANT", "CONTAINS", "CONTENT",
  "\"FUNCTION CONTENT-LENGTH\"", "\"FUNCTION CONTENT-OF\"", "CONTINUE",
  "CONTROL", "CONTROLS", "CONVERSION", "CONVERTING", "COPY",
  "\"COPY-SELECTION\"", "\"CORE-INDEX\"", "CORRESPONDING", "COUNT", "CRT",
  "\"CRT-UNDER\"", "CSIZE", "CURRENCY", "\"FUNCTION CURRENT-DATE\"",
  "CURSOR", "\"CURSOR-COL\"", "\"CURSOR-COLOR\"", "\"CURSOR-FRAME-WIDTH\"",
  "\"CURSOR-ROW\"", "\"CURSOR-X\"", "\"CURSOR-Y\"",
  "\"CUSTOM-PRINT-TEMPLATE\"", "CYCLE", "\"CYL-INDEX\"",
  "\"CYL-OVERFLOW\"", "DASHED", "DATA", "\"DATA-COLUMNS\"",
  "\"DATA-TYPES\"", "DATE", "\"DATE-ENTRY\"", "DAY", "\"DAY-OF-WEEK\"",
  "DE", "DEBUGGING", "\"DECIMAL-POINT\"", "DECLARATIVES", "DEFAULT",
  "\"DEFAULT-BUTTON\"", "\"DEFAULT-FONT\"", "DELETE", "DELIMITED",
  "DELIMITER", "DEPENDING", "DESCENDING", "DESTINATION", "DESTROY",
  "DETAIL", "DISABLE", "DISC", "DISK", "DISP", "DISPLAY",
  "\"DISPLAY-COLUMNS\"", "\"DISPLAY-FORMAT\"", "\"FUNCTION DISPLAY-OF\"",
  "DIVIDE", "DIVIDERS", "\"DIVIDER-COLOR\"", "DIVISION", "DOTDASH",
  "DOTTED", "\"DRAG-COLOR\"", "\"DROP-DOWN\"", "\"DROP-LIST\"", "DOWN",
  "DUPLICATES", "DYNAMIC", "EBCDIC", "EC", "ECHO", "EGI",
  "\"level-number 88\"", "ENABLE", "ELEMENT", "ELSE", "EMI", "ENCRYPTION",
  "ENCODING", "END", "\"END-ACCEPT\"", "\"END-ADD\"", "\"END-CALL\"",
  "\"END-COMPUTE\"", "\"END-COLOR\"", "\"END-DELETE\"", "\"END-DISPLAY\"",
  "\"END-DIVIDE\"", "\"END-EVALUATE\"", "\"END FUNCTION\"", "\"END-IF\"",
  "\"END-JSON\"", "\"END-MODIFY\"", "\"END-MULTIPLY\"", "\"END-PERFORM\"",
  "\"END PROGRAM\"", "\"END-READ\"", "\"END-RECEIVE\"", "\"END-RETURN\"",
  "\"END-REWRITE\"", "\"END-SEARCH\"", "\"END-START\"", "\"END-STRING\"",
  "\"END-SUBTRACT\"", "\"END-UNSTRING\"", "\"END-WRITE\"", "\"END-XML\"",
  "ENGRAVED", "\"ENSURE-VISIBLE\"", "ENTRY", "\"ENTRY-CONVENTION\"",
  "\"ENTRY-FIELD\"", "\"ENTRY-REASON\"", "ENVIRONMENT",
  "\"ENVIRONMENT-NAME\"", "\"ENVIRONMENT-VALUE\"", "EOL", "EOP", "EOS",
  "EQUAL", "ERASE", "ERROR", "ESCAPE", "\"ESCAPE-BUTTON\"", "ESI",
  "EVALUATE", "EVENT", "\"EVENT-LIST\"", "\"EVENT STATUS\"", "EVERY",
  "EXCEPTION", "\"EXCEPTION CONDITION\"", "\"EXCEPTION-VALUE\"", "EXPAND",
  "EXCLUSIVE", "EXHIBIT", "EXIT", "\"exponentiation operator\"", "EXTEND",
  "\"EXTENDED-SEARCH\"", "EXTERNAL", "\"EXTERNAL-FORM\"", "F", "FD",
  "\"FH--FCD\"", "\"FH--KEYDEF\"", "\"FILE-CONTROL\"", "\"FILE-ID\"",
  "\"FILE-LIMIT\"", "\"FILE-LIMITS\"", "\"FILE-NAME\"", "\"FILE-POS\"",
  "\"FILL-COLOR\"", "\"FILL-COLOR2\"", "\"FILL-PERCENT\"", "FILLER",
  "FINAL", "\"FINISH-REASON\"", "FIRST", "FIXED", "\"FIXED-FONT\"",
  "\"FIXED-WIDTH\"", "FLAT", "\"FLAT-BUTTONS\"", "\"FLOAT-BINARY-128\"",
  "\"FLOAT-BINARY-32\"", "\"FLOAT-BINARY-64\"", "\"FLOAT-DECIMAL-16\"",
  "\"FLOAT-DECIMAL-34\"", "\"FLOAT-DECIMAL-7\"", "\"FLOAT-EXTENDED\"",
  "\"FLOAT-LONG\"", "\"FLOAT-SHORT\"", "FLOATING", "FONT", "FOOTING",
  "FOR", "\"FOREGROUND-COLOR\"", "FOREVER", "\"FUNCTION FORMATTED-DATE\"",
  "\"FUNCTION FORMATTED-DATETIME\"", "\"FUNCTION FORMATTED-TIME\"",
  "FRAME", "FRAMED", "FREE", "FROM", "\"FROM CRT\"", "FULL",
  "\"FULL-HEIGHT\"", "FUNCTION", "\"FUNCTION-ID\"",
  "\"intrinsic function name\"", "GENERATE", "GIVING", "GLOBAL", "GO",
  "\"GO-BACK\"", "\"GO-FORWARD\"", "\"GO-HOME\"", "\"GO-SEARCH\"",
  "GOBACK", "GRAPHICAL", "GREATER", "\"GREATER OR EQUAL\"", "GRID",
  "GROUP", "\"GROUP-VALUE\"", "HANDLE", "\"HAS-CHILDREN\"", "HEADING",
  "\"HEADING-COLOR\"", "\"HEADING-DIVIDER-COLOR\"", "\"HEADING-FONT\"",
  "HEAVY", "\"HEIGHT-IN-CELLS\"", "\"HIDDEN-DATA\"", "HIGHLIGHT",
  "\"HIGH-COLOR\"", "\"HIGH-VALUE\"", "\"HOT-TRACK\"", "HSCROLL",
  "\"HSCROLL-POS\"", "ICON", "ID", "IDENTIFIED", "IDENTIFICATION", "IF",
  "IGNORE", "IGNORING", "IN", "INDEPENDENT", "INDEX", "INDEXED",
  "INDICATE", "INITIALIZE", "INITIALIZED", "INITIATE", "INPUT",
  "\"INPUT-OUTPUT\"", "INQUIRE", "\"INSERTION-INDEX\"", "\"INSERT-ROWS\"",
  "INSPECT", "INTERMEDIATE", "INTO", "INTRINSIC", "INVALID",
  "\"INVALID KEY\"", "IS", "ITEM", "\"ITEM-TEXT\"", "\"ITEM-TO_ADD\"",
  "\"ITEM-TO_DELETE\"", "\"ITEM-TO_EMPTY\"", "\"ITEM-VALUE\"", "\"I-O\"",
  "\"I-O-CONTROL\"", "JSON", "JUSTIFIED", "KEPT", "KEY", "KEYBOARD",
  "LABEL", "\"LABEL-OFFSET\"", "\"LARGE-FONT\"", "\"LARGE-OFFSET\"",
  "LAST", "\"LAST-ROW\"", "\"LAYOUT-DATA\"", "\"LAYOUT-MANAGER\"",
  "LEADING", "\"LEADING-SHIFT\"", "LEAVE", "LEFT", "LEFTLINE",
  "\"LEFT-TEXT\"", "LENGTH", "\"LENGTH OF\"",
  "\"FUNCTION LENGTH/BYTE-LENGTH\"", "LESS", "\"LESS OR EQUAL\"",
  "\"level-number\"", "LIKE", "LIMIT", "LIMITS", "LINAGE",
  "\"LINAGE-COUNTER\"", "LINE", "\"LINE-COUNTER\"", "\"LINE LIMIT\"",
  "\"LINE-SEQUENTIAL\"", "LINES", "\"LINES-AT-ROOT\"", "LINKAGE",
  "\"LIST-BOX\"", "\"Literal\"", "\"LM-RESIZE\"", "LOC", "LOCALE",
  "\"FUNCTION LOCALE-DATE\"", "\"FUNCTION LOCALE-TIME\"",
  "\"FUNCTION LOCALE-TIME-FROM-SECONDS\"", "\"LOCAL-STORAGE\"", "LOCK",
  "\"LOCK-HOLDING\"", "\"LONG-DATE\"", "LOWER", "LOWERED",
  "\"FUNCTION LOWER-CASE\"", "LOWLIGHT", "\"LOW-COLOR\"", "\"LOW-VALUE\"",
  "\"MAGNETIC-TAPE\"", "MANUAL", "\"MASS-UPDATE\"", "\"MASTER-INDEX\"",
  "\"MAX-LINES\"", "\"MAX-PROGRESS\"", "\"MAX-TEXT\"", "\"MAX-VAL\"",
  "MEMORY", "\"MEDIUM-FONT\"", "MENU", "MERGE", "MESSAGE", "MINUS",
  "\"MIN-VAL\"", "\"Mnemonic name\"", "MODE", "MODIFY", "MODULES", "MOVE",
  "MULTILINE", "MULTIPLE", "MULTIPLY", "NAME", "NAMED", "NAMESPACE",
  "\"NAMESPACE-PREFIX\"", "NATIONAL", "\"NATIONAL-EDITED\"",
  "\"FUNCTION NATIONAL-OF\"", "NATIVE", "\"NAVIGATE-URL\"",
  "\"NEAREST-AWAY-FROM-ZERO\"", "\"NEAREST-EVEN\"",
  "\"NEAREST-TOWARD-ZERO\"", "NEGATIVE", "NESTED", "NEW", "NEXT",
  "\"NEXT-ITEM\"", "\"NEXT GROUP\"", "\"NEXT PAGE\"", "NO",
  "\"NO ADVANCING\"", "\"NO-AUTOSEL\"", "\"NO-AUTO-DEFAULT\"",
  "\"NO-BOX\"", "\"NO DATA\"", "\"NO-DIVIDERS\"", "\"NO-ECHO\"",
  "\"NO-F4\"", "\"NO-FOCUS\"", "\"NO-GROUP-TAB\"", "\"NO-KEY-LETTER\"",
  "NOMINAL", "\"NO-SEARCH\"", "\"NO-UPDOWN\"", "NONNUMERIC", "NORMAL",
  "NOT", "NOTAB", "NOTHING", "NOTIFY", "\"NOTIFY-CHANGE\"",
  "\"NOTIFY-DBLCLICK\"", "\"NOTIFY-SELCHANGE\"", "\"NOT END\"",
  "\"NOT EOP\"", "\"NOT ESCAPE\"", "\"NOT EQUAL\"", "\"NOT EXCEPTION\"",
  "\"NOT INVALID KEY\"", "\"NOT OVERFLOW\"", "\"NOT SIZE ERROR\"",
  "\"NUM-COL-HEADINGS\"", "\"NUM-ROWS\"", "NUMBER", "NUMBERS", "NUMERIC",
  "\"NUMERIC-EDITED\"", "\"FUNCTION NUMVAL-C\"", "OBJECT",
  "\"OBJECT-COMPUTER\"", "OCCURS", "OF", "OFF", "\"OK-BUTTON\"", "OMITTED",
  "ON", "ONLY", "OPEN", "OPTIONAL", "OPTIONS", "OR", "ORDER",
  "ORGANIZATION", "OTHER", "OTHERS", "OUTPUT", "\"OVERLAP-LEFT\"",
  "\"OVERLAP-TOP\"", "OVERLINE", "\"PACKED-DECIMAL\"", "PADDING", "PASCAL",
  "PAGE", "\"PAGE-COUNTER\"", "\"PAGE-SETUP\"", "PAGED", "PARAGRAPH",
  "PARENT", "PARSE", "PASSWORD", "PERFORM", "PERMANENT", "PH", "PF",
  "PHYSICAL", "PICTURE", "\"PICTURE SYMBOL\"", "PIXEL", "PLACEMENT",
  "PLUS", "POINTER", "\"POP-UP\"", "POS", "POSITION", "\"POSITION-SHIFT\"",
  "POSITIVE", "PRESENT", "PREVIOUS", "PRINT", "\"PRINT-CONTROL\"",
  "\"PRINT-NO-PROMPT\"", "\"PRINT-PREVIEW\"", "PRINTER", "\"PRINTER-1\"",
  "PRINTING", "PRIORITY", "PROCEDURE", "PROCEDURES", "PROCEED",
  "PROCESSING", "PROGRAM", "\"PROGRAM-ID\"", "\"program name\"",
  "\"PROGRAM-POINTER\"", "PROGRESS", "PROHIBITED", "PROMPT", "PROPERTIES",
  "PROPERTY", "PROTECTED", "PURGE", "\"PUSH-BUTTON\"", "\"QUERY-INDEX\"",
  "QUEUE", "QUOTE", "\"RADIO-BUTTON\"", "RAISE", "RAISED", "RANDOM", "RD",
  "READ", "READERS", "\"READ-ONLY\"", "\"READY TRACE\"", "RECEIVE",
  "RECORD", "\"RECORD-DATA\"", "\"RECORD-OVERFLOW\"", "\"RECORD-TO-ADD\"",
  "\"RECORD-TO-DELETE\"", "RECORDING", "RECORDS", "RECURSIVE", "REDEFINES",
  "REEL", "REFERENCE", "REFERENCES", "REFRESH", "\"REGION-COLOR\"",
  "RELATIVE", "RELEASE", "REMAINDER", "REMOVAL", "RENAMES",
  "\"REORG-CRITERIA\"", "REPLACE", "REPLACING", "REPORT", "REPORTING",
  "REPORTS", "REPOSITORY", "REQUIRED", "REREAD", "RERUN", "RESERVE",
  "RESET", "\"RESET TRACE\"", "\"RESET-GRID\"", "\"RESET-LIST\"",
  "\"RESET-TABS\"", "RETRY", "RETURN", "RETURNING", "REVERSE",
  "\"FUNCTION REVERSE\"", "\"REVERSE-VIDEO\"", "REVERSED", "REWIND",
  "REWRITE", "RF", "RH", "RIGHT", "\"RIGHT-ALIGN\"", "RIMMED", "ROLLBACK",
  "ROUNDED", "ROUNDING", "\"ROW-COLOR\"", "\"ROW-COLOR-PATTERN\"",
  "\"ROW-DIVIDERS\"", "\"ROW-FONT\"", "\"ROW-HEADINGS\"",
  "\"ROW-PROTECTION\"", "RUN", "S", "SAME", "\"SAVE-AS\"",
  "\"SAVE-AS-NO-PROMPT\"", "SCREEN", "\"SCREEN CONTROL\"", "SCROLL",
  "\"SCROLL-BAR\"", "SD", "SEARCH", "\"SEARCH-OPTIONS\"",
  "\"SEARCH-TEXT\"", "SECONDS", "SECTION", "SECURE", "SEGMENT",
  "\"SEGMENT-LIMIT\"", "SELECT", "\"SELECTION-INDEX\"",
  "\"SELECTION-TEXT\"", "\"SELECTION-ALL\"", "\"SELF-ACT\"",
  "\"semi-colon\"", "SEND", "SENTENCE", "SEPARATE", "SEPARATION",
  "SEQUENCE", "SEQUENTIAL", "SET", "\"level-number 78\"", "SHADING",
  "SHADOW", "SHARING", "\"SHORT-DATE\"", "\"SHOW-LINES\"", "\"SHOW-NONE\"",
  "\"SHOW-SEL-ALWAYS\"", "SIGN", "SIGNED", "\"SIGNED-INT\"",
  "\"SIGNED-LONG\"", "\"SIGNED-SHORT\"", "\"level-number 66\"", "SIZE",
  "\"SIZE ERROR\"", "\"SMALL-FONT\"", "SORT", "\"SORT-MERGE\"",
  "\"SORT-ORDER\"", "SOURCE", "\"SOURCE-COMPUTER\"", "SPACE",
  "\"SPECIAL-NAMES\"", "SPINNER", "SQUARE", "STANDARD", "\"STANDARD-1\"",
  "\"STANDARD-2\"", "\"STANDARD-BINARY\"", "\"STANDARD-DECIMAL\"", "START",
  "\"START-X\"", "\"START-Y\"", "STATIC", "\"STATIC-LIST\"", "STATUS",
  "\"STATUS-BAR\"", "\"STATUS-TEXT\"", "STDCALL", "STEP", "STOP", "STRING",
  "STRONG", "STYLE", "\"SUB-QUEUE-1\"", "\"SUB-QUEUE-2\"",
  "\"SUB-QUEUE-3\"", "\"FUNCTION SUBSTITUTE\"",
  "\"FUNCTION SUBSTITUTE-CASE\"", "SUBTRACT", "SUBWINDOW", "SUM",
  "SUPPRESS", "\"SUPPRESS\"", "SYMBOLIC", "SYNCHRONIZED",
  "\"SYSTEM-DEFAULT\"", "\"SYSTEM-INFO\"", "\"SYSTEM-OFFSET\"", "TAB",
  "\"TAB-TO-ADD\"", "\"TAB-TO-DELETE\"", "TABLE", "TALLYING", "TEMPORARY",
  "TAPE", "TERMINAL", "TERMINATE", "\"TERMINAL-INFO\"",
  "\"TERMINATION-VALUE\"", "TEST", "TEXT", "THAN", "THEN", "THREAD",
  "THREADS", "THRU", "\"THUMB-POSITION\"", "\"TILED-HEADINGS\"", "TIME",
  "\"TIME-OUT\"", "TIMES", "TITLE", "\"TITLE-POSITION\"", "TO", "\"&\"",
  "\")\"", "\":\"", "\"/\"", "\".\"", "\"=\"", "\"EXTERN\"", "\"FALSE\"",
  "\"FILE\"", "\">\"", "\"INITIAL\"", "\"<\"", "\"-\"", "\"*\"",
  "\"NULL\"", "\"OVERFLOW\"", "\"(\"", "\"+\"", "\"TRUE\"", "TOP",
  "\"TOWARD-GREATER\"", "\"TOWARD-LESSER\"", "TRACK", "TRACKS",
  "\"TRACK-AREA\"", "\"TRACK-LIMIT\"", "\"TRADITIONAL-FONT\"", "TRAILING",
  "\"TRAILING-SHIFT\"", "TRANSFORM", "TRANSPARENT", "\"TREE-VIEW\"",
  "\"FUNCTION TRIM\"", "TRUNCATION", "TYPE", "TYPEDEF", "U", "\"UCS-4\"",
  "UNBOUNDED", "UNDERLINE", "UNFRAMED", "UNIT", "UNLOCK", "UNSIGNED",
  "\"UNSIGNED-INT\"", "\"UNSIGNED-LONG\"", "\"UNSIGNED-SHORT\"",
  "UNSORTED", "UNSTRING", "UNTIL", "UP", "UPDATE", "UPDATERS", "UPON",
  "\"UPON ARGUMENT-NUMBER\"", "\"UPON COMMAND-LINE\"",
  "\"UPON ENVIRONMENT-NAME\"", "\"UPON ENVIRONMENT-VALUE\"", "UPPER",
  "\"FUNCTION UPPER-CASE\"", "USAGE", "USE", "\"USE-ALT\"",
  "\"USE-RETURN\"", "\"USE-TAB\"", "USER", "\"USER-DEFAULT\"",
  "\"user function name\"", "USING", "\"UTF-8\"", "\"UTF-16\"", "V",
  "VALIDATE", "VALIDATING", "VALUE", "\"VALUE-FORMAT\"", "VARIABLE",
  "VARIANT", "VARYING", "VERTICAL", "\"VERY-HEAVY\"", "\"VIRTUAL-WIDTH\"",
  "VOLATILE", "VPADDING", "VSCROLL", "\"VSCROLL-BAR\"", "\"VSCROLL-POS\"",
  "VTOP", "WAIT", "\"WEB-BROWSER\"", "WHEN", "\"FUNCTION WHEN-COMPILED\"",
  "\"WHEN\"", "WIDTH", "\"WIDTH-IN-CELLS\"", "WINDOW", "WITH",
  "\"Identifier\"", "WORDS", "\"WORKING-STORAGE\"", "WRAP", "WRITE",
  "\"WRITE-ONLY\"", "\"WRITE-VERIFY\"", "WRITERS", "X", "XML",
  "\"XML-DECLARATION\"", "Y", "YYYYDDD", "YYYYMMDD", "ZERO",
  "SHIFT_PREFER", "$accept", "start", "$@1", "compilation_group",
  "nested_list", "$@2", "source_element_list", "source_element",
  "simple_prog", "$@3", "program_definition", "function_definition",
  "_end_program_list", "end_program_list", "end_program", "$@4",
  "end_function", "$@5", "_program_body", "$@6", "$@7",
  "_identification_header", "identification_header",
  "identification_or_id", "program_id_paragraph", "$@8", "$@9",
  "function_id_paragraph", "$@10", "program_id_name", "end_program_name",
  "_as_literal", "_program_type", "program_type_clause",
  "init_or_recurse_and_common", "init_or_recurse", "_options_paragraph",
  "_options_clauses", "_arithmetic_clause", "arithmetic_choice",
  "_default_rounded_clause", "_entry_convention_clause", "convention_type",
  "_intermediate_rounding_clause", "intermediate_rounding_choice",
  "_environment_division", "_environment_header", "_configuration_section",
  "_configuration_header", "_configuration_paragraphs",
  "configuration_paragraphs", "configuration_paragraph",
  "source_computer_paragraph", "$@11", "_source_computer_entry",
  "_with_debugging_mode", "object_computer_paragraph", "$@12",
  "_object_computer_entry", "object_clauses_list", "object_clauses",
  "object_computer_memory", "object_computer_sequence",
  "program_collating_sequence", "$@13", "program_coll_sequence_values",
  "object_computer_segment", "object_computer_class", "locale_class",
  "computer_words", "repository_paragraph", "$@14", "_repository_entry",
  "repository_list", "repository_name", "repository_name_list",
  "special_names_header", "special_names_sentence", "special_name_list",
  "special_name", "mnemonic_name_clause", "$@15", "mnemonic_choices",
  "_special_name_mnemonic_on_off", "on_off_clauses", "on_off_clauses_1",
  "alphabet_name_clause", "@16", "alphabet_definition", "@17", "@18",
  "alphabet_target_alphanumeric", "alphabet_target_national",
  "alphabet_type_alphanumeric", "alphabet_type_national",
  "alphabet_type_common", "alphabet_literal_list", "alphabet_literal",
  "@19", "alphabet_also_sequence", "alphabet_lits", "space_or_zero",
  "symbolic_characters_clause", "_sym_in_word", "symbolic_collection",
  "symbolic_chars_list", "symbolic_chars_phrase", "char_list",
  "integer_list", "symbolic_constant_clause", "symbolic_constant_list",
  "symbolic_constant", "class_name_clause", "class_item_list",
  "class_item", "_class_type", "_in_alphabet", "locale_clause",
  "currency_sign_clause", "_with_pic_symbol", "decimal_point_clause",
  "numeric_sign_clause", "cursor_clause", "crt_status_clause",
  "screen_control", "event_status", "top_clause", "$@20",
  "_input_output_section", "_input_output_header", "_file_control_header",
  "_file_control_sequence", "file_control_entry", "$@21",
  "_select_clauses_or_error", "_select_clause_sequence", "select_clause",
  "assign_clause", "_assign_device_or_line_adv_file", "assign_device",
  "general_device_name", "line_seq_device_name", "line_adv_file",
  "_ext_clause", "ext_clause", "assignment_name", "access_mode_clause",
  "access_mode", "alternate_record_key_clause", "_password_clause",
  "password_clause", "$@22", "_suppress_clause",
  "collating_sequence_clause", "collating_sequence", "$@23",
  "coll_sequence_values", "collating_sequence_clause_key", "alphabet_name",
  "file_status_clause", "_file_or_sort", "lock_mode_clause", "$@24",
  "lock_mode", "_lock_with", "_with_rollback", "with_rollback",
  "_with_mass_update", "organization_clause", "organization",
  "padding_character_clause", "record_delimiter_clause", "$@25",
  "record_delimiter_option", "record_key_clause", "_split_keys",
  "source_is", "split_key_list", "$@26", "split_key",
  "relative_key_clause", "reserve_clause", "no_or_integer",
  "sharing_clause", "sharing_option", "file_limit_clause", "thru_list",
  "actual_key_clause", "nominal_key_clause", "track_area_clause",
  "track_limit_clause", "_i_o_control", "i_o_control_header",
  "_i_o_control_entries", "i_o_control_list", "i_o_control_clause",
  "same_clause", "_same_option", "apply_clause",
  "obsolete_dos_vs_apply_phrase", "multiple_file_tape_clause", "$@27",
  "multiple_file_list", "multiple_file", "_multiple_file_position",
  "rerun_clause", "_on_assignment", "rerun_event", "_data_division",
  "$@28", "_data_division_header", "data_division_header",
  "_file_section_header", "_file_description_sequence", "file_description",
  "file_description_entry", "$@29", "file_type",
  "_file_description_clause_sequence", "file_description_clause",
  "block_contains_clause", "_records_or_characters", "record_clause",
  "_record_depending", "_from_integer", "_to_integer",
  "label_records_clause", "value_of_clause", "file_id", "valueof_name",
  "data_records_clause", "linage_clause", "_linage_sequence",
  "linage_lines", "linage_footing", "linage_top", "linage_bottom",
  "recording_mode_clause", "recording_mode", "u_or_s", "code_set_clause",
  "_for_sub_records_clause", "report_clause", "report_keyword",
  "rep_name_list", "_communication_section", "$@30",
  "_communication_description_sequence", "communication_description",
  "communication_description_entry", "$@31",
  "_communication_description_clause_sequence",
  "communication_description_clause", "_input_cd_clauses",
  "named_input_cd_clauses", "named_input_cd_clause",
  "unnamed_input_cd_clauses", "_output_cd_clauses", "output_cd_clauses",
  "output_cd_clause", "_i_o_cd_clauses", "named_i_o_cd_clauses",
  "named_i_o_cd_clause", "unnamed_i_o_cd_clauses",
  "_working_storage_section", "$@32", "_record_description_list", "$@33",
  "record_description_list", "data_description", "$@34", "level_number",
  "_filler", "_entry_name", "user_entry_name", "_const_global",
  "lit_or_length", "con_source", "fp32_usage", "fp64_usage", "fp128_usage",
  "pointer_len", "renames_entry", "_renames_thru", "condition_name_entry",
  "$@35", "constant_entry", "$@36", "constant_source",
  "constant_78_source", "constant_expression_list", "constant_expression",
  "_data_description_clause_sequence", "data_description_clause_sequence",
  "data_description_clause", "redefines_clause", "like_clause",
  "_length_modifier", "length_modifier", "same_as_clause",
  "typedef_clause", "_strong", "external_clause", "_as_extname",
  "_global_clause", "global_clause", "special_names_clause", "$@37",
  "special_names_target", "volatile_clause", "picture_clause",
  "_pic_locale_format", "_is_locale_name", "locale_name", "type_to_clause",
  "usage_clause", "usage", "double_usage", "_font_name", "_layout_name",
  "sign_clause", "report_occurs_clause", "_occurs_step", "occurs_clause",
  "_occurs_to_integer", "_occurs_from_integer", "_occurs_integer_to",
  "_occurs_depending", "_capacity_in", "_occurs_initialized",
  "_occurs_keys_and_indexed", "$@38", "occurs_keys", "occurs_key_list",
  "occurs_key_field", "ascending_or_descending", "_occurs_indexed",
  "occurs_indexed", "occurs_index_list", "occurs_index",
  "justified_clause", "synchronized_clause", "_left_or_right",
  "blank_clause", "based_clause", "value_clause", "$@39",
  "value_item_list", "value_item", "_false_is", "any_length_clause",
  "external_form_clause", "identified_by_clause", "_local_storage_section",
  "$@40", "_linkage_section", "$@41", "_report_section", "$@42",
  "_report_description_sequence", "report_description", "$@43",
  "_report_description_options", "report_description_option",
  "control_clause", "control_field_list", "control_final_tag",
  "control_identifier_list", "control_identifier", "page_limit_clause",
  "page_line_column", "page_limit_cols", "integer_or_zero_or_ident",
  "_page_heading_list", "page_detail", "heading_clause", "first_detail",
  "last_heading", "last_detail", "footing_clause",
  "_report_group_description_list", "report_group_description_entry",
  "$@44", "_report_group_options", "report_group_option", "type_is_clause",
  "type_option", "_control_heading_final", "_or_page",
  "_control_footing_final", "next_group_clause", "next_group_plus",
  "next_page", "sum_clause_list", "_reset_clause", "data_or_final",
  "present_when_condition", "present_absent", "_page_or_id", "page_or_ids",
  "report_varying_clause", "line_clause", "line_keyword_clause",
  "_line_clause_options", "line_clause_option", "column_clause",
  "col_keyword_clause", "_orientation", "_left_right_center",
  "col_or_plus", "column_integer_list", "column_integer", "source_clause",
  "group_indicate_clause", "_screen_section", "$@45",
  "_screen_description_list", "screen_description_list",
  "screen_description", "$@46", "$@47", "$@48", "_screen_options",
  "screen_option", "control_definition", "control_type_name",
  "control_type", "control_item", "_control_attributes",
  "control_attributes", "control_attribute", "control_style",
  "control_property", "control_style_name", "control_property_name",
  "control_style_name_generic", "control_property_name_generic",
  "control_style_name_label", "control_property_name_label",
  "control_style_name_entry_field", "control_property_name_entry_field",
  "control_style_name_push_button", "control_property_name_push_button",
  "control_style_name_check_box", "control_property_name_radio_button",
  "control_style_name_list_box", "control_property_name_list_box",
  "control_style_name_combo_box", "control_style_name_frame",
  "control_property_name_frame", "control_style_name_tab_control",
  "control_property_name_tab_control", "control_style_name_bar",
  "control_property_name_bar", "control_property_name_bitmap",
  "control_style_name_grid", "control_property_name_grid",
  "control_style_name_tree_view", "control_property_name_tree_view",
  "control_property_name_web_browser", "control_style_name_activex",
  "control_property_name_activex", "control_style_name_date_entry",
  "control_property_name_date_entry", "control_style_type",
  "control_property_type", "changeable_control_properties",
  "changeable_control_property", "changeable_window_properties",
  "changeable_window_property", "eol", "eos", "_plus", "plus",
  "plus_tokens", "minus", "minus_tokens", "control_size",
  "control_size_unit", "_cell", "screen_line_number",
  "_screen_line_plus_minus", "screen_col_number", "_screen_col_plus_minus",
  "screen_occurs_clause", "screen_global_clause", "_procedure_division",
  "procedure_division", "$@49", "$@50", "$@51", "$@52",
  "_procedure_using_chaining", "$@53", "$@54", "procedure_param_list",
  "procedure_param", "_procedure_type", "_size_optional",
  "size_is_integer", "_acu_size", "_procedure_optional",
  "_procedure_returning", "_procedure_declaratives", "$@55",
  "_procedure_list", "procedure", "section_header", "$@56",
  "_use_statement", "paragraph_header", "invalid_statement", "_segment",
  "statement_list", "@57", "@58", "statements", "$@59", "statement",
  "accept_statement", "$@60", "accept_body", "$@61", "$@62",
  "accp_identifier", "field_with_pos_specifier", "$@63", "_pos_specifier",
  "pos_specifier", "pos_specifier_value", "identifier_or_numeric_literal",
  "_accept_clauses", "accept_clauses", "accept_clause",
  "accept_from_screen_clauses", "accept_from_screen_clause",
  "lines_or_number", "at_line_column", "line_number", "column_number",
  "mode_is_block", "accp_attr", "_key_dest", "key_dest", "no_echo",
  "reverse_video", "update_default", "_end_accept", "add_statement",
  "$@64", "add_body", "_add_to", "_end_add", "allocate_statement", "$@65",
  "allocate_body", "_loc", "allocate_returning", "alter_statement", "$@66",
  "alter_body", "alter_entry", "_proceed_to", "call_statement", "$@67",
  "call_body", "$@68", "_conv_linkage", "$@69", "conv_linkage_option",
  "_mnemonic_conv", "mnemonic_conv", "program_or_prototype",
  "_id_or_lit_or_func_as", "nested_or_prototype", "call_using", "$@70",
  "call_param_list", "call_param", "_call_type", "call_returning",
  "return_give", "null_or_omitted", "call_exception_phrases",
  "_call_on_exception", "call_on_exception", "_call_not_on_exception",
  "call_not_on_exception", "_end_call", "cancel_statement", "$@71",
  "cancel_body", "id_or_lit_or_program_name", "close_statement", "$@72",
  "close_body", "close_files", "_close_option", "close_window", "$@73",
  "_close_display_option", "compute_statement", "$@74", "compute_body",
  "_end_compute", "commit_statement", "continue_statement", "$@75",
  "_continue_after_phrase", "$@76", "destroy_statement", "$@77",
  "destroy_body", "delete_statement", "$@78", "delete_body",
  "delete_file_list", "_end_delete", "disable_statement", "$@79",
  "enable_disable_handling", "_enable_disable_key", "communication_mode",
  "display_statement", "$@80", "display_body", "screen_or_device_display",
  "display_list", "display_atom", "$@81", "disp_list",
  "_with_display_attr", "display_attrs", "display_clauses",
  "display_clause", "_display_upon", "display_upon", "crt_under",
  "display_erase", "$@82", "display_pos_specifier",
  "field_or_literal_or_erase_with_pos_specifier", "$@83",
  "field_or_literal_or_erase_list", "field_or_literal_or_erase",
  "display_message_box", "$@84", "_display_message_clauses",
  "display_message_clauses", "display_message_clause", "display_window",
  "$@85", "$@86", "sub_or_window", "display_floating_window", "$@87",
  "$@88", "display_initial_window", "$@89", "initial_type", "_graphical",
  "_upon_window_handle", "window_handle", "display_window_clauses",
  "display_window_clause", "shadow", "boxed", "_top_or_bottom",
  "_left_or_centered_or_right", "no_scroll_wrap", "pop_up_or_handle",
  "pop_up_area", "handle_is_in", "disp_attr", "_end_display",
  "divide_statement", "$@90", "divide_body", "_end_divide",
  "enable_statement", "$@91", "entry_statement", "$@92", "$@93",
  "entry_body", "entry_goto_body", "evaluate_statement", "$@94",
  "evaluate_body", "evaluate_subject_list", "evaluate_subject",
  "evaluate_condition_list", "evaluate_case_list", "evaluate_case",
  "evaluate_other", "evaluate_when_list", "$@95", "$@96",
  "evaluate_object_list", "evaluate_object", "_evaluate_thru_expr",
  "_end_evaluate", "exhibit_statement", "$@97", "exhibit_body", "$@98",
  "_changed", "_named", "exhibit_target_list", "exhibit_target",
  "exit_statement", "$@99", "exit_body", "exit_program_returning",
  "free_statement", "$@100", "free_body", "generate_statement", "$@101",
  "generate_body", "goto_statement", "$@102", "go_body", "goto_depending",
  "goback_statement", "if_statement", "$@103", "if_else_statements",
  "_if_then", "if_true", "if_false", "_end_if", "initialize_statement",
  "$@104", "initialize_body", "_initialize_filler", "_initialize_value",
  "_initialize_replacing", "initialize_replacing_list",
  "initialize_replacing_item", "initialize_category",
  "_initialize_default", "initiate_statement", "$@105", "initiate_body",
  "inquire_statement", "$@106", "inquire_body", "inspect_statement",
  "$@107", "inspect_body", "send_identifier", "inspect_list",
  "inspect_tallying", "$@108", "inspect_replacing", "inspect_converting",
  "tallying_list", "tallying_item", "replacing_list", "replacing_item",
  "rep_keyword", "replacing_region", "inspect_region", "inspect_before",
  "inspect_after", "json_generate_statement", "$@109",
  "json_generate_body", "$@110", "$@111", "_json_suppress",
  "json_suppress_list", "json_suppress_entry", "_end_json",
  "json_parse_statement", "$@112", "json_parse_body", "_with_detail",
  "merge_statement", "$@113", "modify_statement", "$@114", "modify_body",
  "_end_modify", "move_statement", "$@115", "move_body",
  "multiply_statement", "$@116", "multiply_body", "_end_multiply",
  "open_statement", "$@117", "open_body", "open_file_entry",
  "_open_exclusive", "open_mode", "_open_sharing", "_open_option",
  "lock_allowing", "open_lock_option", "allowing_option", "allowing_all",
  "open_option_sequential", "osvs_input_mode", "perform_statement",
  "$@118", "perform_body", "$@119", "$@120", "_end_perform",
  "end_perform_or_dot", "perform_procedure", "_perform_option",
  "perform_test", "cond_or_exit", "perform_varying_list",
  "perform_varying", "_by_phrase", "purge_statement", "$@121",
  "raise_statement", "$@122", "raise_body", "exception_name",
  "read_statement", "$@123", "read_body", "_read_into", "_lock_phrases",
  "ignoring_lock", "advancing_lock_or_retry", "_retry_phrase",
  "retry_phrase", "retry_options", "_extended_with_lock",
  "extended_with_lock", "_read_key", "read_handler", "_end_read",
  "ready_statement", "receive_statement", "$@124", "receive_body",
  "message_or_segment", "_data_sentence_phrases", "_no_data_sentence",
  "no_data_sentence", "_with_data_sentence", "with_data_sentence",
  "_end_receive", "release_statement", "$@125", "release_body",
  "reset_statement", "return_statement", "$@126", "return_body",
  "_end_return", "rewrite_statement", "$@127", "rewrite_body",
  "_with_lock", "with_lock", "_end_rewrite", "rollback_statement",
  "search_statement", "$@128", "search_body", "search_varying",
  "search_at_end", "search_whens", "search_when", "_end_search",
  "send_statement", "$@129", "send_body", "_from_identifier",
  "from_identifier", "with_indicator", "_replacing_line", "set_statement",
  "$@130", "set_body", "on_or_off", "up_or_down", "set_environment",
  "set_attr", "set_attr_clause", "set_attr_one", "set_to", "set_up_down",
  "set_to_on_off_sequence", "set_to_on_off", "set_to_true_false_sequence",
  "set_to_true_false", "set_last_exception_to_off", "set_thread_priority",
  "sort_statement", "$@131", "sort_body", "@132", "_sort_key_list",
  "_key_sort_list", "_sort_duplicates", "_sort_collating", "sort_input",
  "sort_output", "start_statement", "$@133", "start_body",
  "_sizelen_clause", "_start_key", "start_op", "disallowed_op",
  "not_equal_op", "_end_start", "stop_statement", "$@134",
  "stop_returning", "_status_x", "stop_argument", "stop_literal",
  "string_statement", "$@135", "string_body", "string_items", "$@136",
  "string_item_list", "string_item", "_string_delimited",
  "string_delimiter", "_with_pointer", "_end_string", "subtract_statement",
  "$@137", "subtract_body", "_end_subtract", "suppress_statement",
  "_printing", "terminate_statement", "$@138", "terminate_body",
  "transform_statement", "$@139", "transform_body", "unlock_statement",
  "$@140", "unlock_body", "unstring_statement", "$@141", "unstring_body",
  "_unstring_delimited", "unstring_delimited_list",
  "unstring_delimited_item", "unstring_into", "unstring_into_item",
  "_unstring_into_delimiter", "_unstring_tallying", "_end_unstring",
  "validate_statement", "$@142", "validate_fields", "use_statement",
  "$@143", "use_phrase", "use_file_exception", "_use_global",
  "use_file_exception_target", "use_for_debugging", "debugging_list",
  "debugging_target", "_all_refs", "use_at_start_end", "program_start_end",
  "use_before_reporting", "use_after_exception", "use_exception_list",
  "use_exception", "use_ex_keyw", "write_statement", "$@144", "write_body",
  "from_option", "write_option", "before_or_after", "write_handler",
  "_end_write", "xml_generate_statement", "$@145", "xml_generate_body",
  "$@146", "$@147", "_with_encoding_xml_dec_and_attrs",
  "with_encoding_xml_dec_and_attrs", "with_encoding_xml_dec_and_attr",
  "encoding_xml_dec_and_attr", "_xml_gen_namespace",
  "_xml_gen_namespace_prefix", "_xml_name_of", "identifier_name_list",
  "identifier_is_name", "_json_name_of", "json_identifier_name_list",
  "json_identifier_is_name", "_type_of", "identifier_type_list",
  "identifier_is_type", "_xml_type", "ml_type", "_xml_gen_suppress",
  "xml_suppress_list", "xml_suppress_entry", "xml_suppress_generic_opt",
  "xml_suppress_when_list", "_end_xml", "xml_parse_statement", "$@148",
  "xml_parse_body", "$@149", "_with_encoding", "_returning_national",
  "_validating_with", "schema_file_or_record_name",
  "_accept_exception_phrases", "_accp_on_exception", "accp_on_exception",
  "escape_or_exception", "_accp_not_on_exception", "accp_not_on_exception",
  "not_escape_or_not_exception", "_display_exception_phrases",
  "_disp_on_exception", "disp_on_exception", "_disp_not_on_exception",
  "disp_not_on_exception", "_xml_exception_phrases", "_xml_on_exception",
  "xml_on_exception", "_xml_not_on_exception", "xml_not_on_exception",
  "_json_exception_phrases", "_json_on_exception", "json_on_exception",
  "_json_not_on_exception", "json_not_on_exception",
  "on_size_error_phrases", "_on_size_error", "on_size_error",
  "_not_on_size_error", "not_on_size_error", "_on_overflow_phrases",
  "_on_overflow", "on_overflow", "_not_on_overflow", "not_on_overflow",
  "return_at_end", "at_end", "_at_end_clause", "at_end_clause",
  "_not_at_end_clause", "not_at_end_clause", "at_eop_clauses",
  "_at_eop_clause", "at_eop_clause", "_not_at_eop_clause",
  "not_at_eop_clause", "_invalid_key_phrases", "invalid_key_phrases",
  "_invalid_key_sentence", "invalid_key_sentence",
  "_not_invalid_key_sentence", "not_invalid_key_sentence", "_thread_start",
  "_thread_handle", "thread_reference_optional", "_scroll_lines",
  "_count_in", "condition", "expr", "partial_expr", "$@150", "expr_tokens",
  "expr_token", "_not_expr", "not_expr", "condition_or_class", "eq", "gt",
  "lt", "ge", "le", "exp_list", "_e_sep", "exp", "exp_term", "exp_factor",
  "exp_unary", "exp_atom", "line_linage_page_counter", "arithmetic_x_list",
  "arithmetic_x", "record_name", "file_or_record_name", "table_name",
  "file_name_list", "file_file_name_list", "file_name", "cd_name",
  "report_name", "mnemonic_name_list", "mnemonic_name", "entry_name_list",
  "entry_name", "procedure_name_list", "procedure_name", "label",
  "integer_label", "reference_list", "reference", "_reference",
  "single_reference_list", "single_reference", "optional_reference_list",
  "optional_reference", "reference_or_literal", "undefined_word",
  "unique_word", "target_x_list", "target_x", "_x_list", "x_list", "x",
  "call_x", "x_common", "length_of_register", "report_x_list", "expr_x",
  "arith_x", "arith_nonzero_x", "numeric_literal", "non_numeric_literal",
  "nonzero_numeric_literal", "prog_or_entry", "alnum_or_id",
  "simple_display_value", "simple_display_all_value", "inspect_from",
  "inspect_to", "simple_value", "simple_all_value", "id_or_lit",
  "id_or_lit_or_func", "id_or_lit_or_length_or_func", "num_id_or_lit",
  "positive_id_or_lit", "pos_num_id_or_lit_or_zero", "pos_num_id_or_lit",
  "from_parameter", "sub_identifier", "table_identifier",
  "sub_identifier_1", "display_identifier", "numeric_identifier",
  "identifier_or_file_name", "identifier_field", "type_name", "identifier",
  "identifier_1", "identifier_list", "target_identifier",
  "target_identifier_1", "display_identifier_or_alphabet_name",
  "qualified_word", "unqualified_word", "$@151", "unqualified_word_check",
  "subref", "refmod", "integer", "symbolic_integer",
  "unsigned_pos_integer", "integer_or_zero", "class_value", "literal",
  "basic_literal", "basic_value", "zero_spaces_high_low_values",
  "function", "func_no_parm", "func_one_parm", "func_multi_parm",
  "func_refmod", "func_args", "trim_args", "length_arg", "$@152",
  "numvalc_args", "locale_dt_args", "formatted_datetime_args",
  "formatted_time_args", "not_const_word", "flag_all", "flag_duplicates",
  "flag_initialized", "flag_initialized_to", "to_init_val", "_flag_next",
  "_flag_not", "flag_optional", "flag_rounded", "round_mode",
  "round_choice", "flag_separate", "_from_idx_to_idx", "_dest_index",
  "error_stmt_recover", "verb", "scope_terminator", "_advancing", "_after",
  "_are", "_area", "_areas", "_as", "_at", "_before", "_binary", "_box",
  "_by", "_character", "_characters", "_collating", "_contains",
  "_controls", "_control", "_data", "_end_of", "_erase", "_every", "_file",
  "_for", "_from", "_in", "_in_equal", "_in_order", "_index", "_indicate",
  "_initial", "_into", "_is", "_is_equal", "_is_are", "_is_are_equal",
  "_is_in", "_key", "_line", "_line_or_lines", "_limits", "_lines",
  "_lock", "_message", "_mode", "_new", "_number", "_number_or_numbers",
  "_of", "_on", "_on_for", "_onoff_status", "_other", "_others",
  "_procedure", "_program", "_protected", "_record", "_records", "_right",
  "_sign", "_signed", "_sign_is", "_size", "_standard", "_status",
  "_symbolic", "_tape", "_terminal", "_then", "_times", "_to", "_up",
  "_when", "_when_set_to", "_with", "_with_for", "column_or_col",
  "columns_or_cols", "column_or_cols", "column_or_col_or_position_or_pos",
  "comp_equal", "exception_or_error", "file_limit_or_limits", "in_of",
  "label_option", "line_or_lines", "lock_records",
  "object_char_or_word_or_modules", "records", "reel_or_unit",
  "size_or_length", "length_of", "track_or_tracks", "using_or_varying",
  "detail_keyword", "ch_keyword", "cf_keyword", "ph_keyword", "pf_keyword",
  "rh_keyword", "rf_keyword", "control_keyword", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   441,   442,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   471,   472,   473,   474,
     475,   476,   477,   478,   479,   480,   481,   482,   483,   484,
     485,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,   497,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   510,   511,   512,   513,   514,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
     525,   526,   527,   528,   529,   530,   531,   532,   533,   534,
     535,   536,   537,   538,   539,   540,   541,   542,   543,   544,
     545,   546,   547,   548,   549,   550,   551,   552,   553,   554,
     555,   556,   557,   558,   559,   560,   561,   562,   563,   564,
     565,   566,   567,   568,   569,   570,   571,   572,   573,   574,
     575,   576,   577,   578,   579,   580,   581,   582,   583,   584,
     585,   586,   587,   588,   589,   590,   591,   592,   593,   594,
     595,   596,   597,   598,   599,   600,   601,   602,   603,   604,
     605,   606,   607,   608,   609,   610,   611,   612,   613,   614,
     615,   616,   617,   618,   619,   620,   621,   622,   623,   624,
     625,   626,   627,   628,   629,   630,   631,   632,   633,   634,
     635,   636,   637,   638,   639,   640,   641,   642,   643,   644,
     645,   646,   647,   648,   649,   650,   651,   652,   653,   654,
     655,   656,   657,   658,   659,   660,   661,   662,   663,   664,
     665,   666,   667,   668,   669,   670,   671,   672,   673,   674,
     675,   676,   677,   678,   679,   680,   681,   682,   683,   684,
     685,   686,   687,   688,   689,   690,   691,   692,   693,   694,
     695,   696,   697,   698,   699,   700,   701,   702,   703,   704,
     705,   706,   707,   708,   709,   710,   711,   712,   713,   714,
     715,   716,   717,   718,   719,   720,   721,   722,   723,   724,
     725,   726,   727,   728,   729,   730,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,   741,   742,   743,   744,
     745,   746,   747,   748,   749,   750,   751,   752,   753,   754,
     755,   756,   757,   758,   759,   760,   761,   762,   763,   764,
     765,   766,   767,   768,   769,   770,   771,   772,   773,   774,
     775,   776,   777,   778,   779,   780,   781,   782,   783,   784,
     785,   786,   787,   788,   789,   790,   791,   792,   793,   794,
     795,   796,   797,   798,   799,   800,   801,   802,   803,   804,
     805,   806,   807,   808,   809,   810,   811,   812,   813,   814,
     815,   816,   817,   818,   819,   820,   821,   822,   823,   824,
     825,   826,   827,   828,   829,   830,   831,   832,   833,   834,
     835,   836,   837,   838,   839,   840,   841,   842,   843,   844,
     845,   846,   847,   848,   849,   850,   851,   852,   853,   854,
     855,   856,   857,   858,   859,   860,   861,   862,   863,   864,
     865,   866,   867,   868,   869,   870,   871,   872,   873,   874,
     875,   876,   877,   878,   879,   880,   881,   882,   883,   884,
     885,   886,   887,   888,   889,   890,   891,   892,   893,   894,
     895,   896,   897,   898,   899,   900,   901,   902,   903,   904,
     905,   906,   907,   908,   909,   910,   911,   912,   913,   914,
     915,   916,   917,   918,   919,   920,   921,   922,   923,   924,
     925,   926,   927,   928,   929,   930,   931,   932,   933,   934,
     935,   936,   937,   938,   939,   940,   941,   942,   943,   944,
     945,   946,   947,   948,   949,   950,   951,   952,   953,   954,
     955,   956,   957,   958,   959,   960,   961,   962,   963,   964,
     965,   966,   967,   968,   969,   970,   971,   972,   973,   974,
     975,   976,   977,   978,   979,   980,   981,   982,   983,   984,
     985,   986,   987,   988,   989,   990,   991,   992,   993,   994,
     995,   996,   997,   998,   999,  1000,  1001,  1002,  1003,  1004,
    1005,  1006,  1007,  1008,  1009,  1010,  1011,  1012,  1013,  1014,
    1015,  1016,  1017,  1018,  1019,  1020,  1021,  1022,  1023,  1024,
    1025,  1026,  1027,  1028,  1029,  1030,  1031,  1032,  1033,  1034,
    1035,  1036,  1037,  1038,  1039,  1040,  1041,  1042,  1043,  1044,
    1045,  1046,  1047,  1048,  1049,  1050,  1051,  1052,  1053,  1054,
    1055,  1056,  1057,  1058,  1059,  1060,  1061,  1062,  1063,  1064,
    1065,  1066,  1067,  1068,  1069,  1070,  1071,  1072,  1073,  1074,
    1075,  1076,  1077,  1078,  1079,  1080,  1081,  1082,  1083,  1084,
    1085,  1086,  1087,  1088,  1089,  1090,  1091,  1092,  1093,  1094,
    1095,  1096,  1097,  1098,  1099,  1100,  1101,  1102,  1103,  1104,
    1105,  1106,  1107,  1108,  1109,  1110,  1111,  1112,  1113,  1114,
    1115,  1116,  1117,  1118,  1119,  1120,  1121,  1122,  1123,  1124,
    1125,  1126,  1127,  1128,  1129,  1130,  1131,  1132,  1133,  1134,
    1135,  1136,  1137,  1138,  1139,  1140,  1141,  1142,  1143,  1144,
    1145,  1146,  1147,  1148,  1149,  1150,  1151,  1152,  1153,  1154,
    1155,  1156,  1157,  1158,  1159,  1160,  1161,  1162,  1163,  1164,
    1165,  1166,  1167,  1168,  1169,  1170,  1171,  1172,  1173,  1174,
    1175,  1176,  1177,  1178,  1179,  1180,  1181,  1182,  1183
};
# endif

#define YYPACT_NINF (-3974)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-3161)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
   -3974,   424,    14, -3974, -3974, -3974,  1154, -3974,  -122, -3974,
   -3974,  1244, -3974, -3974, -3974,   961, -3974,   251,  -291, -3974,
    1150, -3974, -3974, -3974,  -122,  -122,   651,  1479,  1333, -3974,
    1414,   868,  1020,  1608,  1652, -3974,  1635, -3974,  1797,  1240,
    1881,  1379,  1720,  2578,   -72,   -72, -3974, -3974,  1608, -3974,
   -3974, -3974, -3974,  1401,  1475,  1867, -3974,  1962, -3974,  1366,
   -3974,  1393,  1497, -3974,  1926,   129,   129,  1480,  1528,  1635,
    1635,  1635,   129,  1546,  1473,  1490,  1635,  1500,  1532,  1782,
   -3974, -3974, -3974,  2578, -3974, -3974, -3974, -3974, -3974, -3974,
    1207, -3974, -3974, -3974, -3974,  1883, -3974, -3974, -3974, -3974,
   -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974,  2263,
    2263,   938, -3974,   938, -3974, -3974, -3974, -3974, -3974,  1839,
    1635,  1954,  1554,  1439,  1658, -3974, -3974,  1561,  1585, -3974,
   -3974, -3974, -3974,  1101,  1635, -3974,  1635,  1504,  2275,  1504,
    1635,  1635, -3974, -3974,  1504, -3974, -3974, -3974,  1509,  1512,
    1635,  1697, -3974, -3974, -3974, -3974,  1514, -3974,  1957,  1611,
   -3974, -3974, -3974,  1618,  1626, -3974,  1635,    79,  1744,  1636,
   -3974,  2240, -3974, -3974, -3974,  1653,   -55, -3974, -3974,   -99,
    1101, -3974,  1635,   265,  1504,  2022,     3, -3974, -3974, -3974,
   -3974,  2024,  1639,   274,   946, -3974,  1578, -3974,  1509, -3974,
    1635, -3974,  1512, -3974,   116, -3974,   129, -3974, -3974, -3974,
   -3974, -3974,  1579,   795,  1635,   125, -3974, -3974, -3974,   -96,
   -3974, -3974,   315, -3974, -3974, -3974, -3974,  1635, -3974, -3974,
    8293,  8888, -3974, -3974, -3974,  1568, -3974,   967,   130,  1674,
    -111, -3974, -3974,   177, -3974, -3974, -3974,   611,  1358, -3974,
   -3974, -3974,  -261, -3974, -3974,  1504, -3974,  1771, -3974,  1757,
   -3974,  1635, -3974, -3974,    96, -3974, -3974, -3974, -3974, -3974,
     440,  2384,  2380,   123,  1592, -3974,   140, -3974, -3974,   171,
   -3974,   313, -3974, -3974, -3974, -3974,  2050, -3974,   795, -3974,
    2103,   129,   129, -3974,  1579,  1693,   101, -3974, -3974, -3974,
   -3974, -3974, -3974, -3974, -3974, -3974,  1347,   381,  9229, -3974,
   -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974,
   -3974, -3974, -3974, -3974, -3974,  2185, -3974, -3974, -3974, -3974,
   -3974, -3974,   -65, -3974, -3974, -3974, -3974, -3974,    28, -3974,
   -3974, -3974, -3974,  1800, -3974, -3974, -3974, -3974, -3974, -3974,
   -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974,
   -3974,  1403, -3974, -3974,  1915, -3974, -3974, -3974, -3974, -3974,
   -3974, -3974,  1057, -3974, -3974, -3974, -3974, -3974, -3974, -3974,
   -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974,
   -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974,
   -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974,
   -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974,
   -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974,
   -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974,  1813,
    2387, -3974,  1050,  1708, -3974, -3974, -3974,  1966, -3974,   129,
      54, -3974,  1970,  1411, -3974,   249, -3974, -3974, -3974, -3974,
   -3974, -3974,  1635,  1635, -3974, -3974, -3974, -3974, -3974, -3974,
   -3974, -3974, -3974,  1209, -3974,  1725, -3974, -3974,  1941, -3974,
   -3974, -3974,  1635,  2078, -3974, -3974, -3974, -3974,   371,  1635,
   -3974, -3974,  1810,  2132, -3974,  2263,  1248,  2263,  1719, -3974,
   -3974,  1721,  2345,  1492, -3974, -3974, -3974, -3974, -3974, -3974,
   -3974, -3974,  1726, -3974, -3974,  2050, -3974,   129, -3974, -3974,
   -3974, -3974, -3974, -3974,  -278, -3974, -3974, -3974,  1927, -3974,
    2405, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974,
   -3974, -3974,  1633, -3974, -3974, -3974, -3974, -3974, -3974, -3974,
   -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974,
   -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974,
   -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974,
   -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974,
   -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974,
   -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974,
   -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974,
   -3974, -3974, -3974, -3974,  -255,  7130, 16752,   563,   381,   777,
     966,   161,  2533,   591,   137,  1132,  6040, 12450,  1132,  2196,
     381,  -389,  2445,  1487,   161,  1504,  1739, -3974, -3974, 12450,
   -3974,  5624,   161,  1643,    33,  2362, -3974, -3974,  1504,    33,
   11593, 12450, -3974,  2267,   771,  1650,   -64,  1651,  1650,  1504,
    1651,   598,   138,  1650,   200,  1504,  1651, -3974, -3974, -3974,
   -3974,  1504, -3974, -3974, -3974, -3974, -3974, -3974,  1733, -3974,
    8281, -3974, -3974,  1643,   111,  1504,  1651,  4566,  1504,   598,
   -3974, -3974,  1746,  1854,  2105,  1509,  1509,  1509,  1102,  1749,
   13484, -3974, -3974, -3974,  2129, -3974, -3974, -3974, -3974,  1970,
    1739,  1739,  2015,  1970,  1970,  1739,  1970,  1970,  1739,  1970,
    1970,  1751, -3974,  2286,   707, -3974, -3974, -3974,  2546,  1759,
   -3974, -3974,  1477,  1695,  1669, -3974, -3974,  1358,  2130,  2078,
   -3974, -3974,   727, -3974, -3974, -3974, -3974, -3974, -3974, -3974,
   -3974, -3974,  2096, -3974,  1492, -3974, -3974, -3974, -3974, -3974,
   -3974,    90, -3974,  1381,  2348, -3974, 14620,  1758,  2107,  2248,
    2015, -3974, -3974, -3974,  1504, -3974, -3974,  1764,  1766,  1767,
   -3974, -3974,  1768,     3,     3,  1770,  1772,  1773, -3974, -3974,
    1774,     3, -3974, -3974, -3974,  1504,  1775, -3974,  1767, -3974,
    2361, -3974, 11914, -3974, -3974,  6726, -3974, -3974, -3974,  1779,
    1783,  1784, -3974, 17023, 16752, 17023, -3974,   194,   983, -3974,
    2320, -3974, -3974,  6726, -3974,   894,  1726, -3974, -3974,   563,
   -3974,  1804, -3974,     3, -3974,  2377,   771, -3974, -3974,   777,
   -3974, -3974, -3974, -3974, -3974,  1651, -3974,   915,  2015,  2379,
   -3974,   282, -3974,  1930, -3974, -3974,  1733,  1726, -3974, -3974,
    1651,  2378,  1986,  2464, -3974, -3974,  1504,  1831,  1833, -3974,
   -3974, -3974,  1650, -3974,  2270, -3974,  1516,  2556, -3974, -3974,
   -3974, -3974, -3974,  2388,   959, 12052, -3974, -3974, -3974, -3974,
    1724,  1758, -3974, -3974, -3974, -3974, -3974,  2270, 10985,  1570,
    1599,  2389,   216, -3974,  1829,  2192, -3974, -3974, -3974,  2401,
     139, -3974, -3974, -3974, 11482, -3974, -3974,  2154, -3974, -3974,
    2469,   -65, -3974, -3974, -3974,   161, -3974, -3974, -3974, -3974,
   -3974,  2385, -3974, -3974,  1850, -3974, -3974,   285, -3974,  1643,
   -3974, -3974,  1504, 10507,  1113, -3974,  1142, -3974,   391, -3974,
   -3974, -3974,  1504,  1504, -3974, -3974, -3974,  1826,  9751,  1113,
    2406, 12450, -3974,  1845,  2408,  2580, -3974,  1616, -3974,  1559,
   -3974, -3974, 13520,  1859, -3974, -3974,  1752, -3974, -3974,  2410,
    1228,  2412,  -110, -3974,  2325, -3974,  2414,  1986,  1761,  2416,
   -3974,  2325,  1504,  2417,  1785, -3974, -3974,  2331,  6726,  2391,
   -3974, -3974, -3974, -3974, -3974, -3974,  2201, -3974,   161, -3974,
   -3974, -3974,  2073,  -152, -3974,   173,  2649, -3974,   148, -3974,
    2430,  1469,  5365, -3974, 16752,  1863, -3974,  2433,  2293, 12450,
    1504,  1504,  2436, 12094,  1643, -3974, -3974,  -249, -3974, -3974,
   -3974, -3974,  8539, -3974,  2355, -3974, -3974,  1655, -3974,  2441,
    2505, -3974, -3974,  1504, -3974,  2442,  2325,  1504,  1504, -3974,
    1892,  2002,  2262, -3974, -3974,  2058,  1898, -3974,  1900, -3974,
   -3974, -3974,  2566, -3974,  1452,  4802,  1504,  1504,  2078, -3974,
    2078,  1651,  1651,  2078,  1651,  1651,  1504,  1651,  1651, -3974,
    1928, -3974,  1294, -3974, -3974, -3974, -3974,  2390, -3974, -3974,
   -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974,
   -3974, -3974, -3974,   760, -3974,   162, -3974, -3974, -3974, -3974,
   -3974, -3974, -3974, -3974, -3974,    68, -3974, -3974, -3974, -3974,
   -3974, -3974,  1809,   -31, -3974, -3974,   212, -3974, -3974,  2047,
   -3974, -3974, 14620,   681, -3974, -3974,  1635, -3974, 14620, -3974,
   -3974, -3974,  1551,  1916,  8894,    76,  1504, -3974,  2559,  1680,
     -62,  1919, 16752, 16752, 14610, -3974, -3974,  1817,  1823, 16752,
   16752, 16752,  6726,  1824,  1923,  6726, -3974, -3974, -3974, 12553,
    2386, -3974, -3974,  1726, -3974, 16752, -3974,  6726, 16752, -3974,
   -3974,  1410, -3974,  2343, 16752, 16752, 16752, 16752, 16752, -3974,
    1726, -3974, -3974,  2288, -3974,  2133,  2296, -3974, -3974,  4566,
   -3974,  1504,   915, -3974, -3974, -3974,  1056,   -23,  1504, -3974,
   -3974, -3974, -3974, -3974, 16752,  2260, -3974,  1863, -3974, 16752,
    1651, -3974, -3974, -3974, -3974,  2079, -3974, -3974, -3974, -3974,
   -3974, -3974,   -87,  1724, -3974,  1843, -3974, 12450, -3974, -3974,
   -3974, -3974, -3974,  2213,  2467, -3974, -3974, 10985,   241,  4915,
   -3974,  1130,  1890,  1849,   959,   959,   959,   959, -3974, -3974,
   12450, 12553, -3974,  1633, -3974, -3974,  -389, -3974, -3974,  1855,
   -3974,   -43, -3974, -3974,   685, -3974, -3974, -3974, -3974, -3974,
   -3974, -3974, -3974, 11357, -3974, -3974, -3974,  1300, -3974, -3974,
   -3974, -3974, -3974,  2306,    -2, -3974,  2527,  1483,  2448, -3974,
   -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974,
   -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974,
   -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974,
   -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974,
   -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974,
   -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974,
   -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974,
   -3974, -3974, -3974, -3974, -3974,   -88, -3974, -3974, -3974, -3974,
   -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974,
   -3974, -3974, -3974, -3974, -3974, -3974, -3974,  2078, -3974, -3974,
   -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974,
   -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974,
   -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974,
   -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974,   -88,
   -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974,
   -3974, -3974, -3974, -3974, -3974, -3974, 10507, -3974,   -88,   -88,
     -88,  1113, -3974,  1390,   127, -3974, -3974,  2104, -3974, -3974,
    2513,  2421,  2513,  2363,   145, 16752, -3974, -3974,   766,  7651,
   -3974, -3974,   165, 14397,  1113, -3974, -3974,  1955,   161, -3974,
   -3974, 12553, -3974, -3974, -3974, -3974, -3974,  2036,  2015, -3974,
    1453, -3974,  2403,  2403,  1205,  1965,  1675,  1961, -3974,  1162,
   -3974, -3974,  1974, -3974, -3974, -3974, -3974, -3974, -3974, -3974,
    1986, -3974, -3974, -3974, -3974,  2372,  2362, -3974, -3974, -3974,
    2373, -3974, -3974, -3974,  2079,  2539, -3974, -3974,  1504,  2539,
    1504,  1869,   -17,  1967, -3974, -3974,  1726, -3974,  1968, -3974,
   -3974,   862,  1971,  1579, -3974, -3974, 10614, -3974,  2702,   225,
     153, -3974, -3974, -3974,  1635, -3974,   692, 12450, -3974, -3974,
    1104,   349,  1424, 16752, -3974, -3974, -3974,  1504, 12450, -3974,
    2586,  2449,  2458, -3974, -3974, 12553, -3974, -3974, -3974, -3974,
    6726, -3974, -3974, -3974, -3974, -3974,  2708,  2402, -3974, -3974,
   -3974,   413,  2542,  2466,  2542,   -35,   967, -3974,  1990,  2102,
    2153,  1929,  1041, -3974, -3974, -3974, 15362,  1041,  2661,  1635,
    1682,  1682,  1635,     6,  1839,  1635,  2789, -3974,  2264, -3974,
   -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974,   129,
    1118,  2005, -3974,  3761,  1504, -3974,  1970,  1970,  1582,  1651,
   -3974,  1651,  1970,  1651,  1651,  1970,  1651,  1651, -3974,  2661,
    2015,  2015,  2179,  1651, -3974, -3974, -3974,   760, -3974, -3974,
   -3974, -3974,     3, -3974, -3974,   621, -3974, -3974, -3974, -3974,
    2376,    93,    93,   714,  2007,  1676, -3974, -3974, -3974, -3974,
    2756, -3974, -3974, -3974,  2284, -3974, -3974, -3974, -3974,  2284,
     787, -3974,  1635, -3974, -3974, -3974, -3974, -3974,  1635, -3974,
   -3974,  1635, -3974,  1635, -3974, -3974, -3974, -3974, -3974,   234,
   -3974, -3974, -3974,   176, -3974, -3974, -3974, -3974, -3974, -3974,
     -12, -3974, -3974, -3974,  2821, -3974, -3974, -3974, -3974, -3974,
   -3974, -3974,  2415,  2093,   796, -3974,  2701,  1508, -3974, -3974,
   -3974, -3974, -3974,  1676, -3974, -3974, -3974,  1914,  1917, -3974,
    6726,  1676,  2418,  2075,  2077,  2295, -3974, -3974, -3974, -3974,
   -3974,  2349, -3974, -3974, -3974, -3974, -3974,  2015,  2015, -3974,
     830, -3974,  1504,   398,  1521,  2029,   447,  2030, -3974,   474,
    -235,  6726, -3974, -3974,   396,  2031,  2032,  2033,   488, -3974,
    1726, -3974,  2034, -3974,  1504,   499,  2035,  2015,  2499,   134,
   -3974,    34,   -77,   161,  1491,  2039,   509, -3974,  2042,  2288,
     983,   983, -3974, -3974, -3974,  2078,  2180,  2044,   563, -3974,
   -3974,   937,  2824,   667, -3974, -3974,  2182,  2204, -3974,  1301,
    1635, -3974, -3974,  1238, -3974,  2001,   -50, -3974, -3974, -3974,
    2450, -3974, -3974, 12450, -3974, -3974, -3974, -3974, -3974, -3974,
   -3974,   206, -3974, -3974,  6273, -3974, -3974,  4074,   766, -3974,
   -3974, -3974, -3974,  -104, -3974,  1635, -3974,   193,   766, -3974,
   -3974, -3974, -3974,     5,  1635, -3974, -3974, -3974,  4915, -3974,
   -3974,  1130, -3974, -3974,  1726,  1504, -3974, -3974, -3974, -3974,
   -3974, -3974,  2509,   134,  2512,  2413,  1989, -3974,  4535,  2301,
   -3974, -3974, -3974, -3974, -3974, -3974,  1947,  1300, -3974, -3974,
   -3974, -3974, -3974,  1739, -3974, -3974, -3974, -3974, -3974, -3974,
   -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974,
   -3974, -3974,  1758, -3974,   119, -3974,  1970, -3974, -3974, -3974,
    2624, -3974,  1739, -3974, -3974, -3974, -3974, -3974, -3974, -3974,
    2214,  1739, -3974, -3974, -3974,  1504, -3974, -3974,  1504, -3974,
    1504,  1504,  1504, -3974,  2062, -3974, -3974,  1726, -3974,  2795,
   -3974, -3974, -3974,   540, -3974,  1390, 10376, -3974, -3974, -3974,
    1504, -3974,  1504,   141,   356,  2652, -3974, -3974,   848, -3974,
   -3974, -3974, -3974, 12450, -3974, -3974, -3974, -3974, -3974, -3974,
   -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974,
   -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974,
   -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974,
   -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974,
   -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974,
   -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974,
   -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974,
   -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974,
   -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974,
   -3974, -3974, -3974, -3974, -3974, -3974, -3974,   161,   161,   134,
    2526,  1869,  2079,  1675,  2491, 13927,    -1,  5142,  1504,   563,
    2063, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974,
   -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974,
   -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974,   413,
    2373,  1504, -3974, -3974, -3974, -3974,  1504,   988,   843, -3974,
    1978, -3974,  1979, -3974,   413,   218,  6726,  2328,  1389,   716,
   -3974,   830,  2332, -3974, -3974, -3974, 12450,  1579,  1579,  1579,
    1579,  1579,  1579,  1579,  1579,   225, -3974,   945,   -50,   911,
   -3974,  2122,  2122, -3974, -3974, -3974, 16752, 16122,  1424,  -247,
   -3974,  2708, -3974,  1504,  1504,   134,  2536,  2078,  2076, -3974,
    2876,  1504,   936, -3974, -3974,  2079,  2880, -3974, -3974,  1504,
   -3974,  2216,  2664, -3974, -3974, -3974,  2086,  2194,  2206,  1158,
   -3974,  2018, -3974,  2557,  1504,   -47, -3974, -3974,  -354,  -320,
    -316,   625,   642, -3974,  2010, -3974, -3974, -3974, -3974, -3974,
   -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974,
   -3974,  4026, -3974,  2227,  1504, -3974,  1180, -3974,  2459, -3974,
   -3974,  1504,  2882,  2508, -3974, -3974, -3974,   -91,  1739, -3974,
   -3974, -3974,  1635, -3974, -3974, 15531, -3974, -3974, -3974, -3974,
   -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974,
   -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974,
     999,   827,  1201,  2567, -3974,  2078,  1669,  1158,  1158,  2011,
     833,   882,  2078,  2027,  1635, -3974, -3974, -3974,   -51,  1753,
   -3974, -3974, -3974, -3974,  1839,  2418,  1986,  1739, -3974, -3974,
   -3974,  2195,  2418,  1635,  2817,   227,   -30,  1428,  1869, -3974,
   -3974, -3974,  1635,  1635, -3974, -3974, -3974, -3974, -3974, -3974,
   -3974, -3974,  2161, -3974,  2465, -3974, -3974, -3974, -3974, -3974,
   -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974,  2203,  2874,
    1158, -3974,  1651,  1651, -3974, -3974,  1970, -3974,  1651,  1651,
    1651,  -294,  1651, -3974,  1651,   760, -3974,  1809,  1635,  1635,
    2019, -3974,    85, -3974,   597,  -303,    94, -3974, -3974, -3974,
   -3974, -3974, -3974, -3974, -3974,  1822,  1504,  1699, -3974, -3974,
   -3974,   681,   681, -3974, -3974, -3974, -3974,   681,   681,   787,
     681, -3974, -3974, -3974,  1635,   848, -3974,   848, -3974,   787,
    2491,  1635,  2116,   749,  2478,  2478, -3974, -3974, -3974,  1676,
   -3974, -3974, -3974, -3974, -3974, -3974,   159, -3974,  1651,  1651,
   -3974, -3974, -3974,  1930, 15455,  1779, 16497,  1779, -3974,  2118,
   -3974, -3974,  1504,  1779,  1779,  1779,  6726, -3974,  1930,   856,
    1779,   -62, -3974, -3974, -3974,  2393,  2197,    62,  2587,   134,
   16641,  1779,  1779,   493, -3974,  2180, -3974,   161, -3974, -3974,
   -3974,  2403, -3974, -3974, -3974, -3974, -3974,  2428, -3974, -3974,
   -3974,   315, -3974, -3974, 16752, -3974, -3974, -3974, -3974,  2400,
    2537,   904,  1890,   444, -3974, -3974, -3974, -3974, -3974, -3974,
   -3974, -3974, -3974, -3974,   681, -3974, -3974,   681, -3974, -3974,
   -3974, -3974,  -101,  2707,   681,   848,   848,   681, -3974, -3974,
   -3974,  2899,  2899,   161, -3974,   161, -3974, -3974, -3974, -3974,
   -3974, -3974, -3974, -3974,  2924, -3974,  2143,   -15,  4535, -3974,
   -3974, -3974,  2670, -3974, -3974, -3974,  1504, -3974, -3974, -3974,
    2716,  2064,  1465,   343,  2066, -3974, -3974, -3974, -3974, -3974,
     493,  6726, -3974, -3974,  2870, -3974,  1938, -3974, -3974, 10376,
   -3974,  1938,  2622,  2623,  2792,    17, -3974, -3974,  2236, -3974,
   -3974,  2418,   -33, -3974, -3974, -3974, 12450,   161, -3974,   161,
     220,  1651, -3974,  1504, -3974, -3974,     9, -3974, -3974, -3974,
    2950, -3974,  2619, -3974, -3974, -3974,   302,   120, -3974, -3974,
   -3974, -3974,  2427,  2729,   -50, -3974,  1380, -3974, -3974,  5624,
   -3974,  1979,  2308, -3974, -3974, -3974, -3974, -3974, -3974, -3974,
   -3974, -3974, -3974, -3974, -3974, 12450, -3974, -3974, -3974, -3974,
   -3974, -3974, -3974, -3974, -3974, -3974,     7, -3974,  1504, -3974,
   -3974, -3974,  1011, -3974, -3974, -3974, 16752, -3974, 12450, 12450,
    1521, -3974,  1447,  -208,  2375, 12123,  1930,  1930, -3974,   161,
    2152, -3974,   493, -3974,  2407, -3974,  6726, -3974,  2771,  2181,
   -3974,   843, -3974,   854,  2792,  2477,  2090,  6726,  2887,   967,
   -3974,  2163,  2271, -3974,  2844,  1635, -3974,  2178, -3974, -3974,
   -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974,
   -3974, -3974,  2060,  4500, -3974, -3974,  2156, -3974,  2900,  2135,
    2176,   -89, -3974, -3974, -3974,  1504, -3974, -3974, -3974, -3974,
    2080,  9993, -3974,  2957, -3974,  2708, -3974,  2222,  2272,  2272,
    2083, -3974,  2844, -3974,  2183,  2663, -3974, -3974, -3974,  2011,
   -3974, -3974, -3974, -3974, -3974, -3974,  2551,    45,  2491,   480,
    1635, -3974, -3974,  1635, -3974,  1635,  1635,  2418,  1235, -3974,
    1635,  1200,  1635,  1635,  1635,  1635, -3974,  2365, -3974,   220,
     882,  2078,  1635,  1839,  2447, -3974,  2277,   882,  1651,  1651,
    1651,  1651,  1651,  1651, -3974,  2409, -3974, -3974,  2981, -3974,
   -3974, -3974, -3974, -3974, -3974,  1635,  2266,  2451, -3974, -3974,
   -3974,  2814, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974,
   -3974, -3974, -3974, -3974, -3974, -3974, -3974,   904, -3974,  1494,
   -3974, -3974,  1504,   716, -3974, -3974,  2199, -3974, -3974, -3974,
    1635,   730, -3974, -3974, -3974, -3974,   851, -3974, -3974, -3974,
   -3974, -3974, -3974, -3974, -3974, -3974, -3974,  2667, -3974, -3974,
   -3974,  2660, -3974, -3974, -3974, -3974, -3974, -3974,  2665, -3974,
   -3974,  1498, -3974, -3974, -3974, -3974, -3974, -3974, -3974,  1633,
    2804, -3974,  1412, -3974, -3974, -3974, -3974, -3974, -3974, -3974,
   -3974,   766,   766,   766,   766, 12450, -3974,   444, -3974,  6445,
   -3974, -3974, -3974, -3974,  2015, -3974, -3974, -3974, -3974, -3974,
   -3974,  1535,   681,  2546, -3974, -3974, -3974, 14965, -3974, -3974,
   -3974,   691, -3974, -3974, -3974, -3974,  5557, 14965,   134,  2364,
     134,  2366,    69,  4535, -3974, -3974, -3974, -3974, -3974,  2924,
   -3974,   493, -3974, -3974, -3974, -3974,  1465, -3974,  2831, -3974,
   -3974,  1739, -3974,  1938, -3974, -3974,  1938,   493,  2205,  2205,
   -3974,  3006,  2970, -3974, -3974, -3974,  2491, -3974,  2531,  2822,
    -157, -3974, -3974,  2471, -3974, -3974,   134,  2463,  2463,  2472,
   -3974,  1309, -3974,  2781, -3974, -3974, -3974,  1504, 12450,  1970,
    2581,  2625, -3974,   985, -3974, -3974, -3974,  1049, -3974, -3974,
   -3974,  2857,  2528, -3974, -3974, -3974, -3974, -3974, -3974, -3974,
    2583, -3974, -3974, -3974,  2602, -3974, -3974, -3974, -3974, -3974,
   -3974, -3974, -3974,  1521, -3974, -3974, -3974, -3974, -3974, -3974,
   -3974,  2510,  2225,  1635, -3974, -3974, -3974,   851,  2667,   134,
    2188, -3974, -3974,  2876, -3974,  2491,  2792,  2491,  -208,  1550,
   -3974, -3974,  1912, -3974, -3974,  1869,  2438, -3974,   129, -3974,
     967, -3974,   967, -3974,  2238, -3974, -3974, -3974, -3974, -3974,
   -3974, -3974, -3974, -3974,  2252, -3974,  2844, -3974,  2871,  1504,
   -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974,    32,
   -3974, -3974,  2605, -3974, -3974, -3974, -3974, -3974, -3974, -3974,
   -3974, -3974, -3974, -3974, -3974, -3974, -3974,  2610, -3974, -3974,
    2491,  2722,  2261,  2078,  2261,  2330,  2162, -3974, -3974, -3974,
   -3974, -3974, -3974,  2620, -3974,   904,   128, -3974, -3974,  2817,
   -3974, -3974, -3974,  2844,  2078,   155,  1504, -3974, -3974, -3974,
   -3974,  2078, -3974,  1757, -3974, -3974, -3974, -3974, -3974, -3974,
   -3974, -3974,   920,   920,   664,  1504,  1635, -3974, -3974,  2101,
   -3974,  1504, -3974, -3974,   882, -3974,  1504,  1504, -3974, -3974,
   -3974, -3974,  2967,  1582,  1504,  1635,  1504,   -31, -3974,   882,
    2273,  1651, -3974,  2078, -3974,   760,    23,   318,  1307,  1635,
   -3974, -3974,  2166,  2265, -3974, -3974, -3974, -3974, -3974, -3974,
   -3974, -3974, -3974,   716, -3974, -3974,  2689,  2877, -3974,  1989,
   -3974, -3974, -3974,  2899, 12450, 12450, 12450, 12450, -3974, -3974,
   -3974, -3974, -3974,  1504, -3974,   766, -3974, -3974, -3974, -3974,
    2276,  1105, -3974, -3974,   161, -3974,   161,  4190, -3974,  1232,
     164, -3974, -3974,   324, -3974, -3974, -3974, -3974, -3974, -3974,
    3001,  2890, -3974, -3974,  1938, -3974, 12450, 12450, -3974, -3974,
    1504,  2531,  2015,  2307, -3974,  2481,  1651,  1012,  1504, -3974,
   -3974, -3974, -3974, -3974, -3974,   147, -3974, -3974, -3974, -3974,
   -3974,  2575, -3974,  -191, -3974, -3974,  2579,  1208, -3974, -3974,
   -3974,  3012,  2632, -3974,  1635,  1738, -3974, -3974,   232,  2635,
    2637, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974,
   -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974,  1504,
   -3974,  2877, -3974, -3974, -3974,  2283, -3974,  1504, -3974,  1504,
   -3974, -3974, -3974, -3974, -3974,  2564,  2830, -3974, -3974, -3974,
   -3974,   181,   605,  2497, -3974, -3974, -3974, -3974, -3974,   132,
     527, -3974, -3974,  2015, -3974, -3974,  2844, -3974, -3974, -3974,
   -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974,  2294,
    2200,  2078,  2297, -3974,  2911, -3974,  2912,  1635, -3974, -3974,
   -3974, -3974,  2351, -3974, -3974, -3974, -3974, -3974, -3974, -3974,
   -3974, -3974,  1504,    82,  2967,    65, -3974, -3974, -3974, -3974,
   -3974, -3974, -3974, -3974, -3974,  1504, -3974, -3974, -3974, -3974,
    2772, -3974, -3974, -3974, -3974,  3106, -3974, -3974, -3974, -3974,
   -3974, -3974, -3974,   201,   541, -3974, -3974, -3974, -3974, -3974,
      80,  -325, -3974, -3974, -3974,  1504,  1302,  1635, -3974,   679,
    1669,  2313,   882, -3974, -3974,  2627,  3101, -3974, -3974, -3974,
    1343,   693, -3974, -3974, -3974, -3974,   716,  2689,   851,   -65,
   14965, -3974, -3974, -3974, -3974, -3974,  1504,   766, -3974, -3974,
     851,   851, -3974, -3974, 12450, -3974, -3974, -3974, -3974, -3974,
   -3974, -3974, 12450, -3974, -3974, -3974, -3974, -3974,  2307,  1504,
    1504,  1055,  1635,  1651,  1651,  2518, -3974, -3974, -3974,  2562,
   -3974, -3974, -3974, -3974, -3974, -3974,  2452, -3974, -3974, -3974,
   -3974,  5690,  2278, -3974,  1504, -3974, -3974,  2427,  2729, -3974,
   -3974, -3974, -3974,   851,  1135, -3974, -3974, -3974, -3974, -3974,
   -3974, -3974, -3974, -3974,  2640,   181, -3974,    91,  2226, -3974,
   -3974,  1635, -3974,  2515,  -123, -3974,  2419, -3974,  2322,  1504,
   -3974, -3974, -3974, -3974,  2078,  2751,  1970,  1970,  1470,  2078,
   -3974,   882,   882, -3974, -3974, -3974, -3974,  2815, -3974, -3974,
    2183,  2078,  -325,  1504,  1751, -3974, -3974, -3974, -3974,  1504,
   -3974, -3974, -3974, -3974, -3974,  1635, -3974,  2568, -3974, -3974,
   -3974,  -345,  -166,  -345, -3974,  1669,  1635,  1635,  1669,   882,
   -3974,  1635,  1635, -3974, -3974,  2671, -3974,   136,  2339,   716,
   -3974,   -45,   133, -3974, 12450, -3974, -3974, -3974, -3974, -3974,
   -3974, -3974, -3974,  1504, -3974,  1635,  1504, -3974, -3974, -3974,
   -3974, -3974,  2612,  2865,   563,  1651,  1635, -3974, -3974, -3974,
    6726, -3974, -3974, -3974, -3974,  5624, -3974, -3974, -3974, -3974,
   -3974, -3974, -3974, -3974, -3974, -3974, -3974,  2008, -3974, -3974,
   -3974, -3974,  1752,  2541,  2964,  1635,  2666, -3974, -3974,  6726,
   -3974, -3974, -3974,   563,   -25,  1643, -3974, 13064, -3974, -3974,
    -123,  2340,  2346,  1635, -3974, -3974,  1470,  1504,  1504,  2708,
   -3974,  2773, -3974,   356,  2418,   463, -3974, -3974, -3974,  3123,
    2967, -3974,   -42, -3974, -3974, -3974, -3974, -3974,   -42, -3974,
    1504,  1504,  1216, -3974, -3974,  2475, -3974,  2693, -3974, -3974,
    1669,  1669, -3974, -3974, -3974, -3974,  2426,   252,   716, -3974,
   -3974, -3974, -3974, -3974,  2628,    44,  2015, -3974, -3974, -3974,
   -3974, -3974,  1504, -3974,  1055, -3974,   432, -3974, -3974, -3974,
   -3974, -3974, -3974, -3974, -3974,   563, -3974,  1726, -3974, -3974,
    2511,  2420,  2353,  1752, -3974,    77,  1970,  6726,  2015,  2333,
   -3974, -3974, -3974, -3974,  -233, -3974,  2367,  1828,  2368, -3974,
   -3974,   132, -3974,  1470, -3974, -3974, -3974, -3974,  1635,   356,
     882,  2977,  2568,   995,  1635, -3974, -3974, -3974, -3974, -3974,
    2621, -3974, -3974,    23,   318, -3974, -3974,  1635,  2989, -3974,
   -3974, -3974, -3974, -3974, -3974, -3974, -3974,  1504, -3974, -3974,
   -3974, -3974, -3974,  1504, -3974,  1913,  1651,  2369, -3974, -3974,
   -3974, -3974,   142,  2691,  1504,  2015,  2411,  1231,   433,  1518,
     190, -3974, -3974,  2274, -3974, -3974, -3974,  2019, -3974, -3974,
   -3974, -3974, -3974,  1970, -3974,  2424, -3974,  2969,  1504,  1434,
    2694,  3174,   787,  2382, -3974, -3974, -3974, -3974,  2591, -3974,
    1651,  1520,   142, -3974, -3974,  1635, -3974,  1504, -3974,  1635,
    1504,   260, -3974, -3974, -3974, -3974,  2655,  2917,    49,  2788,
    2790,  3008,  2778, -3974,   433, -3974,   641,    21,  2396,   108,
   15966,   848, -3974, -3974, -3974,  2019, -3974,  1504,  2311, -3974,
   -3974, -3974,  1704, -3974, -3974,  -284,  1635,  1635, -3974, -3974,
   -3974,  1970, -3974, -3974, -3974,  2662,  1504, -3974,  6726, -3974,
     313,  1504, -3974,  1635,  1247,    30,   260, -3974, -3974,  1231,
   -3974, -3974, -3974, -3974, -3974, -3974,  1635,  2668,  1504,  1635,
    1635,  1635,  1635, -3974,  2799,    40,  2800, -3974,  2785, -3974,
    1133, -3974, -3974,  1504,  3056,  1557,  2807,    55,  2808,  2793,
   -3974,   927, -3974, -3974,  1504,  2434, -3974,  1158,  1158,  2000,
   -3974, -3974, -3974, -3974,  2878,  3112,   -70, -3974,  1635, -3974,
   -3974, -3974, -3974,   709, -3974,  2284,  2284,  1635,   766,   193,
    1635,  2362, -3974, -3974, -3974, -3974,  2284,   766, -3974,  3003,
    2078, -3974,  3126, -3974, -3974,   766, -3974, -3974,  1504, -3974,
   -3974,  1504, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974,
   -3974, -3974, -3974,  2881,  2284, -3974, -3974, -3974,  7651, -3974,
   -3974,   106,  -284, -3974, -3974,  1669,  1669,   908, -3974, -3974,
   -3974, -3974, -3974,  1944, -3974, -3974, -3974,  1944,  1944, -3974,
   -3974, -3974, -3974, -3974, -3974,  2673, -3974, -3974, -3974,  1504,
    2078, -3974,  1504,  1504,  1504,  1504,  1635,  1635,  1635,  1635,
    1635, -3974,  1504,  1635,  1635,  1635,  1635,  1635,  1635,  1635,
    1635,  1635,  1635,  1635, -3974,  1504,  1635, -3974, -3974,  1158,
    1158,   755,  2798, -3974,  1635, -3974, -3974,  1504,  1504, -3974,
   -3974,   681, -3974, -3974, -3974,  1635, -3974,  1635,   681,   848,
   -3974, -3974,   681, -3974, -3974,   681,  2261,  1635,   848, -3974,
   -3974, -3974, -3974, -3974,  7651,  1492, -3974, -3974, -3974, -3974,
   -3974, -3974, -3974, -3974, -3974, -3974, -3974,  1651, -3974, -3974,
   -3974, -3974,    30, -3974,  2261, -3974, -3974, -3974, -3974,  1504,
    1504,  1504,  1504,  1504,  1504,  1504,  1504,  1504,  1504,  1504,
    1504,  1504,  1504,  1504,  1504,  1504,  1504,  1504, -3974, -3974,
   -3974, -3974, -3974,  1094, -3974, -3974, -3974, 13699, -3974,   904,
    1504, -3974, -3974,   883,   883, -3974, -3974, -3974, -3974, -3974,
     215, -3974,   904, -3974, -3974, 16296, -3974, -3974,  2773, -3974,
   -3974, -3974, -3974, -3974,  1504, -3974, -3974, -3974, -3974, -3974,
   -3974, -3974, -3974, -3974, -3974, -3974,  1504, -3974,  1778,   869,
     891, -3974, -3974,   755,  2422, -3974, -3974, -3974, -3974, -3974,
   -3974, -3974, -3974, -3974, -3974, -3974,   681, -3974, -3974,   681,
   -3974, -3974, -3974, -3974, -3974, -3974, -3974,  1504,  1504,  2084,
    1635,  1635,  2017,  1635, -3974, -3974, -3974, -3974, -3974, -3974,
   -3974,  1985, -3974, -3974, -3974, -3974,  1504, -3974, -3974, -3974,
    1635,   755,   755, -3974,  2873,  1635,  1635,   755, 14748,  1504,
     755, -3974, -3974, -3974,   755,   755, -3974, -3974, -3974, -3974,
    2847,  1903,  2789,  1635,  2078, -3974,  1635,  2015, -3974,   427,
    1504, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974,
   -3974, -3974, -3974, -3974,   157, -3974, -3974,   888, -3974,  -134,
   -3974, -3974, -3974, -3974,  1903,  1504, -3974, -3974, -3974, -3974,
   -3974, -3974, -3974,  1158, -3974,  1517,  2297, 16974, 16974,  1818,
    2901,  2736,  2736,  2041,  5624, -3974, -3974,   888,    72, -3974,
   -3974, -3974,  2078,    72, -3974,   496,  1504, -3974, -3974, -3974,
   -3974, -3974, -3974,  2078, -3974,  2261,  1930, 16899, -3974, -3974,
    1694,  1803, -3974, -3974,  1807, -3974, -3974, -3974, -3974,  1156,
    1156, -3974, -3974, -3974, -3974, 16974, -3974,   963,   963,  2736,
    2736, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974,  1158,
   -3974,  1504, -3974,  2912, -3974,  1970,  1504, -3974, -3974, -3974,
   -3974, -3974, -3974, -3974, -3974, -3974,   -69,   122,  3166, -3974,
   -3974, -3974,   963, -3974, -3974,  2674,  2675, -3974, -3974,  2485,
     -66, -3974,  2685, -3974,  2685, -3974,  2685, -3974,  2685, 16974,
   -3974, -3974, -3974,  2078, -3974, -3974, -3974, -3974,  2678, -3974,
   -3974, -3974, -3974, -3974, -3974, -3974
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       2,     0,    12,     1,     3,     5,    27,     4,    53,    31,
      30,    27,     8,    10,    11,     0,    28,     0,     0,    13,
      76,     9,    35,    32,    53,    53,     0,    56,     0,    24,
      79,     0,     0,    16,     0,    29,  3036,    54,    62,     0,
     430,     0,   245,    81,     0,     0,    20,    14,    17,    18,
      22,    15,  3037,     0,     0,    64,    77,     0,    25,   433,
     431,     0,     0,    75,   247,     0,     0,     0,  3103,  3036,
    3036,  3036,     0,     0,     0,     0,  3036,     0,     0,  2996,
     242,   159,    78,    82,    83,    85,    86,    89,    87,    88,
       0,   142,   145,   146,   147,   208,   148,   150,   149,   151,
     152,   153,   154,   155,   156,   157,   158,    38,    37,    41,
      41,     0,    19,     0,    58,    59,    60,    61,    57,  3067,
    3036,    69,     0,  1336,     0,   435,    80,     0,     0,   249,
    2668,  2667,   170,   227,  3036,  3104,  3036,     0,     0,     0,
    3036,  3036,    96,   126,     0,    90,   140,  2997,     0,     0,
    3036,  3036,    84,   144,   141,   143,     0,   207,     0,     0,
      33,    40,    39,     0,     0,  3068,  3036,     0,     0,     0,
     432,     0,    26,  1331,  1384,     0,   428,   246,   248,   387,
     176,  3017,  3036,     0,     0,     0,  2774,   238,  2656,   236,
     241,     0,     0,    98,   128,   240,    92,   574,   218,   219,
    3036,  2669,   210,   211,  3041,   214,     0,  2783,  2204,  2203,
     160,   164,   167,  3082,  3036,     0,   209,    42,    36,  3036,
      21,    23,     0,    66,    68,    67,    65,  3036,    55,  1332,
       0,     0,   434,   441,   442,   555,   436,   558,     0,     0,
    2871,   250,   244,   390,   171,   172,   174,     0,     0,   228,
     229,   239,   234,  3155,  3156,     0,   232,     0,  2995,  3110,
    3093,  3036,   124,    97,  3092,   102,   104,   105,   106,   107,
    3092,     0,  2998,     0,     0,   127,     0,   131,    91,    94,
     220,     0,   212,  3043,  3042,   215,     0,   243,  3082,  3085,
    3084,     0,     0,   161,   165,     0,     0,  2878,  2879,  2880,
    2881,  2882,  2883,  2884,  2885,    63,     0,  1601,     0,  1453,
    1566,  1576,  1584,  1591,  1647,  1653,  1673,  1668,  1674,  1683,
    1679,  1691,  1701,  1832,  1841,  1843,  1849,  1882,  1894,  1905,
    1908,  1911,  1903,  1918,  1929,  1951,  1955,  1959,     0,  2015,
    2017,  2023,  2027,     0,  2033,  2067,  2094,  2096,  2101,  2131,
    2132,  2148,  2151,  2152,  2157,  2166,  2167,  2180,  2193,  2232,
    2250,     0,  2287,  2303,  2312,  2314,  1366,  2318,  2321,  2324,
    2341,  2381,     0,  1386,  1387,  1388,  1389,  1390,  1391,  1392,
    1393,  1395,  1394,  1396,  1398,  1397,  1399,  1400,  1401,  1402,
    1403,  1404,  1405,  1406,  1407,  1408,  1409,  1410,  1411,  1412,
    1413,  1414,  1415,  1416,  1417,  1418,  1419,  1420,  1421,  1422,
    1423,  1424,  1425,  1426,  1427,  1428,  1429,  1430,  1431,  1432,
    1433,  1434,  1435,  1436,  1437,  1438,  1439,  1440,  1441,  1442,
    1443,  1444,  1445,  1446,  1447,  1448,  1449,  1450,  1385,     0,
     502,   437,  2854,     0,  2638,   438,   389,     0,  2872,     0,
       0,   417,  3077,   400,   388,     0,   393,   395,   396,   408,
     397,   398,  3036,  3036,   177,   178,  2792,  2788,  2793,  2791,
    2789,  2794,  2790,   230,   223,   225,  3135,   233,     0,  2775,
     237,  3111,  3036,     0,   101,   103,    99,   125,  3092,  3036,
    2999,   109,     0,     0,   138,    41,     0,    41,     0,   129,
     132,     0,     0,     0,  2803,  2799,  2804,  2802,  2800,  2805,
    2801,   221,  2795,  2797,  2784,   213,   216,     0,  3083,   168,
     162,   163,   166,    34,    45,    48,    52,    51,  3092,    46,
      47,    71,    72,    73,    74,    70,  1605,  1608,  1607,  1603,
    1604,  1606,  1595,  1602,  2896,  2897,  2898,  2899,  2900,  2901,
    2902,  2903,  2904,  2905,  2906,  2907,  2908,  2894,  2948,  2949,
    2950,  2951,  2952,  2953,  2954,  2955,  2956,  2957,  2958,  2959,
    2960,  2961,  2962,  2963,  2964,  2965,  2966,  2967,  2968,  2969,
    2970,  2909,  2910,  2912,  2911,  2913,  2914,  2915,  2916,  2917,
    2918,  2919,  2921,  2920,  2922,  2923,  2924,  2925,  2926,  2927,
    2928,  2929,  2930,  2931,  2932,  2933,  2934,  2935,  2936,  2937,
    2938,  2939,  2940,  2941,  2942,  2892,  2943,  2944,  2945,  2946,
    2947,  1452,  2893,  2895,  1484,     0,     0,     0,  1601,     0,
       0,     0,  1676,     0,     0,  1696,  1744,     0,  1696,     0,
    1601,  2560,  1886,  1896,     0,     0,  3126,  1632,  1631,     0,
    1917,     0,     0,     0,     0,     0,  1998,  2010,     0,     0,
       0,     0,  1451,  2038,  2547,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2283,  2286,  2270,
    2284,  2552,  2285,  2272,  2281,  2273,  2282,  2760,  2764,  2290,
       0,  2313,  2311,     0,  1384,     0,     0,     0,     0,     0,
    2397,  2449,     0,     0,   805,     0,     0,     0,   560,     0,
       0,   564,   565,   563,     0,   440,   443,  2873,   251,  3077,
    3126,  3126,  3075,  3077,  3077,  3126,  3077,  3077,  3126,  3077,
    3077,  3014,  3078,  3012,     0,   401,   402,   403,  2977,     0,
     391,   394,     0,     0,     0,   224,   222,     0,     0,     0,
     118,   100,  2776,   110,   133,   134,   137,   139,   135,   136,
     130,    93,     0,  2796,     0,   217,   169,    50,    44,    49,
    1596,  1338,  1483,  2774,  1564,  1455,  1496,     0,  3065,  1482,
    3075,  2830,  2828,  2831,     0,  2824,  2832,     0,     0,  2838,
    3172,  3173,     0,  2621,  2623,     0,     0,     0,  2827,  2693,
       0,  2625,  2829,  2833,  2834,     0,     0,  2826,  2838,  2825,
    1574,  2685,  1572,  2677,  2680,     0,  2679,  2683,  2684,  2835,
       0,     0,  2694,     0,     0,     0,  1577,     0,  2610,  2613,
    2615,  2618,  2703,     0,  2620,  2860,  2701,  2702,  2653,  1585,
    1586,     0,  2649,  2651,  2650,  1645,  2547,  2732,  1652,  1648,
    1649,  1651,  2731,  1664,  1654,  1655,  1656,  1659,  3075,  1671,
    2768,     0,  2627,  2874,  2672,  2767,  2772,  2673,  1677,  1675,
       0,  1689,  3096,  3002,  1680,  2765,  1682,  3120,     0,  1698,
    1700,  1692,     0,  1741,  1775,  1774,  2799,  2990,  1721,  1773,
    1766,  1772,  1765,  1830,  2474,  2675,  1716,  1718,  1708,  1709,
    1722,     0,  1710,  1711,  1762,  1712,  1713,  1775,  1715,     0,
    2679,  1839,     0,  1842,     0,     0,  1844,  1856,  1855,  1880,
       0,  1852,  1854,  2559,  3036,  1887,  1883,  1888,  1898,  1902,
    1900,  1903,  1901,  1895,  1906,  1907,  2670,  1909,  1910,  3127,
    1912,  2647,  1904,  2558,  1923,  2557,  1930,  1932,  2640,  1952,
    1953,  1027,  1781,     0,     0,  1956,  1026,  1960,     0,  1962,
    1963,  1964,     0,     0,  2016,  2236,  2752,  2753,  2869,     0,
    2021,     0,  2024,     0,  2031,     0,  2039,  2034,  2035,     0,
    3021,  2068,  2080,     0,  2639,  2095,     0,  2097,  2099,  2129,
    2866,  2146,     0,  2149,  2384,  2630,  2155,  3096,     0,  2164,
    2631,  2384,     0,  2178,  2171,  2633,  2181,  2184,     0,     0,
    2643,  2194,  2195,  2196,  2197,  2198,  2199,  2223,  2200,  2226,
    2201,  2202,     0,     0,  2641,     0,     0,  2751,  2772,  2233,
    2268,  2255,  2274,  2551,     0,  2762,  2763,  2301,     0,     0,
       0,     0,  2309,     0,  2315,  2316,  1372,  1378,  1367,  1368,
    1369,  1371,     0,  2319,     0,  2755,  2322,  3098,  2734,  2339,
    2327,  2733,  2735,  2342,  2343,  2395,  2384,     0,     0,   556,
       0,     0,   808,   607,   610,     0,     0,   561,     0,   571,
     572,   566,   573,   569,  3036,     0,     0,     0,     0,  3076,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  3015,
    3118,  3013,     0,   307,   425,   308,  2978,  3016,   392,   183,
     182,   203,   199,  2776,   204,   188,   202,   200,   180,   181,
     201,   173,   179,   190,   191,   193,   185,   186,   187,   175,
     184,   331,   231,   226,   235,     0,   121,   123,   122,   119,
     120,  2661,     0,  3016,    95,  2798,     0,  1341,  1339,  1360,
    1565,  1454,  1496,  2985,  2987,  1501,  3036,  1480,  1497,  1498,
    1500,  1502,     0,     0,  3004,     0,     0,  3066,     0,     0,
       0,     0,     0,     0,     0,  2822,  2844,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2823,  1575,  1567,     0,
       0,  2678,  2686,  2687,  2688,     0,  2810,     0,     0,  2617,
    2700,     0,  2616,  2862,     0,     0,     0,     0,     0,  2704,
    2705,  2706,  2861,  1580,  1587,  1589,     0,  1646,  1592,  1611,
    1650,     0,  1659,  3168,  3169,  1657,     0,  1660,     0,  1672,
    1669,  3150,  3149,  2628,     0,  2876,  2629,  2770,  2771,     0,
    1686,  1687,  1690,  1684,  3097,  2114,  3003,  1681,  2766,  3121,
    1697,  1699,  1694,  1722,  1776,     0,  2991,     0,  1831,  1702,
    1381,  1381,  1707,  2480,  2477,  1717,  1714,  2676,  3134,     0,
    1743,     0,  1777,     0,  2474,  2474,  2474,  2474,  1840,  1833,
       0,     0,  1845,  1595,  1881,  1850,  2560,  1867,  1851,  1858,
    1859,  1381,  2576,  2574,  3037,  2580,  2577,  2569,  2573,  2571,
    2572,  2568,  2570,  2561,  2562,  2575,  2564,     0,  1889,  1884,
    1899,  1897,  2671,     0,  1915,  1924,  1925,  1934,     0,  1954,
    1780,  1107,  1136,  1104,  1186,  1121,  1120,  1185,  1187,  1209,
    1188,  1172,  1255,  1289,  1205,  1234,  1208,  1231,  1277,  1180,
    1203,  1199,  1206,  1229,  1275,  1106,  1109,  1216,  1213,  1105,
    1212,  1211,  1261,  1133,  1215,  1134,  1290,  1138,  1198,  1227,
    1224,  1251,  1242,  1279,  1078,  1252,  1262,  1225,  1160,  1162,
    1161,  1228,  1263,  1264,  1265,  1266,  1124,  1125,  1254,  1217,
    1219,  1218,  1223,  1158,  1239,  1132,  1241,  1248,  1249,  1140,
    1142,  1253,  1145,  1084,  1237,  3022,  1183,  1159,  1131,  1101,
    1260,  1100,  1103,  1102,  1258,  1250,  1226,  1210,  1271,  1246,
    1247,  1182,  1268,  1269,  1270,  1259,  1274,     0,  1135,  1236,
    1232,  1235,  1267,  1222,  1233,  1141,  1174,  1204,  1200,  1196,
    1207,  1230,  1272,  1273,  1240,  1143,  1144,  1108,  1276,  1137,
    1181,  1139,  1220,  1221,  1257,  1173,  1175,  1077,  1146,  1163,
    1184,  1256,  1288,  1214,  1197,  1238,  1179,  1202,  1201,  3022,
    1037,  1052,  1053,  1054,  1055,  1056,  1057,  1058,  1059,  1060,
    1061,  1062,  1063,  1064,  1065,  1066,  1957,  1294,  3022,  3022,
    3022,  1958,  1298,     0,  1985,  1969,  1961,  1966,  1967,  1968,
    2008,     0,  2008,     0,  2240,     0,  2754,  2870,  3038,  2019,
    1030,  1032,  3044,     0,  2020,  2022,  2018,     0,     0,  2032,
    2028,     0,  2036,  2043,  2040,  2042,  2041,  2044,  3075,  2082,
    2653,  2737,  2549,  2549,     0,  2078,     0,     0,  2736,  2650,
     577,  2738,     0,  2548,  2100,  2098,  2130,  2102,  2867,  2868,
    3096,  2147,  2133,  2135,  2136,     0,     0,  2150,  2156,  2153,
    2104,  2632,  2165,  2158,  2114,  2173,  2179,  2168,     0,  2173,
       0,  3134,  2182,     0,  2720,  2726,  2727,  2728,     0,  2224,
    2227,     0,     0,     0,  2642,  2206,     0,  2205,     0,     0,
    2770,  2269,  2251,  2257,  3036,  2258,  2253,     0,  2271,  2276,
       0,  2605,  2603,     0,  2761,  2302,  2288,     0,  2291,  2292,
    2295,     0,     0,  2310,  2304,     0,  2317,  1373,  1377,  1370,
       0,  3099,  3100,  2323,  2340,  2325,  2992,     0,  2344,  2396,
    2382,  2386,  2447,     0,  2447,  2453,   558,   503,     0,     0,
     811,     0,   666,  2854,   562,   568,  3036,   575,  3000,  3036,
       0,     0,  3036,  3000,  3067,  3036,  2975,   439,     0,   444,
     447,   448,   449,   450,   451,   452,   453,   454,   455,     0,
       0,     0,   252,  3096,   404,  2654,  3077,  3077,     0,   412,
    2634,   405,  3077,   406,   414,  3077,   407,   416,  3119,  3000,
    3075,  3075,     0,     0,   189,   192,   195,     0,  3163,  3165,
    3164,   108,  2778,  2777,   111,     0,  2776,  1599,  1600,  1598,
       0,  1346,  1346,     0,     0,  2461,  2741,  1513,  2739,  2740,
       0,  1499,  3146,  3145,  3071,  3148,  3147,  1511,  1512,  3071,
       0,  1517,  3036,  1531,  1532,  1533,  1519,  1521,  3036,  3005,
    1522,  3036,  1563,  3036,  1524,  1527,  1525,  1526,  1528,     0,
    1557,  1558,  1535,  1537,  3095,  1538,  1561,  1559,  1560,  1529,
    3128,  1540,  1530,  1518,  2973,  1542,  1562,  1545,  1503,  1534,
    1539,  1544,     0,     0,     0,  2713,     0,  1491,  1495,  1494,
    1485,  1481,  1476,  2461,  3142,  3141,  1473,  1464,  1466,  1467,
       0,  2461,  3051,     0,     0,     0,  1509,  1457,  1462,  1461,
    1471,     0,  1479,  1459,  1478,  1460,  2717,  3075,  3075,  2716,
       0,  2690,     0,  2605,  2603,     0,  2605,     0,  2840,  2605,
       0,     0,  2622,  2624,  2605,     0,     0,     0,  2605,  2697,
    2698,  2699,     0,  2626,     0,  2605,     0,  3075,  2768,  2501,
    1573,  2772,  2673,     0,     0,     0,  2605,  2619,  2864,  1580,
    2609,  2608,  2612,  2611,  2614,     0,  1582,     0,     0,  2652,
    1593,     0,  1609,  1666,  1658,  1663,     0,     0,  2674,  2501,
    3036,  2875,  2769,     0,  1688,  3016,  2537,  2115,  2116,  1693,
       0,  1742,  1767,  1751,  2479,  1382,  2482,  2475,  2481,  2476,
    2478,     0,  1731,  1730,  1719,  1726,  1728,     0,  3038,  1818,
    1819,  1820,  1807,     0,  1810,  3036,  1811,  3008,  3038,  1814,
    1815,  1821,  1816,  3128,  3036,  1817,  1824,  1822,  1723,  1724,
    1750,  1745,  1746,  1748,  1749,     0,  1763,  1770,  1705,  1706,
    1703,  1704,     0,  2501,     0,     0,  1615,  1853,     0,  1867,
    1860,  1857,  1862,  1863,  1869,  1861,     0,  2579,  2563,  2590,
    2591,  2592,  2581,  3126,  2598,  2601,  2600,  2602,  2594,  2587,
    2589,  2588,  2593,  2595,  2597,  2599,  2565,  2582,  2583,  2584,
    2585,  2586,  1486,  2646,  1915,  2644,  3077,  1913,  2648,  1926,
    1927,  1381,  3126,  1942,  1943,  1945,  1947,  1948,  1944,  1946,
    1937,  3126,  1933,  3023,  3024,     0,  1036,  1293,     0,  1295,
       0,     0,     0,  1299,     0,  2773,  2722,  2723,  1986,     0,
    1988,  1987,  1989,  1971,  1981,     0,     0,  1965,  2009,  1999,
       0,  2011,     0,  2242,     0,     0,  3039,  3040,     0,  1031,
    3046,  3045,  3047,     0,  1072,  1195,  1156,  1099,  1115,  1166,
    1085,  1189,  1164,  1113,  1081,  1194,  1281,  1191,  1177,  1110,
    1178,  1176,  1147,  1149,  1152,  1111,  1165,  1119,  1168,  1117,
    1157,  1154,  1070,  1169,  1190,  1079,  1123,  1244,  1282,  1093,
    1151,  1087,  1094,  1114,  1086,  1170,  1284,  1171,  1082,  1130,
    1285,  1069,  1076,  1096,  1127,  1128,  1097,  1112,  1073,  1074,
    1129,  1067,  1150,  1095,  1080,  1286,  1153,  1192,  1075,  1280,
    1243,  1287,  1245,  1098,  1116,  1148,  1068,  1193,  1283,  1083,
    1118,  1126,  1092,  1278,  1090,  1091,  1167,  1155,  1088,  1089,
    1122,  1071,  1035,  1038,  1039,  1040,  1041,  1042,  1043,  1044,
    1045,  1046,  1047,  1048,  1049,  1050,  1051,     0,  2025,  2501,
       0,  3134,  2114,     0,  3020,  2080,  2070,     0,     0,     0,
       0,   586,   582,   585,   584,   583,   588,   737,   599,   595,
     597,   598,   600,   596,   601,   738,   589,  2714,   602,   603,
     578,   591,   592,   593,   587,   590,   581,   580,  2081,     0,
    2104,     0,  2385,  2748,  2749,  2750,     0,     0,  2160,  1381,
       0,  2172,     0,  2186,  2386,     0,     0,     0,     0,     0,
    2225,     0,     0,  2229,  2228,  2220,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2208,  2209,  2869,  2537,     0,
    2275,  3114,  3114,  2606,  2607,  2780,     0,     0,     0,  2299,
    2293,  2992,  2294,     0,     0,  2501,     0,  1379,     0,  2993,
    2855,     0,  2299,  2391,  2390,  2114,  2971,  2448,  2398,     0,
    2450,  2455,     0,   557,   505,   806,     0,     0,   941,  3041,
     608,     0,   667,     0,     0,     0,   792,   687,  3105,  3105,
    3105,  3105,  3105,   688,  3130,   689,   690,   691,   693,   694,
     695,   696,   698,   697,   700,   733,   731,   732,   734,   735,
     699,   705,   701,  3101,     0,   736,   760,   702,   677,   703,
     704,     0,  2982,  3108,   716,   717,   715,   788,  3126,   719,
     720,   718,  3036,   675,   567,  3036,   631,   633,   636,   634,
     635,   637,   639,   638,   653,   640,   642,   641,   683,   692,
     643,   644,   645,   646,   647,   648,   649,   650,   651,   652,
       0,     0,  2982,     0,  3001,     0,     0,  3041,  3041,     0,
       0,     0,     0,     0,  3036,   498,  2976,   499,     0,     0,
     500,   445,   446,   254,  3067,  3051,  3096,  3126,  3153,  3154,
     352,     0,  3051,  3036,  2994,  3051,   354,     0,  3134,   335,
     253,   334,  3036,  3036,   256,   257,   262,   267,   264,   321,
     265,   268,     0,   269,     0,   259,   351,   260,   261,   266,
     263,   258,   270,   271,   272,   273,   274,   275,     0,  2988,
    3041,  2655,     0,     0,  3174,  3175,  3077,  2635,     0,     0,
       0,     0,     0,   426,   399,     0,   194,     0,  3036,  3036,
     112,  1597,  1346,  1343,  1349,     0,  1346,  1361,  1362,  1333,
    2467,  2468,  2472,  2473,  1456,  2469,  1553,  2464,  1381,  1516,
    3072,     0,     0,  2785,  1504,  2742,  2743,     0,     0,     0,
       0,  1520,  1556,  1543,  3036,  2553,  3129,  2553,  2974,     0,
    3020,  3036,     0,     0,     0,     0,  1477,  1463,  1465,  2461,
    1474,  3052,  1468,  1469,  1470,  1510,  2984,  1472,     0,     0,
    2719,  2689,  2718,  2874,     0,  2835,     0,  2835,  2839,     0,
    2814,  2845,     0,  2835,  2835,  2835,     0,  2816,  2874,     0,
    2835,     0,  1381,  1381,  1568,  2507,  2504,  2770,  2771,  2501,
       0,  2835,  2835,     0,  2863,  1582,  1581,     0,  1578,  1590,
    1588,  2549,  1613,  1614,  1610,  1612,  1665,     0,  1662,  1661,
    1670,     0,  1678,  2119,     0,  1381,  1381,  1685,  2538,  2544,
    2541,     0,  1777,  1753,  1384,  1739,  1740,  1737,  1736,  1738,
    1735,  1727,  1729,  1732,     0,  1808,  1809,     0,  1303,  1305,
    1812,  1813,     0,     0,     0,  2553,  2553,     0,  1725,  1747,
    1778,  3134,  3134,     0,  1834,     0,  1848,  1846,  1616,  1847,
    1877,  1874,  1876,  1875,  1868,  1871,  1878,  1381,     0,  2567,
    2566,  2596,  3010,  1487,  1914,  2645,     0,  1381,  1928,  1919,
    1922,     0,     0,  1949,     0,  1297,  1296,  1302,  1301,  1300,
       0,     0,  1982,  1984,     0,  1977,  1991,  1978,  1979,  1970,
    1973,  1991,     0,  2726,  2555,  2013,  2243,  2234,     0,   778,
     779,  3051,  3025,  1034,  1292,  1291,  1033,  2026,  2029,     0,
       0,     0,   579,     0,  2069,  1381,     0,  2087,  2083,  2088,
    2084,  2089,     0,  2079,   594,  2086,  2106,  2137,  2105,  1381,
    1381,  2154,  2526,     0,  2537,  2161,     0,  2174,  2560,     0,
    2169,  2175,  2191,  2190,  2189,  2188,  2187,  2207,  2230,  2745,
    2231,  2744,  2746,  2747,  2219,     0,  2222,  2211,  2212,  2213,
    2217,  2214,  2218,  2215,  2216,  2210,  2870,  2267,     0,  2264,
    2265,  2259,     0,  2252,  3171,  3170,     0,  3115,  2279,  2279,
    2604,  2781,     0,  2510,     0,     0,  2874,  2874,  2305,     0,
       0,  1380,     0,  2856,  2328,  2329,     0,  2332,  2335,  2337,
    2333,  2160,  2972,     0,  2555,     0,  2457,     0,   504,   558,
     809,     0,     0,   429,     0,  3036,   668,   605,   801,   802,
    3106,   730,   729,   722,   721,   728,   727,   726,   725,   724,
     723,  3131,     0,     0,  3102,   786,   656,  2758,   764,     0,
     756,   679,   676,   654,  2983,     0,  3109,   789,   790,   787,
       0,     0,   632,   664,   803,  2992,   669,   661,  2886,  2886,
       0,   609,     0,   576,   467,   495,  3166,  3167,  2664,   476,
    2662,  3158,  3157,   469,  2666,  2665,  3061,  2996,  3020,     0,
    3036,   473,   472,  3036,   501,  3036,  3036,  3051,   303,   355,
    3036,  3096,  3036,  3036,  3036,  3036,   374,  2979,   375,     0,
       0,     0,  3036,  3067,   322,  2989,     0,     0,   409,   410,
       0,   413,   415,   418,   419,   422,   427,   424,   196,   197,
    2779,  2776,  2776,   113,  1344,  3036,     0,  1358,  1354,  1347,
    1348,  1363,  2462,  2470,  1381,  1554,  1555,  2756,  2463,  2465,
    2471,  1514,  1515,  1548,  1546,  1523,  1547,     0,  1550,     0,
    1549,  1551,     0,     0,  1490,  1489,     0,  1493,  1492,  1475,
    3036,  1458,  1505,  1507,  2691,  2692,  2501,  2851,  2820,  2853,
    2821,  2815,  2849,  2817,  2818,  2819,  2847,  2888,  2842,  2843,
    2813,  2674,  2509,  2506,  2502,  2508,  2503,  2505,  2769,  1569,
    2836,     0,  2811,  2812,  2865,  2729,  2730,  1579,  1583,  1595,
       0,  2877,     0,  2543,  2546,  2539,  2545,  2540,  2542,  1695,
    1768,  3038,  3038,  3038,  3038,     0,  1752,  1754,  1755,     0,
    1827,  1825,  1304,  1306,  3075,  1826,  1829,  1828,  1823,  1796,
    1793,  3048,     0,  2977,  1792,  1795,  1786,  1764,  1782,  1788,
    1789,  1799,  1790,  1784,  1803,  1804,     0,  1771,  2501,  2627,
    2501,  2627,  1622,     0,  2560,  1873,  1865,  1866,  1864,  1870,
    3011,     0,  1916,  1921,  1926,  1935,  1938,  1939,  3006,  3123,
    1931,  3126,  1936,  1991,  2724,  2725,  1991,     0,  3032,  3032,
    1976,  1992,  1993,  1974,  1980,  1975,  3020,  2000,  2419,     0,
    2244,   322,  2238,     0,  3026,  2241,  2501,  3086,  3086,     0,
    2045,  2046,  2550,  2074,  2076,  2077,  2073,     0,     0,  3077,
       0,  2125,  2107,  2120,  2113,  2109,  2122,     0,  1381,  1381,
    2134,  2143,  2140,  2525,  2528,  2519,  2527,  2520,  2159,  2162,
       0,  1381,  1381,  2176,  3053,  2183,  2221,  2266,  2256,  2260,
    2261,  2262,  2263,  2254,  2277,  2280,  2278,  2782,  1381,  1381,
    2289,  2516,  2513,  3036,  2297,  2296,  2298,  2501,  2888,  2501,
    1375,  2320,  2721,  2855,  2331,  3020,  2555,  3020,  2510,  2392,
    2389,  2388,  3055,  2399,  2456,  3134,     0,  2454,     0,   506,
     558,   807,   558,   812,     0,   626,   628,   627,   621,   625,
     623,   624,   620,   622,   619,   798,   793,   795,     0,     0,
     604,   791,  1021,  1017,  1018,  1011,  1015,  1023,  1009,   739,
    1016,  1008,   746,  1014,   710,  1010,  1012,  1013,  1022,   707,
     709,  1019,   711,  1020,   706,   714,   713,     0,   655,   657,
    3020,   758,  3124,   761,  3124,     0,     0,   659,  2759,   682,
     686,   685,   684,     0,   663,     0,     0,   662,   660,  2994,
     748,   749,   613,   612,     0,   457,     0,   494,  2663,  3062,
     478,     0,   460,  3110,   487,   489,   493,   492,   488,   490,
     486,   491,     0,     0,     0,     0,  3036,   306,   305,   281,
     304,     0,   354,   350,     0,   357,     0,     0,  2980,  2981,
     373,   376,  2996,     0,     0,  3036,     0,  3016,   353,   380,
       0,   411,   420,     0,   421,     0,   114,   115,     0,  3036,
    1353,  1359,     0,     0,  1334,  2466,  1536,  3159,  3160,  2554,
    1552,  1541,  1488,     0,  1506,  1570,  3028,  2890,  2837,  1615,
    1667,  2118,  2117,  3134,     0,     0,     0,     0,  1761,  1756,
    3009,  3050,  3049,     0,  1785,  3038,  1783,  1798,  1797,  1800,
       0,     0,  1791,  1836,     0,  1835,     0,  1617,  1618,  1349,
       0,  1872,  1879,  1733,  1890,  1892,  1893,  1381,  1940,  3007,
       0,     0,  1972,  1983,  1991,  3033,     0,     0,  1994,  1995,
       0,  2419,  3075,  2003,  2014,     0,     0,  2247,  2237,  3027,
    2030,  3087,   377,   378,   379,     0,  2066,  3138,  2064,  2065,
    2063,  3137,  2037,  2047,  2048,  2050,     0,     0,  2075,  2071,
    2090,  2092,     0,  2110,  3036,  2537,  2108,  2121,     0,     0,
       0,  2124,  2145,  2142,  2138,  2144,  2139,  2141,  2163,  2170,
    2177,  3054,  2192,  2518,  2515,  2511,  2517,  2512,  2514,     0,
    2307,  2890,  2306,  2345,  1374,     0,  2330,     0,  2334,     0,
    2326,  1381,  1381,  2383,  2394,  2534,  2531,  2393,  3056,  3057,
    2387,  2402,     0,     0,   508,   507,   810,   814,   942,     0,
     799,   796,   616,  3075,   619,   611,   614,   617,   606,   740,
     741,   745,   744,   743,   742,   708,   747,   712,  2715,     0,
       0,     0,   756,  3125,     0,   757,   762,  3036,   681,   680,
     665,   804,     0,   671,   674,   673,   670,  2887,   468,   459,
     458,   456,   496,   477,  2996,   465,   474,   471,   475,   470,
     311,   312,   310,   309,   383,     0,   295,   296,   297,   291,
     292,   286,   298,   299,   287,     0,   300,   301,   290,   288,
     289,   294,   293,     0,   280,   284,   285,   282,   384,   356,
       0,   364,   372,   385,   386,  2657,     0,  3036,   323,     0,
       0,     0,     0,   423,   198,     0,     0,  1350,  1351,  1355,
       0,  1356,  1364,  1366,  1508,  3029,     0,  3028,  2501,  1626,
    1769,  1760,  1759,  1757,  1758,  1806,     0,  3038,  1801,  1802,
    2501,  2501,  1619,  1620,     0,  1624,  1623,  1625,  1885,  1734,
    1891,  1920,     0,  1950,  1990,  1997,  1996,  2556,  2003,     0,
       0,  2492,  3036,  2245,     0,     0,  2235,  2239,  2061,  3088,
    2058,  2060,  2059,  2052,  2057,  2049,     0,  2055,  2053,  2054,
    2051,     0,     0,  2112,     0,  2103,  2128,  2526,  2523,  2127,
    2111,  2123,  2300,  2501,  2353,  1376,  2336,  2338,  2533,  2536,
    2529,  2535,  2530,  2532,  2410,  2403,  2404,     0,     0,  2458,
    2459,  3036,   510,   813,   944,   797,     0,   794,     0,     0,
     618,   658,   765,   759,     0,   766,  3077,  3077,   768,     0,
     672,     0,     0,   479,   480,   481,   482,     0,   461,  3019,
     467,     0,   364,     0,  3014,  3176,  3177,   277,   276,     0,
     361,   360,   359,   362,   358,  3036,   366,   314,   368,  2658,
     332,   341,   348,   341,   337,     0,  3036,  3036,   324,     0,
     381,  3036,  3036,  1352,  1345,     0,  1366,  1384,     0,     0,
    1571,  1635,  3034,  1805,     0,  1838,  1837,  1621,  2682,  2681,
    2757,  1941,  2001,  2420,  2421,  3036,  2004,  2005,  2007,  1381,
    1381,  2012,  2498,  2495,     0,  2248,  3036,  3089,  2056,  2062,
       0,  2093,  2708,  2707,  2709,     0,  2126,  2521,  2522,  2524,
    2308,  2985,  2380,  2379,  2354,  2346,  2347,  2973,  2348,  2349,
    2350,  2351,     0,     0,     0,  3036,  2414,  2405,  2409,     0,
    2408,  2406,  2460,     0,  3016,     0,   815,     0,   948,   943,
     945,     0,     0,  3036,   615,   767,   768,     0,     0,  2992,
     753,   773,   774,   775,  3051,   772,   678,   485,   484,  2984,
    2996,   466,  2857,   279,   302,   278,   367,   316,  2857,   315,
     365,     0,  3063,   339,   344,     0,   340,     0,   338,   330,
       0,     0,   325,   382,  2776,  2776,     0,  1384,     0,  2891,
    1381,  1381,  1381,  1594,  1642,  1638,  3075,  3035,  1629,  1634,
    1633,  1628,     0,  1787,  2492,  2422,     0,  2006,  2497,  2500,
    2493,  2499,  2494,  2496,  2246,     0,  2710,  2711,  2712,  2091,
       0,  3112,  2377,  2374,  2375,     0,  3077,     0,  3075,  2425,
    2407,  2451,   509,   511,  3032,   816,     0,   949,     0,   946,
    3133,     0,   755,   768,   763,  2776,   769,   776,  3036,     0,
       0,   463,   314,     0,  3036,   363,   370,   371,   369,  3064,
       0,   347,   349,   326,   327,   116,   117,  3036,     0,  2889,
    1640,  1644,  1641,  1636,  1643,  1637,  1639,     0,  1627,  2002,
    2424,  2423,  2249,     0,  3113,     0,     0,  2378,  2376,  2372,
    2371,  2370,     0,  2412,     0,  3075,  2435,  2483,   532,     0,
       0,   954,   955,     0,   947,   800,   754,   782,   783,   785,
    2776,   771,   483,  3077,   462,   318,  2859,     0,     0,     0,
       0,     0,     0,     0,  1630,  2373,  3152,  3151,  3090,  2636,
       0,  2366,  2360,  2361,  2363,  3036,  2411,  2415,  2416,  3036,
       0,     0,  2400,  1381,  1381,  2452,  2489,  2486,  3036,     0,
       0,     0,     0,   513,   533,   534,   515,   543,     0,  3036,
    3107,     0,   952,  1006,   784,   777,  2659,     0,     0,   313,
    2858,   317,     0,  3161,  3162,   345,  3036,  3036,  1357,  1365,
    3091,  3077,  2637,  2369,  2364,  2367,     0,  2362,     0,  2417,
       0,  2426,  2427,  3036,     0,     0,  2436,  2437,  2439,  2483,
    2488,  2491,  2484,  2490,  2485,  2487,  3036,     0,     0,  3036,
    3036,  3036,  3036,   535,     0,  3066,     0,  3117,     0,   512,
     516,   518,   517,     0,     0,     0,     0,     0,     0,     0,
     514,   544,   546,   545,     0,     0,   820,  3041,  3041,  3058,
     853,   819,   823,   824,     0,     0,     0,   978,  3036,   966,
     967,   968,   959,  3130,   960,  3071,  3071,  3036,  3038,  3008,
    3036,     0,   983,   976,   963,   977,  3071,  3038,   964,     0,
       0,   975,   985,   982,   980,  3038,   965,   979,     0,   986,
     974,     0,  1001,   995,   999,   998,   996,  1000,   956,  1002,
     997,   981,   969,     0,  3071,  1007,  1025,  1024,  1028,  2660,
     464,     0,   345,   342,   346,     0,     0,     0,  2368,  2365,
    2413,  2418,  2428,     0,  2432,  2434,  2433,  2430,  2430,  2444,
    2440,  2808,  2809,  2806,  2807,  2441,  2445,  2438,  2401,     0,
       0,   541,     0,     0,     0,     0,  3036,  3036,  3036,  3036,
    3036,   519,     0,  3036,  3036,  3036,  3036,  3036,  3036,  3036,
    3036,  3036,  3036,  3036,   547,     0,  3036,  3192,  3193,  3041,
    3041,     0,   817,   821,  3036,   829,   825,   827,   828,   830,
     832,     0,   957,   958,   991,  3036,   989,  3036,     0,     0,
     961,   962,     0,  1004,   987,     0,  3124,  3036,     0,  1005,
    1003,  1329,   990,   955,  1029,     0,   205,   206,   320,   343,
     328,   329,  2359,  2356,  2358,  2357,  2352,  2355,  2429,  2443,
    2431,  2442,     0,   536,  3124,   540,   538,   542,   537,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  3059,  3060,
    2787,   840,   835,  3055,   839,  2786,   838,     0,   854,     0,
     826,   831,   994,  1325,  1321,   992,   972,   973,   993,   988,
    1318,  1328,     0,   971,   970,  3107,   319,  2446,   780,   528,
     524,   525,   529,   527,     0,   530,   520,   526,   521,   522,
     523,   552,   548,   549,   553,   551,     0,   550,   833,  3056,
    3057,   834,   837,     0,     0,   855,   573,   822,  1313,  1310,
    1314,  1311,  1326,  1309,  1327,  1312,     0,  1322,  1323,     0,
    1319,  1317,  1315,  1316,   984,   539,   781,     0,     0,     0,
    3036,  3036,     0,  3036,   841,   842,   843,   844,   845,   846,
     836,     0,   857,   858,  1324,  1320,     0,   554,  3179,  3178,
    3036,     0,     0,  3181,     0,  3036,  3036,     0,  3107,     0,
       0,   852,   848,  3180,     0,     0,   847,   913,  3140,  3139,
    3030,  3071,  2975,  3036,     0,   912,  3036,  3075,   856,  3036,
       0,   863,   865,   864,   866,   875,   867,   869,   872,   859,
     860,   861,   871,   873,     0,   876,   862,   923,   868,     0,
     870,   874,  3143,  3144,  3071,     0,   849,   851,   850,  3031,
     940,  3074,  3073,  3041,   922,     0,   756,     0,     0,     0,
       0,  3069,  3069,     0,     0,   925,   920,   923,     0,  1308,
     927,   935,   936,     0,   938,   929,     0,   921,   900,   898,
     899,   894,   897,     0,   895,  3124,  2874,   902,  2695,  3183,
       0,     0,  3185,  3187,     0,  3191,  3189,   877,   882,  3079,
    3079,   879,   883,   878,   884,     0,  3070,   914,   914,  3069,
    3069,   907,   924,   926,   937,   934,   933,   931,   932,  3041,
     930,     0,   896,   762,   939,  3077,     0,   901,  2696,  3182,
    3186,  3184,  3190,  3188,  3081,  3080,   885,   890,     0,   918,
     916,   908,   914,   917,   910,     0,     0,   928,   531,   751,
       0,   904,   888,   880,   888,   893,   888,   881,   888,     0,
     915,   909,   911,     0,   750,   906,   903,   905,     0,   887,
     886,   892,   891,   919,   752,   889
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -3974, -3974, -3974, -3974, -3974, -3974, -3974,  3246, -3974, -3974,
   -3974, -3974, -3974, -3974,  3211, -3974, -3974, -3974,  2439, -3974,
   -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974,  3216,
    3149,  1251, -3974, -3974, -3974,  2740, -3974, -3974, -3974, -3974,
   -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974,
   -3974,  3182, -3974, -3974, -3974, -3974, -3974, -3974, -3974,  2998,
    1313, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974,  3075,
   -3974, -3974, -3974, -3974,  2996, -3974, -3974, -3974, -3974,  3183,
   -3974, -3974, -3974, -3974,  2980, -3974, -3974, -3974, -3974, -3974,
   -3974, -3974, -3974, -3974, -3974,  2535, -3974,  2157, -3974, -3974,
   -1645, -3974, -3974, -3974, -3974, -3974,  3077, -3974, -3974, -3974,
   -3974,  3086, -3974, -3974,  2813, -3974, -3974, -3974, -3974, -3974,
   -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974,
   -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974,
   -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974,  -555,
   -3974, -3974, -3974, -3974,  1275, -3974, -3974, -3974, -2309, -3974,
   -3974, -3974, -3974, -3974,  -353,  -801, -3585, -3974, -3974,   471,
   -3974, -3974, -3974, -3974, -3974,  -329, -3974, -3974, -3974,  -467,
   -3974, -3974, -3974, -3974,   466, -3974, -3974, -3974, -3974, -3974,
   -3974, -3974, -3974, -3974, -3974,  2841, -3974, -3974, -3974, -3974,
   -3974, -3974, -3974,   454, -3974, -3974, -3974, -3974, -3974, -3974,
   -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974,
   -3974, -3974, -3974, -3974, -3974,  -322, -3974, -3974, -3974,    98,
   -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974,
   -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974,
   -3974, -3974, -3974, -3974, -3974,  -708, -3974, -3974, -3974,  -641,
   -3974, -3974,  -717, -3974, -3974, -3974, -1579, -3974, -3974,  2597,
   -3974, -3320, -3974, -3461,  -703, -3974,  -976,  1173, -3974, -3974,
   -3974, -3974, -3974, -3974, -3974, -3974, -3220, -3974, -3974, -3974,
   -3974, -2782, -3974, -3974,  1002, -3974, -3974, -3974, -3974, -3974,
   -3974, -3974, -3974, -3974, -3974,  1678, -3974, -3974, -3974, -3974,
   -2685, -3974, -3974, -3974, -1027, -2613,   532, -1246, -3974, -3974,
   -2582, -3974, -3974, -3974, -3319, -3974, -3974, -1148, -3974, -3974,
   -3333, -3974,  -522,  -424, -3974,  1306, -3974, -3483, -3974,  -572,
   -2433, -3974, -3974, -2387, -3974, -1615, -3974,   529, -1261, -3974,
   -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974,
   -3974, -3974, -3974, -3974, -3974, -3974, -3974,  -833, -3761, -3974,
   -3974,  -957, -1883, -3974, -3974, -3974, -3974, -3974, -3974, -3974,
   -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -2139, -3974,
   -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -2268, -3974,
   -3974, -3974, -3974, -1079, -3974, -3974, -3974, -3974, -3974, -3974,
   -1082, -3974, -3974, -3974, -3974, -3974, -3974, -3974,  -398, -3974,
   -3974, -3974,  -848, -3974, -3974,  -554, -3974,  2679, -3974,  -748,
   -1485, -3974,  -675, -3974, -3974, -3974, -3974, -3974, -3974, -3974,
   -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974,
   -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974,
   -3974, -3974, -3974, -3974, -3974, -3974, -3974,  1865,  2381, -1022,
    -707,  -705, -3974, -2074, -3974,  -899, -3974, -3974, -3974, -3974,
    -704, -3974,  -738, -3974, -3974, -3974, -3974, -3974, -3974, -3974,
   -3974, -3974, -3974, -3974, -3974,  1654,   -46, -3974,    59,   497,
   -3974, -3974, -3974, -3974, -3974, -3130, -3974, -3974, -3974, -3974,
   -3974, -3974, -3974, -1038, -3974, -3974,  -153, -3974,  3128, -3974,
   -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974,  -814, -1578,
   -3974,  2202, -3974,  2207, -3974,   470, -3974,  -744, -3974, -3974,
   -1049, -3974, -3974,   475,  2208, -1145,  1625, -3974, -3974, -3974,
   -3974, -3974, -3974, -3974, -3974, -3974,  1529,   852, -3974, -3974,
   -3974,  2530, -3974, -3974, -3974, -3974, -3974, -1244, -3974, -3974,
    1646, -3974, -3974, -3974, -3974,   112, -3974, -3974,    83, -3974,
   -3974, -1017, -3974, -3974, -3974,  -412, -3974,  -410, -3974, -3974,
   -3974, -3974,  2529, -3974, -3974, -3974, -3974,  2155, -3974, -3974,
   -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974,
   -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974,
    2738, -3974, -3974, -3974, -3974, -3974, -3974, -3974,  2484, -3974,
   -3974,  2127, -3974, -3974,  1499, -3974,    88, -3974, -3974, -3974,
   -3974, -3974, -3974, -3974,  1474, -3974, -3974, -3974, -3974,   437,
   -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974,
    2479,   845,  2730, -2383, -2676, -3974, -3974, -3974, -3974, -3974,
   -3974, -3974, -3974, -1799, -3974, -3974, -3974, -3974, -3974, -3974,
   -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974,
    2106, -3974, -3974,  2099, -3974, -3974, -3974, -3974,   802,   408,
   -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974,   103,
   -3974, -3974, -3974,  2473, -3974, -3974, -3974, -3974, -3974, -3974,
   -3974, -3974, -3974,  1430, -3974, -3974, -3974, -3974, -3974, -3974,
     406, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974,   407,
    2085, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974,
   -3974, -3974, -3974, -3974, -3974,  1921, -3974, -3974,   790, -3974,
    1408, -3974, -3974, -2199,   394,   403, -3974, -3974, -3974, -3974,
   -3974,  -121, -3974,  -260,  1931, -3974, -3974, -3974, -3974, -3974,
   -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974,
   -3974, -3974, -3974, -3974, -3974,  2443, -3974, -3974, -3974, -3974,
   -3974, -3974, -3974, -3974,    86, -3974, -3974, -3974, -3974, -3974,
   -3974, -3974, -3974, -1796,  1280, -3974, -3974, -3974,   384, -3974,
   -3974, -3974, -3974, -3974, -3974,  2432, -3974, -3974, -3974,  1252,
   -3974, -3974, -3974, -1344,   768, -3974, -3974,   382, -3974, -3974,
   -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974,   375, -3974,
     377, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974,
   -3974, -3974, -3974,   698, -1258, -3974, -3974, -3974, -3974, -3974,
   -3974,  1871,   761, -3974, -3974, -3974, -3974, -3974, -3974, -3974,
   -3974, -3974, -3974, -3974, -3974,  -115, -3974, -3974, -3974, -3974,
    1226, -3974, -3974, -3974,  2423, -3974,  2425, -3974, -3974, -3974,
   -3974,  2758, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974,
   -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974,
   -3974,   725, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974,
    1838, -3974, -3974,  1206, -3974, -3974, -3974, -3974, -3974, -3974,
   -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974,
   -3974, -3974, -3974, -3974, -3974,   347, -3974,  1210, -3974, -3974,
   -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974, -3974,
   -3974, -3974,  -481, -3974, -3974, -3974, -3974, -3974, -3974,  -369,
   -3974, -3974, -3974, -3974,  -573,  1261,  1277, -3974, -3974, -3974,
   -3974, -3974, -3974, -3974, -3974, -3974,  -138, -3974, -3974, -3974,
   -3974, -3974,  -479,   143, -3974,  -224, -3974, -3974,  -531,  -657,
   -3595, -3974, -3974,  -534, -3974, -3974,  1835, -3974, -3974, -3974,
   -3974, -3974, -3974, -3974, -3974, -1521, -3974,  1018, -3974, -3974,
    1022, -3974,  1234, -3974,  2198, -3974,  2209,  -529, -3974,  -474,
   -3974,  -472,  -328, -3974,  -218, -3974,  -214, -1790, -3974,   965,
   -3974,   962,   378, -3974,   387, -3974,   392, -3974, -3974, -3974,
   -2536,   -92, -2106, -3974, -3974,    92, -3974,    95, -2122,   383,
   -3974,   941, -3974,   944,  2631, -1430,  2810,  -461, -2409, -2103,
    -601, -1828, -3974, -3974,  2184, -3974,  2191,  1549, -1899,   786,
     788,   791,   792,   991,   412,  -565,  1262,  1195, -3974,  1586,
    2574, -1116,  -603,  -661,  2796,  2487, -1046, -3974,  -229,  1385,
    -682, -3974,  -988, -3974,  1536, -3974,  -564, -3974,  2287,   306,
    -119, -3974, -3974, -1087, -3974,   700, -2702,   -36,  3298,  -567,
    -576, -3974,  -553,  1996, -3974,   -20,  -497, -3974, -1095, -2191,
   -3974,    11, -3974,   -56, -3974,  1315,  -967, -3974,  1505,   504,
   -2675,   793,  -624,  2298, -3974, -2281, -2377, -2680, -2050,  -539,
    -652,  -749,  -563, -3974, -2399, -3974, -2708, -3974,  3213,  -710,
   -3974, -3974, -3974, -1416,   -80, -3409, -3974,  1096,  -734,  -806,
    -151,  2999, -3974, -2060,  2775,  -215,    74,  -502,  -684,   452,
   -3974, -3974, -3974,   -61,  2711, -3974, -3974, -3974, -3974,  1308,
   -3974, -3974,  1887, -3974,  -234, -3974, -3974, -3974, -3974,  1316,
   -3974, -2445, -3974,   994,   737,   439,   158, -3974, -3974, -3974,
   -3974,  -179,  -822,   570, -3974,  1212, -3205, -3974, -3974, -3974,
   -1583, -1685, -2686, -1347,  -258, -3974, -3974, -3974, -3974, -3974,
   -3974,   -86,  -167, -3974, -2016,   809, -3974,    35, -3974, -2858,
   -3974,   -26, -1809, -2218, -3974, -3974, -2249, -3974,  -694, -3974,
   -3974, -3974,  2762, -1560, -3973, -1690,  -843,  -757,  -649,  -895,
    3258,   519, -3974, -3974,  3020, -3974,  -817, -3974, -3974, -3974,
     256, -3974,   357, -3974,  1339, -2221, -3974, -3974, -3974, -3110,
    -629,  1649, -3974, -3974,  -106, -3974, -3974, -1164, -3974,  2392,
   -3974, -3974, -3974,  -644, -3974,  -680,  -407, -3974,  1918,  1145,
   -3974, -3974,   335, -3974, -3900,  -839, -3974, -3974, -3974, -3974,
   -3974, -3974
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     4,     5,     6,    11,    12,     7,     8,
      13,    14,    47,    48,    49,   111,    51,   113,    19,    40,
     123,    15,    16,    17,    24,    32,   219,    25,    31,   109,
     163,   159,   295,   528,   529,   530,    20,    37,    38,   118,
      55,   121,   226,   169,   535,    29,    30,    42,    43,    82,
      83,    84,    85,   196,   278,   501,    86,   193,   263,   264,
     265,   266,   267,   491,  1143,  1694,   268,   269,  1139,   270,
      87,   194,   275,   276,   277,   496,    88,    89,    90,    91,
      92,   151,   210,   521,   211,   212,    93,   180,   244,   462,
     463,   245,   246,  1121,  1129,  1122,  1123,  1124,  2415,  2848,
    1125,  4188,    94,   157,    95,   202,   203,   204,   515,    96,
     198,   199,    97,   473,   474,   182,   746,    98,    99,   477,
     100,   101,   102,   103,   104,   105,   106,   150,    63,    64,
     129,   179,   241,  1085,  1662,  1663,  2374,  2375,  3473,  3474,
    3475,  3476,  3477,  3209,  3210,  1104,  2376,  3453,  2377,  3758,
    3759,  3844,  3959,  2378,  2379,  3227,  3488,  2380,  1132,  2381,
    2382,  2383,  2384,  3644,  3763,  4093,  3764,  3766,  2385,  2386,
    2387,  2388,  3480,  3634,  2389,  3637,  3638,  3760,  3761,  3846,
    2390,  2391,  2827,  2392,  3030,  2393,  3229,  2394,  2395,  2396,
    2397,   242,   243,   454,   455,   456,   457,   738,   458,   459,
     460,   731,  2843,  2844,  3234,   461,   733,  1681,    58,   235,
      59,    60,   125,   176,   236,   237,   716,   238,  1084,  1649,
    1650,  3441,  1651,  3904,  3620,  3185,  1652,  1653,  2813,  3447,
    1654,  1655,  3443,  3613,  3614,  3615,  3616,  1656,  3200,  3201,
    1657,  3187,  1658,  1659,  2349,   704,  2244,  2738,  3109,  3110,
    3592,  3724,  3823,  4009,  4010,  4011,  4012,  3943,  3944,  3945,
    4020,  4021,  4022,  4023,   440,  1626,   441,   442,   708,   709,
    1636,   710,  1080,  1081,   200,  2332,  3124,  2160,  2161,  2162,
    2163,  2164,   711,  3130,   712,  1631,   713,  1632,  2791,  3405,
    3406,  3125,  2304,  2305,  2306,  2307,  2308,  3158,  3159,  2309,
    2310,  3178,  2311,  3174,  2251,  2312,  2313,  3176,  3436,  2314,
    2315,  2772,  3165,  3429,  2316,  2317,  2318,  2319,  3415,  3417,
    2320,  4365,  4504,  2321,  3164,  3422,  2769,  3608,  3161,  3736,
    3740,  3839,  3741,  3742,  3743,  3744,  4305,  3745,  3897,  3898,
    2322,  2323,  2779,  2324,  2325,  2326,  3400,  3126,  3127,  3597,
    2327,  2328,  2329,  1072,  2739,  1630,  3112,  2248,  3397,  3593,
    3726,  3890,  3949,  4031,  4032,  4156,  4157,  4158,  4159,  4033,
    4231,  4232,  4233,  4278,  4314,  4315,  4316,  4317,  4318,  4319,
    4152,  4238,  4323,  4338,  4369,  4370,  4437,  4493,  4509,  4497,
    4371,  4421,  4422,  4372,  4467,  4506,  4373,  4374,  4481,  4482,
    4375,  4376,  4377,  4406,  4407,  4378,  4379,  4459,  4460,  4410,
    4411,  4412,  4380,  4381,  2743,  3594,  3729,  3730,  3731,  3892,
    3893,  4088,  3950,  4078,  3952,  3156,  4085,   953,  4183,  1499,
    1500,  1501,  1502,  2112,  1460,  2113,  1461,  2114,  1462,  2115,
    1463,  2116,  1464,  2117,  1465,  2118,  1466,  2119,  2120,  1467,
    2121,  1468,  2122,  1469,  1470,  2123,  1471,  2124,  1472,  1473,
    2125,  1474,  2126,  1475,  2633,  1986,  1476,  1477,  1481,  1482,
    2560,  2561,  4408,  4409,  4293,  4294,  4295,  4249,  4302,  4303,
    4166,  4299,  4164,  4296,  4079,  4080,   172,   173,   307,  2861,
    3503,   174,  1149,  1702,  1701,  2422,  2423,  2424,  2857,  2858,
    3654,  3242,  1704,  3244,  3656,   694,  1048,  1049,  2227,  3374,
    1050,  1051,  2720,  1874,  1875,  2544,  1052,   231,   373,   374,
     624,   774,  1152,  2476,   775,   776,   777,  2592,  1166,  1766,
    1767,  1157,  1158,  1159,  2891,  2892,  1793,  2966,  1717,  1718,
    1161,  1758,  2864,  2865,  4081,  1907,  1761,  1151,   375,   625,
     810,  1190,  1188,   376,   626,   826,  1846,  2518,   377,   627,
     839,   840,  1848,   378,   628,   845,  2521,   771,  1146,  1700,
     542,   543,  1850,  1851,  2524,  2579,  2982,  3287,  3288,  3289,
    3661,   649,  3791,  3783,  3865,  3784,  3863,  3785,  1218,   379,
     629,   849,   850,   380,   630,   854,   855,  1225,   856,  1221,
    2526,   381,   631,   859,  1230,   382,   383,   632,   869,  1239,
     384,   634,   874,   385,   633,   871,  1240,  1243,   386,   635,
     881,  1869,   882,   387,   636,   893,   894,   895,   896,  1268,
     897,  1270,  1908,  1884,  1885,  3528,  1886,  2549,   898,  1253,
     899,   900,   901,  1911,  1912,   902,  2543,  2946,  2947,  2948,
     903,  1272,  2571,   904,   905,  2542,  3263,   906,  2572,   907,
    1255,  1916,   954,  2967,  2968,  2969,  2970,  2971,  3280,  2972,
    2973,  2974,  2975,  1909,  1259,   388,   637,   911,  1279,   389,
     638,   390,   640,  1925,   916,  2577,   391,   641,   919,   920,
     921,  1288,  1289,  1290,  1931,  1291,  1928,  2588,  2584,  2585,
    2985,  1285,   392,   642,   926,  1962,   927,  1309,  3293,  3294,
     393,   643,   933,   650,   394,   644,   934,   395,   645,   937,
     396,   646,   940,  1967,   397,   398,   651,  1970,  1316,  1971,
    2597,  2599,   399,   652,   946,  1317,  1980,  2603,  2996,  2997,
    2998,  3000,   400,   653,   949,   401,   654,   955,   402,   655,
     957,   958,  1486,  1487,  2006,  1488,  1489,  2619,  2620,  2003,
    2004,  2005,  2613,  3010,  3011,  3012,   403,   962,  1490,  3311,
    3794,  3541,  3676,  3677,  2009,   404,   963,  1492,  3018,   405,
     658,   406,   659,   970,  1506,   407,   660,   972,   408,   661,
     974,  1510,   409,   663,   977,   978,   979,  1517,  2132,  3332,
    3333,  3560,  3553,  3554,  3334,  3335,   410,   664,   981,  2645,
    2646,  3339,  3036,  1522,  1523,  1524,  2648,  2650,  2651,  3562,
     411,   665,   412,   666,   987,  3812,   413,   667,   989,  2177,
    3041,  3042,  3043,  1866,  1867,  1868,  3346,  3045,  3345,  3565,
    1537,   414,   415,   668,   991,  1545,  3050,  3356,  3051,  3354,
    3052,  1542,   416,   669,   993,   417,   418,   670,   996,  1549,
     419,   671,   999,  2664,  2665,  1553,   420,   421,   672,  1003,
    1559,  2180,  2670,  2671,  1557,   422,   673,  1006,  1561,  1562,
    2184,  3065,   423,   674,  1011,   213,  1578,  1012,  1013,  2205,
    2206,  1014,  1015,  1016,  1017,  1018,  1019,  1020,  1021,   424,
     675,   964,  3020,  1494,  3318,  2013,  2627,  3317,  3546,   425,
     676,  1030,  2208,  1586,  2698,  2699,  2700,  1582,   426,  1032,
    1588,  3074,   683,   684,   427,   689,  1037,  1038,  1039,  1598,
    1599,  2222,  3085,  2713,  1596,   428,   690,  1042,  1604,   429,
     692,   430,   693,  1044,   431,   695,  1053,   432,   696,  1056,
     433,   697,  1059,  1617,  2724,  2725,  2232,  2727,  3096,  3098,
    1615,   434,   698,  1063,  3375,  3574,  3705,  3706,  3707,  4196,
    3708,  3922,  3923,  3976,  3709,  3881,  3710,  3711,  3813,  3814,
    3712,   435,   699,  1065,  1547,  2235,  2236,  3383,  1620,   436,
    1067,  1622,  3391,  3989,  3584,  3585,  3586,  3721,  3716,  3926,
    3819,  3927,  3928,  3313,  3673,  3674,  3886,  3981,  3982,  4199,
    4200,  3932,  3986,  3987,  4110,  4115,  2238,   437,  1068,  1624,
    3887,  2241,  2736,  3106,  3589,  2434,  2868,  2435,  2436,  2862,
    2437,  2438,  1262,  1879,  1263,  1877,  1264,  3935,  3994,  3936,
    3992,  3937,  3681,  3802,  3682,  3800,  3683,  2504,  2916,  2505,
    2914,  2506,  3080,  3367,  3081,  3365,  3082,  2661,  3566,  3698,
    2662,  3055,  3056,  3384,  3582,  3385,  3580,  3386,  2537,  2538,
    2937,  2539,  2935,  2540,   982,  2135,   685,  2878,  3017,   944,
     945,   923,   924,  1303,  1304,  1936,  1305,  1956,  1957,  1958,
    1959,  1960,  1961,  1591,  2216,  1804,   828,   829,   830,   831,
     811,   861,  1233,  1000,  1001,  1004,  1669,  3877,  1670,   778,
     950,  1023,  1024,  1964,  1965,  1314,  1525,   842,   843,  1664,
    2805,  3640,  3955,  1140,  2799,  2800,  2806,   132,   205,   935,
     863,  1266,   812,   813,  3667,   814,   815,  4427,  1818,   834,
    3691,  1768,  2166,  3419,  1800,  2481,  2621,  3091,  1994,  3003,
    1564,  2924,   851,  1060,  1527,  1707,  2444,  2680,  2681,  2172,
    1708,   965,  1027,  1054,  2622,  3669,  2766,  3169,   816,   687,
     876,   864,   865,  1996,   688,  1141,  1142,  1693,  1035,  1036,
    1709,   516,  2446,  4236,   475,   817,   512,   513,  4116,   818,
     819,   820,   821,  1196,  1175,  1826,  1810,  1811,  1822,  1815,
    1805,  1807,   714,  2726,  3842,  1213,  1839,  2514,  1540,  1503,
     449,  1236,  1861,   305,  3180,  3257,  3508,   621,   622,   623,
    2733,  2459,  2347,  1107,  3220,  2775,  1162,  1163,  2836,  1257,
    2425,   271,   149,   492,  2335,  1247,  1762,  3300,  2562,  2991,
    1102,  1100,   183,  3621,   983,  1985,  3025,  3506,  4390,  3306,
    3792,  1307,  2018,   286,  2023,  3273,  2472,  3362,  3390,  4151,
    3190,  3850,  4014,   166,  4447,  4165,  4393,  1090,   734,  4476,
     291,  3322,  3688,  3971,   272,  1763,  2399,  1613,  2765,   136,
    2752,  2331,   482,  3875,  2708,  4015,  1679,  1250,  3001,  3424,
    2563,  2457,  2762,  3598,  2976,  3337,  4382,  4282,  4384,  4084,
    1234,  3918,  2400,   255,  2803,  3249,  3965,  1691,  2339,  1227,
    2706,   822,  2406,  3629,  4330,  4336,  4440,  4441,  4442,  4443,
    4444,  4036
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     214,   763,  1073,  1074,  1075,  1795,  1521,  1082,   994,   445,
      53,  1045,   909,   247,  2019,  1587,  2250,   941,   187,  1760,
     190,   230,  1026,  1170,  2441,   195,  1684,  2795,   862,  2442,
     133,  2744,  1160,  2230,  2649,  1574,   140,  2866,  2896,  1926,
     922,  1563,  2416,   137,   138,   139,  1671,  2243,  1673,  1674,
     144,  1676,  1677,  2907,  3426,  1245,  1184,   188,  2454,   188,
    1238,   827,  3107,   841,   188,   251,   511,  3167,   936,  2530,
    1086,  2663,  2875,  1829,  1091,  1092,   936,  1094,  1095,  2554,
    1097,  1098,  2881,   908,  2344,   947,  2703,  1271,  2553,  2564,
    1825,  1087,  1088,  2136,   167,   966,  1093,   288,   936,  1096,
    2586,  1228,  1835,  3605,   188,  1192,  2816,  1025,   184,  2568,
     185, -1337,   966,  2820,   191,   192,  2824,  2825,  2643,  2796,
    2797,  3192,  4185,  1209,   206,   215,   130,  3057,  3222,   833,
     130,   443,  1237,  2574,  3718,  3230, -1335,  1043,  4495,   493,
     222,   498,  3630,  1998,  3786,   858,   478,   283,   503,  1177,
    1178,  3307,  2229,   873,  1002,   147,   248,  1183,  3921,  3611,
    2871,  2872,  2334,  3548,  1286,  1923,  2873,  2874,  2229,  2876,
     287,  4401,   858,   502,   281,   479,  2229,  2229,  1688,   294,
    1550,  1794,  2837, -3077,   858, -3134,  2462,  1686,   292,  2977,
   -2753,  3948,   719,   296,   951, -2754,  2020,  1147,   223,  1216,
    1153,   306,  1966,  3251, -3134,   258,  1932,   450,  1796, -2994,
    2178,   858,  4402,  1764,  2455, -2185,  1518,   503,  3996,  1883,
   -2185,   720,  1238,  1876, -3134, -3134, -2992,   986, -3134,  1594,
    4127,  2565,  3409,  1496,  2986,   483,  3027,  1999,   721,   722,
     524,  3315,   966,  1797,  1798,  4140,  3780,  4155,  4492,   233,
     739,  4505,  2466,  1935, -2072,   519,   520,  2810,  3836,  1201,
    2470,  4016,  1145,   490,  3034,  3439,  3827,  1319, -2185,  4027,
    4028,  3087,  3088,  2950,  3727,   841,  2951, -2795,  1459,   450,
    2165,  2197,  1153,  2955, -3097,   258,  2958,  1943,   249,   647,
    2451,  3276,  1602,   858,  1580,   293,   858,  1697,  3432,  1280,
    2198,  3276,  1983,  3433,  1203,   772,   181,  3048,  2701, -3134,
    -818,  4300,   181,    52,   181,  3039,  2398,  3879,   239, -2854,
      52,  3525,   207,  1966, -3134,  3103,   833,   833,   833,   503,
    3719, -3134,   750,  2811, -3134,  3780,  1010,  3078,  3888,  2638,
     503, -3016,  1267,  2777,  2555, -3134,  3407,  2952,  2859, -3134,
   -3077,  -818,  -818,  3410,   723,  2489,  1223,  3023,  2535,  1312,
     181, -1337,  1606,   297, -2984,    -6, -3134, -1337, -2984,  3713,
     526,  1312, -3134,  3657,  3728,  1543,  2545,  2546,    52, -3051,
    4094,   656,  3022,   258,   107,  2750, -1335, -2994, -2764,  4109,
    2748,  2471, -1335,   253,  2629,  2129, -3092,  4241,    -6,  1575,
      -6,   857,   525,  3832,   872,  2879, -3134,  2879,  1160,  4111,
    3727,  3619,  4335,   718,  1160,    52, -2762,  3434, -3134,  2750,
   -3134,   447,  3014,  2750,     3,  3635,  3899,  2233,  1554,  4448,
    2823,  1862,  1732, -3126,   917,  2718,   742,   743,   990,  4496,
     960,   997,   936,    18,  2882,   918,  2000,  1031,   503,  1312,
    2673,  1571,  3102,   448,   838,  2674,   749,  3411,    52,  1993,
    1801,  4289, -1337,   752,  1607,  2452,   536,  1057,  2234,  1592,
    2558,    26,  2559, -3134,  1008,   494,  4485,  4486,   966,  4241,
     258,   766,  1993,  2866, -2994,  1526,  2213, -1335,  3899,  2225,
     273,  3330,  3858,  1621,  2536, -1337,  3636, -1337,  3781,  4438,
    3896,  -770,  4112,  2675,  2749,  2751,  4017,  4094,  4198,   503,
    3728,   504,  3479,   504,  3412,  2879,  2879,    52,  1858,   724,
   -1335, -3018, -1335, -3016,  1882,   284,  3777,  3491,   207,    27,
     725,  3631,  1765,  2213,  3024,  2213,  3483,   833,  3787,  2753,
     504, -3122,  3058,  2755,  3840,  -818,   108,   844,   527,   258,
    3984,   866,   504, -2994,  1799,  1483,  1998,  -283,  2001,  1689,
     254,  2630,  1231,  1224,   866,   938,  3062,  3762,  3206,   790,
     791,  1608,   866,  3504,  2021,  1963,  4403,   259,   967,   504,
     504,   793,  2490,   794,  2213, -2994,   862,  2860,   505,   995,
     505,   995,  1005,  3305,  1028,   967,  2778,  4456,  1135,  -818,
    2556, -3134,  2199,  2953,   506,  1544,   506,   706,   793,  2420,
     794,  2213,   657,   648,  1814,  1814,  1814,   505,   240,   995,
     793,  1281,   794,  3079,  3600,  2213,  1222,  1009,   476,   505,
    1834,    -6, -2994,   506,   464, -3016,  2213,  2414,  2715,  3938,
    3049,  1241,  2941,  2228,  2418,   506,  2213,   793,  2471,   794,
    1999,   476,  3350,   234,  1105,   181,   505,   505,   773,   726,
    2200,   504,  3549,  1573,   504,   476,  2628,  3788,  -770,  1859,
    1164,   451,   506,   506,  1863,   833,   833,   833,   862,  2822,
    2502,  3274,   833,   833,   833,   922,  4029,  3378,  1010, -2984,
   -3134,  3040,   504,  3789,  1010,  2201,  3059,   727,   833,  4291,
     836,   833,  3646,   504,  1873,   867,   732,   833,   833,   833,
     833,   833,   260,   801,   728,  3939,  2491,  2509,   867,  2919,
   -2992,   476, -3134,  2170,   -43,   967,   867,  3316, -1337,   793,
    1156,   794,   793,  1984,   794,  3028, -2992,   833,   505,   764,
     801,   505,   833,   451, -2992, -2992,   476,  3060,   867,   526,
    1968,  1226,   801, -1335,   506,   259,   274,   506,  3618,   844,
    2586,  2133,   507, -1342,   507,   250, -3134,  1530,  -818,   505,
    2849,  1153, -1340,  1995,  1862,  4306,  4285,  1933,  3413,   801,
     505,   866,  4113,  3194,  3550,   506,  3782,  4018,  2641,  1698,
    3650,   507,  3193,  3277,  2815,  3822,   506,  3067,   647,  2202,
    3195,  1459,  3440,   507,  3302,  2987,  4007,  3303,  4301,  3567,
   -3065,   504,   261,  2469,  2547,  3526,  2167, -3134, -3116, -2072,
     298,   299,   300,  4019, -3036,   476,  3658,  2942,  1953,  3035,
     507,   507,  4237,  3435,  3276,  1883,    52,  3632,  3880, -2984,
   -2984,  1318,  3997,   186,   186,  2014,   452,   186,   224,   186,
    4128,   186,   259, -2984,  2456,   866,  3029, -2984,  4186,  2000,
    3191,   801,  2812,  1934,   801,  4141,  1034,   866, -2998,   537,
     476,  2456,   504,   858,  3414,  3782,  1532,   476,   453,  2503,
    3510,  4004, -3036, -3051,   508,  2886,   508,  2165,   505,  1193,
     260,  2731,  3450,  2550,  1593, -2185, -2185,   836,   836,   836,
   -3036,   225,  1529,  2890,   506, -1342,  2203,  1210,   862,  3747,
    3748,   186,   507,   508, -1340,   507,   484,  3612,   452, -1985,
    -283,   259,  1005,  2411,  2412,   508,  1590,   527,  4030,   476,
    4457,  1046,   936,  2600,   186,   867,   301,  1667,   866,  1668,
    1683,  2128,  1672,   507,   952,   866,   186,  3773,  2889,   505,
     453,  1682,   508,   508,   507, -3097,  1046,  4114,   538, -2992,
     499,   967,   509,  3790,   509,   506,  3889,  1665,  1666,  1687,
    2002,  2001,   729,   730,  1148, -2992,  1695,  1675,  1865,  3779,
    1034,  1699,  1690, -2992, -2992,  1593,  2022,   260,  1576,   186,
     261,   509,  3870,  3633,   476,  1312, -1985,  -283,   833,  4230,
    3310, -3092,   862,   509, -2700,   681,   188,   188,   939,   867,
    -818,  1864, -1985,  -283,  3720,  3551,   188,  2402,  2403,   838,
     476,   867,  1204,  2408,  1047,  2508,  2409,  1205,  2218,   201,
     509,   509,  3699,  4187,   508,   186,   495,   508,   131,  1577,
    2478,  2479,   131,   444,  3820,  1287,  1164,   186,  2417,  1047,
     186,   186,  1164,  1484,  3527,   186,   260,   476,  1660,   510,
    1857,   510,   507,  4404,  3841,   508,  4251,  3552,  2445,   740,
    2501,  2214,  1046,   967,   186,  2498,   508,  4425,   837,  3377,
    2204,  3379,  1566,   476,   487,  3625,   186,   261,   510, -2994,
    2482,  2929,   867,   476,  4258,  3626,   833,  2507,  3859,   867,
     510,  1756,  -818,  1232, -3134,  3534,  3255,   961,   836,  1831,
    1881,   465,   509,   186,   186,   509,  1226,  1696,  2214,  2548,
    2214,  2419,   648,   507, -3016,  3278,  4005,   510,   510, -3134,
    1710,   186,  3264,  3265,  3266,  3267,  3351,   207,  3902,  1111,
    1882,  2667,  3883,   509,  3420,   539,  1870,  2999,  2593,  1062,
     540,   302,   303,   476,   509,  2586,   261,  4162, -3122,  1521,
    3111,   980,  1887,  1103,   304,  1047,  2215,  4016,  3985,  2214,
   -1985,  -283,   207,   186, -3134,  2016,  3701,  3282, -2984,  3647,
    3196,  3648, -3134,  4458,   508,  1485,  1136,   262,  3283,   283,
    3285,   751, -2700,  1881,  3004,   186,  2214,   476,   186,  3940,
    -559,  1831,  3175,   541,   289,  1765, -3134,  4192,   153,   510,
    2214,   207,   510, -2848,   476, -2850,  1112,  1295,  3941,  2677,
    1774,  2214,  3906,  3569,  1204,  1943,    65,  1775,  2659,  1205,
     862,  2214,  1114,   847,   844,  3942,  3320,   186,  2774,  3568,
     510,   504,   939,  2443,    -7,   508,   836,   836,   836,   756,
    1260,   510,  1765,   836,   836,   836,  1820,  2943,  2788,  1820,
     486,   966,   509,  1832, -2852,  4072,  1987,  1194,  4099,   836,
   -3116,  1820,   836,  3225,  2427,   837,   837,   837,   836,   836,
     836,   836,   836,   705,  2520,  1211,  2480,  2908,  3557,  4104,
    1212,  2488, -1985,  -283,  2944,  1995,   273,  3370,  3451,  3372,
    2783,  2784, -3065,  4100,   207, -2846,  4193, -3134,   836,   793,
     207,   794,    22,   836,  2591,  4463, -2841,  2596,   505,    66,
    1939,  1940,  1941,   509,  4194, -3159,  2512,  3325, -2984, -2984,
   -3016,  2174,  3197,  2853,   506,   705,  3769,  4073,  2804,  3772,
   -3126,  2855,  1010,  2601, -1307,  1914,  3679, -3160,  2704,  3641,
   -3132,  3497,  2604,   487,  2746,  1832,  2838,  2839, -3134,   510,
     847,   160,  2841,  2842,  2750,  3702,  3544,  3198,  4074,  4288,
   -1985,  -283,  3199,  4004,  1944,  1945,  3446,    67,  3279, -3134,
      68,  2750,    69,  2002,  2785,  2342,  2211,  3653,  2015, -3136,
    1116, -3116,  3452,  2801,   161,   848, -3036,  2502,  3046,  3290,
    2870,  2906,  4405,    70,  4105, -3134,   186,  4006,  2768,  -559,
     700,  1910,  4017,  4163,  1942,   870, -3116, -3116, -3116,  2351,
     510,  2410,   998,  2167,    28,  -283,  4007,  3703,   866,  3588,
   -3134,  1831,  3100,  3596,  1531,  -283, -3134,  3349,   181, -1330,
    2407,   801,  2407,  4008,  2407,  2407,  2522,  2407,  2407, -3134,
      52,  1946,  1947, -1985,  -283,  2185,  2856,  2978,  2190,  2980,
    1567,  3853,  3854,  3207,  2912,  2913,  3516, -1985,  -283,  3350,
    2636,    35,   181,  2352,  2890,  2717,   186,  2696,  4289,  4195,
    2209,  2482,  4106,  4289,  2757,  1973,   837,  2697,  1974,  1975,
    3704,   866,   507,  4474,  3437,  3838,    71,  2933,  2934,  1972,
   -3134,  2759,  1261,  1973,   444,  3498,  1974,  1975,  2629,   504,
    3907,   186,  1117,  3059,  1137,    36,  1109,  4075,   186,  2242,
    1855,  3326,  3933,  3026,  2763,  1831,  2945,  2660,  1638,  4479,
     877,  3395, -3134,  3396,  1680,  3968,  3208,  2682,     9,  2817,
      10,  4480,  4279,  1478, -2854,  2401,  4280,  2790,   878,  2988,
   -2639,   936,  1312,    39,   186,  2523,   162,  1997,  2207,  2993,
    2637,   290,   274,  4076,  3060,  1223,  2885,   284,    41,   836,
    4072,  1856, -1779,  1639,  2767,  2653, -3020,   485,    23,   476,
    1943,  2773,   867,  3545,   188,  1832,   505,  2017,   466,  2802,
    3494,  3004,  3809,  2360,   186,  3031,  2503,  3642,  3680,   744,
     757, -3016,   506,  3089,   476,   476,  2253,  3033,  1706,  1138,
    2330,  2333, -2578,  2336,   508,  2761,  2341,  2343,  4005,  2345,
     186,  3053,  3054,  2350,   837,   837,   837,  2428,     9,   186,
      10,   837,   837,   837,  1821,  2212,   207,  1821,  1526,  1640,
     967,   701,  4073,  2679,  3006,   867,  3327,   837,  2361,  1821,
     837,  2710,  2712,  4361,   758,  2705,   837,   837,   837,   837,
     837,   966,   186,  1944,  1945,   467,    72,   836,   186,  2780,
    2789,  1062,  3558,  4074,  1712,  2630,  2140,  2188,  1713,  1832,
    3849,   468,  4230,  3559,  1566,  3259,   837,  1120,    44, -1330,
     186,   837,   509,  4018,  2516, -1330,  2447,  -559,  2534,  2909,
     186,  2918,  2448,   879,  3290,  2449,  1110,  2450,  3664,   186,
    -559,  4290,  4007, -2700,  1772,  1773,  4291,  4475,  3660,   833,
     833,  4291, -2700, -2700, -3116,  4363,  4025, -2700,  2818,  4019,
    3665,  3666,  2893,  2141,  2142,  2143,  2144,   466,  2145,  1538,
    1946,  1947,  3328,   186,   967,  3101,   755,  2527,   759,   866,
     207, -2984,  2786,   866,   130,   476,  4364,  2840,    73,  3094,
     507,   186, -3116,   207,  3236,  3237,  1953,   186,   844,   504,
    4246,   253,  1224, -3136,  3934,   186,  3643,  4107,  1887,  4253,
     706,  1706, -3159,  3700, -3136,  3046,  4190,  4191,  1583,   510,
   -1330,  2911,  3523,   707,  3231,   186, -3159,  2445,  4108,   207,
    4025,   485,  1206,  2682, -3160,  2682,  1774,  2445,  1948,  4147,
    4148,  3518,  1207,  1775,   467, -1307,  1776,   186, -3160,  2146,
    2147,   444,  4075, -1330, -3134, -1330,  3245,   476,  3381,  -497,
     468,  1539,   706,   186,  2531,  -951,  1954,   928,  1955,   469,
      45,  1244,  1949,   866,  3059,   707,   505,  2502,   476,   186,
    2787,  1950,   531,   532,  1566,  3212,  1111,  1479,  1513,   677,
    1951,    52,   506,  3739,    46,  3401, -2639,  2635,  4076,  2557,
    1777,   504,  1778,  1779,  -497,  1641,   186,   853,  2567,   444,
    4242,  -951,   508, -3116,   207,  1820, -1779,  4245,  3804, -3134,
    1584,  4248,   147,  -951,  4250,  3060,  1585,   476,  1642,  4006,
    1995,  1952,    50,   867,   114,  4366, -3135,   867, -3116, -3116,
   -3116,   976,    76,  2682,  2682, -2038,  3946,  2939,  4007,  2710,
    1530,  2710,  3401,  4429,  4333,  3271,  1480,  3821,  3962,   880,
    2945,  4228,  4229,  1112,  3947,  4008,  1113,   148,   254,  -951,
    -497,  2928,  3247,  2826,  3272,  2921,  3248,   837,   505,  1114,
    2532,  4367,  3008,  3351,  1780, -1779,  1781,  1514,  2535,  2430,
     509,   470,  -951,  1782,   506,  1976,  1977,  2431,   533,  2932,
    2979,  1783,  2981,   207, -2764,  1515,  2855,  3329,  2659,  4430,
    1115,  4464,  2430,  1976,  1977,  1914,  4104,   833,   469,   833,
    2431,  3330,    79,  3009,  1034,    54,  2880,   867,  2175,  1714,
    2148,  2149,  2150,  2151,  2152,  2153,  2154,  2155,  2156,  3872,
    3352,  3353,  4328,   833, -2038,  4324,  1978,  1979,  4325,  -951,
     507,  3519,  2458,  3359,  3360,  2640,  4329,   154,  4418,  1532,
    4469,  4419, -2038,   678,  1978,  1979,   862,   833,  2683,   471,
    3363,  3364,    80,   186,    52,   837,  2503,   866,   866,   866,
     985,   171,   735,   992,  -497,  4449, -1330,   510,  1007,   844,
      56,  1312,  1567,  3810,  4343,  2767,  1204,  3061,    57,   929,
    2137,  1205,  2666,   930,  1111,  3963,  2721,  3973,  1784,  1997,
    1566,  3964,  2687,  2688,  2689,  2690,  2691,  2692,  2693,  2694,
    3382,  2856,    61,  1643,  2536,  4420,  4450,  4309,  1644,  2138,
    -951,  4105,   679,   931,  2956,  2957,    52,  1116,  -497,   967,
     470,  1774,  4289,  2714,  4310,  1645,   862,  1646,  1775,    62,
      81,  1953,   507,  4333,  3261,  1954,  2714,  1955,  1785,  1204,
    1516,  2157,  1786,  3974,  1205,  2770,   472,   208,   120,  4470,
     209,  3073,   508,  4472,   967,   866,  2535,  2893,  4311,  1715,
    1716,  1112,  3404,   207,  1113,   680,  3835,   115,   736,   737,
     116,   117,  -497,  1803,  1806,  1809,   119,  1114,  1010,  4292,
    4297,  -951,  3975,  4471,  2747,  4417,  -497,  4473,  4334,  4106,
    4484,  2845,   122,  2847,  2794,  2407,  4134, -2038,   471,  1836,
     124,  2807,  3456,  3457,  3458,  3916,   534,  3270,  1115,  -497,
     932,   867,   867,   867,  3917,  4312,  4426,  4428,   681,   833,
     127,  4328,  2193,   126,  4500,  2484,  2828,  2432,  2486,  2433,
     509,  3331,   444,  2194,  3262,  4329,  2492,  1837,  4313,  1117,
    2496,  2682,  1567,   128,  1118,  1119,  4468,  2499,  1204,  4169,
    1204,  4487,  2217,  1205,   508,  1205,   134,  1526,  4175,  2894,
    2895,  -951,  1204,  3246,  4478,   208,  4178,  1205,   209,  3531,
    1566,   188,  2829,  1821,  3077, -2799,   135,  1252,  1988, -2799,
    3543,  2158,  1647,   156,   846,  1204,  2781,  2660,  4328,  2330,
    1205,  3132,  2536,  -951,   141,   472,   915,  1990,  1991,  1992,
     836,   836,  4329,   142,  2159,  1526,  1611,  1995,  2926,   867,
     158,  4451,  1612,   186,  2683,  4413,  2683,  4135,  4513,  2510,
     143,  3459,  3460,  2814,  3461,  3258,   186,   510,  2809,  1204,
     145,  4423,   509,  2337,  1205,  1116,  1204,  3133,   165,  2338,
     682,  1205,  4136,  4137,  4138,  4077,  2464,  2821,   181,  3134,
    2533,  2465,  1648,  3578,  3579,  3963,  2830,  2831,  4453,  1204,
    4291,  3964,   146,  4455,  1205,  4510,  4167,  4511,   168,  4512,
    3388,   967,   967,  2432,  3389,  2433,  4167,   967,   967,   967,
     967,   175,  3301,  2902,   170,   967,  2854,   967,   503,   967,
    2854,   177,  -951,  3292,  1787,  3135, -2732, -2732, -2732, -2732,
    3342,  2949,  2851,  2852,  -497,  3005,  4431,  3218,  3219,  -497,
    4321,  1842,  1843,  1844,  1120,   178,  4432,  4433,  3136,  1199,
     189,  1202,   188,   217,  2683,  2683,  -497,   186,  -497,   510,
    2404,  2405,   197,  3595,  2898,   201,  2900,   216,  2877,   866,
    3404,   218,  2903,  2904,  2905,  2883,   227,   866,   220,  2910,
    1274,  1275,  1276,  1277,  4149,  4150,   221,  1117,  4341,  4342,
    2922,  2923,  2440,  4391,  4346,  -951,   228,  4386,  1567,  -951,
     229,  4387,  4388,    33,    34,  3137,  1840,  1841,  1788, -2731,
   -2731, -2731, -2731,   232,   967,  2887,  2888,   967,   252,  1789,
     256,  4434,   257,   439,   967,   967,   967,   967,  1816,  1817,
    1790,   262,  3662,   866,   446,   866,   480,   489,  3685,  3462,
    3463,   481,   490,  4435,  4436,   497,   514,  2926,  1918,  1919,
    1920,  1921,   518,   523,   781,  2754,  2756,  2758,  2760,  3019,
     782,   783,   639,  3464,   662,   691,   702,   703,   715,  1530,
     717,   732,   747,   748,   207,  -951,   785,   753,   754,   760,
     762,   761,   764,   260,   769,   770,  3138,   868,  1126,  3465,
    3047,  3431,   914,   925,   939,  3539,   948,   866,   836,   866,
     836,  1791,   976,   984,   444,  1034,  1069,  1070,  1071,  1077,
    1820,  1083,  1089,  -497,  3466,  1099,  1101,  1530,  1106,  1108,
    1127,  1128,  1131,   867,   836,  1144,  1134,  1531,   186,  1150,
    1165,   867,  1167,  1792,  1169,  -951,  1172,    65,  1173,  1174,
    1176,  2682,  1179,  1187,  1180,  1181,  1182,  1185,   836,  2407,
    2407,  1195,  2407,  2407,  2845,  1197,  1198,  3140,  1208,  1215,
    1217,  1235,  1120,  1229,  1242,  2666,  1246,  1244,  1249,  1526,
    1251,  1526,  1254,   912,  1256,  1258,  1269,  1278,  1567,   866,
    4077,  3798,  3799,  -497,  1282,   942,  3599,   867,  1283,   867,
    1284,  1308,  1310,   967,  1315,  1313,   973,   975,  1495,  1505,
    1508,  4392,  1509,  1511,  1533,  1534,   131,  1536,   837,   837,
    1541,  1546,  3467,  1548,  1551,  -951,  1552,  1560,  1556,  1558,
    3223,  3520,  1568,  3521,  1572,  1566,  1526,  3855,  3856,  1010,
      66,  1579,  1581,  1566,  4392,  1593,  1595,  3141,  1597,  2019,
    1603,  1610,   786,   787,   788,  3468,  1614,  1616,  1619,  3469,
    3470,   867,  1627,   867,   789,  1628,  1629,  1633,  1634,  3128,
    1635,  1637,  1692,  4368,  1678,  1703,  1720,   181,  1771,  3143,
    1812,  3590,  2683,  -951,  1802,  3471,  1813,  1823,  1824,  1838,
    1833,   504,  3860,  3861,  3862,  3166,  1845,  1847,    67,  1860,
     188,    68,   838,    69,  1872,  1865,  1261,   188,  1260,  1915,
    1917,  1929,  1963,  1969,  1982,  2008,  1484,  2010,  2012,  2131,
    2127,  2134,  2139,  2168,    70,  2169,  3296,  2171,  2176,  2179,
     836,   476,  2186,  2187,  3202,  2196,  2189,  3203,  2221,  3204,
    3205,  2229,  3005,   867,  3211,  2223,  3214,  3215,  3216,  3217,
    1566,   792,  2407,   967,  2224,  4082,  3224,  2231,  1191,  2237,
    2245,  1566,  2239,  3956,  3670,  2246,  2247,  2334,   505,  2249,
    2346,  2348,   795,   796,   797,  2353,  2413,  2429,  3951,  3238,
    2421,   798,  2439,  2440,   506,  2458,  2460,  2461,  2463,  2471,
    2467,  2473,  2468,  2474,  2475,  2477,  2485,  2487,  2493,  2494,
    2495,  2497,  2500, -2685,  2682,  3895,  2511,  2513,  2517,  2519,
     503,  2525,  2529,  2573,  3253,  2528,  2575,    71,  4089,  2576,
    2587,  2541,  3115,  2578,  2589,  2598,  2602,  2610,  2611,  2632,
    2639,   980,   967,  2654,  2668,  2669,  2678,   503,  2707,  2685,
    2719,  2722,  2723,  2732,  2735,  3990,  3991,  3472,   866,  3115,
     866,  3145,  1526,  2737,  1191,  3146,  2740,  2741,  2745,  1526,
    2742,  1530,  2746,  1530,  2764,   800,  2761,  2776,  2771,  2774,
    1306,  2808,  2793,  2819,  2798,  3336,   258,  2832,  1518,  2833,
    2834,  2835, -2776,  2884,  1765,  2901,   837,  3348,   837,  2502,
    1153, -2763,  2503,  2930,  2536,  2535,   866,  2954,  1821,  2983,
    2984,  2990,  2994,  3007,  2995,  1518,  3002,  3737,  3738,  3015,
   -2756,  3016,   837,  3021,  3037,  3038,  2660,  1507,  1530,  2659,
    3064,  3083,  3090,  3093,  3095,  3097,  2959,  3104,  2960,  3105,
    3806,  3147,  3108,  3113,  3114,  3129,   837,  3131,  3157,  3162,
    3160,  3163,   507,  3168,  3173,  3177,  3182,  3179,  3184,  3392,
    3186, -1794,  2407,  3189,  3226,  3228,  3235,  2682,  3233,   866,
    3239,  3243,  3425,  3256, -2690,  3241,  3252,  3260,  3299, -2761,
    3008,  3284, -2984,  3286,  1082,  3009, -2984,  3312,  1589,  3867,
    3314,  3305,  3321,  3438,  3324,  1600,  3338,    72,  3319,  1191,
    3444,  3148,   802,  3825,  3048,  3343,  3344,  3358,  3049,  3408,
    3361,  4197,   867,  3393,   867,  3078,  3079,  3369,  3398,  3399,
    3489,  3884,  3416,  1567,  3690,  3373,  3418,  1665,  3421,  3495,
    3496,  1567,  3394,  3423,  3427,  3428,  3430,   147,  3296,  3501,
    3492,  3505,  3493,  3507,  3532,  3502,  3454,  3499,  3533,  3517,
   -3135,  3540,  3478,  3542,  3556,  3561,  3563,  3481,  3482,  3570,
     867,  3571,  2683,  3575,  3382,  3485,   188,  3487,  3381,  3591,
    4082,  3601,  3604,  3602,   508,  3606,  3607,  3610,  3623,  3624,
    3649,  3151,  3448,  3448,  3652,   188,  2682,  3651,  3930,    73,
    3686,   188,  3687,    74,   188,  3689,   188,   188,  3715,  3722,
     803,   804,  3116,  3695,   188,  3733,   188,  3735,  3732,   188,
    3725,  3749,  3776,  3757,  3778,  3680,  3679,  3815,   837,  3816,
    3829,  3830,  3818,   867,  3701,  3851,  3739,  3882,  3852,  3116,
    3857,  3781,  3924,   967,  4383,  3873,  3874,  3876,  1567,  3153,
    3455,  3903,  3909,  3885,  1530,  1830,  3913,  3891,  3894,  1567,
    3925,  1530,   509,  3920,  3966,  3931,  3960,  3967,  3934,  3486,
     832,  3490,  3969,  3970,   866,   860,   866,  3958,  3933,  3999,
     806,  4000,  3924,  3500,  4001,  4002,  4026,  4091,   860,  4098,
    4126,  4129,  4130,   504,  4120,  4133,   860,  3336,  4139,  4142,
    4143,  4146,  4154,  4153,  2452,  4177,  4181,   807,  3547,  4202,
   -2854,  4389,  4322,  4343,    75,   808,  4446,  4445,   860,  4499,
     504,  4508,  4501,  4502,  3957,  4503,  4515,    21,  3628,   112,
    2445,   110,   164,  1191,   767,   152,  2767,  2961,   488,   809,
    3603,   279,   500,   155,   522,   186,  1922,  1924,  1130,   282,
    1685,   790,   791,    76,   280,  3587,   745,  3905,  2626,   510,
    3768,  4189,  3213,  3752,  3848,  3221,   741,  3232,  3750,  1306,
     505,  3449,  4131,  4003,  4144,  1076,  2642,  2782,   790,   791,
    2252,  4362,   995,  3172,  2407,  4489,   506,  3901,  3564,  3837,
    2631,  3183,  4097,  2401,  4240,  3954,  4320,   505,  4452,    77,
    4454,    78,  3828, -1794,  1526,  4255,  3622,  3617,   968,  3953,
    4184,  1989,  4170,   506,  4171,  4298,  4182, -2984,  3524,  3499,
    1504,  2962,  4174,  3240,  1705,  2683,  2426,  3250,   867,   438,
     867,  3254,   188,    79,  2453,  1711,  3639,  2927,  2515,  1214,
    3522,  3509,  1759,  3866,  3864,   188,   913,  1854,  1220,  1265,
    1871,  3529,  3402,  2551,  3269,  2569,  1273,  2940,  1930,   969,
    2989,  3291,  1927,  3627,  2594,  3655,  3530,   832,   832,   832,
    3297,  3609,  1981,  3298,  1311,   188,  3309,  3714,  2007,  3013,
    3117,  2612,   188,    80,  3308,  2644,  3797,  3672,  1535,  3555,
    1512,  3340,  2656,  2011,  3044,  3347,   967,  3357,  3355,  3099,
    2182,  2695,  3063,  1029,  3076,   860,  2220,  3117,  2729,  1569,
    3376,  3977,  2730,  1570,  3878,  2672,  2655,  3717,  3979,  3795,
    4102,  4201,  4117,  3425,  3538,  2869,  2407,  2863,  3746,  2240,
    4118,  3645,  1880,  3995,  3993,  3803,  3869,  2915,  3801,  3368,
    3751,  2917,  1878,  3366,   507,  3697,  3380,  1219,  3583,  3587,
    3581,  2938,  3387,  2936,  1022,  1937,  2590,  1938,  3069,  1555,
    3070,    81,  3442,  3071,  3072,  1066,  2963, -2984, -2984,  3188,
    2595,   507,   285,  1849,  3668,  3692,  2684,  2130,  2683,   860,
    2614,  3304,  4173,  2850,   765,  3092,  3684,  1852,  4257,  1186,
    2254,   860,  1133,  2702,  3845,  2931,  3181,  3371,  3811,  3573,
    4394,   188,   188,  3275,  4286,  3765,  3767,  3765,  3754,  4281,
    1168,  4415,  3659,  3753,  2792,  4477,   517,  3323,   768,  3755,
    3445,  2709,  2566,  4283,  1719,  4092,  2846,  3824,  3484,  2340,
    4439,     0,     0,     0,     0,  3723,     0,     0,     0,   188,
       0,     0,  2195,     0,   686,     0,     0,     0,     0,   967,
       0,  3871,     0,  2210,     0,     0, -1794,     0,     0,     0,
       0,     0,   860,     0,  1600,     0,   508,     0,     0,   860,
    4398,  2226,     0,     0,   844,     0,     0,     0,   832,  3756,
       0,     0,     0,     0,     0,  4287,  1530,     0,  3833,  3834,
    3770,  3771,     0,   508,     0,  3774,  3775,  2683,  4304,     0,
       0,  2964,  3403,     0,     0,     0,     0,     0,     0,     0,
       0,  3847,  3847,   844,     0,     0,  3843,  3919,     0,  3796,
       0,     0,  3843,     0,     0,     0,     0,   188,   188,     0,
    3805,  3118,     0,  3119,     0,     0,     0,     0,     0,     0,
       0,     0,  3120,  3121,   509,     0,  3122,  3123,     0,     0,
     188,   188,     0,  4256,     0,     0,  3910,  3911,  3118,  3817,
    3119,  3972,     0,     0,     0,     0,     0,     0,   967,  3120,
    3121,   509,     0,  3122,  3123,     0,     0,  3831,     0,     0,
       0,     0, -1794,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   844,     0,     0,     0,     0,
    2780,     0,     0,     0,  2965,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   832,   832,   832,     0,
       0,     0,     0,   832,   832,   832,     0,     0,     0,     0,
     188,     0,     0,  1828,  3807,  4101,     0,  2354,     0,   832,
    2355,   510,   832,     0,     0,     0,     0,     0,   832,   832,
     832,   832,   832,     0,     0,     0,     0,     0,  2356,  3961,
       0,     0,     0,  1566,     0,     0,     0,     0,   510,     0,
    4087,  2357,     0,     0,     0,     0,     0,     0,   832,     0,
       0,   476,  3900,   832,     0,     0,  4490,     0,  3908,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   188,     0,
       0,  3912,   967,     0,     0,     0,  2174,   779,  4090,   835,
       0,     0,   852,  4035,     0,     0,     0,   875,     0,   910,
       0,     0,     0,     0,     0,  1828,     0,     0,     0,  3765,
       0,     0,     0,     0,     0,     0,     0,   956,   959,  1191,
       0,     0,   956,     0,     0,     0,     0,   188,     0,   988,
       0,     0,     0,   490,     0,     0,     0,     0,     0,     0,
       0,  1566,     0,     0,  1033,     0,     0,     0,     0,  3978,
     833,   833,     0,  3980,     0,     0,     0,     0,  1055,  4176,
    1061,  1064,  3998,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  4034,  4083,     0,     0,     0,     0,     0,
     833,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    4095,  4096,     0,     0,     0,     0,     0,     0,   833,     0,
       0,     0,     0,     0,     0,     0,     0,  4103,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2407,  4204,
    4119,     0,     0,  4122,  4123,  4124,  4125,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  3765,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1171,     0,     0,
    4235,     0,   833,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  4161,  3694,     0,     0,     0,     0,  4247,     0,
       0,  4168,     0,     0,  4172,     0,     0,  4254,     0,     0,
       0,     0,     0, -3075,     0,     0,  1200,  1200,  1200,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1566,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   852,     0,     0,     0,     0,     0,     0,   832,
    2358,  2359,     0,     0,     0,     0,     0,     0,     0, -3075,
       0,   967,   860,     0,     0,  1828,     0,     0,   967,  1248,
       0, -3075,   967,     0,     0,   967,     0,     0,     0,     0,
    4209,  4210,  4211,  4212,  4213,     0,     0,  4215,  4216,  4217,
    4218,  4219,  4220,  4221,  4222,  4223,  4224,  4225,     0,     0,
    4227,     0,     0,  1888,  1889,  1890,  1891,     0,  4239,     0,
    1892,     0,  4235,     0,     0,     0,     0, -3075,     0,  4243,
       0,  4244,  3808,     0,     0,   860,     0,     0,  1893,  1894,
       0,  4252,     0,     0,  2360,     0,     0,     0,     0,     0,
   -3075,     0,     0,     0,     0,  1320,     0,   832,     0,     0,
       0,  1567,     0,     0,     0,  1491,  1493,     0,     0,  1828,
    4235,  4235,     0,     0,     0,     0,  4235,     0,     0,  4235,
       0,     0,  2686,  4235,  4235,  1528,     0,     0,  1895,     0,
       0, -1622,     0,  4396,     0,     0, -1622,     0,     0,  2361,
       0,     0,     0,     0,     0,     0,   967, -3075,     0,   967,
       0,  1565,     0,     0,     0,  -336,     0,     0,  4414,  4083,
       0,     0,     0,     0,     0,     0,     0,  1896,     0,     0,
       0,     0,     0,     0,  4424,     0,     0,  1200,     0,     0,
       0,     0,     0,  1601,     0,     0,     0,  4235,     0,     0,
       0,  4414,  4235,     0,     0,     0,     0,     0,     0,  1567,
       0,     0,  4462,  2229,     0,     0,  1618,     0,     0,     0,
    1623,  1625,     0,     0,  4331,  4332,     0,  4337,  2362,     0,
       0,     0,     0,     0,     0,     0,     0,     0, -3075,     0,
       0,     0,     0,     0,  4340,     0,     0,     0,     0,  4344,
    4345,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  4395,     0,  2363,
    4397,     0,     0,  4399,     0,     0,     0,  2364,     0,     0,
       0,     0, -1622,     0,     0,     0,     0, -2992, -1622, -1622,
       0,     0,  4514,     0,     0,  1897,     0,     0,     0,     0,
       0, -3075,     0,     0, -1622,     0,     0,     0,     0, -3075,
       0,     0,     0,     0,     0,     0,     0,     0,  1769,  1770,
       0,     0,     0,     0,     0,  1200,  1200,  1200,     0,     0,
       0,     0,  1200,  1200,  1200,  1819,     0,     0,  1819,     0,
       0,     0,  2365,   860,     0,     0,     0,   860,  1200,     0,
    1819,  1200,  1898,     0,     0,     0,  2366,  1200,  1200,  1200,
    1200,  1200,     0,     0,     0,     0,     0,     0,     0,     0,
    1567,  2367,  1061,     0,  1853,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1200,     0, -3075,
       0,  1899,  1200,     0,     0,     0, -3075,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   836,   836,     0,     0,     0,     0,     0,     0,     0,
       0, -3075,     0,     0,  1913,     0,     0,     0, -2998,     0,
       0,     0,     0,     0,  2368,     0,     0,   860,     0,     0,
       0,   836,     0,  2175,     0,     0,     0,  3132,  2369, -3075,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   836,
       0,     0,     0,     0,     0,     0,     0,  -333,     0,     0,
   -1622, -1622, -1622,     0,     0,     0,  2580,     0,     0,     0,
       0,     0, -1622,     0,  1900,     0, -2560,     0,     0,     0,
       0, -2560,     0,  3133,     0, -2560, -2560, -2560,     0,     0,
       0,     0,     0, -2560,  2581,  3134,     0,     0,     0, -1622,
       0,     0,     0,   836,     0,     0,     0,     0,     0,     0,
       0,  2370,     0,  1089,     0,  2371,     0,     0,     0,     0,
    2552,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2372,  2373,     0,     0,     0,     0,     0,     0,     0,
       0,  3135,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0, -1622, -1622, -1622,
       0,     0,  1191,     0,  3136,     0,     0, -1622,     0, -1622,
       0,     0,     0,     0,     0,     0, -1622,     0,  1901, -2560,
   -1622, -1622, -1622, -3075,     0,     0,     0, -3075,     0, -1622,
       0,     0, -1622,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0, -1622,     0,
       0,  3066,     0,     0,     0,     0,     0, -2560,     0,     0,
       0,  3137,     0, -2560, -2560,     0,     0,     0,     0,     0,
       0,   860,   860,   860,  3075,  3075,     0,     0,  1200, -2560,
       0,  3086,     0,     0,     0,     0,     0,     0,   781,     0,
       0,     0,     0,     0,   782,   783,     0,     0,     0,     0,
       0,     0,     0, -3075,     0,     0,     0,     0,     0,     0,
     785,     0,     0, -1622,     0,     0,     0,     0,     0,     0,
   -1622,     0,     0,  1746,     0,  1747,  1748,     0,     0,  2173,
       0,     0,     0,     0,     0,     0,     0,     0,     0, -1622,
       0,  2181,  3138,  2183,     0,  1902,     0,     0,     0,     0,
    1903,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     832,   832,     0, -3075,     0,     0,     0,     0,     0,   860,
       0,     0,     0,  1661,     0,     0,  1200, -3075,  -255,     0,
    2219,  -255,     0,     0,     0, -2560,     0,     0,  1904,     0,
   -1622,     0,     0,  1565,     0,     0,     0,     0,     0,  -255,
    1905, -3075,     0, -2560,     0,  3139,     0,     0,     0,     0,
       0, -2992,  -255,  3140,     0,     0,     0,     0,     0,   837,
     837,     0,     0,     0,     0,     0,     0,     0,     0,  -255,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   -1622,     0,     0, -3075,     0, -2560, -2560, -2560,     0,   837,
       0,     0,     0,     0,     0,     0,     0, -2560,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   837, -2560, -2560,
       0,     0,     0,     0,     0,     0,   786,   787,   788,     0,
       0,     0,     0,     0, -2560,     0,     0,     0,   789, -3075,
       0,     0,     0,  3141,  -255,     0,     0,     0,     0,  1906,
    3142, -3075,     0,     0, -1622,     0,     0, -3075,     0, -3075,
       0,  3268, -1622,     0, -2560,     0,     0,     0,     0,     0,
       0,   837,     0,     0,     0,  3143,     0,     0,     0,     0,
       0,     0,     0,     0,  1888,  1889,  1890,  1891, -1622, -1622,
       0,  1892, -2560, -2560, -2560, -2560, -2560,  1769,     0,     0,
       0,     0, -2560,  3144, -2560,     0,     0,     0,     0,  1893,
    1894, -2560,     0,  1565,     0, -2560, -2560, -2560,     0,     0,
       0,     0,     0,     0, -2560,   792,     0, -2560,     0,     0,
       0,     0,     0,     0,     0,  2483,     0,     0,     0,     0,
   -1622,     0,  1058, -2560,  1819,     0,   795,   796,   797,     0,
       0,     0,     0,     0,  3341,   798,     0,     0, -1622,  1895,
       0,     0,     0, -2560,     0,     0,     0,     0,     0, -1622,
       0,     0,     0,     0,     0,     0,     0,     0,   832,     0,
     832,     0,     0,     0,     0, -1622,     0, -2560,     0,     0,
       0,     0,     0, -1622,     0,     0,     0, -2560,  1896,     0,
   -2992,     0,     0,   860,   832,     0, -2560,     0, -2560,     0,
       0,   860,     0,     0,     0, -2560,     0, -1622,     0,     0,
       0, -2560,     0, -1622,     0,     0,     0,     0,   832,     0,
       0,  -255,  -255,     0, -2560,     0,     0, -1622,     0,   800,
       0,     0,     0,     0,  1913,     0,     0,  3145,  2570,     0,
       0,  3146,     0,     0,     0,     0, -2560,     0,     0,     0,
       0,     0,     0,   943,     0,     0,     0,   860,     0,   860,
       0,     0,     0, -2560,     0,     0,     0,     0, -2560,     0,
       0,     0, -2560, -2560, -2560, -2560,     0,     0,     0,     0,
   -2560,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -255,  1897,     0,  2605,     0,
       0,  2606,     0,  2607,  2608,  2609,     0,  3147,     0,     0,
       0,   860,     0,   860,     0, -2560,     0,     0,     0,  2623,
       0,     0,     0,  2624,     0,  2625,     0,     0,     0,     0,
       0,  2634,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   802,     0,     0,     0,
    -255,     0,     0,  1898,     0,     0, -2560,     0,     0,     0,
    3511,  3512,  3513,  3514,     0,     0,  -255,  3148,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     832,  3149,     0,     0,     0,     0,     0, -2560,     0,     0,
       0,     0,  1899,   860, -2560,     0,     0,     0,     0,     0,
   -2560, -2560,  3535,  3536,     0,  3150,     0,     0,     0,     0,
       0,     0,     0, -2560, -2560,     0, -2560,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -255,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   803,   804,     0,  3151,  1528,     0,
       0,  2652, -2560,     0, -2560,     0, -2560,     0,  2582,     0,
   -2560,     0, -2560, -2560, -2560, -2560,     0, -2560, -2560,  2583,
    -255,     0,     0,     0,     0,     0,   780,     0,  -255,     0,
       0,   503,     0, -2560,  2657,  1900,     0,     0,     0,  2658,
       0,     0,     0,  3152,     0,     0,     0,     0,  2676,  1565,
       0,     0,     0,     0,     0,  3153,     0,     0,     0,     0,
   -2560,  3154,     0,  3155,   806,     0,     0,     0, -2560,     0,
       0,     0, -2560,     0,     0,     0,     0,     0,     0,  1200,
    1200,     0,     0,     0,     0,     0,  2716,     0,     0,  2647,
   -2560,   807, -2560,  -255,  2728,  2728,     0,     0, -2560,   808,
       0,     0,  2734,     0,     0,     0,     0,  -255,     0,     0,
       0,     0, -2560,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -255,   809,     0,     0,     0,     0,     0,   186,
       0,     0, -2560, -2560, -2560,     0,     0,     0,     0,  1901,
       0,     0,     0,     0, -2560,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0, -2560, -2560,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   781,     0,     0,
       0, -2560,     0,   782,   783,     0,     0,     0,  3671,  -255,
    -255,     0,     0,     0,     0,  -255,     0,     0,     0,   785,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -255,
       0, -2560,   860,     0,   860,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -255,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0, -2560,
   -2560, -2560, -2560, -2560,     0,     0,     0,     0,     0, -2560,
       0, -2560,     0,     0,  1746,     0,  1747,  1748, -2560,     0,
     860,     0, -2560, -2560, -2560,     0,  1888,  1889,  1890,  1891,
       0, -2560,     0,  1892, -2560,     0,  1902,     0,     0,     0,
       0,  1903,  -255,     0,     0,   943,  -255,     0,     0,     0,
   -2560,  1893,  1894,     0,     0, -2560,     0,     0,     0,     0,
   -2560,     0,  -255,  -255, -2560, -2560, -2560, -3134,     0,  2867,
   -2560,     0, -2560,     0,     0,     0,     0,     0,     0,  1904,
    3793,     0,     0,   860,     0,     0,     0,     0,     0,     0,
       0,  1905,     0,     0, -2560,     0,  1769,     0,     0,     0,
       0,  1895,     0,     0, -2560,     0,     0,     0,     0,     0,
       0,     0,     0, -2560,     0, -2560,     0,  1200,     0,  1200,
       0,     0, -2560,     0,     0,   786,   787,   788, -2560,  1819,
       0,     0,     0,     0,     0,     0,     0,   789,     0,   647,
    1896, -2560,     0,  1200,     0,     0,  2925,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0, -2560,     0,
       0,     0,     0, -2560,   504,     0,     0,  1200,     0,     0,
       0,     0,     0,     0,   852,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1906,     0, -2560,     0,     0,     0, -2560,     0,     0,     0,
       0,     0, -2560, -2560,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0, -2560,     0,
       0,     0,   790,   791,   792,     0,     0,     0,     0,  2992,
       0,     0,   793,     0,   794,     0,     0,     0,     0,     0,
       0,   505, -2560,     0,  1565,   795,   796,   797,     0,     0,
       0,     0,  2623,     0,   798,     0,     0,   506,  1897,     0,
       0,     0,   781,     0,     0,     0,     0,     0,   782,   783,
       0,     0,     0,   799,     0,     0,  3032,     0,   860,     0,
     860,     0,     0,     0,   785,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0, -2560,  1898, -3134,     0,     0,     0,
       0,     0,     0,     0, -2560,     0,     0,     0,     0,     0,
       0,  3068,     0,     0,     0,     0,     0,     0,   800,  1200,
   -2560, -2560, -2560,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1899,  2925,     0,     0,     0,  1565,
       0,     0,     0,     0,   801,     0,     0,     0,     0,     0,
    1565,     0,     0,     0,     0,     0,     0,     0,     0, -2560,
       0, -2560,     0, -2560, -2560, -2560, -2560, -2560,     0, -2560,
   -2560, -2560, -2560,     0, -2560, -2560, -2560,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0, -2560, -2560,     0,
   -2560,     0,     0,     0,     0,   507,     0,     0,     0,     0,
       0,     0,     0, -2560,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0, -2560,     0,     0,
       0,     0,     0,     0,     0, -2560,     0,  1900,     0,     0,
     786,   787,   788, -2560,     0,     0,     0,     0,     0,     0,
       0,     0,   789,   648,     0,   802,     0,     0,     0, -2560,
       0,   780,     0,     0,     0, -2560,   503,     0,     0,     0,
       0, -2560, -2560, -2560, -2560, -2560,     0,     0,     0, -2560,
       0, -2560,  3281, -2560,     0,     0,     0,     0,     0,     0,
   -2560,     0,     0,     0, -2560, -2560, -2560,     0,     0,     0,
     852,     0,     0, -2560,     0,  2867, -2560,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0, -2560,     0,     0,     0,     0,   508,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   790,   791,   792,
       0,  1901, -2560,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   803,   804,     0,  3418,     0,     0,     0,
     795,   796,   797,     0,     0,     0, -2560,     0,     0,   798,
       0,     0,     0,     0,     0,     0, -2560,     0,     0,     0,
       0,     0,     0,     0,     0, -2560,     0, -2560,     0,     0,
       0,     0,     0,     0, -2560,     0,     0,     0,     0,     0,
   -2560,     0,   781,     0,     0,   509,     0,     0,   782,   783,
       0,     0,     0, -2560,  3295,     0,     0,     0,     0,     0,
       0,     0,     0,   806,   785,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0, -2560,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1746,     0,  1747,  1748,
     807,     0,     0,   800,     0,     0,     0,     0,   808,     0,
    2652,     0,     0,     0, -2560,     0,     0,     0,  1902,     0,
       0,     0,     0,  1903,     0,     0,     0,     0,     0,     0,
       0,     0,   809,     0,     0,     0,     0,   476,   186,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   510,     0,     0,     0,     0,     0,     0,     0,
       0,  1904,     0,     0, -2560,     0,     0,     0,     0,     0,
       0,     0,     0,  1905,  1153,     0,     0,     0,     0,     0,
       0,   883, -3134, -3134, -3134, -3134,     0,     0,     0, -3134,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0, -3134, -3134,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     802,     0,     0,     0,   884,     0, -2560,     0,     0,     0,
     786,   787,   788,     0,     0,     0,     0,     0,   852,     0,
       0,     0,   789,     0,     0,     0, -2984, -3134,     0,     0,
   -2984,     0, -2560, -2560,     0,     0,     0,     0,     0,     0,
       0,     0,  1906,     0,     0,     0,     0,     0,     0,   504,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   885,     0,     0,     0,     0, -3134,     0,     0,     0,
       0, -2560,     0, -2560,     0, -2560,   308,     0,     0, -2560,
     309, -2560, -2560, -2560, -2560,   310, -2560, -2560,     0,     0,
       0,     0,   311,     0,     0,     0,     0,     0,   803,   804,
       0,   312, -2560,     0,     0,     0,     0,   790,   791,   792,
       0,     0,     0,     0,     0,     0,  3515,   793,     0,   794,
       0,     0,     0,     0,     0,     0,   886,     0,     0, -2560,
     795,   796,   797,     0,     0,     0,  3295, -2560,     0,   798,
       0,     0,   506,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  3537,     0,   887,     0,     0,   799,     0,
       0, -2560,   313,   314,     0,     0,     0, -2560,   806,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0, -2560,     0,     0, -3134,     0,     0,     0,     0,     0,
       0,     0,     0,   315,     0,   807,     0,     0,     0,     0,
       0,     0,     0,   808,     0,     0,     0,     0,     0,     0,
       0,     0,  3572,   316,     0,     0,     0,   317,     0,     0,
    3576,     0,  3577,   800,     0,     0,     0,   809,     0,     0,
     888,     0,     0,   186,     0,   318,     0,     0,     0,     0,
       0, -3134,     0,     0,     0,     0,     0,     0,     0,   801,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0, -1383,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   319,     0,     0,     0,
   -3134,     0,   320,     0,   321,     0,     0,     0,   322,     0,
       0,     0,   323,     0,     0,     0,     0,     0,     0,     0,
     507,     0,     0,     0,     0,     0,     0,     0,     0,   324,
       0, -1383,     0,     0,     0, -1383, -1383, -1383, -1383, -1383,
       0, -1383, -1383, -1383, -1383,     0, -1383, -1383,     0, -1383,
   -1383,     0, -1383, -1383, -1383, -1383, -1383, -1383, -1383, -1383,
   -1383, -1383, -1383,     0,     0,   325,     0,     0,     0,     0,
     802, -2984,     0, -1383,     0,     0,     0,     0, -1383,  3663,
       0,   326,     0,     0,     0,     0, -1383,     0,     0,     0,
       0,   327,   328, -3134,     0,     0,     0,     0,     0,     0,
       0,     0,  3675,  3678,     0,     0,     0,     0,     0,     0,
       0,     0,  1156,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  3693,     0,     0,  3696,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0, -3134,
     329,     0,   508,     0,     0,     0,   889,     0,   330,     0,
       0,   331,     0,     0,     0,     0,   332,     0,     0,     0,
       0,     0,  3734,     0,     0,     0,     0,     0,   803,   804,
       0,   890,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   333,     0,     0,     0,     0,     0,     0,     0,
     334,     0,   335,     0,     0,   336,     0, -3134,   337,     0,
       0,     0,     0, -1383,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   338,     0,     0,   891,     0,     0,     0,
     509, -2984, -2984,     0,     0,     0,     0,     0,   781,     0,
       0,     0,     0,     0,   782,   783,  3675,     0,   806,  3678,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     785,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   807,     0,     0,     0,     0,
       0,     0,     0,   808,     0,     0,     0,     0,     0,   339,
       0,     0,  1565,     0,     0,   340,     0,   341,     0,     0,
     342,     0,     0,     0,     0,     0,     0,   809,     0,     0,
       0,   892, -3134,   186, -3134, -3134,   343,     0,     0,     0,
       0,     0,     0,     0,     0, -1383,     0,   510,     0,     0,
       0,   832,   832,     0, -3134,     0,     0,     0,     0, -3134,
       0,     0,     0,     0, -1383, -1383, -1383,     0, -1383, -1383,
   -1383, -1383,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   832,     0,     0,     0,  3868,     0,     0,   344,     0,
       0,     0,     0,     0,     0,     0,     0, -3134,     0,   832,
       0,     0,     0,     0,     0,     0,     0,     0,     0, -3134,
    1565,   345,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   786,   787,   788,     0,
       0,   346,     0,   832,     0,     0,     0,   347,   789,     0,
    3914,   348,     0,     0,   349,   350,  3915,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  3929,     0,     0,
       0,   351,     0,     0,     0,   504,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   352,     0,     0,
       0,     0,   353,     0,     0,     0,     0,     0, -3134,   354,
       0,     0,     0,     0,     0,   355,     0,     0,     0,     0,
    3929,   780,  1881,  3983,  3988,     0,   503,     0,     0,     0,
       0,     0,     0,     0,   356,     0,     0,     0,     0,  4013,
    4024,     0,     0,     0,  4086,   792,     0,     0,   357,     0,
       0,     0,     0,     0,   358,     0,     0,     0,     0,     0,
       0,     0,   505,     0,     0,   476,   795,   796,   797,     0,
   -1383,  1565,   359,     0,  3983,   798,     0,     0,   506,  3988,
       0,     0,     0,     0,     0,     0,   360,     0,     0,     0,
       0,  4121,     0,     0,     0,     0,   361,   362,     0,     0,
       0,     0,     0,     0,     0,   363,  4132,     0,   364,     0,
       0,     0,     0,     0,     0,     0,     0,  4145,     0,     0,
       0,     0,     0,   365,     0,     0,     0,     0,     0,  4160,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2173, -1383,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0, -1383,     0,     0,   800,
       0,  4179,   781,     0,  4180,     0,     0,     0,   782,   783,
     367,     0,     0,     0,     0,     0,     0,     0,   784,     0,
       0,     0,     0,   368,   785,     0,     0,     0,     0,   369,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  4203,   370,     0,  4205,  4206,  4207,  4208,     0,
       0,     0,     0,     0,     0,  4214,     0,     0,     0,     0,
       0, -1383,     0,     0,     0,     0,   507,     0,  4226,     0,
       0,     0,   371,     0,  4234,     0,     0,   372,     0,     0,
    4160,  4160,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2867,     0,     0,     0,     0,     0,     0,     0,
       0,  2867,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   802,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  4259,  4260,  4261,  4262,  4263,  4264,  4265,  4266,
    4267,  4268,  4269,  4270,  4271,  4272,  4273,  4274,  4275,  4276,
    4277,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   852,  4160,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   852,     0,     0,     0,     0,
     786,   787,   788,     0,     0,     0,     0,  4307,   508,     0,
       0,     0,   789,     0,     0,     0,     0,     0,     0,  4308,
       0,     0,     0,     0,     0,     0,  4234,     0,     0,     0,
       0,     0,     0,     0,   803,   804,     0,     0,     0,   504,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    4326,  4327,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  4339,
       0,     0,     0,     0,  4234,  4234,     0,     0,     0,     0,
    4234,     0,  4385,  4234,     0,     0,   509,  4234,  4234,     0,
       0,     0,     0,     0,     0,     0,     0,   790,   791,   792,
       0,     0,     0,  4400,   806,     0,     0,   793,     0,   794,
       0,     0,     0,     0,     0,     0,   505,     0,     0,     0,
     795,   796,   797,     0,     0,     0,     0,     0,  4416,   798,
       0,   807,   506,     0,     0,     0,     0,     0,     0,   808,
    1200,  1200,     0,     0,     0,     0,     0,     0,   799,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  4461,
       0,     0,     0,   809,     0,     0,     0,     0,     0,   186,
    1200,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   510, -2869,     0,     0,     0,  1200,  1321,
    4483,  4483,     0, -2869,     0,     0,  1322,     0,     0,     0,
       0,     0,     0,     0,  4488,     0,     0,     0, -2869,  4491,
       0,     0,     0,   800,     0,     0,     0,     0,     0,  4494,
    4498,     0,     0,     0,     0,  4483,  1323, -2869,     0,     0,
       0,     0,     0,  4507,     0,     0,     0,     0,     0,   801,
       0,     0,  1200,     0,     0,     0, -2869,  1324,  1325,  1326,
    1327,  1328,  1329,  1330,  1331,     0,     0,     0, -2869, -2869,
   -2869,     0,  1332, -2869,     0,     0,     0,  1333,     0,     0,
   -2869,     0,     0,     0,     0,     0,     0,     0,  1334,  1335,
    1336,  1337, -2869,     0, -2869, -2869,     0,     0,     0,     0,
     507,     0,     0,     0,     0,     0,  1338,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1339,     0,     0,  1340,
    1341,  1342, -2869,  1343,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     802,     0,     0,     0,     0,     0,     0,  1344,     0,     0,
       0,     0,     0,     0,     0,     0,  1345,  1346,  1347,  1348,
    1349,  1350,  1351,  1352,     0,     0,     0, -2869,     0,  1353,
    1354,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   -2869,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1355,  1356,     0,     0,  1357,
    1358,     0, -2869, -2869,  1359, -2869, -2869,     0,     0,     0,
       0,     0,   508,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1360,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   803,   804,
       0,     0,     0,     0,     0,     0,     0,     0,     0, -2869,
    1361,     0,     0,   805,  1362,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0, -2869,     0,     0,     0,  1363,
       0,     0,     0,     0,  1364,  1365,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     509,     0,  1366,  1367,  1368,  1369,  1370,     0,     0,  1371,
       0,     0,     0, -2869, -2869, -2869,     0,     0,   806,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0, -2869,     0,     0,     0,     0,
   -2869,     0,     0,     0,     0,   807,     0,     0,  1372,  1373,
    1374,  1375,     0,   808,     0,     0,     0,  1376,  1377,     0,
    1378,     0,  1379,  1380,  1381, -2869, -2869,  1382,     0,  1383,
       0, -2869, -2869,  1384,     0,     0,     0,   809,     0,     0,
       0,     0,     0,   186,     0,     0,     0,     0,     0,     0,
       0,     0,  1385,  1386,     0,     0,     0,   510,     0,     0,
       0,  1387,  1388,  1389,  1390,  1391,  1392,     0,     0,     0,
       0,     0,     0,     0,     0,  1393,     0,     0,     0,  1394,
       0,     0,     0,  1396,     0, -2869,     0, -2869,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0, -2869,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0, -2869, -2869, -2869,
       0,     0,  1397,     0,     0,     0,  1398,     0,  1399,  1400,
    1401,  1402,     0,     0,     0,     0,     0,     0,  1403,     0,
       0,     0,     0,     0, -2869,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1404,     0,     0,     0,     0,
       0,     0,     0,  1405,     0,     0,     0,     0, -2869, -2869,
   -2869,     0, -2869,     0, -2869, -2869,     0, -2869,     0, -2869,
   -2869,     0,     0,  1497, -2869,     0, -2869, -2869, -2869, -2869,
       0,     0,     0,     0,     0,     0,     0,     0,  1406,  1407,
       0,     0, -2869,     0,     0,     0,     0,     0,     0,     0,
   -2869,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0, -2869, -2869,     0,     0,     0,     0,     0,
       0,  1408, -2869,     0,  1409,     0,     0,     0, -2869,     0,
       0,     0,     0,     0,     0,  1410,     0,     0,     0,     0,
       0,  1411,     0,     0,     0,  1412,     0,  1413,  1414,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1415,     0,     0,  1416,  1417,     0,     0,     0,  1418,
       0,     0,     0,     0, -2869,     0,     0,     0,     0, -2869,
       0,     0,   780,  1419,   308,  1420,  1421,   503,   309,     0,
       0,     0,     0,   310,  1422,  1423,     0,     0,     0,     0,
     311,     0,     0,     0,     0,     0,     0,     0,     0,   312,
       0,     0,     0,     0,  1424,  1425,  1426,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0, -2869, -2869,
   -2869,     0,     0,     0,  1427,  1428,  1429,  1430, -2869,  1431,
       0,     0,     0,  1432,  1433,     0,     0,     0,     0,     0,
       0,  1434,  1435,     0,     0,     0,     0,     0,     0,  1436,
    1437,  1438, -2869,     0,     0,     0,     0,  1439,     0,     0,
     313,   314,  1440,     0,     0, -2869, -2869, -2869, -2869,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1441,     0,     0,     0,     0, -2869, -2869,     0,     0,     0,
       0,   315,     0,  1442,  1443,     0, -2869,     0,     0,  1444,
       0,     0,     0,     0,     0,  1498,     0,     0,     0,     0,
       0,   316,     0,   781,     0,   317,     0,     0,     0,   782,
     783,     0,  1445,  1446,     0,     0, -2869,     0,     0,  1040,
       0,  1447,     0,   318,     0,   785,     0,     0,     0,  1448,
   -2869, -2869,     0,     0,     0,  1449,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   319,  1450,     0, -2869,     0,     0,
     320,  1451,   321,     0,     0,     0,   322, -2869,     0,     0,
     323,     0,     0,     0, -2869,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0, -2869,     0,   324,     0, -2869,
   -2869, -2869,     0,     0,     0,     0,     0,     0,     0,     0,
     308,     0,  1452,     0,   309,     0, -2869, -2869,  1453,   310,
    1454, -2869, -2869,  1455, -2869,     0,   311,     0,     0,     0,
    1456, -2869,     0,   325,     0,   312,     0,     0,     0,     0,
       0,     0,  1457,     0,     0,  1458,     0,     0,     0,   326,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   327,
     328,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   786,   787,   788,     0,     0,   313,   314,     0,     0,
       0,     0,     0,   789,     0,     0,     0,     0,   329,     0,
       0,     0,     0,     0,     0,     0,   330,     0,     0,   331,
       0,     0,     0,     0,   332,     0,     0,   315,     0,     0,
     504,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   316,     0,     0,
     333,   317,     0,     0,     0,     0,     0,     0,   334,     0,
     335,     0,     0,   336,     0,     0,   337,     0,     0,   318,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   338,     0,     0,     0,     0,     0,     0,   790,   791,
     792,     0,     0,     0,     0,     0,     0,     0,   793,     0,
     794,     0,     0,     0,     0,     0,     0,   505,     0,     0,
     319,   795,   796,   797,     0,     0,   320,     0,   321,     0,
     798,     0,   322,   506,     0,     0,   323,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   799,
       0,     0,     0,   324,     0,     0,     0,   339,     0,     0,
       0,     0,     0,   340,     0,   341,     0,     0,   342,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   343,     0,     0,     0,     0,   325,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   326,     0,     0,     0,     0,
       0,     0,     0,     0,   800,   327,   328,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   344,     0,     0,     0,
     801,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   345,
       0,     0,     0,     0,   329,     0,     0,     0,     0,   308,
       0,     0,   330,   309,     0,   331,     0,     0,   310,     0,
     332,     0,     0,     0,     0,   311,     0,     0,     0,     0,
       0,   507,     0,     0,   312,     0,     0,     0,     0,   346,
       0,     0,     0,     0,     0,   347,   333,     0,     0,   348,
       0,     0,   349,   350,   334,     0,   335,     0,  1721,   336,
       0,     0,   337,  1722,  1723,  1724,  1725,     0,     0,   351,
    1726,     0,     0,     0,     0,     0,     0,   338,     0,     0,
       0,   802,     0,     0,     0,   352,     0,     0,     0,  1727,
     353,     0,     0,     0,     0,   313,   314,   354,     0,     0,
       0,     0,     0,   355,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   356,     0,     0,     0,   315,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   357,     0,  1728,     0,
       0,     0,   358,   339,     0,     0,   316,     0,     0,   340,
     317,   341,     0,   508,   342,     0,     0,     0,     0,     0,
     359,     0,     0,     0,     0,     0,     0,     0,   318,     0,
     343,     0,     0,     0,   360,  1729,     0,  1730,     0,   803,
     804,     0,     0,     0,   361,   362,     0,     0,     0,  1731,
       0,     0,     0,   363,  1041,     0,   364,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   319,
       0,   365,  1732,     0,     0,   320,     0,   321,     0,     0,
       0,   322,   344,     0,     0,   323,     0,     0,     0,     0,
       0,   509,     0,   366,     0,     0,     0,     0,     0,     0,
       0,     0,   324,     0,     0,   345,     0,     0,     0,   806,
       0,     0,     0,     0,     0,     0,     0,     0,   367,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   368,     0,     0,     0,     0,   807,   369,   325,     0,
       0,     0,     0,     0,   808,   346,     0,     0,     0,     0,
       0,   347,     0,     0,   326,   348,     0,     0,   349,   350,
       0,   370,     0,     0,   327,   328,     0,     0,   809,     0,
       0,     0,     0,     0,   186,   351,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   510,     0,
     371,   352,     0,     0,     0,   372,   353,     0,     0,     0,
       0,     0,     0,   354,     0,     0,     0,     0,     0,   355,
       0,     0,  1733,   329,   544,     0,     0,     0,     0,   545,
       0,   330,  1734,     0,   331,     0,   546,     0,   356,   332,
       0,     0,     0,     0,     0,   547,     0,     0,     0,     0,
       0,     0,   357,     0,     0,     0,     0,     0,   358,     0,
       0,  1735,     0,     0,     0,   333,     0,     0,     0,     0,
       0,     0,     0,   334,     0,   335,   359,     0,   336,     0,
       0,   337,     0,     0,     0,     0,     0,     0,     0,     0,
     360,     0,     0,     0,     0,     0,   338,     0,     0,     0,
     361,   362,     0,     0,     0,     0,   548,   549,     0,   363,
       0,     0,   364,     0,     0,     0,     0,     0,     0,  1736,
       0,     0,     0,     0,     0,     0,     0,   365,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   550,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1609,
       0,  1737,     0,     0,  1738,     0,     0,   551,     0,     0,
       0,   552,   339,     0,     0,     0,     0,     0,   340,     0,
     341,     0,     0,   342,   367,     0,     0,     0,     0,   553,
       0,     0,     0,     0,     0,     0,     0,   368,     0,   343,
       0,     0,     0,   369,     0,     0,     0,     0,     0,  1739,
       0,     0,     0,     0,     0,     0,  1740,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   370,     0,     0,
     554,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   555,     0,     0,     0,   556,     0,     0,     0,
       0,   344,  1741,     0,     0,     0,   371,     0,     0,     0,
       0,   372,     0,     0,     0,   557,     0,     0,  1742,     0,
     558,   559,   560,   561,   345,   562,   563,   564,   565,     0,
     566,     0,   567,   568,   569,     0,   570,   571,   572,   573,
     574,   575,   576,   577,   578,   579,   580,     0,     0,   581,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   346,   582,  1743,     0,     0,  1744,
     347,     0,     0,     0,   348,   583,   584,   349,   350,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   351,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     352,  1745,     0,     0,     0,   353,     0,     0,     0,     0,
       0,     0,   354,  1746,   585,  1747,  1748,     0,   355,     0,
       0,     0,   586,     0,     0,   587,     0,     0,     0,     0,
     588,     0,     0,     0,     0,  1749,     0,   356,     0,     0,
    1750,     0,     0,     0,     0,     0,     0,     0,  1751,     0,
       0,   357,     0,     0,     0,     0,   589,   358,     0,     0,
       0,     0,     0,     0,   590,     0,   591,     0,     0,   592,
       0,     0,   593,     0,     0,   359,     0,     0, -3094,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   360,
    1752,     0,     0,     0,     0,     0,     0,     0,     0,   361,
     362,     0,     0,     0,     0,     0,     0,     0,   363,     0,
       0,   364,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1753,     0,   365,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1754,     0,     0,     0,     0,
       0,     0,     0,   594,     0,     0,     0,     0,     0,   595,
       0,   596,     0,     0,   597,     0,     0,     0,     0,     0,
       0,     0,     0,   367,     0,     0,     0,     0,     0,     0,
     598,     0,     0,     0,     0,     0,   368,     0,     0,  1755,
       0,     0,   369,     0,     0,     0,     0,     0,     0,  1321,
       0,  1756,     0,     0,     0,     0,  1322,     0,  1757,     0,
       0,     0,     0,     0,     0,     0,   370,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   599,     0,     0,     0,  1323,     0,     0,     0,
       0,     0,     0,     0,     0,   371,     0,     0,     0,     0,
     372,     0,     0,     0,     0,   600,     0,  1324,  1325,  1326,
    1327,  1328,  1329,  1330,  1331,     0,     0,     0,     0,     0,
       0,     0,  1332,     0,     0,     0,     0,  1333,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1334,  1335,
    1336,  1337,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   601,  1338,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1339,     0,     0,  1340,
    1341,  1342,     0,  1343,     0,   602,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   603,     0,     0,     0,
       0,     0,     0,   604,     0,     0,     0,  1344,     0,   605,
       0,     0,     0,     0,     0,     0,  1345,  1346,  1347,  1348,
    1349,  1350,  1351,  1352,     0,     0,     0,     0,   606,  1353,
    1354,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   607,     0,
       0,     0,     0,     0,     0,  1355,  1356,     0,     0,  1357,
    1358,     0,     0,     0,  1359,     0,   608,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     609,     0,     0,     0,  3170,     0,  1360,     0,     0,     0,
     610,   611,     0,     0,     0,     0,     0,     0,     0,   612,
       0,     0,   613,     0,     0,     0,     0,     0,     0,     0,
    1361,     0,     0,     0,  1362,     0,     0,   614,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1363,
       0,     0,     0,     0,  1364,  1365,     0,     0,     0,   615,
    2257,  2258,  2259,  2260,  2261,     0,  2262,  2263,     0,     0,
       0,     0,  1366,  1367,  1368,  1369,  1370,     0,     0,  1371,
       0,     0,     0,     0,   616,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   617,     0,     0,
       0,     0,     0,   618,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1372,  1373,
    1374,  1375,     0,     0,     0,     0,     0,  1376,  1377,     0,
    1378,     0,  1379,  1380,  1381,     0,     0,  1382,     0,  1383,
       0,     0,     0,  1384,  2265,     0,  2266,  2267,  2147,  2268,
    2269,  2270,  2271,  2272,  2273,     0,   619,     0,     0,     0,
       0,   620,  1385,  1386,     0,     0,     0,     0,     0,     0,
       0,  1387,  1388,  1389,  1390,  1391,  1392,     0,     0,     0,
       0,     0,     0,     0,     0,  1393,     0,     0,     0,  1394,
       0,     0,     0,  1396,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2274,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1397,     0,     0,     0,  1398,     0,  1399,  1400,
    1401,  1402,     0,     0,     0,     0,     0,     0,  1403,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1404,     0,     0,     0,     0,
       0,     0,     0,  1405,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1497,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1406,  1407,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2275,  2276,
    2277,  2278,  2279,     0,     0,  2155,  2280,     0,     0,     0,
       0,  1408,     0,     0,  1409,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1410,     0,     0,     0,     0,
       0,  1411,     0,     0,     0,  1412,     0,  1413,  1414,     0,
       0,  2281,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1415,     0,     0,  1416,  1417,     0,     0,     0,  1418,
       0,     0,     0,     0,     0,  2282,     0,     0,     0,     0,
       0,     0,  2615,  1419,     0,  1420,  1421,     0,     0,     0,
       0,     0,     0,     0,  1422,  1423,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1424,  1425,  1426,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1427,  1428,  1429,  1430,     0,  1431,
       0,     0,     0,  1432,  1433,     0,     0,     0,     0,     0,
       0,  1434,  1435,     0,     0,     0,     0,     0,     0,  1436,
    1437,  1438,     0,     0,     0,     0,     0,  1439,     0,     0,
       0,     0,  1440,     0,     0,     0,  2616,     0,     0,     0,
       0,     0,     0,  2285,     0,     0,     0,     0,     0,     0,
    1441,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1442,  1443,  1321,     0,     0,     0,  1444,
       0,     0,  1322,     0,     0,  1498,     0,     0,   781,     0,
       0,     0,     0,     0,   782,   783,     0,     0,     0,     0,
       0,     0,  1445,  1446,     0,     0,     0,     0,     0,     0,
     785,  1447,  1323,     0,     0,     0,     0,     0,     0,  1448,
       0,     0,     0,     0,     0,  1449,     0,     0,  2287,     0,
       0,     0,     0,  1324,  1325,  1326,  1327,  1328,  1329,  1330,
    1331,     0,     0,     0,     0,     0,     0,     0,  1332,  2289,
       0,     0,     0,  1333,     0,  1450,     0,     0,     0,     0,
       0,  1451,     0,     0,  1334,  1335,  1336,  1337,     0,     0,
       0,     0,  2290,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1338,     0,     0,   780,     0,     0,     0,     0,
     503,     0,  1339,     0,     0,  1340,  1341,  1342,     0,  1343,
       0,     0,  1452,     0,     0,     0,     0,     0,  1453,     0,
    1454,     0,     0,  1455,     0,     0,     0,     0,     0,     0,
    1456,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1457,  1344,     0,  1458,     0,     0,     0,     0,
       0,     0,  1345,  1346,  1347,  1348,  1349,  1350,  1351,  1352,
       0,     0,     0,     0,     0,  1353,  1354,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   786,   787,   788,     0,
       0,  1355,  1356,     0,     0,  1357,  1358,     0,   789,     0,
    1359,     0,     0,  2294,  2295,  2296,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1360,     0,     0,   504,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   781,     0,     0,     0,
       0,     0,   782,   783,     0,     0,  1361,     0,     0,     0,
    1362,     0,     0,     0,     0,     0,     0,     0,   785,     0,
       0,     0,     0,     0,     0,  1363,     0,     0,     0,     0,
    1364,  1365,     0,     0,     0,     0,     0,  2617,     0,     0,
       0,     0,     0,     0,     0,   792,     0,     0,  1366,  1367,
    1368,  1369,  1370,     0,     0,  1371,     0,     0,     0,     0,
       0,     0,   505,     0,     0,     0,   795,   796,   797,     0,
       0,     0,     0,     0,     0,   798,     0,     0,   506,     0,
       0,     0,     0,  2299,  2300,  2301,     0,     0,     0,     0,
       0,     0,     0,     0,  1372,  1373,  1374,  1375,     0,     0,
       0,     0,     0,  1376,  1377,     0,  1378,     0,  1379,  1380,
    1381,     0,     0,  1382,  2191,  1383,     0,     0,     0,  1384,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  3171,     0,  1385,  1386,
       0,     0,     0,     0,     0,     0,     0,  1387,  1388,  1389,
    1390,  1391,  1392,     0,     0,     0,     0,     0,     0,   800,
       0,  1393,     0,     0,     0,  1394,  1395,     0,     0,  1396,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   786,   787,   788,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   789,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1397,     0,
       0,     0,  1398,     0,  1399,  1400,  1401,  1402,     0,     0,
       0,     0,     0,   504,  1403,     0,   780,     0,     0,     0,
       0,   503,     0,     0,     0,     0,   507,     0,     0,     0,
       0,  1404,     0,     0,     0,     0,     0,     0,     0,  1405,
       0,     0,     0,     0,     0,     0, -1720,     0,     0,     0,
       0,     0,     0,     0, -1720, -1720, -1720, -1720,     0,     0,
       0, -1720,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   790,   791,   792,  1406,  1407,   802,     0,     0, -1720,
   -1720,   793,     0,   794,     0,     0,     0,     0,     0,     0,
     505,     0,     0,     0,   795,   796,   797,     0,     0,     0,
       0,     0,     0,   798,     0,     0,   506,  1408,     0,     0,
    1409,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1410,   799,     0,     0,     0,     0,  1411, -1720, -1720,
       0,  1412, -1720,  1413,  1414,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1415,   508,     0,
    1416,  1417,     0,     0,     0,  1418,     0,   781,     0,     0,
       0,     0,     0,   782,   783,     0,     0,     0, -1720,  1419,
       0,  1420,  1421,     0,   803,   804,     0,     0,     0,   785,
    1422,  1423,     0,     0,     0,     0,     0,   800,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1424,  1425,  1426,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   801,     0,     0,     0,     0,     0,     0,
    1427,  1428,  1429,  1430,     0,  1431,   509,     0,     0,  1432,
    1433,     0,     0,     0,     0,     0,     0,  1434,  1435,  2618,
       0,     0,     0,     0,   806,  1436,  1437,  1438,     0,     0,
       0,     0,     0,  1439,     0,     0,     0,     0,  1440,     0,
       0,     0,     0,     0,   507,     0,     0,     0,     0,     0,
       0,   807,     0,     0,     0,     0,  1441,     0,     0,   808,
       0,     0,     0,     0,     0,     0, -1720,     0,     0,  1442,
    1443,     0,     0,     0,     0,  1444,     0,     0,     0,     0,
       0,     0,     0,   809,     0,     0,     0,     0,     0,   186,
       0,     0,     0,     0,   802,     0,     0,     0,  1445,  1446,
       0,     0,     0,   510,     0,     0,     0,  1447,     0,     0,
       0,     0,     0,     0,     0,  1448,     0,     0,     0,     0,
       0,  1449,     0, -1720,     0,   786,   787,   788,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   789,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1450,     0,     0,     0,     0,     0,  1451,  2192,     0,
       0,     0, -1720,     0,   504,     0,   508,     0,   780,     0,
       0,     0,     0,   503,     0,     0,     0, -3036, -3036, -3036,
       0,     0,     0,     0,     0,  1292,     0,     0,     0,     0,
       0,     0,   803,   804,     0,     0,     0,     0,  1452,     0,
       0,     0,     0,     0,  1453,     0,  1454,     0,     0,  1455,
       0,     0,     0,     0,     0,     0,  1456,     0,     0,     0,
       0,     0,   790,   791,   792,     0,     0,     0,  1457,     0,
       0,  1458,   793, -1720,   794,     0,     0,  2193,     0,     0,
       0,   505,     0,     0,   509,   795,   796,   797,  2194,     0,
       0,     0,     0,     0,   798, -1720,     0,   506,     0,     0,
       0,     0,   806,     0,     0,     0,     0,     0,     0,     0,
       0, -3036,     0,   799, -1720,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   807,
       0,     0,     0,   780,     0,     0,     0,   808,   503,     0,
       0, -1720,     0,     0,     0,     0,     0,     0,     0,   781,
    1292,     0,     0,     0,     0,   782,   783,     0,     0,     0,
       0,   809,     0,     0,     0,     0,     0,   186,     0,     0,
       0,   785,     0,     0,     0,     0,     0,     0,   800,     0,
       0,   510,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0, -1720,
       0,     0,     0,     0,   801,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0, -1720, -1720,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   780,     0,     0,     0,     0,   503,
       0,     0,     0,     0,     0,   507,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   781,     0,     0, -3036,     0,     0,
     782,   783,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1293,   785,     0,     0,     0,
       0,     0,     0,     0, -1720,   802, -1720, -1720,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0, -1720,     0,     0,     0,
       0, -1720,     0,     0,     0,     0,     0,   786,   787,   788,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   789,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   -3036, -3036,     0,     0,     0,     0,     0,     0,     0, -1720,
       0,     0,     0,     0,     0,     0,   504,   508,     0,     0,
       0, -1720,     0,     0,     0,   781,     0,     0,     0,     0,
       0,   782,   783,     0,     0,     0,     0,     0,     0,     0,
       0,   971,     0,   803,   804,     0,  1294,   785,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1293,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   790,   791,   792, -3036, -3036,     0,
       0,     0,     0,     0,   793,     0,   794,     0,     0,     0,
       0,     0,     0,   505,     0,   509,     0,   795,   796,   797,
       0,     0,   786,   787,   788,     0,   798,     0,     0,   506,
       0,     0,     0,   806,   789,     0,     0,     0,     0,     0,
   -1720,     0,     0,     0,     0,   799,     0,     0,     0,     0,
       0,     0,     0,     0, -1720,     0,     0,     0,     0,     0,
     807,   504,     0,     0,     0, -3036,     0,     0,   808,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1295,
       0,  1294,   809,     0,     0,     0,     0, -1720,   186, -3036,
       0,     0,     0,     0,     0,     0,     0,     0, -3036,     0,
     800,     0,   510,     0,     0,     0,     0, -3036,     0,   790,
     791,   792,     0,  1296,     0,   780,     0,     0,     0,   793,
     503,   794,     0,   786,   787,   788,   801,     0,   505,     0,
       0,     0,   795,   796,   797,   789,     0,     0,     0,     0,
       0,   798,     0,     0,   506,     0,     0,     0, -3036,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     799,     0,   504,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   507,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1295,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     790,   791,   792,     0,     0,   800,     0,   802,     0,     0,
     793,     0,   794,     0,     0,     0,     0,     0,  1296,   505,
       0,     0,     0,   795,   796,   797,     0,     0,     0,     0,
       0,   801,   798,   780,     0,   506,   781,     0,   503,     0,
       0,     0,   782,   783,     0,     0,     0,     0,     0,     0,
       0,   799,     0,     0,     0,     0,     0,     0,   785,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   780,     0,     0,     0,   508,
     503,     0,   507,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   780,   803,   804,     0,     0,   503,
       0,     0,     0,     0,     0,     0,   800,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   802,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   801,     0,  1297,     0,  1298,     0, -3036,     0,
       0,     0, -3036,     0, -3036,  1299,  1300,   509,     0,  1301,
    1302,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   781,   806,     0,     0,     0,     0,
     782,   783,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   507,     0,     0,   785,     0,     0,     0,
       0,     0,   807,     0,   508,     0,     0,     0,     0,     0,
     808,     0,     0,     0,     0,     0,   781,     0,     0,     0,
       0,     0,   782,   783,   786,   787,   788,     0,     0,     0,
     803,   804,     0,     0,   809,     0,   789,     0,   785,     0,
     186,     0,     0,   802,     0,   781,     0,     0,     0,     0,
       0,   782,   783,     0,   510,     0,     0,     0,     0,     0,
       0,     0,     0,   504,     0,     0,     0,   785,     0,  1297,
       0,  1298,     0,     0,     0,     0,     0,     0,     0,     0,
    1299,  1300,   509,     0,  1301,  1302,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     806,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   508,     0,     0,     0,     0,
       0,   790,   791,   792,     0,     0,     0,   807,     0,     0,
       0,   793,     0,   794,     0,   808,     0,     0,     0,     0,
     505,   803,   804,     0,   795,   796,   797,     0,     0,     0,
       0,     0,     0,   798,     0,     0,   506,     0,     0,   809,
       0,     0,   786,   787,   788,   186,     0,     0,     0,     0,
       0,     0,   799,     0,   789,     0,     0,     0,     0,   510,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   509,     0,     0,     0,     0,     0,     0,
       0,   504,     0,     0,   786,   787,   788,     0,     0,     0,
    1605,   806,     0,     0,     0,     0,   789,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   780,     0,   786,   787,   788,   503,   800,   807,     0,
       0,     0,     0,   504,     0,   789,   808,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   790,
     791,   792,     0,   801,     0,     0,     0,     0,     0,   793,
     809,   794,   504,     0,     0,     0,   186,     0,   505,     0,
       0,     0,   795,   796,   797,     0,     0,     0,     0,     0,
     510,   798,     0,     0,   506,     0,     0,     0,     0,     0,
       0,   790,   791,   792,     0,     0,     0,     0,     0,     0,
     799,   793,     0,   794,   507,     0,     0,     0,     0,     0,
     505,     0,     0,     0,   795,   796,   797,     0,     0,     0,
     790,   791,   792,   798,  1827,     0,   506,     0,     0,   503,
     793,     0,   794,     0,     0,     0,     0,     0,     0,   505,
       0,     0,   799,   795,   796,   797,     0,     0,     0,     0,
       0,     0,   798,     0,   802,   506,     0,     0,     0,     0,
       0,     0,   781,     0,     0,   800,     0,     0,   782,   783,
       0,   799,   888,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   785,     0,     0,     0,     0,     0,
       0,   801,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   800,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   508,     0,     0,     0,
       0,     0,     0,   801,     0,     0,   800,     0,     0,     0,
       0,     0,   507,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   803,   804,     0,     0,     0,     0,     0,     0,
       0,     0,   801,     0,     0,   781,     0,     0,     0,     0,
       0,   782,   783,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   507,     0,     0,   785,     0,  1189,
       0,     0,   802,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   509,     0,     0,     0,     0,     0,
       0,     0,     0,   507,     0,     0,     0,     0,     0,     0,
       0,     0,   806,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   802,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   807,
     786,   787,   788,     0,     0,     0,     0,   808,     0,     0,
       0,     0,   789,   802,   508,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   809,     0,     0,     0,     0,     0,   186,     0,   504,
     803,   804,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   510,     0,     0,     0,     0,   508,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  3084,     0,     0,
       0,     0,   803,   804,     0,   508,     0,     0,     0,     0,
       0,     0,   509,     0,     0,     0,     0,   790,   791,   792,
       0,     0,     0,   786,   787,   788,     0,   793,     0,   794,
     806,   803,   804,     0,     0,   789,   505,     0,     0,     0,
     795,   796,   797,     0,     0,     0,     0,     0,     0,   798,
       0,     0,   506,     0,   509,     0,     0,   807,     0,     0,
       0,     0,   504,     0,     0,   808,     0,     0,   799,     0,
       0,     0,   806,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   509,     0,     0,     0,     0,     0,   809,
       0,     0,     0,     0,     0,   186,     0,     0,     0,   807,
       0,   806,     0,     0,     0,     0,     0,   808,     0,   510,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     790,   791,   792,     0,     0,     0,     0,     0,   807,     0,
     793,   809,   794,   800,     0,     0,   808,   186,     0,   505,
       0,     0,     0,   795,   796,   797,     0,     0,     0,     0,
       0,   510,   798,     0,     0,   506,     0,     0,     0,   801,
     809,     0,     0,     0,     0,     0,   186,     0,     0,     0,
       0,   799,     0,     0,     0,     0,     0,     0,     0,     0,
     510,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  3826,     0,     0,     0,     0,
       0,  -570,     0,     0,     0,     0,     0,     0,     0,     0,
     507,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   800,     0,  -570,     0,
       0,     0,     0,  -570,  -570,  -570,  -570,  -570,     0,     0,
    -570,  -570,  -570,  -570,  -570,  -570,     0,  -570,  -570,  -570,
     802,     0,   801,     0,     0,     0,     0,     0,  -570,  -570,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -570,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -570,     0,     0,     0,     0,
    -570,     0,     0,   507,     0,     0,     0,  -570,  -570,     0,
       0,  -570,     0,     0,     0,     0,     0,     0,  -570,     0,
       0,     0,   508,     0,     0,  -570,     0,  -570,  -570,  -570,
    -570,  -570,  -570,  -570,  -570,  -570,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   803,   804,
       0,     0,     0,   802,     0,     0,  -570,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -570,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -570,     0,     0,
     509,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   806,     0,
       0,     0,     0,     0,     0,   508,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   807,     0,     0,     0,     0,
       0,   803,   804,   808,     0,     0,  -570,     0,     0,     0,
       0,     0,     0,     0,     0,  -570,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   809,     0,     0,
       0,     0,     0,   186,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   510,     0,     0,
    1079,     0,     0,   509,     0,     0,     0,     0,     0,  -570,
    -570,  -570,  -570,  -570,     0,     0,  -570,  -570,     0,     0,
       0,   806,  -570,     0,     0,     0,     0,  -570,     0,     0,
    -570,     0,  -570,     0,     0,     0,     0,     0,     0,  -570,
       0,     0,     0,     0,     0,     0,     0,     0,   807,  -570,
       0,     0,  -570,     0,     0,     0,   808,     0,     0,     0,
       0,  -570,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -570,     0,     0,     0,
     809,     0,     0,     0,     0,     0,   186,     0,     0,     0,
       0,     0,     0,  -570,     0,     0,     0,     0,     0,     0,
     510,     0,     0,  -570,     0,  1078,     0,  -570,     0,     0,
       0,     0,     0,     0,     0,  -570,     0,     0,     0,  -570,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -570,  -570,     0,     0,  -570,     0,     0,  -570,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -570,     0,   503,     0,  -570,     0,
       0,  -570,  -570,  -570,  -570,  -570,     0,  -570,  -570,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -570,     0,
       0,     0,     0,     0,  -570,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -570,
       0,     0,     0,     0,     0,     0,  -570,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1518,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -570,     0,
    -570,     0,  -570,     0,     0,  -570,     0,  -570,  -570,  -570,
    -570,  -570,  -570,  -570,  -570,  -570,     0,     0,  -570,  -570,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -570,     0,     0,     0,     0,
    -570,     0,  -570,  -570,     0,     0,     0,     0,     0,     0,
       0,     0,   781,     0,     0,     0,     0,     0,   782,   783,
       0,     0,     0,  -570,     0,     0,  -570,     0,     0,     0,
       0,  -570,     0,     0,   785,  -570,     0,  -570,     0,     0,
    4284,     0,     0,  -570,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  -570,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -570,     0,  -570,  -570,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -570,  -570,  -570,  -570,
    -570,     0,  -570,  -570,     0,     0,     0,     0,     0,     0,
       0,  -570,     0,  -570,     0,     0,     0,     0,  -570,     0,
       0,     0,     0,     0,     0,  -570,  -570,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1079,     0,  -570,     0,  -570,  -570,  -570,     0,  -570,  -570,
    -570,  -570,  -570,  -570,     0,     0,  -570,  -570,     0,     0,
    -570,     0,  -570,     0,     0,  -570,  -570,     0,     0,     0,
       0,  -570,  -570,     0,     0,     0,     0,     0,     0,  -570,
    -570,     0,  -570,  -570,  -570,  -570,  -570,  -570,  -570,  -570,
    -570,     0,  -570,     0,  -570,     0,     0,     0,     0,  1519,
     786,   787,   788,     0,     0,     0,     0,     0,     0,  -570,
       0,     0,   789,     0,     0,     0,  -570,     0,     0,  -570,
       0,     0,     0,     0,  -570,     0,     0,     0,     0,     0,
    -570,     0,     0,  -570,     0,     0,     0,     0,     0,   504,
       0,     0,     0,  -570,     0,     0,     0,  -570,     0,     0,
       0,  -570,  -570,     0,     0,  -570,     0,     0,     0,  -570,
       0,     0,     0,     0,  -570,  -570,  -570,  -570,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -570,     0,     0,   503,     0,     0,     0,     0,  -570,     0,
       0,     0,     0,     0,  -570,     0,     0,   790,   791,   792,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -570,
       0,     0,     0,     0,     0,     0,  1520,   197,     0,     0,
     795,   796,   797,     0,  -570,     0,     0,     0,     0,   798,
       0,     0,   506,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1518,     0,     0,     0,  1079,     0,     0,     0,     0,
       0,     0,     0,     0,  -570,  -570,  -570,  -570,  -570,     0,
       0,  -570,  -570,     0,     0,     0,     0,     0,     0,     0,
    -570,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -570,
       0,     0,     0,     0,     0,  -570,     0,  -570,     0,     0,
       0,     0,     0,   800,     0,  -570,     0,     0,     0,   781,
    -570,     0,     0,     0,     0,   782,   783,     0,     0,     0,
       0,  -570,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   785,     0,  -570,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -570,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -570,     0,     0,  -570,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -570,     0,     0,
     507,  -570,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -570,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -570,
     802,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -570,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -570,     0,  -570,  -570,  -570,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -570,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -570,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1519,   786,   787,   788,
    -570,     0,   508,     0,  -570,     0,     0,     0,     0,   789,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -570,     0,     0,     0,     0,  -570,     0,     0,   803,   804,
       0,  -570,     0,     0,  -570,     0,   504,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -570,     0,
       0, -3134,     0,     0,     0,     0,     0,  -570,     0,     0,
       0,     0,     0,     0,  -570,  -570,     0,     0,     0,     0,
       0,     0,     0,     0,  -570,  -570,  -570,     0,     0,     0,
     509,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -570,     0,     0,     0,   790,   791,   792,     0,   806,     0,
       0,     0,     0,     0,  -570,     0,     0,     0,     0,     0,
       0,     0,  -570,   505,     0, -2085,     0,   795,   796,   797,
       0,     0,     0,     0,     0,   807,   798,   197,     0,   506,
    2024,     0,     0,   808,     0,     0,     0,     0,     0,  2025,
       0,     0,     0,     0, -2085,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2026,     0,     0,   809,     0,     0,
       0,     0,   476,   186,     0,     0,     0,  -570,     0,  -570,
    -570,  -570,     0,  2027,     0,     0,     0,   510,     0,  -570,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2028,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2029,  2030,  2031,     0,     0,  2032,
     800,  -570,     0,     0,     0,     0,  2033,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2034,     0,
    2035,  2036,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -570,
       0,     0,     0,     0,     0,     0,     0,     0,  2037,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -570,     0,     0,     0,     0,     0,     0,  -570,
       0,     0,     0,     0,     0,     0,     0,   507,     0,  -570,
    -570,  -570,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -570,     0,     0,     0,     0,
       0,     0,     0,  2038,     0,     0,     0,     0,     0,  -570,
       0,     0,     0,  -570,     0,     0,  2039,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   802,     0,     0,
       0,     0,   197,     0,     0,     0,     0,     0,  2040,  2041,
       0,  2042,  2043,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1153,     0,     0, -3134,  2044,     0,     0,     0, -3134,
   -3134, -3134, -3134,     0,     0,  1154, -3134,     0,     0,   508,
       0,  2045,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0, -3134,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   803,   804,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2046,
    2047,  2048,     0,     0,     0,     0,     0,     0, -3134,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2049,     0, -2984, -3134,     0,  2050, -2984,     0,     0,
       0,     0,  4347,     0,     0,     0,     0,   509,     0,     0,
       0,     0,   781,     0,     0,     0,     0,     0,   782,   783,
       0,  2051,  2052,     0,     0,   806,     0,  2053,  2054,     0,
       0, -3134,     0, -3134,   785,     0,     0,     0,     0,     0,
       0,     0, -2085,     0,     0, -3134,     0,     0,     0,     0,
       0,     0,   807,     0,     0,  2257,  2258,  2259,  2260,  2261,
     808,  2262,  2263,     0,     0,     0,     0,     0, -3134,     0,
       0, -2085,  2264,     0,     0,     0,     0,     0,     0,     0,
       0,  2055,     0,  2056,   809,     0,     0,     0,     0,   476,
     186,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2057,     0,     0,     0,   510,     0,     0,     0,     0,     0,
       0,     0,     0,  2058,  2059,  2060,     0,     0,     0,     0,
       0,  4348,     0,     0,  1774,  4349,     0,     0,     0,     0,
       0,  1775,     0,     0,     0,     0,     0,     0,     0,  2265,
    2061,  2266,  2267,  2147,  2268,  2269,  2270,  2271,  2272,  2273,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2062,  2063,  2064,     0,  2065,     0,
    2066,  2067,     0,  2068,     0,  2069,  2070,     0,     0,     0,
    2071,     0,  2072,  2073,  2074,  2075,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2076,     0,
     786,   787,   788,     0,     0,     0,  2077,     0, -3134,     0,
       0,  2274,   789,     0,     0,     0,     0,  1155, -3134,  2078,
    2079,     0,     0,     0,     0,     0,     0,     0,  2080,     0,
       0,     0,     0,     0,  2081,     0,     0,     0,     0,   504,
       0,     0,     0,     0,     0,     0,     0, -3134,     0,     0,
       0,     0,     0,     0,     0,     0,  1153,     0,     0,     0,
       0,     0,     0,     0, -3134, -3134, -3134, -3134,     0,     0,
       0, -3134,     0,     0,     0,     0,     0,     0,     0,     0,
    2082,     0,     0,     0,     0,  2083,     0,     0,     0, -3134,
   -3134, -3134,  2959,     0,  2960,     0,     0,   790,   791,   792,
       0,     0,     0,     0,     0, -3134,     0,   793,     0,   794,
       0,     0,     0,     0,     0,     0,   505, -1794, -2984,     0,
     795,   796,   797,  2275,  2276,  2277,  2278,  2279,     0,   798,
    2155,  2280,   506,     0,  2084,  2085,  2086, -3134, -2984, -3134,
   -3134,     0, -2984,     0,  2087,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1156,
       0,     0,     0,     0,  4350,     0,  2281,     0,  2088,     0,
       0,     0,     0,     0,     0,     0,     0,     0, -3134,     0,
       0,  2089,  2090,  2091,  2092, -3134,     0,     0,     0,     0,
    2282,     0, -3134,     0,     0,     0,     0,     0,     0,     0,
       0,  2093,  2094,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2095,   800,     0,     0,     0,  2283,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0, -3134,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   801,
       0,     0,  2096,     0, -3134,     0,  4351,     0,     0,     0,
    4352,     0,     0,     0,     0,     0,  2097,  2098,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0, -2984, -2984,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     507,     0, -3134,  2099,     0, -3134, -3134,     0,  2285,     0,
       0,     0,     0,  2100,     0,     0,     0,     0,     0,     0,
    2101,  4353,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2102,     0,     0,     0,  2103,  2104,  2105,     0,     0,
       0,     0,     0,     0,     0,     0,     0, -3134,     0,     0,
     802,     0,  2106,  2107,     0,     0,     0,  2108,  2109, -3134,
    2110, -3134, -3134, -3134,  4354,     0,     0,  2111,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0, -3134,     0,  2287,     0,     0, -3134,     0,     0,     0,
       0,     0,     0,  2961, -3134,     0,     0,     0,     0,  2288,
       0,     0, -3134,     0,  2289,     0,     0,     0,     0,     0,
    4355,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   508,     0, -3134,     0,     0,  2290,     0,     0,
       0,     0,     0,     0,     0,     0, -3134,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   803,   804,
       0,  2255,     0,     0,     0,     0,     0,     0,     0, -1794,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   -3134,     0,     0, -2984,     0,     0,  2256,  2962,     0,  2257,
    2258,  2259,  2260,  2261,     0,  2262,  2263,  1808,     0,     0,
   -2986, -3134,     0,     0,     0, -3134,  2264,     0,   823,     0,
     509,     0,   824,   825,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   806,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0, -3134,     0,     0,     0,     0,
   -3134,     0,     0,     0,     0,   807,  2293, -3134,  2294,  2295,
    2296,     0,     0,   808, -3134,     0,     0,     0,  4356,     0,
       0,     0,     0,  2265,     0,  2266,  2267,  2147,  2268,  2269,
    2270,  2271,  2272,  2273,     0,     0,     0,   809,     0,     0,
       0,     0,     0,   186,     0,     0,     0,     0,     0,     0,
    4357,     0,   476,     0,     0,     0,     0,   510,     0, -3134,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2255,     0,  2963, -2984, -2984,     0,     0,     0,  4358,     0,
       0,     0,     0,     0,     0,  2274,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2256,     0,     0,  2257,  2258,
    2259,  2260,  2261,     0,  2262,  2263,     0,     0,  4359,     0,
       0,     0,     0,     0,     0,  2264,     0,   781,  2299,  2300,
    2301,     0,     0,   782,   783,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2302,     0,     0,     0,     0,   785,
       0,     0,     0,     0,     0,     0,     0,     0,  2249,     0,
       0,     0,  4360,     0, -3134,     0, -3134, -3134,     0,     0,
       0,     0, -1794,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0, -3134,     0,     0,     0,
       0, -3134,  2265,     0,  2266,  2267,  2147,  2268,  2269,  2270,
    2271,  2272,  2273,     0,     0,     0,     0,  2275,  2276,  2277,
    2278,  2279,     0,     0,  2155,  2280,     0,  2964,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0, -3134,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0, -3134,     0,     0,     0,     0,     0,     0,     0,     0,
    2281,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2274,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2282,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    52,     0,     0,     0,     0,     0,     0, -1794,     0,
       0,  2283,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0, -3107,     0,   786,   787,   788,     0,     0,
    2965,     0,     0,     0,     0,  2284,     0,   789,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   -3134,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   504,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2275,  2276,  2277,  2278,
    2279,     0,  2285,  2155,  2280,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   476,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   790,   791,   792,     0,     0,     0,     0,  2281,
       0,     0,   793,     0,   794,     0,     0,     0,     0,     0,
       0,   505,     0,     0,     0,   795,   796,   797,  2286,     0,
       0,     0,     0,  2282,   798,     0,     0,   506,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2287,     0,     0,
      52,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2283,     0,     0,  2288,     0,     0,     0,     0,  2289,     0,
       0,     0, -3107,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2284,     0,     0,     0,     0,     0,
       0,  2290,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   800,     0,
    4037,  2291,     0,     0,     0,  4038,  4039,  4040,  4041,     0,
       0,     0,  4042,  2257,  2258,  2259,  2260,  2261,     0,  2262,
    2263,  2285,     0,     0,   801,     0,     0,     0,     0,     0,
    4043,  4044,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    4045,     0,     0,  2292,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  4046,     0,     0,   507,     0,  2286,     0,  1712,
    4047,     0,     0,  1713,     0,     0,     0,     0,     0,     0,
    2293,     0,  2294,  2295,  2296,     0,  2287,  2265,     0,  2266,
    2267,  2147,  2268,  2269,  2270,  2271,  2272,  2273,     0,     0,
       0,     0,  2288,     0,     0,     0,     0,  2289,     0,     0,
       0,     0,     0,     0,     0,   802,     0,     0,  4048,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2297,     0,
    2290,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2274,
    2291,     0,  -629,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0, -3107,     0,   508,     0,     0,
       0,     0,  2298,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2299,  2300,  2301,     0,     0,     0,     0,     0,
       0,     0,  2292,   803,   804,     0,     0,     0,  2302,     0,
       0,     0,     0,     0,  2897,     0,     0,  4049,     0,     0,
       0,     0,  2249,     0,     0,     0,     0,     0,     0,     0,
    2303,     0,     0,     0,     0,     0,     0,     0,     0,  2293,
       0,  2294,  2295,  2296,   781,     0,     0,     0,     0,     0,
     782,   783,     0,   823,     0,   509,     0,   824,   825,     0,
       0,  2275,  2276,  2277,  2278,  2279,   785,     0,  2155,  2280,
       0,     0,     0,   806,  4050,     0,     0,     0,     0,     0,
       0,     0,  4051,     0,  4052,     0,     0,  2297,     0,     0,
       0, -3036,     0,     0,     0,     0,     0,     0,     0,     0,
     807,  4053,     0,     0,  2281,     0,     0,     0,   808,     0,
    4037,     0,     0,  4054,     0,  4038,  4039,  4040,  4041,     0,
       0,  -630,  4042,  2257,  2258,  2259,  2260,  2261,  2282,  2262,
    2263,     0,   809,     0,     0,     0,     0,     0,   186,     0,
    4043,  4044,     0,     0, -3107,    52,     0,     0,     0,     0,
       0,  2298,   510,     0,     0,  2283,     0,     0,     0,     0,
    4045,  2299,  2300,  2301,     0,     0,     0,     0,     0,     0,
       0,  4055,     0,     0,     0,     0,     0,  2302,     0,     0,
       0,     0,  4046,     0,  4056,     0,     0,     0,  4057,  1712,
    4047,  2249,     0,  1713,     0,     0,     0,     0,     0,  2303,
       0,     0,     0,     0,     0,     0,  4058,  2265,     0,  2266,
    2267,  2147,  2268,  2269,  2270,  2271,  2272,  2273,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   786,   787,   788,     0,  2285,     0,  4048,     0,
       0,     0,     0,     0,   789,     0,     0,     0,     0,     0,
       0,  4059,     0,     0,     0,     0,     0,     0,  1740,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   504,     0,     0,     0,     0,     0,     0,     0,  2274,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  4060,     0,  1741,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    4061,  2287,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2288,     0,   790,
     791,   792,  2289,     0,  1715,  1716,     0,     0,     0,   793,
       0,   794,     0,     0,     0,     0,     0,  4049,   505,     0,
       0,     0,   795,   796,   797,  2290,     0,     0,  4062,     0,
       0,   798,     0,     0,   506,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2275,  2276,  2277,  2278,  2279,     0,     0,  2155,  2280,
       0,     0,     0,  4063,  4050,     0,     0,     0,     0,     0,
       0,     0,  4051,     0,  4052,  1746,     0,  1747,  1748,   781,
       0, -3036,     0,     0,     0,   782,   783,     0,     0,     0,
       0,  4053,     0,     0,  2281,     0,     0,     0,     0,     0,
       0,   785,     0,  4054,     0,   800,     0,     0,     0,     0,
    4064,     0,     0,     0,     0,     0,     0,     0,  2282,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   801,     0,     0,  2293,    52,  2294,  2295,  2296,     0,
    4065,     0,     0,     0,     0,  2283,     0,     0,     0,     0,
       0,     0,  4066,     0,     0,     0,     0,     0,     0,     0,
       0,  4055,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  4056,     0,     0,     0,  4057,     0,
       0,     0,   507,     0,     0,     0,  4067,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  4058,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  4068,     0,     0,     0,     0,  -950,     0,     0,     0,
       0,     0,  4069,   781,     0,     0,  2285,     0,     0,   782,
     783,     0,   802,     0,     0,     0,     0,     0,     0,     0,
       0,  4059,     0,     0,     0,   785,     0,     0,  1740,     0,
       0,  4070,     0,     0,     0,     0,  2299,  2300,  2301,     0,
       0,     0,     0,     0,     0,     0,     0,   786,   787,   788,
       0,     0,  2302,     0,     0,     0,     0,     0,     0,   789,
    4071,     0,  4060,     0,  1741,     0,  2249,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    4061,  2287,     0,     0,   508,     0,   504,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2288,     0,     0,
       0,     0,  2289,     0,  1715,  1716,     0,     0,     0,     0,
     803,   804,     0,     0,   781,     0,     0,     0,     0,     0,
     782,   783,     0,     0,     0,  2290,     0,     0,  4062,     0,
       0,     0,     0,     0,     0,     0,   785,     0,     0,     0,
       0,     0,     0,     0,   790,   791,   792,     0,     0,  2711,
       0,     0,     0,     0,   793,     0,   794,     0,     0,     0,
     823,     0,   509,   505,   824,   825,     0,   795,   796,   797,
       0,     0,     0,  4063,     0,     0,   798,     0,     0,   506,
     806,     0,     0,     0,     0,  1746,     0,  1747,  1748,     0,
       0,   786,   787,   788,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   789,     0,     0,     0,   807,     0,     0,
       0,     0,     0,     0,     0,   808,     0,     0,     0,     0,
    4064,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     504,     0,     0,     0,     0,     0,     0,     0,     0,   809,
       0,     0,     0,     0,  2293,   186,  2294,  2295,  2296,     0,
    4065,     0,     0,     0,     0,     0,     0,     0,     0,   510,
     800,   781,  4066,     0,     0,     0,     0,   782,   783,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   785,     0,     0,   801,     0,   790,   791,
     792,     0,     0,     0,     0,     0,  4067,     0,   793,     0,
     794,     0,   786,   787,   788,     0,     0,   505,     0,     0,
       0,   795,   796,   797,   789,     0,     0,     0,     0,     0,
     798,  4068,     0,   506,     0,     0,  -953,     0,     0,     0,
       0,     0,  4069,     0,     0,     0,   781,   507,     0,     0,
       0,   504,   782,   783,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   785,     0,
       0,  4070,     0,     0,     0,     0,  2299,  2300,  2301,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2302,     0,     0,   781,     0,   802,     0,     0,
    4071,   782,   783,     0,     0,     0,  2249,     0,     0,   790,
     791,   792,     0,     0,   800,     0,     0,   785,     0,   793,
       0,   794,     0,     0,     0,     0,     0,     0,   505,     0,
       0,     0,   795,   796,   797,     0,     0,     0,     0,     0,
     801,   798,     0,     0,   506,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   786,
     787,   788,     0,     0,     0,     0,     0,     0,     0,   508,
       0,   789,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   507,     0,     0,     0,   803,   804,     0,   504,     0,
       0,     0,     0,     0,     0,     0,  2899,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   800,     0,     0,     0,     0,
       0,     0,     0,     0,   786,   787,   788,     0,     0,     0,
       0,   802,     0,     0,     0,   823,   789,   509,     0,   824,
     825,   801,     0,     0,     0,     0,   790,   791,   792,     0,
       0,     0,     0,     0,     0,   806,   793,     0,   794,     0,
       0,     0,     0,   504,     0,   505,     0,     0,     0,   795,
     796,   797,     0,   786,   787,   788,     0,     0,   798,     0,
       0,   506,   807,     0,     0,   789,     0,     0,     0,     0,
     808,     0,   507,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   508,     0,     0,     0,     0,     0,     0,
       0,     0,   504,     0,   809,     0,     0,     0,     0,     0,
     186,   790,   791,   792,     0,     0,     0,     0,     0,   803,
     804,   793,     0,   794,   510,     0,     0,     0,     0,     0,
     505,     0,   802,     0,   795,   796,   797,     0,     0,     0,
       0,     0,     0,   798,     0,     0,   506,     0,     0,     0,
       0,     0,   800,     0,     0,     0,     0,     0,  2920,     0,
     790,   791,   792,     0,     0,     0,     0,     0,     0,   823,
     793,   509,   794,   824,   825,     0,     0,     0,   801,   505,
       0,     0,     0,   795,   796,   797,     0,     0,     0,   806,
       0,     0,   798,     0,     0,   506,     0,     0,     0,     0,
       0,     0,     0,     0,   508,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   807,     0,     0,     0,
       0,     0,     0,     0,   808,     0,     0,   800,     0,   507,
     803,   804,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   809,     0,
       0,     0,     0,   801,   186,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   510,     0,
    4465,     0,     0,     0,     0,     0,   800,     0,     0,   802,
     823,     0,   509,     0,   824,   825,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     806,     0,   801,     0,   507,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   807,     0,     0,
       0,     0,     0,     0,     0,   808,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   508,     0,   507,   802,     0,     0,     0,     0,   809,
       0,     0,     0,     0,     0,   186,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   803,   804,   510,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   802,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   508,     0,     0,   509,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   806,     0,     0,
       0,     0,   803,   804,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  4466,     0,
       0,     0,     0,     0,   807,   508,     0,     0,     0,     0,
       0,     0,   808,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   803,   804,     0,   509,     0,   809,     0,     0,     0,
       0,     0,   186,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   806,     0,     0,     0,   510,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   807,
       0,     0,     0,   509,     0,   824,     0,   808,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   806,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   809,     0,     0,     0,     0,     0,   186,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   807,     0,
       0,   510,     0,     0,     0,     0,   808,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     809,     0,     0,     0,     0,     0,   186,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     510
};

static const yytype_int16 yycheck[] =
{
     151,   503,   705,   706,   707,  1169,   982,   710,   669,   238,
      36,   693,   636,   180,  1499,  1032,  1631,   646,   137,  1164,
     139,   174,   674,   780,  1714,   144,  1113,  2336,   631,  1719,
      66,  2249,   776,  1616,  2137,  1023,    72,  2436,  2483,  1283,
     641,  1008,  1687,    69,    70,    71,  1092,  1626,  1094,  1095,
      76,  1097,  1098,  2498,  3164,   872,   805,   137,  1743,   139,
     866,   626,  2737,   627,   144,   184,   281,  2775,   644,  1859,
     719,  2177,  2449,  1189,   723,   724,   652,   726,   727,  1888,
     729,   730,  2459,   636,  1644,   652,  2208,   901,  1887,  1898,
    1185,   720,   721,  1523,   120,   658,   725,   212,   674,   728,
    1928,   858,  1197,  3422,   184,   815,  2355,   674,   134,  1908,
     136,     0,   675,  2362,   140,   141,  2365,  2366,  2134,  2337,
    2338,  2807,    16,   833,   150,   151,     1,  2663,  2830,   626,
       1,     1,   866,  1923,    43,  2837,     0,   690,    16,    16,
     166,     1,    62,    16,    11,    11,   252,    31,    16,   793,
     794,  3009,    83,    16,    16,   110,   182,   801,    16,    77,
    2441,  2442,   156,    16,    25,  1281,  2447,  2448,    83,  2450,
     206,    14,    11,   279,   200,   255,    83,    83,   110,   215,
     997,  1169,  2400,    38,    11,   227,  1764,    25,   214,  2572,
      42,     1,   138,   219,   161,    42,    31,   107,   119,   843,
      41,   227,   204,  2883,   239,   109,   249,    30,   270,   113,
    1554,    11,    55,   137,   226,   232,    84,    16,   169,  1268,
     237,   167,  1028,  1261,    43,   208,   157,   291,   120,  1035,
     190,   226,   200,   967,   249,   261,    16,   110,   184,   185,
     139,   398,   805,   305,   306,   190,   291,   317,   317,   304,
       1,   317,  1773,  1291,   255,   291,   292,   308,  3741,   824,
    1781,   240,   764,   122,   255,   110,  3727,   949,   285,   161,
     162,  2716,  2717,  2554,  3594,   839,  2557,   354,   953,    30,
    1526,    56,    41,  2564,    57,   109,  2567,   280,    23,   354,
      56,  2967,  1041,    11,  1028,   170,    11,    85,   170,    83,
      75,  2977,   390,   175,   110,   560,   337,   187,  2207,   475,
     120,    96,   337,   409,   337,    13,  1663,   240,   417,   442,
     409,   157,   456,   204,   515,  2734,   823,   824,   825,    16,
     239,   592,   483,   384,   421,   291,   488,   545,   571,  2129,
      16,    23,   895,   434,   448,   690,  3128,   448,   651,   596,
     205,   161,   162,   321,   300,   590,   650,   390,   408,   935,
     337,   250,  1044,    48,   123,   351,   195,   256,   127,  3574,
     648,   947,   227,  3503,  3594,   485,   170,   171,   409,   409,
    3965,   353,  2631,   109,   456,   739,   250,   113,   354,  3984,
     437,   421,   256,   390,    38,  1511,   122,  4158,   384,   226,
     386,   630,   301,  3736,   633,  2455,   690,  2457,  1152,   379,
    3730,   346,  4312,   449,  1158,   409,   354,   289,   336,   739,
     239,   532,  2621,   739,     0,   750,  3835,    14,  1001,  4402,
     203,  1237,   198,   240,   823,  2225,   462,   463,   667,   317,
     655,   670,  1018,   565,  2460,   834,   319,   676,    16,  1025,
     232,  1018,  2733,   564,   456,   237,   482,   425,   409,  1481,
    1170,   595,   351,   489,   713,   231,    85,   696,    55,  1034,
     277,   220,   279,   515,   274,   352,  4449,  4450,  1041,  4240,
     109,   517,  1504,  2882,   113,   982,   137,   351,  3897,  1605,
     350,   682,   240,  1066,   544,   384,   821,   386,   543,  4399,
    3833,    38,   472,   285,   551,   859,   485,  4092,  4103,    16,
    3730,   379,  3214,   379,   482,  2565,  2566,   409,  1228,   465,
     384,   456,   386,   500,  1268,   409,  3656,  3229,   456,   820,
     476,   451,   456,   137,   567,   137,  3222,  1034,   405,   859,
     379,   198,  2664,   859,  3749,   355,   618,   627,   826,   109,
     290,   631,   379,   113,   616,   164,    16,    16,   431,   491,
     557,   205,   280,   857,   644,   645,  2669,   912,  2817,   437,
     438,   820,   652,  3253,   409,   456,   419,   481,   658,   379,
     379,   447,   817,   449,   137,   409,  1189,   890,   456,   669,
     456,   671,   672,   826,   674,   675,   687,   101,   749,   409,
     704,   316,   377,   704,   472,   715,   472,   730,   447,  1696,
     449,   137,   584,   678,  1179,  1180,  1181,   456,   717,   699,
     447,   405,   449,   831,  3406,   137,   855,   427,   912,   456,
    1195,   617,   456,   472,    23,   658,   137,  1683,  2221,   206,
     520,   870,   198,  1610,    23,   472,   137,   447,   421,   449,
     110,   912,   420,   708,   734,   337,   456,   456,   913,   605,
     435,   379,   515,   815,   379,   912,  2013,   534,   205,  1234,
     776,   494,   472,   472,  1239,  1172,  1173,  1174,  1281,  2364,
     546,  2962,  1179,  1180,  1181,  1286,   578,  3096,   488,   448,
     388,   389,   379,   560,   488,   470,   464,   643,  1195,   833,
     626,  1198,    23,   379,  1257,   631,   561,  1204,  1205,  1206,
    1207,  1208,   616,   579,   660,   282,  1811,  1833,   644,  2509,
     651,   912,   420,  1540,   820,   805,   652,   884,   617,   447,
     489,   449,   447,   821,   449,   515,   651,  1234,   456,   816,
     579,   456,  1239,   494,   651,   651,   912,   515,   674,   648,
    1314,   857,   579,   617,   472,   481,   616,   472,  3444,   839,
    2588,  1518,   630,   678,   630,   500,   464,   982,   578,   456,
    2415,    41,   678,  1483,  1580,  4258,  4237,   820,   746,   579,
     456,   861,   752,   303,   637,   472,   831,   766,  2132,   577,
    3492,   630,  2808,   102,  2354,   820,   472,  2696,   354,   574,
     320,  1476,   647,   630,  3003,   820,   785,  3006,   593,  3345,
     169,   379,   716,  1780,   608,   651,  1526,   515,   797,   820,
     505,   506,   507,   802,   913,   912,  3506,   383,   821,   820,
     630,   630,  4152,   705,  3510,  1884,   409,   757,   761,   598,
     599,   947,   793,   913,   913,  1494,   669,   913,   769,   913,
     810,   913,   481,   123,   866,   935,   636,   127,   752,   319,
     815,   579,   913,   906,   579,   810,   832,   947,   727,   488,
     912,   866,   379,    11,   842,   831,   982,   912,   701,   745,
    3263,   240,   913,   913,   752,  2463,   752,  2133,   456,   815,
     616,  2235,   228,  1881,   832,   912,   913,   823,   824,   825,
     894,   822,   982,   744,   472,   820,   681,   833,  1511,  3611,
    3612,   913,   630,   752,   820,   630,   820,   835,   669,   379,
     379,   481,  1002,  1680,  1681,   752,  1032,   826,   820,   912,
     434,   820,  1508,  1971,   913,   861,   621,  1088,  1018,  1090,
    1107,  1508,  1093,   630,   911,  1025,   913,  3649,  2469,   456,
     701,  1102,   752,   752,   630,   728,   820,   927,   577,   890,
     820,  1041,   830,   830,   830,   472,  3824,  1086,  1087,   807,
     843,   431,   918,   919,   884,   890,  1143,  1096,   676,  3659,
     832,   769,   914,   890,   890,   832,   821,   616,   815,   913,
     716,   830,   560,   913,   912,  1571,   456,   456,  1495,   927,
    3016,   727,  1605,   830,   110,   805,  1086,  1087,   815,   935,
     820,  1240,   472,   472,   923,   868,  1096,  1666,  1667,   456,
     912,   947,   828,  1672,   913,  1831,  1675,   833,  1593,   913,
     830,   830,  3568,   927,   752,   913,   913,   752,   913,   866,
    1797,  1798,   913,   913,  3719,   906,  1152,   913,  1692,   913,
     913,   913,  1158,   662,   890,   913,   616,   912,  1084,   927,
    1227,   927,   630,   906,  3750,   752,  4176,   920,  1720,   820,
    1827,   722,   820,  1153,   913,  1824,   752,  4396,   626,  3095,
     855,  3097,  1008,   912,   913,   884,   913,   716,   927,   913,
    1800,  2521,  1018,   912,  4204,   894,  1593,  1831,  3778,  1025,
     927,   867,   912,   821,   923,  3304,  2896,   655,  1034,  1189,
     869,   500,   830,   913,   913,   830,  1222,  1143,   722,   913,
     722,   500,   678,   630,    23,   434,   485,   927,   927,   437,
    1156,   913,  2941,  2942,  2943,  2944,   904,   456,  3840,   379,
    1884,  2179,  3817,   830,  3160,   764,  1252,   804,  1962,   697,
     769,   836,   837,   912,   830,  2983,   716,   448,   815,  2135,
    2739,   390,  1268,   456,   849,   913,   817,   240,   908,   722,
     630,   630,   456,   913,   481,   409,    41,  2976,   448,   500,
     700,  3490,   515,   687,   752,   794,   459,   913,  2978,    31,
    2980,   820,   298,   869,  2610,   913,   722,   912,   913,   766,
     233,  1281,  2785,   822,   409,   456,   904,   299,     1,   927,
     722,   456,   927,   817,   912,   817,   456,   532,   785,  2186,
     126,   722,   227,  3345,   828,   280,    19,   133,   240,   833,
    1833,   722,   472,   456,  1314,   802,  3026,   913,    37,  3345,
     927,   379,   815,   456,     0,   752,  1172,  1173,  1174,     1,
     291,   927,   456,  1179,  1180,  1181,  1182,   813,   431,  1185,
     820,  1824,   830,  1189,   817,  3950,  1417,   815,  3976,  1195,
     629,  1197,  1198,  2833,   560,   823,   824,   825,  1204,  1205,
    1206,  1207,  1208,   233,  1848,   833,   456,   431,    80,    42,
     396,   817,   752,   752,   850,  2005,   350,  3087,   634,  3089,
     301,   302,   169,  3978,   456,   817,   398,   464,  1234,   447,
     456,   449,   351,  1239,  1943,  4425,   817,  1966,   456,   112,
      20,    21,    22,   830,   416,   456,   817,    18,   598,   599,
     195,  1546,   852,  2420,   472,   233,  3645,  3950,   456,  3648,
     913,   744,   488,  1972,   456,  1271,   291,   456,   437,    47,
     823,    44,  1981,   913,   355,  1281,  2402,  2403,   515,   927,
     456,   110,  2408,  2409,   739,   230,   354,   887,  3950,   486,
     830,   830,   892,   240,   363,   364,   456,   170,   687,   464,
     173,   739,   175,   843,   385,  1643,   282,    44,  1494,    80,
     630,   750,   728,   560,   456,   618,   355,   546,  2656,  2982,
    2438,  2496,   514,   196,   157,   420,   913,   766,   228,   442,
     353,   281,   485,   704,   114,   824,   775,   776,   777,   301,
     927,  1679,   824,  2133,   274,   884,   785,   292,  1508,   824,
     515,  1511,   578,   906,   982,   894,   744,   388,   337,     0,
    1669,   579,  1671,   802,  1673,  1674,   509,  1676,  1677,   464,
     409,   440,   441,   913,   913,  1561,   859,  2573,  1573,  2575,
    1008,  3770,  3771,   228,  2502,  2503,  3275,   927,   927,   420,
    2023,   820,   337,   355,   744,  2224,   913,   532,   595,   571,
    1586,  2191,   235,   595,   859,    20,  1034,   542,    23,    24,
     355,  1571,   630,   337,  3179,  3744,   289,  2535,  2536,    16,
     515,   859,   543,    20,   913,   198,    23,    24,    38,   379,
     515,   913,   752,   464,   787,    36,    39,  3950,   913,  1625,
     464,   212,   291,  2639,  2281,  1605,  2543,   539,    76,   566,
     398,  3110,   596,  3112,   240,  3912,   301,  2189,   384,  2356,
     386,   578,   448,   430,   442,  1664,   452,   346,   416,  2587,
     169,  2127,  2128,   220,   913,   618,   618,  1483,  1584,  2597,
    2127,   766,   616,  3950,   515,   650,   817,   409,   154,  1495,
    4255,   515,   430,   121,  2284,  2139,   805,   264,   617,   912,
     280,  2291,  1508,   571,  1664,  1511,   456,   821,   379,   756,
    3235,  3007,  3695,   393,   913,  2641,   745,   295,   543,   390,
     352,   500,   472,  2719,   912,   912,  1632,  2645,   927,   882,
    1636,  1637,   927,  1639,   752,   906,  1642,  1643,   485,  1645,
     913,  2659,  2660,  1659,  1172,  1173,  1174,   913,   384,   913,
     386,  1179,  1180,  1181,  1182,   531,   456,  1185,  2135,   187,
    1720,   584,  4255,   927,  2611,  1571,   337,  1195,   448,  1197,
    1198,  2216,  2217,  4338,   406,   744,  1204,  1205,  1206,  1207,
    1208,  2224,   913,   363,   364,   456,   459,  1593,   913,  2298,
     843,  1219,   464,  4255,   123,   205,     1,   815,   127,  1605,
     464,   472,   927,   475,  1610,  2929,  1234,   927,   820,   250,
     913,  1239,   830,   766,  1845,   256,  1722,   730,  1865,   843,
     913,  2507,  1728,   571,  3287,  1731,   229,  1733,  3517,   913,
     743,   828,   785,   819,    34,    35,   833,   561,  3508,  2216,
    2217,   833,   828,   829,   797,  4338,  3947,   833,  2357,   802,
    3520,  3521,  2476,    58,    59,    60,    61,   379,    63,   511,
     440,   441,   433,   913,  1824,  2733,   495,  1853,   497,  1829,
     456,   616,   753,  1833,     1,   912,  4338,  2406,   551,  2726,
     630,   913,   629,   456,  2851,  2852,   821,   913,  1848,   379,
    4169,   390,   857,   464,   543,   913,   474,   530,  1884,  4178,
     730,   927,   913,  3573,   475,  3043,  4095,  4096,   319,   927,
     351,  2501,   560,   743,  2840,   913,   927,  2449,   551,   456,
    4021,   488,   819,  2455,   913,  2457,   126,  2459,   508,  4027,
    4028,   706,   829,   133,   456,   927,   136,   913,   927,   144,
     145,   913,  4255,   384,   515,   386,  2864,   912,   278,    76,
     472,   603,   730,   913,  1860,     7,   825,   350,   827,   630,
     820,   641,   542,  1923,   464,   743,   456,   546,   912,   913,
     851,   551,   505,   506,  1780,   655,   379,   744,   299,   456,
     560,   409,   472,   393,   256,  3126,   485,  2018,  4255,  1895,
     190,   379,   192,   193,   121,   423,   913,   911,  1904,   913,
    4161,    53,   752,   750,   456,  1811,   744,  4168,  3684,   904,
     421,  4172,   110,    65,  4175,   515,   427,   912,   446,   766,
    2610,   601,   250,  1829,   503,  4338,   690,  1833,   775,   776,
     777,   295,   705,  2565,  2566,   299,   398,  2541,   785,  2484,
    2135,  2486,  3183,   105,   106,   390,   813,  3723,   494,   797,
    2947,  4149,  4150,   456,   416,   802,   459,   155,   557,   111,
     187,  2517,   448,   515,   409,  2510,   452,  1495,   456,   472,
     712,  4338,    14,   904,   274,   813,   276,   398,   408,   283,
     830,   752,   134,   283,   472,   500,   501,   291,   621,  2534,
    2573,   291,  2575,   456,   812,   416,   744,   668,   240,   161,
     503,  4426,   283,   500,   501,  1911,    42,  2484,   630,  2486,
     291,   682,   785,    55,   832,   198,  2457,  1923,  1546,   448,
     325,   326,   327,   328,   329,   330,   331,   332,   333,  3805,
    3048,  3049,   194,  2510,   398,  4296,   551,   552,  4299,   191,
     630,   916,    14,  3061,  3062,  2131,   208,   820,   511,  2135,
     336,   514,   416,   630,   551,   552,  2639,  2534,  2189,   830,
    3078,  3079,   835,   913,   409,  1593,   745,  2127,  2128,  2129,
     665,   612,   641,   668,   301,    14,   617,   927,   673,  2139,
     820,  2637,  1610,    55,   370,  2775,   828,  2668,   187,   582,
     865,   833,  2178,   586,   379,   641,  2227,   557,   398,  2005,
    2006,   647,  2197,  2198,  2199,  2200,  2201,  2202,  2203,  2204,
     540,   859,   713,   641,   544,   578,    55,   319,   646,   894,
     272,   157,   699,   616,  2565,  2566,   409,   630,   355,  2189,
     752,   126,   595,  2219,   336,   663,  2719,   665,   133,   399,
     913,   821,   630,   106,   712,   825,  2232,   827,   448,   828,
     571,   456,   452,   613,   833,  2286,   927,   558,   271,   336,
     561,  2706,   752,   336,  2224,  2225,   408,  2891,   370,   598,
     599,   456,  3128,   456,   459,   752,  3739,   756,   747,   748,
     759,   760,   409,  1172,  1173,  1174,   691,   472,   488,  4243,
    4244,   343,   652,   370,  2254,  4393,   423,   370,   161,   235,
    4448,  2410,   220,  2412,  2335,  2414,   629,   571,   830,  1198,
     824,  2342,    91,    92,    93,   282,   849,  2954,   503,   446,
     713,  2127,  2128,  2129,   291,   427,  4397,  4398,   805,  2706,
     713,   194,   823,   820,  4482,  1803,  2367,   541,  1806,   543,
     830,   912,   913,   834,   812,   208,  1814,   817,   450,   752,
    1818,  2883,  1780,   307,   757,   758,  4427,  1825,   828,  4048,
     828,  4459,   818,   833,   752,   833,   766,  2744,  4057,  2478,
    2479,   423,   828,  2877,  4445,   558,  4065,   833,   561,  3297,
    2186,  2341,  2368,  1811,   817,   812,   738,   882,  1459,   816,
    3316,   596,   820,   390,   628,   828,  2302,   539,   194,  2305,
     833,     7,   544,   455,   738,   927,   640,  1478,  1479,  1480,
    2216,  2217,   208,   820,   619,  2792,   641,  3007,  2513,  2225,
      37,  4404,   647,   913,  2455,  4379,  2457,   750,  4499,   818,
     820,   210,   211,  2349,   213,   817,   913,   927,  2344,   828,
     820,  4395,   830,   641,   833,   630,   828,    53,   489,   647,
     927,   833,   775,   776,   777,  3950,   828,  2363,   337,    65,
     339,   833,   890,  3381,  3382,   641,  2372,  2373,  4408,   828,
     833,   647,   820,  4413,   833,  4494,  4046,  4496,   404,  4498,
     448,  2441,  2442,   541,   452,   543,  4056,  2447,  2448,  2449,
    2450,   713,  3001,  2492,   820,  2455,  2422,  2457,    16,  2459,
    2426,   820,   554,  2984,   704,   111,   870,   871,   872,   873,
    3039,  2544,  2418,  2419,   641,  2610,   578,    32,    33,   646,
    4283,  1206,  1207,  1208,   927,   820,   588,   589,   134,   823,
     135,   825,  2492,   456,  2565,  2566,   663,   913,   665,   927,
     838,   839,   913,  3399,  2485,   913,  2487,   913,  2454,  2509,
    3406,   820,  2493,  2494,  2495,  2461,   692,  2517,   820,  2500,
     870,   871,   872,   873,   444,   445,   820,   752,  4331,  4332,
    2511,  2512,   549,   550,  4337,   627,   820,  4340,  2006,   631,
     220,  4344,  4345,    24,    25,   191,  1204,  1205,   788,   870,
     871,   872,   873,   820,  2554,  2464,  2465,  2557,   456,   799,
     456,   663,   843,   915,  2564,  2565,  2566,  2567,  1180,  1181,
     810,   913,  3509,  2573,   820,  2575,   725,   113,  3544,   398,
     399,   744,   122,   685,   686,   913,   456,  2722,  1274,  1275,
    1276,  1277,   409,   820,   152,  2259,  2260,  2261,  2262,  2625,
     158,   159,   337,   422,   724,   610,   713,   140,   820,  2744,
     564,   561,   807,   592,   456,   707,   174,   727,   406,   820,
     195,   820,   816,   616,   139,   912,   272,    14,   853,   448,
    2656,  3175,   356,   108,   815,  3312,   913,  2637,  2484,  2639,
    2486,   881,   295,   913,   913,   832,   820,   713,   463,   820,
    2496,   442,   557,   820,   473,   824,   290,  2792,    32,   820,
     885,   886,   913,  2509,  2510,   489,   456,  2135,   913,   241,
     832,  2517,   485,   913,   346,   767,   832,    19,   832,   832,
     832,  3253,   832,   242,   832,   832,   832,   832,  2534,  2838,
    2839,   832,  2841,  2842,  2843,   832,   832,   343,   298,   815,
     243,   691,   927,   244,   246,  2731,   162,   641,   797,  3126,
     797,  3128,   362,   637,    78,   247,   912,   248,  2186,  2719,
    4255,  3679,  3680,   890,   815,   649,  3403,  2573,   456,  2575,
     249,   497,   183,  2733,   804,   270,   660,   661,   832,   253,
     815,  4351,   254,    83,   805,   913,   913,   257,  2216,  2217,
     258,   346,   571,   259,   913,   847,   260,   346,   261,   894,
    2831,  3284,   291,  3286,   611,  2611,  3183,  3774,  3775,   488,
     112,    42,   262,  2619,  4384,   832,   263,   423,   405,  4184,
     264,   346,   340,   341,   342,   604,   265,   202,   266,   608,
     609,  2637,   820,  2639,   352,   713,   454,   659,   820,  2745,
     820,   155,   913,  4338,   796,   678,   810,   337,   169,   455,
     913,  3392,  2883,   905,   815,   634,   913,   913,   815,   396,
     354,   379,  3780,  3781,  3782,  2771,   458,   614,   170,   489,
    2830,   173,   456,   175,   911,   676,   543,  2837,   291,   869,
     911,   906,   456,   236,   316,   252,   662,   346,   405,   733,
     815,   368,   807,   812,   196,   801,  2991,   405,   405,   240,
    2706,   912,   815,   815,  2810,    83,   815,  2813,   202,  2815,
    2816,    83,  3007,  2719,  2820,   346,  2822,  2823,  2824,  2825,
    2726,   439,  3031,  2883,   346,  3950,  2832,   405,   812,   267,
     820,  2737,   346,  3900,  3524,   713,   663,   156,   456,   890,
      31,   557,   460,   461,   462,   820,   647,   820,   554,  2855,
     454,   469,    76,   549,   472,    14,   421,   744,   137,   421,
     926,   766,   925,   766,   549,   496,   817,   817,   817,   817,
     817,   817,   817,   354,  3506,  3831,   817,   815,   678,   815,
      16,    37,   658,   354,  2890,   683,   354,   289,  3955,   456,
     569,   421,    28,   884,   927,   251,   662,   815,    83,   227,
     354,   390,  2962,   820,   906,   906,   558,    16,   766,   557,
     354,   815,    16,    13,   678,  3933,  3934,   796,  2978,    28,
    2980,   627,  3399,   239,   908,   631,   820,   713,   890,  3406,
     704,  3126,   355,  3128,   687,   553,   906,   409,   459,    37,
     924,   894,   355,   728,   913,  3031,   109,   766,    84,   464,
     727,    57,   913,   817,   456,   817,  2484,  3043,  2486,   546,
      41,   354,   745,   515,   544,   408,  3026,   240,  2496,    25,
     807,   281,   236,    83,   890,    84,   890,  3606,  3607,   337,
     337,   169,  2510,   727,    14,   346,   539,   971,  3183,   240,
     662,   596,   820,   566,   203,   794,    77,   500,    79,   889,
    3690,   707,    95,   820,   713,   807,  2534,   927,   832,   854,
      90,   815,   630,   913,    37,   773,   913,   725,   815,  3105,
     337,   102,  3231,   452,   557,   728,    25,  3659,   599,  3089,
     744,   197,  3163,   346,   354,   564,   817,   213,   187,   354,
      14,   657,   123,   657,  3727,    55,   127,   496,  1032,  3786,
     208,   826,   569,  3184,   562,  1039,   255,   459,   567,  1043,
    3191,   767,   680,  3725,   187,   464,   421,   464,   520,  3129,
     448,  4097,  2978,   615,  2980,   545,   831,  3083,   820,   807,
    3227,  3818,   457,  2611,  3561,   877,   456,  3186,   346,  3236,
    3237,  2619,  3108,   812,   744,   913,   456,   110,  3293,   913,
     807,   392,  3233,   206,    83,   820,  3205,  3238,   198,   813,
     515,   784,  3211,   612,   515,    83,   464,  3216,  3217,   464,
    3026,   464,  3253,   820,   540,  3224,  3186,  3226,   278,   612,
    4255,   817,   815,   913,   752,   204,   204,   766,   346,    13,
     807,   847,  3202,  3203,    23,  3205,  3778,   500,  3885,   551,
     612,  3211,   570,   555,  3214,   683,  3216,  3217,   498,   913,
     778,   779,   298,   865,  3224,   823,  3226,   396,   729,  3229,
     635,   336,   481,   585,   815,   543,   291,   616,  2706,   195,
     820,   815,   496,  3089,    41,   690,   393,  3816,   475,   298,
     744,   543,  3882,  3253,  4338,   664,   756,   824,  2726,   905,
    3206,   204,   561,   850,  3399,  1189,   197,   820,   820,  2737,
     499,  3406,   830,   824,   500,   784,   227,    23,   543,  3225,
     626,  3227,   820,   612,  3284,   631,  3286,   783,   291,   421,
     848,   421,  3922,  3239,   206,   437,   820,   906,   644,   557,
     421,   421,   437,   379,   556,   169,   652,  3333,   421,   421,
     437,   797,   120,   355,   231,   109,   355,   875,  3318,   566,
     442,   394,   820,   370,   666,   883,   510,   346,   674,    83,
     379,   566,   578,   578,  3903,   770,   578,    11,  3473,    48,
    3912,    45,   113,  1267,   524,    83,  3976,   368,   270,   907,
    3421,   196,   276,    90,   294,   913,  1280,  1281,   743,   202,
    1123,   437,   438,   705,   198,  3391,   473,  3842,  2013,   927,
    3643,  4092,  2821,  3622,  3761,  2829,   455,  2843,  3620,  1303,
     456,  3203,  4010,  3944,  4021,   708,  2133,  2305,   437,   438,
    1632,  4338,  3392,  2781,  3543,  4463,   472,  3839,  3344,  3743,
    2014,  2792,  3971,  3442,  4157,  3897,  4283,   456,  4407,   751,
    4412,   753,  3730,   434,  3831,  4183,  3455,  3443,   659,  3893,
    4088,  1476,  4049,   472,  4049,  4244,  4084,   448,  3289,  3500,
     969,   452,  4056,  2856,  1152,  3506,  1702,  2882,  3284,   231,
    3286,  2891,  3442,   785,  1739,  1158,  3485,  2515,  1839,   839,
    3287,  3259,  1164,  3785,  3784,  3455,   638,  1222,   849,   895,
    1253,  3293,   511,  1884,  2947,  1911,   907,  2542,  1289,   659,
    2588,  2983,  1286,  3473,  1964,  3501,  3293,   823,   824,   825,
    2994,  3427,  1317,  2996,   931,  3485,  3012,  3574,  1487,  2619,
     566,  2003,  3492,   835,  3011,  2135,  3676,  3538,   986,  3333,
     977,  3037,  2170,  1492,  2656,  3043,  3506,  3052,  3051,  2731,
    1559,  2205,  2671,   675,  2709,   861,  1598,   566,  2232,  1016,
    3093,  3922,  2232,  1018,  3813,  2184,  2169,  3585,  3927,  3673,
    3981,  4108,  3986,  3604,  3311,  2437,  3685,  2435,  3609,  1624,
    3989,  3487,  1264,  3937,  3936,  3683,  3794,  2505,  3682,  3082,
    3621,  2506,  1263,  3081,   630,  3567,  3098,   846,  3386,  3585,
    3385,  2540,  3099,  2539,   674,  1294,  1937,  1303,  2702,  1002,
    2702,   913,  3186,  2702,  2702,   699,   597,   598,   599,  2799,
    1964,   630,   204,  1216,  3524,  3561,  2191,  1511,  3659,   935,
    2005,  3007,  4051,  2417,   515,  2722,  3542,  1219,  4202,   808,
    1633,   947,   747,  2207,  3758,  2531,  2789,  3088,  3707,  3371,
    4352,  3611,  3612,  2963,  4237,  3641,  3642,  3643,  3624,  4233,
     778,  4384,  3507,  3623,  2332,  4440,   288,  3028,   528,  3629,
    3193,  2212,  1903,  4233,  1162,  3962,  2411,  3724,  3223,  1641,
    4399,    -1,    -1,    -1,    -1,  3591,    -1,    -1,    -1,  3649,
      -1,    -1,  1576,    -1,   361,    -1,    -1,    -1,    -1,  3659,
      -1,  3796,    -1,  1587,    -1,    -1,   687,    -1,    -1,    -1,
      -1,    -1,  1018,    -1,  1598,    -1,   752,    -1,    -1,  1025,
    4357,  1605,    -1,    -1,  3684,    -1,    -1,    -1,  1034,  3635,
      -1,    -1,    -1,    -1,    -1,  4239,  3831,    -1,  3737,  3738,
    3646,  3647,    -1,   752,    -1,  3651,  3652,  3778,  4252,    -1,
      -1,   732,   761,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  3760,  3761,  3723,    -1,    -1,  3752,  3876,    -1,  3675,
      -1,    -1,  3758,    -1,    -1,    -1,    -1,  3737,  3738,    -1,
    3686,   817,    -1,   819,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   828,   829,   830,    -1,   832,   833,    -1,    -1,
    3760,  3761,    -1,  4185,    -1,    -1,  3853,  3854,   817,  3715,
     819,  3920,    -1,    -1,    -1,    -1,    -1,    -1,  3778,   828,
     829,   830,    -1,   832,   833,    -1,    -1,  3733,    -1,    -1,
      -1,    -1,   813,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  3805,    -1,    -1,    -1,    -1,
    4359,    -1,    -1,    -1,   835,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1172,  1173,  1174,    -1,
      -1,    -1,    -1,  1179,  1180,  1181,    -1,    -1,    -1,    -1,
    3840,    -1,    -1,  1189,  3690,  3980,    -1,     6,    -1,  1195,
       9,   927,  1198,    -1,    -1,    -1,    -1,    -1,  1204,  1205,
    1206,  1207,  1208,    -1,    -1,    -1,    -1,    -1,    27,  3908,
      -1,    -1,    -1,  3719,    -1,    -1,    -1,    -1,   927,    -1,
    3951,    40,    -1,    -1,    -1,    -1,    -1,    -1,  1234,    -1,
      -1,   912,  3838,  1239,    -1,    -1,  4465,    -1,  3844,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  3908,    -1,
      -1,  3857,  3912,    -1,    -1,    -1,  4051,   624,  3957,   626,
      -1,    -1,   629,  3949,    -1,    -1,    -1,   634,    -1,   636,
      -1,    -1,    -1,    -1,    -1,  1281,    -1,    -1,    -1,  3965,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   654,   655,  1873,
      -1,    -1,   659,    -1,    -1,    -1,    -1,  3957,    -1,   666,
      -1,    -1,    -1,   122,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  3817,    -1,    -1,   681,    -1,    -1,    -1,    -1,  3925,
    4397,  4398,    -1,  3929,    -1,    -1,    -1,    -1,   695,  4060,
     697,   698,  3938,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  3949,  3950,    -1,    -1,    -1,    -1,    -1,
    4427,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    3966,  3967,    -1,    -1,    -1,    -1,    -1,    -1,  4445,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  3983,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  4197,  4120,
    3996,    -1,    -1,  3999,  4000,  4001,  4002,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  4092,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   784,    -1,    -1,
    4151,    -1,  4499,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  4038,  3561,    -1,    -1,    -1,    -1,  4169,    -1,
      -1,  4047,    -1,    -1,  4050,    -1,    -1,  4178,    -1,    -1,
      -1,    -1,    -1,     7,    -1,    -1,   823,   824,   825,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  3978,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   849,    -1,    -1,    -1,    -1,    -1,    -1,  1495,
     309,   310,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,
      -1,  4161,  1508,    -1,    -1,  1511,    -1,    -1,  4168,   876,
      -1,    65,  4172,    -1,    -1,  4175,    -1,    -1,    -1,    -1,
    4126,  4127,  4128,  4129,  4130,    -1,    -1,  4133,  4134,  4135,
    4136,  4137,  4138,  4139,  4140,  4141,  4142,  4143,    -1,    -1,
    4146,    -1,    -1,    49,    50,    51,    52,    -1,  4154,    -1,
      56,    -1,  4283,    -1,    -1,    -1,    -1,   111,    -1,  4165,
      -1,  4167,  3690,    -1,    -1,  1571,    -1,    -1,    74,    75,
      -1,  4177,    -1,    -1,   393,    -1,    -1,    -1,    -1,    -1,
     134,    -1,    -1,    -1,    -1,   952,    -1,  1593,    -1,    -1,
      -1,  3719,    -1,    -1,    -1,   962,   963,    -1,    -1,  1605,
    4331,  4332,    -1,    -1,    -1,    -1,  4337,    -1,    -1,  4340,
      -1,    -1,  2196,  4344,  4345,   982,    -1,    -1,   124,    -1,
      -1,    11,    -1,  4354,    -1,    -1,    16,    -1,    -1,   448,
      -1,    -1,    -1,    -1,    -1,    -1,  4296,   191,    -1,  4299,
      -1,  1008,    -1,    -1,    -1,   464,    -1,    -1,  4379,  4255,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   163,    -1,    -1,
      -1,    -1,    -1,    -1,  4395,    -1,    -1,  1034,    -1,    -1,
      -1,    -1,    -1,  1040,    -1,    -1,    -1,  4408,    -1,    -1,
      -1,  4412,  4413,    -1,    -1,    -1,    -1,    -1,    -1,  3817,
      -1,    -1,  4423,    83,    -1,    -1,  1063,    -1,    -1,    -1,
    1067,  1068,    -1,    -1,  4310,  4311,    -1,  4313,   527,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   272,    -1,
      -1,    -1,    -1,    -1,  4330,    -1,    -1,    -1,    -1,  4335,
    4336,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  4353,    -1,   568,
    4356,    -1,    -1,  4359,    -1,    -1,    -1,   576,    -1,    -1,
      -1,    -1,   152,    -1,    -1,    -1,    -1,   157,   158,   159,
      -1,    -1,  4503,    -1,    -1,   281,    -1,    -1,    -1,    -1,
      -1,   335,    -1,    -1,   174,    -1,    -1,    -1,    -1,   343,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1165,  1166,
      -1,    -1,    -1,    -1,    -1,  1172,  1173,  1174,    -1,    -1,
      -1,    -1,  1179,  1180,  1181,  1182,    -1,    -1,  1185,    -1,
      -1,    -1,   641,  1829,    -1,    -1,    -1,  1833,  1195,    -1,
    1197,  1198,   338,    -1,    -1,    -1,   655,  1204,  1205,  1206,
    1207,  1208,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    3978,   670,  1219,    -1,  1221,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1234,    -1,   423,
      -1,   377,  1239,    -1,    -1,    -1,   430,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  4397,  4398,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   455,    -1,    -1,  1271,    -1,    -1,    -1,   727,    -1,
      -1,    -1,    -1,    -1,   733,    -1,    -1,  1923,    -1,    -1,
      -1,  4427,    -1,  4051,    -1,    -1,    -1,     7,   747,   483,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  4445,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   766,    -1,    -1,
     340,   341,   342,    -1,    -1,    -1,     1,    -1,    -1,    -1,
      -1,    -1,   352,    -1,   470,    -1,    11,    -1,    -1,    -1,
      -1,    16,    -1,    53,    -1,    20,    21,    22,    -1,    -1,
      -1,    -1,    -1,    28,    29,    65,    -1,    -1,    -1,   379,
      -1,    -1,    -1,  4499,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   820,    -1,   557,    -1,   824,    -1,    -1,    -1,    -1,
     516,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   840,   841,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   437,   438,   439,
      -1,    -1,  2636,    -1,   134,    -1,    -1,   447,    -1,   449,
      -1,    -1,    -1,    -1,    -1,    -1,   456,    -1,   574,   114,
     460,   461,   462,   627,    -1,    -1,    -1,   631,    -1,   469,
      -1,    -1,   472,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   488,    -1,
      -1,  2685,    -1,    -1,    -1,    -1,    -1,   152,    -1,    -1,
      -1,   191,    -1,   158,   159,    -1,    -1,    -1,    -1,    -1,
      -1,  2127,  2128,  2129,  2708,  2709,    -1,    -1,  1495,   174,
      -1,  2715,    -1,    -1,    -1,    -1,    -1,    -1,   152,    -1,
      -1,    -1,    -1,    -1,   158,   159,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   707,    -1,    -1,    -1,    -1,    -1,    -1,
     174,    -1,    -1,   553,    -1,    -1,    -1,    -1,    -1,    -1,
     560,    -1,    -1,   679,    -1,   681,   682,    -1,    -1,  1546,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   579,
      -1,  1558,   272,  1560,    -1,   701,    -1,    -1,    -1,    -1,
     706,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2216,  2217,    -1,   767,    -1,    -1,    -1,    -1,    -1,  2225,
      -1,    -1,    -1,     1,    -1,    -1,  1593,   781,     6,    -1,
    1597,     9,    -1,    -1,    -1,   280,    -1,    -1,   744,    -1,
     630,    -1,    -1,  1610,    -1,    -1,    -1,    -1,    -1,    27,
     756,   805,    -1,   298,    -1,   335,    -1,    -1,    -1,    -1,
      -1,   651,    40,   343,    -1,    -1,    -1,    -1,    -1,  4397,
    4398,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     680,    -1,    -1,   847,    -1,   340,   341,   342,    -1,  4427,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   352,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  4445,   363,   364,
      -1,    -1,    -1,    -1,    -1,    -1,   340,   341,   342,    -1,
      -1,    -1,    -1,    -1,   379,    -1,    -1,    -1,   352,   893,
      -1,    -1,    -1,   423,   122,    -1,    -1,    -1,    -1,   855,
     430,   905,    -1,    -1,   744,    -1,    -1,   911,    -1,   913,
      -1,  2945,   752,    -1,   409,    -1,    -1,    -1,    -1,    -1,
      -1,  4499,    -1,    -1,    -1,   455,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    49,    50,    51,    52,   778,   779,
      -1,    56,   437,   438,   439,   440,   441,  1764,    -1,    -1,
      -1,    -1,   447,   483,   449,    -1,    -1,    -1,    -1,    74,
      75,   456,    -1,  1780,    -1,   460,   461,   462,    -1,    -1,
      -1,    -1,    -1,    -1,   469,   439,    -1,   472,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1802,    -1,    -1,    -1,    -1,
     830,    -1,   456,   488,  1811,    -1,   460,   461,   462,    -1,
      -1,    -1,    -1,    -1,  3038,   469,    -1,    -1,   848,   124,
      -1,    -1,    -1,   508,    -1,    -1,    -1,    -1,    -1,   859,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2484,    -1,
    2486,    -1,    -1,    -1,    -1,   875,    -1,   532,    -1,    -1,
      -1,    -1,    -1,   883,    -1,    -1,    -1,   542,   163,    -1,
     890,    -1,    -1,  2509,  2510,    -1,   551,    -1,   553,    -1,
      -1,  2517,    -1,    -1,    -1,   560,    -1,   907,    -1,    -1,
      -1,   566,    -1,   913,    -1,    -1,    -1,    -1,  2534,    -1,
      -1,   309,   310,    -1,   579,    -1,    -1,   927,    -1,   553,
      -1,    -1,    -1,    -1,  1911,    -1,    -1,   627,  1915,    -1,
      -1,   631,    -1,    -1,    -1,    -1,   601,    -1,    -1,    -1,
      -1,    -1,    -1,     1,    -1,    -1,    -1,  2573,    -1,  2575,
      -1,    -1,    -1,    11,    -1,    -1,    -1,    -1,    16,    -1,
      -1,    -1,    20,    21,    22,   630,    -1,    -1,    -1,    -1,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   393,   281,    -1,  1985,    -1,
      -1,  1988,    -1,  1990,  1991,  1992,    -1,   707,    -1,    -1,
      -1,  2637,    -1,  2639,    -1,   680,    -1,    -1,    -1,  2006,
      -1,    -1,    -1,  2010,    -1,  2012,    -1,    -1,    -1,    -1,
      -1,  2018,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   680,    -1,    -1,    -1,
     448,    -1,    -1,   338,    -1,    -1,   114,    -1,    -1,    -1,
    3264,  3265,  3266,  3267,    -1,    -1,   464,   767,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2706,   781,    -1,    -1,    -1,    -1,    -1,   752,    -1,    -1,
      -1,    -1,   377,  2719,   152,    -1,    -1,    -1,    -1,    -1,
     158,   159,  3306,  3307,    -1,   805,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   778,   779,    -1,   174,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   527,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   778,   779,    -1,   847,  2135,    -1,
      -1,  2138,   817,    -1,   819,    -1,   821,    -1,   823,    -1,
     825,    -1,   827,   828,   829,   830,    -1,   832,   833,   834,
     568,    -1,    -1,    -1,    -1,    -1,    11,    -1,   576,    -1,
      -1,    16,    -1,   848,  2171,   470,    -1,    -1,    -1,  2176,
      -1,    -1,    -1,   893,    -1,    -1,    -1,    -1,  2185,  2186,
      -1,    -1,    -1,    -1,    -1,   905,    -1,    -1,    -1,    -1,
     875,   911,    -1,   913,   848,    -1,    -1,    -1,   883,    -1,
      -1,    -1,   280,    -1,    -1,    -1,    -1,    -1,    -1,  2216,
    2217,    -1,    -1,    -1,    -1,    -1,  2223,    -1,    -1,   297,
     298,   875,   907,   641,  2231,  2232,    -1,    -1,   913,   883,
      -1,    -1,  2239,    -1,    -1,    -1,    -1,   655,    -1,    -1,
      -1,    -1,   927,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   670,   907,    -1,    -1,    -1,    -1,    -1,   913,
      -1,    -1,   340,   341,   342,    -1,    -1,    -1,    -1,   574,
      -1,    -1,    -1,    -1,   352,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   363,   364,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   152,    -1,    -1,
      -1,   379,    -1,   158,   159,    -1,    -1,    -1,  3532,   727,
     728,    -1,    -1,    -1,    -1,   733,    -1,    -1,    -1,   174,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   747,
      -1,   409,  2978,    -1,  2980,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   766,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   437,
     438,   439,   440,   441,    -1,    -1,    -1,    -1,    -1,   447,
      -1,   449,    -1,    -1,   679,    -1,   681,   682,   456,    -1,
    3026,    -1,   460,   461,   462,    -1,    49,    50,    51,    52,
      -1,   469,    -1,    56,   472,    -1,   701,    -1,    -1,    -1,
      -1,   706,   820,    -1,    -1,     1,   824,    -1,    -1,    -1,
     488,    74,    75,    -1,    -1,    11,    -1,    -1,    -1,    -1,
      16,    -1,   840,   841,    20,    21,    22,   282,    -1,  2436,
     508,    -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,   744,
    3664,    -1,    -1,  3089,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   756,    -1,    -1,   532,    -1,  2463,    -1,    -1,    -1,
      -1,   124,    -1,    -1,   542,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   551,    -1,   553,    -1,  2484,    -1,  2486,
      -1,    -1,   560,    -1,    -1,   340,   341,   342,   566,  2496,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   352,    -1,   354,
     163,   579,    -1,  2510,    -1,    -1,  2513,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   114,    -1,
      -1,    -1,    -1,   601,   379,    -1,    -1,  2534,    -1,    -1,
      -1,    -1,    -1,    -1,  2541,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     855,    -1,   630,    -1,    -1,    -1,   152,    -1,    -1,    -1,
      -1,    -1,   158,   159,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   174,    -1,
      -1,    -1,   437,   438,   439,    -1,    -1,    -1,    -1,  2596,
      -1,    -1,   447,    -1,   449,    -1,    -1,    -1,    -1,    -1,
      -1,   456,   680,    -1,  2611,   460,   461,   462,    -1,    -1,
      -1,    -1,  2619,    -1,   469,    -1,    -1,   472,   281,    -1,
      -1,    -1,   152,    -1,    -1,    -1,    -1,    -1,   158,   159,
      -1,    -1,    -1,   488,    -1,    -1,  2643,    -1,  3284,    -1,
    3286,    -1,    -1,    -1,   174,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   752,   338,   531,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   280,    -1,    -1,    -1,    -1,    -1,
      -1,  2698,    -1,    -1,    -1,    -1,    -1,    -1,   553,  2706,
     778,   779,   298,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   377,  2722,    -1,    -1,    -1,  2726,
      -1,    -1,    -1,    -1,   579,    -1,    -1,    -1,    -1,    -1,
    2737,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   817,
      -1,   819,    -1,   821,   340,   341,   342,   825,    -1,   827,
     828,   829,   830,    -1,   832,   833,   352,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   363,   364,    -1,
     848,    -1,    -1,    -1,    -1,   630,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   379,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   875,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   883,    -1,   470,    -1,    -1,
     340,   341,   342,   409,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   352,   678,    -1,   680,    -1,    -1,    -1,   907,
      -1,    11,    -1,    -1,    -1,   913,    16,    -1,    -1,    -1,
      -1,   437,   438,   439,   440,   441,    -1,    -1,    -1,   927,
      -1,   447,   515,   449,    -1,    -1,    -1,    -1,    -1,    -1,
     456,    -1,    -1,    -1,   460,   461,   462,    -1,    -1,    -1,
    2877,    -1,    -1,   469,    -1,  2882,   472,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   488,    -1,    -1,    -1,    -1,   752,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   437,   438,   439,
      -1,   574,   508,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   778,   779,    -1,   456,    -1,    -1,    -1,
     460,   461,   462,    -1,    -1,    -1,   532,    -1,    -1,   469,
      -1,    -1,    -1,    -1,    -1,    -1,   542,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   551,    -1,   553,    -1,    -1,
      -1,    -1,    -1,    -1,   560,    -1,    -1,    -1,    -1,    -1,
     566,    -1,   152,    -1,    -1,   830,    -1,    -1,   158,   159,
      -1,    -1,    -1,   579,  2991,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   848,   174,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   601,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   679,    -1,   681,   682,
     875,    -1,    -1,   553,    -1,    -1,    -1,    -1,   883,    -1,
    3037,    -1,    -1,    -1,   630,    -1,    -1,    -1,   701,    -1,
      -1,    -1,    -1,   706,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   907,    -1,    -1,    -1,    -1,   912,   913,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   927,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   744,    -1,    -1,   680,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   756,    41,    -1,    -1,    -1,    -1,    -1,
      -1,   281,    49,    50,    51,    52,    -1,    -1,    -1,    56,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    74,    75,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     680,    -1,    -1,    -1,   334,    -1,   752,    -1,    -1,    -1,
     340,   341,   342,    -1,    -1,    -1,    -1,    -1,  3175,    -1,
      -1,    -1,   352,    -1,    -1,    -1,   123,   124,    -1,    -1,
     127,    -1,   778,   779,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   855,    -1,    -1,    -1,    -1,    -1,    -1,   379,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   391,    -1,    -1,    -1,    -1,   163,    -1,    -1,    -1,
      -1,   817,    -1,   819,    -1,   821,     1,    -1,    -1,   825,
       5,   827,   828,   829,   830,    10,   832,   833,    -1,    -1,
      -1,    -1,    17,    -1,    -1,    -1,    -1,    -1,   778,   779,
      -1,    26,   848,    -1,    -1,    -1,    -1,   437,   438,   439,
      -1,    -1,    -1,    -1,    -1,    -1,  3273,   447,    -1,   449,
      -1,    -1,    -1,    -1,    -1,    -1,   456,    -1,    -1,   875,
     460,   461,   462,    -1,    -1,    -1,  3293,   883,    -1,   469,
      -1,    -1,   472,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  3310,    -1,   485,    -1,    -1,   488,    -1,
      -1,   907,    87,    88,    -1,    -1,    -1,   913,   848,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   927,    -1,    -1,   281,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   118,    -1,   875,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   883,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  3369,   138,    -1,    -1,    -1,   142,    -1,    -1,
    3377,    -1,  3379,   553,    -1,    -1,    -1,   907,    -1,    -1,
     560,    -1,    -1,   913,    -1,   160,    -1,    -1,    -1,    -1,
      -1,   338,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   579,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   187,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   201,    -1,    -1,    -1,
     377,    -1,   207,    -1,   209,    -1,    -1,    -1,   213,    -1,
      -1,    -1,   217,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     630,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   234,
      -1,   236,    -1,    -1,    -1,   240,   241,   242,   243,   244,
      -1,   246,   247,   248,   249,    -1,   251,   252,    -1,   254,
     255,    -1,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,    -1,    -1,   270,    -1,    -1,    -1,    -1,
     680,   448,    -1,   278,    -1,    -1,    -1,    -1,   283,  3516,
      -1,   286,    -1,    -1,    -1,    -1,   291,    -1,    -1,    -1,
      -1,   296,   297,   470,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  3539,  3540,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   489,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  3561,    -1,    -1,  3564,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   516,
     345,    -1,   752,    -1,    -1,    -1,   756,    -1,   353,    -1,
      -1,   356,    -1,    -1,    -1,    -1,   361,    -1,    -1,    -1,
      -1,    -1,  3599,    -1,    -1,    -1,    -1,    -1,   778,   779,
      -1,   781,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   387,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     395,    -1,   397,    -1,    -1,   400,    -1,   574,   403,    -1,
      -1,    -1,    -1,   408,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   418,    -1,    -1,   826,    -1,    -1,    -1,
     830,   598,   599,    -1,    -1,    -1,    -1,    -1,   152,    -1,
      -1,    -1,    -1,    -1,   158,   159,  3673,    -1,   848,  3676,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     174,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   875,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   883,    -1,    -1,    -1,    -1,    -1,   484,
      -1,    -1,  3719,    -1,    -1,   490,    -1,   492,    -1,    -1,
     495,    -1,    -1,    -1,    -1,    -1,    -1,   907,    -1,    -1,
      -1,   911,   679,   913,   681,   682,   511,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   520,    -1,   927,    -1,    -1,
      -1,  4397,  4398,    -1,   701,    -1,    -1,    -1,    -1,   706,
      -1,    -1,    -1,    -1,   539,   540,   541,    -1,   543,   544,
     545,   546,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  4427,    -1,    -1,    -1,  3792,    -1,    -1,   563,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   744,    -1,  4445,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   756,
    3817,   586,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   340,   341,   342,    -1,
      -1,   626,    -1,  4499,    -1,    -1,    -1,   632,   352,    -1,
    3867,   636,    -1,    -1,   639,   640,  3873,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  3884,    -1,    -1,
      -1,   656,    -1,    -1,    -1,   379,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   672,    -1,    -1,
      -1,    -1,   677,    -1,    -1,    -1,    -1,    -1,   855,   684,
      -1,    -1,    -1,    -1,    -1,   690,    -1,    -1,    -1,    -1,
    3927,    11,   869,  3930,  3931,    -1,    16,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   709,    -1,    -1,    -1,    -1,  3946,
    3947,    -1,    -1,    -1,  3951,   439,    -1,    -1,   723,    -1,
      -1,    -1,    -1,    -1,   729,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   456,    -1,    -1,   912,   460,   461,   462,    -1,
     745,  3978,   747,    -1,  3981,   469,    -1,    -1,   472,  3986,
      -1,    -1,    -1,    -1,    -1,    -1,   761,    -1,    -1,    -1,
      -1,  3998,    -1,    -1,    -1,    -1,   771,   772,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   780,  4013,    -1,   783,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  4024,    -1,    -1,
      -1,    -1,    -1,   798,    -1,    -1,    -1,    -1,    -1,  4036,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  4051,   820,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   831,    -1,    -1,   553,
      -1,  4068,   152,    -1,  4071,    -1,    -1,    -1,   158,   159,
     845,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   168,    -1,
      -1,    -1,    -1,   858,   174,    -1,    -1,    -1,    -1,   864,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  4119,   888,    -1,  4122,  4123,  4124,  4125,    -1,
      -1,    -1,    -1,    -1,    -1,  4132,    -1,    -1,    -1,    -1,
      -1,   906,    -1,    -1,    -1,    -1,   630,    -1,  4145,    -1,
      -1,    -1,   917,    -1,  4151,    -1,    -1,   922,    -1,    -1,
    4157,  4158,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  4169,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  4178,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   680,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  4209,  4210,  4211,  4212,  4213,  4214,  4215,  4216,
    4217,  4218,  4219,  4220,  4221,  4222,  4223,  4224,  4225,  4226,
    4227,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  4239,  4240,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  4252,    -1,    -1,    -1,    -1,
     340,   341,   342,    -1,    -1,    -1,    -1,  4264,   752,    -1,
      -1,    -1,   352,    -1,    -1,    -1,    -1,    -1,    -1,  4276,
      -1,    -1,    -1,    -1,    -1,    -1,  4283,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   778,   779,    -1,    -1,    -1,   379,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    4307,  4308,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  4326,
      -1,    -1,    -1,    -1,  4331,  4332,    -1,    -1,    -1,    -1,
    4337,    -1,  4339,  4340,    -1,    -1,   830,  4344,  4345,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   437,   438,   439,
      -1,    -1,    -1,  4360,   848,    -1,    -1,   447,    -1,   449,
      -1,    -1,    -1,    -1,    -1,    -1,   456,    -1,    -1,    -1,
     460,   461,   462,    -1,    -1,    -1,    -1,    -1,  4385,   469,
      -1,   875,   472,    -1,    -1,    -1,    -1,    -1,    -1,   883,
    4397,  4398,    -1,    -1,    -1,    -1,    -1,    -1,   488,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  4416,
      -1,    -1,    -1,   907,    -1,    -1,    -1,    -1,    -1,   913,
    4427,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   927,     3,    -1,    -1,    -1,  4445,     8,
    4447,  4448,    -1,    12,    -1,    -1,    15,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  4461,    -1,    -1,    -1,    27,  4466,
      -1,    -1,    -1,   553,    -1,    -1,    -1,    -1,    -1,  4476,
    4477,    -1,    -1,    -1,    -1,  4482,    45,    46,    -1,    -1,
      -1,    -1,    -1,  4490,    -1,    -1,    -1,    -1,    -1,   579,
      -1,    -1,  4499,    -1,    -1,    -1,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    -1,    -1,    -1,    77,    78,
      79,    -1,    81,    82,    -1,    -1,    -1,    86,    -1,    -1,
      89,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    97,    98,
      99,   100,   101,    -1,   103,   104,    -1,    -1,    -1,    -1,
     630,    -1,    -1,    -1,    -1,    -1,   115,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   125,    -1,    -1,   128,
     129,   130,   131,   132,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     680,    -1,    -1,    -1,    -1,    -1,    -1,   166,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   175,   176,   177,   178,
     179,   180,   181,   182,    -1,    -1,    -1,   186,    -1,   188,
     189,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     199,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   214,   215,    -1,    -1,   218,
     219,    -1,   221,   222,   223,   224,   225,    -1,    -1,    -1,
      -1,    -1,   752,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   245,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   778,   779,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   268,
     269,    -1,    -1,   793,   273,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   284,    -1,    -1,    -1,   288,
      -1,    -1,    -1,    -1,   293,   294,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     830,    -1,   311,   312,   313,   314,   315,    -1,    -1,   318,
      -1,    -1,    -1,   322,   323,   324,    -1,    -1,   848,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   344,    -1,    -1,    -1,    -1,
     349,    -1,    -1,    -1,    -1,   875,    -1,    -1,   357,   358,
     359,   360,    -1,   883,    -1,    -1,    -1,   366,   367,    -1,
     369,    -1,   371,   372,   373,   374,   375,   376,    -1,   378,
      -1,   380,   381,   382,    -1,    -1,    -1,   907,    -1,    -1,
      -1,    -1,    -1,   913,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   401,   402,    -1,    -1,    -1,   927,    -1,    -1,
      -1,   410,   411,   412,   413,   414,   415,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   424,    -1,    -1,    -1,   428,
      -1,    -1,    -1,   432,    -1,   434,    -1,   436,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   453,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   466,   467,   468,
      -1,    -1,   471,    -1,    -1,    -1,   475,    -1,   477,   478,
     479,   480,    -1,    -1,    -1,    -1,    -1,    -1,   487,    -1,
      -1,    -1,    -1,    -1,   493,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   504,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   512,    -1,    -1,    -1,    -1,   517,   518,
     519,    -1,   521,    -1,   523,   524,    -1,   526,    -1,   528,
     529,    -1,    -1,   532,   533,    -1,   535,   536,   537,   538,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   547,   548,
      -1,    -1,   551,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     559,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   572,   573,    -1,    -1,    -1,    -1,    -1,
      -1,   580,   581,    -1,   583,    -1,    -1,    -1,   587,    -1,
      -1,    -1,    -1,    -1,    -1,   594,    -1,    -1,    -1,    -1,
      -1,   600,    -1,    -1,    -1,   604,    -1,   606,   607,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   620,    -1,    -1,   623,   624,    -1,    -1,    -1,   628,
      -1,    -1,    -1,    -1,   633,    -1,    -1,    -1,    -1,   638,
      -1,    -1,    11,   642,     1,   644,   645,    16,     5,    -1,
      -1,    -1,    -1,    10,   653,   654,    -1,    -1,    -1,    -1,
      17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,
      -1,    -1,    -1,    -1,   673,   674,   675,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   687,   688,
     689,    -1,    -1,    -1,   693,   694,   695,   696,   697,   698,
      -1,    -1,    -1,   702,   703,    -1,    -1,    -1,    -1,    -1,
      -1,   710,   711,    -1,    -1,    -1,    -1,    -1,    -1,   718,
     719,   720,   721,    -1,    -1,    -1,    -1,   726,    -1,    -1,
      87,    88,   731,    -1,    -1,   734,   735,   736,   737,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     749,    -1,    -1,    -1,    -1,   754,   755,    -1,    -1,    -1,
      -1,   118,    -1,   762,   763,    -1,   765,    -1,    -1,   768,
      -1,    -1,    -1,    -1,    -1,   774,    -1,    -1,    -1,    -1,
      -1,   138,    -1,   152,    -1,   142,    -1,    -1,    -1,   158,
     159,    -1,   791,   792,    -1,    -1,   795,    -1,    -1,   168,
      -1,   800,    -1,   160,    -1,   174,    -1,    -1,    -1,   808,
     809,   810,    -1,    -1,    -1,   814,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   201,   844,    -1,   846,    -1,    -1,
     207,   850,   209,    -1,    -1,    -1,   213,   856,    -1,    -1,
     217,    -1,    -1,    -1,   863,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   874,    -1,   234,    -1,   878,
     879,   880,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       1,    -1,   891,    -1,     5,    -1,   895,   896,   897,    10,
     899,   900,   901,   902,   903,    -1,    17,    -1,    -1,    -1,
     909,   910,    -1,   270,    -1,    26,    -1,    -1,    -1,    -1,
      -1,    -1,   921,    -1,    -1,   924,    -1,    -1,    -1,   286,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   296,
     297,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   340,   341,   342,    -1,    -1,    87,    88,    -1,    -1,
      -1,    -1,    -1,   352,    -1,    -1,    -1,    -1,   345,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   353,    -1,    -1,   356,
      -1,    -1,    -1,    -1,   361,    -1,    -1,   118,    -1,    -1,
     379,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   138,    -1,    -1,
     387,   142,    -1,    -1,    -1,    -1,    -1,    -1,   395,    -1,
     397,    -1,    -1,   400,    -1,    -1,   403,    -1,    -1,   160,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   418,    -1,    -1,    -1,    -1,    -1,    -1,   437,   438,
     439,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   447,    -1,
     449,    -1,    -1,    -1,    -1,    -1,    -1,   456,    -1,    -1,
     201,   460,   461,   462,    -1,    -1,   207,    -1,   209,    -1,
     469,    -1,   213,   472,    -1,    -1,   217,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   488,
      -1,    -1,    -1,   234,    -1,    -1,    -1,   484,    -1,    -1,
      -1,    -1,    -1,   490,    -1,   492,    -1,    -1,   495,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   511,    -1,    -1,    -1,    -1,   270,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   286,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   553,   296,   297,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   563,    -1,    -1,    -1,
     579,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   586,
      -1,    -1,    -1,    -1,   345,    -1,    -1,    -1,    -1,     1,
      -1,    -1,   353,     5,    -1,   356,    -1,    -1,    10,    -1,
     361,    -1,    -1,    -1,    -1,    17,    -1,    -1,    -1,    -1,
      -1,   630,    -1,    -1,    26,    -1,    -1,    -1,    -1,   626,
      -1,    -1,    -1,    -1,    -1,   632,   387,    -1,    -1,   636,
      -1,    -1,   639,   640,   395,    -1,   397,    -1,    44,   400,
      -1,    -1,   403,    49,    50,    51,    52,    -1,    -1,   656,
      56,    -1,    -1,    -1,    -1,    -1,    -1,   418,    -1,    -1,
      -1,   680,    -1,    -1,    -1,   672,    -1,    -1,    -1,    75,
     677,    -1,    -1,    -1,    -1,    87,    88,   684,    -1,    -1,
      -1,    -1,    -1,   690,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   709,    -1,    -1,    -1,   118,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   723,    -1,   124,    -1,
      -1,    -1,   729,   484,    -1,    -1,   138,    -1,    -1,   490,
     142,   492,    -1,   752,   495,    -1,    -1,    -1,    -1,    -1,
     747,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   160,    -1,
     511,    -1,    -1,    -1,   761,   161,    -1,   163,    -1,   778,
     779,    -1,    -1,    -1,   771,   772,    -1,    -1,    -1,   175,
      -1,    -1,    -1,   780,   793,    -1,   783,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   201,
      -1,   798,   198,    -1,    -1,   207,    -1,   209,    -1,    -1,
      -1,   213,   563,    -1,    -1,   217,    -1,    -1,    -1,    -1,
      -1,   830,    -1,   820,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   234,    -1,    -1,   586,    -1,    -1,    -1,   848,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   845,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   858,    -1,    -1,    -1,    -1,   875,   864,   270,    -1,
      -1,    -1,    -1,    -1,   883,   626,    -1,    -1,    -1,    -1,
      -1,   632,    -1,    -1,   286,   636,    -1,    -1,   639,   640,
      -1,   888,    -1,    -1,   296,   297,    -1,    -1,   907,    -1,
      -1,    -1,    -1,    -1,   913,   656,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   927,    -1,
     917,   672,    -1,    -1,    -1,   922,   677,    -1,    -1,    -1,
      -1,    -1,    -1,   684,    -1,    -1,    -1,    -1,    -1,   690,
      -1,    -1,   338,   345,     5,    -1,    -1,    -1,    -1,    10,
      -1,   353,   348,    -1,   356,    -1,    17,    -1,   709,   361,
      -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,
      -1,    -1,   723,    -1,    -1,    -1,    -1,    -1,   729,    -1,
      -1,   377,    -1,    -1,    -1,   387,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   395,    -1,   397,   747,    -1,   400,    -1,
      -1,   403,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     761,    -1,    -1,    -1,    -1,    -1,   418,    -1,    -1,    -1,
     771,   772,    -1,    -1,    -1,    -1,    87,    88,    -1,   780,
      -1,    -1,   783,    -1,    -1,    -1,    -1,    -1,    -1,   435,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   798,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   118,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   820,
      -1,   467,    -1,    -1,   470,    -1,    -1,   138,    -1,    -1,
      -1,   142,   484,    -1,    -1,    -1,    -1,    -1,   490,    -1,
     492,    -1,    -1,   495,   845,    -1,    -1,    -1,    -1,   160,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   858,    -1,   511,
      -1,    -1,    -1,   864,    -1,    -1,    -1,    -1,    -1,   515,
      -1,    -1,    -1,    -1,    -1,    -1,   522,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   888,    -1,    -1,
     201,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   213,    -1,    -1,    -1,   217,    -1,    -1,    -1,
      -1,   563,   558,    -1,    -1,    -1,   917,    -1,    -1,    -1,
      -1,   922,    -1,    -1,    -1,   236,    -1,    -1,   574,    -1,
     241,   242,   243,   244,   586,   246,   247,   248,   249,    -1,
     251,    -1,   253,   254,   255,    -1,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,    -1,    -1,   270,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   626,   286,   622,    -1,    -1,   625,
     632,    -1,    -1,    -1,   636,   296,   297,   639,   640,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   656,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     672,   667,    -1,    -1,    -1,   677,    -1,    -1,    -1,    -1,
      -1,    -1,   684,   679,   345,   681,   682,    -1,   690,    -1,
      -1,    -1,   353,    -1,    -1,   356,    -1,    -1,    -1,    -1,
     361,    -1,    -1,    -1,    -1,   701,    -1,   709,    -1,    -1,
     706,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   714,    -1,
      -1,   723,    -1,    -1,    -1,    -1,   387,   729,    -1,    -1,
      -1,    -1,    -1,    -1,   395,    -1,   397,    -1,    -1,   400,
      -1,    -1,   403,    -1,    -1,   747,    -1,    -1,   744,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   761,
     756,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   771,
     772,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   780,    -1,
      -1,   783,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   790,    -1,   798,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   811,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   484,    -1,    -1,    -1,    -1,    -1,   490,
      -1,   492,    -1,    -1,   495,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   845,    -1,    -1,    -1,    -1,    -1,    -1,
     511,    -1,    -1,    -1,    -1,    -1,   858,    -1,    -1,   855,
      -1,    -1,   864,    -1,    -1,    -1,    -1,    -1,    -1,     8,
      -1,   867,    -1,    -1,    -1,    -1,    15,    -1,   874,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   888,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   563,    -1,    -1,    -1,    45,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   917,    -1,    -1,    -1,    -1,
     922,    -1,    -1,    -1,    -1,   586,    -1,    66,    67,    68,
      69,    70,    71,    72,    73,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    81,    -1,    -1,    -1,    -1,    86,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    97,    98,
      99,   100,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   636,   115,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   125,    -1,    -1,   128,
     129,   130,    -1,   132,    -1,   656,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   677,    -1,    -1,    -1,
      -1,    -1,    -1,   684,    -1,    -1,    -1,   166,    -1,   690,
      -1,    -1,    -1,    -1,    -1,    -1,   175,   176,   177,   178,
     179,   180,   181,   182,    -1,    -1,    -1,    -1,   709,   188,
     189,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   729,    -1,
      -1,    -1,    -1,    -1,    -1,   214,   215,    -1,    -1,   218,
     219,    -1,    -1,    -1,   223,    -1,   747,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     761,    -1,    -1,    -1,     1,    -1,   245,    -1,    -1,    -1,
     771,   772,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   780,
      -1,    -1,   783,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     269,    -1,    -1,    -1,   273,    -1,    -1,   798,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   288,
      -1,    -1,    -1,    -1,   293,   294,    -1,    -1,    -1,   820,
      57,    58,    59,    60,    61,    -1,    63,    64,    -1,    -1,
      -1,    -1,   311,   312,   313,   314,   315,    -1,    -1,   318,
      -1,    -1,    -1,    -1,   845,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   858,    -1,    -1,
      -1,    -1,    -1,   864,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   357,   358,
     359,   360,    -1,    -1,    -1,    -1,    -1,   366,   367,    -1,
     369,    -1,   371,   372,   373,    -1,    -1,   376,    -1,   378,
      -1,    -1,    -1,   382,   141,    -1,   143,   144,   145,   146,
     147,   148,   149,   150,   151,    -1,   917,    -1,    -1,    -1,
      -1,   922,   401,   402,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   410,   411,   412,   413,   414,   415,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   424,    -1,    -1,    -1,   428,
      -1,    -1,    -1,   432,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   213,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   471,    -1,    -1,    -1,   475,    -1,   477,   478,
     479,   480,    -1,    -1,    -1,    -1,    -1,    -1,   487,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   504,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   512,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   532,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   547,   548,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   325,   326,
     327,   328,   329,    -1,    -1,   332,   333,    -1,    -1,    -1,
      -1,   580,    -1,    -1,   583,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   594,    -1,    -1,    -1,    -1,
      -1,   600,    -1,    -1,    -1,   604,    -1,   606,   607,    -1,
      -1,   368,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   620,    -1,    -1,   623,   624,    -1,    -1,    -1,   628,
      -1,    -1,    -1,    -1,    -1,   392,    -1,    -1,    -1,    -1,
      -1,    -1,    16,   642,    -1,   644,   645,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   653,   654,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   673,   674,   675,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   693,   694,   695,   696,    -1,   698,
      -1,    -1,    -1,   702,   703,    -1,    -1,    -1,    -1,    -1,
      -1,   710,   711,    -1,    -1,    -1,    -1,    -1,    -1,   718,
     719,   720,    -1,    -1,    -1,    -1,    -1,   726,    -1,    -1,
      -1,    -1,   731,    -1,    -1,    -1,   110,    -1,    -1,    -1,
      -1,    -1,    -1,   500,    -1,    -1,    -1,    -1,    -1,    -1,
     749,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   762,   763,     8,    -1,    -1,    -1,   768,
      -1,    -1,    15,    -1,    -1,   774,    -1,    -1,   152,    -1,
      -1,    -1,    -1,    -1,   158,   159,    -1,    -1,    -1,    -1,
      -1,    -1,   791,   792,    -1,    -1,    -1,    -1,    -1,    -1,
     174,   800,    45,    -1,    -1,    -1,    -1,    -1,    -1,   808,
      -1,    -1,    -1,    -1,    -1,   814,    -1,    -1,   575,    -1,
      -1,    -1,    -1,    66,    67,    68,    69,    70,    71,    72,
      73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,   596,
      -1,    -1,    -1,    86,    -1,   844,    -1,    -1,    -1,    -1,
      -1,   850,    -1,    -1,    97,    98,    99,   100,    -1,    -1,
      -1,    -1,   619,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   115,    -1,    -1,    11,    -1,    -1,    -1,    -1,
      16,    -1,   125,    -1,    -1,   128,   129,   130,    -1,   132,
      -1,    -1,   891,    -1,    -1,    -1,    -1,    -1,   897,    -1,
     899,    -1,    -1,   902,    -1,    -1,    -1,    -1,    -1,    -1,
     909,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   921,   166,    -1,   924,    -1,    -1,    -1,    -1,
      -1,    -1,   175,   176,   177,   178,   179,   180,   181,   182,
      -1,    -1,    -1,    -1,    -1,   188,   189,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   340,   341,   342,    -1,
      -1,   214,   215,    -1,    -1,   218,   219,    -1,   352,    -1,
     223,    -1,    -1,   740,   741,   742,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   245,    -1,    -1,   379,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   152,    -1,    -1,    -1,
      -1,    -1,   158,   159,    -1,    -1,   269,    -1,    -1,    -1,
     273,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   174,    -1,
      -1,    -1,    -1,    -1,    -1,   288,    -1,    -1,    -1,    -1,
     293,   294,    -1,    -1,    -1,    -1,    -1,   431,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   439,    -1,    -1,   311,   312,
     313,   314,   315,    -1,    -1,   318,    -1,    -1,    -1,    -1,
      -1,    -1,   456,    -1,    -1,    -1,   460,   461,   462,    -1,
      -1,    -1,    -1,    -1,    -1,   469,    -1,    -1,   472,    -1,
      -1,    -1,    -1,   860,   861,   862,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   357,   358,   359,   360,    -1,    -1,
      -1,    -1,    -1,   366,   367,    -1,   369,    -1,   371,   372,
     373,    -1,    -1,   376,   270,   378,    -1,    -1,    -1,   382,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   913,    -1,   401,   402,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   410,   411,   412,
     413,   414,   415,    -1,    -1,    -1,    -1,    -1,    -1,   553,
      -1,   424,    -1,    -1,    -1,   428,   429,    -1,    -1,   432,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   340,   341,   342,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   352,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   471,    -1,
      -1,    -1,   475,    -1,   477,   478,   479,   480,    -1,    -1,
      -1,    -1,    -1,   379,   487,    -1,    11,    -1,    -1,    -1,
      -1,    16,    -1,    -1,    -1,    -1,   630,    -1,    -1,    -1,
      -1,   504,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   512,
      -1,    -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    49,    50,    51,    52,    -1,    -1,
      -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   437,   438,   439,   547,   548,   680,    -1,    -1,    74,
      75,   447,    -1,   449,    -1,    -1,    -1,    -1,    -1,    -1,
     456,    -1,    -1,    -1,   460,   461,   462,    -1,    -1,    -1,
      -1,    -1,    -1,   469,    -1,    -1,   472,   580,    -1,    -1,
     583,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   594,   488,    -1,    -1,    -1,    -1,   600,   123,   124,
      -1,   604,   127,   606,   607,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   620,   752,    -1,
     623,   624,    -1,    -1,    -1,   628,    -1,   152,    -1,    -1,
      -1,    -1,    -1,   158,   159,    -1,    -1,    -1,   163,   642,
      -1,   644,   645,    -1,   778,   779,    -1,    -1,    -1,   174,
     653,   654,    -1,    -1,    -1,    -1,    -1,   553,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     673,   674,   675,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   579,    -1,    -1,    -1,    -1,    -1,    -1,
     693,   694,   695,   696,    -1,   698,   830,    -1,    -1,   702,
     703,    -1,    -1,    -1,    -1,    -1,    -1,   710,   711,   843,
      -1,    -1,    -1,    -1,   848,   718,   719,   720,    -1,    -1,
      -1,    -1,    -1,   726,    -1,    -1,    -1,    -1,   731,    -1,
      -1,    -1,    -1,    -1,   630,    -1,    -1,    -1,    -1,    -1,
      -1,   875,    -1,    -1,    -1,    -1,   749,    -1,    -1,   883,
      -1,    -1,    -1,    -1,    -1,    -1,   281,    -1,    -1,   762,
     763,    -1,    -1,    -1,    -1,   768,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   907,    -1,    -1,    -1,    -1,    -1,   913,
      -1,    -1,    -1,    -1,   680,    -1,    -1,    -1,   791,   792,
      -1,    -1,    -1,   927,    -1,    -1,    -1,   800,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   808,    -1,    -1,    -1,    -1,
      -1,   814,    -1,   338,    -1,   340,   341,   342,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   352,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   844,    -1,    -1,    -1,    -1,    -1,   850,   744,    -1,
      -1,    -1,   377,    -1,   379,    -1,   752,    -1,    11,    -1,
      -1,    -1,    -1,    16,    -1,    -1,    -1,    20,    21,    22,
      -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,
      -1,    -1,   778,   779,    -1,    -1,    -1,    -1,   891,    -1,
      -1,    -1,    -1,    -1,   897,    -1,   899,    -1,    -1,   902,
      -1,    -1,    -1,    -1,    -1,    -1,   909,    -1,    -1,    -1,
      -1,    -1,   437,   438,   439,    -1,    -1,    -1,   921,    -1,
      -1,   924,   447,   448,   449,    -1,    -1,   823,    -1,    -1,
      -1,   456,    -1,    -1,   830,   460,   461,   462,   834,    -1,
      -1,    -1,    -1,    -1,   469,   470,    -1,   472,    -1,    -1,
      -1,    -1,   848,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   114,    -1,   488,   489,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   875,
      -1,    -1,    -1,    11,    -1,    -1,    -1,   883,    16,    -1,
      -1,   516,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   152,
      28,    -1,    -1,    -1,    -1,   158,   159,    -1,    -1,    -1,
      -1,   907,    -1,    -1,    -1,    -1,    -1,   913,    -1,    -1,
      -1,   174,    -1,    -1,    -1,    -1,    -1,    -1,   553,    -1,
      -1,   927,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   574,
      -1,    -1,    -1,    -1,   579,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   598,   599,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    11,    -1,    -1,    -1,    -1,    16,
      -1,    -1,    -1,    -1,    -1,   630,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   152,    -1,    -1,   280,    -1,    -1,
     158,   159,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   298,   174,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   679,   680,   681,   682,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   701,    -1,    -1,    -1,
      -1,   706,    -1,    -1,    -1,    -1,    -1,   340,   341,   342,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   352,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     363,   364,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   744,
      -1,    -1,    -1,    -1,    -1,    -1,   379,   752,    -1,    -1,
      -1,   756,    -1,    -1,    -1,   152,    -1,    -1,    -1,    -1,
      -1,   158,   159,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   168,    -1,   778,   779,    -1,   409,   174,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     298,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   437,   438,   439,   440,   441,    -1,
      -1,    -1,    -1,    -1,   447,    -1,   449,    -1,    -1,    -1,
      -1,    -1,    -1,   456,    -1,   830,    -1,   460,   461,   462,
      -1,    -1,   340,   341,   342,    -1,   469,    -1,    -1,   472,
      -1,    -1,    -1,   848,   352,    -1,    -1,    -1,    -1,    -1,
     855,    -1,    -1,    -1,    -1,   488,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   869,    -1,    -1,    -1,    -1,    -1,
     875,   379,    -1,    -1,    -1,   508,    -1,    -1,   883,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   532,
      -1,   409,   907,    -1,    -1,    -1,    -1,   912,   913,   542,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   551,    -1,
     553,    -1,   927,    -1,    -1,    -1,    -1,   560,    -1,   437,
     438,   439,    -1,   566,    -1,    11,    -1,    -1,    -1,   447,
      16,   449,    -1,   340,   341,   342,   579,    -1,   456,    -1,
      -1,    -1,   460,   461,   462,   352,    -1,    -1,    -1,    -1,
      -1,   469,    -1,    -1,   472,    -1,    -1,    -1,   601,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     488,    -1,   379,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   630,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   532,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     437,   438,   439,    -1,    -1,   553,    -1,   680,    -1,    -1,
     447,    -1,   449,    -1,    -1,    -1,    -1,    -1,   566,   456,
      -1,    -1,    -1,   460,   461,   462,    -1,    -1,    -1,    -1,
      -1,   579,   469,    11,    -1,   472,   152,    -1,    16,    -1,
      -1,    -1,   158,   159,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   488,    -1,    -1,    -1,    -1,    -1,    -1,   174,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    11,    -1,    -1,    -1,   752,
      16,    -1,   630,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    11,   778,   779,    -1,    -1,    16,
      -1,    -1,    -1,    -1,    -1,    -1,   553,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   680,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   579,    -1,   817,    -1,   819,    -1,   821,    -1,
      -1,    -1,   825,    -1,   827,   828,   829,   830,    -1,   832,
     833,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   152,   848,    -1,    -1,    -1,    -1,
     158,   159,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   630,    -1,    -1,   174,    -1,    -1,    -1,
      -1,    -1,   875,    -1,   752,    -1,    -1,    -1,    -1,    -1,
     883,    -1,    -1,    -1,    -1,    -1,   152,    -1,    -1,    -1,
      -1,    -1,   158,   159,   340,   341,   342,    -1,    -1,    -1,
     778,   779,    -1,    -1,   907,    -1,   352,    -1,   174,    -1,
     913,    -1,    -1,   680,    -1,   152,    -1,    -1,    -1,    -1,
      -1,   158,   159,    -1,   927,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   379,    -1,    -1,    -1,   174,    -1,   817,
      -1,   819,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     828,   829,   830,    -1,   832,   833,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     848,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   752,    -1,    -1,    -1,    -1,
      -1,   437,   438,   439,    -1,    -1,    -1,   875,    -1,    -1,
      -1,   447,    -1,   449,    -1,   883,    -1,    -1,    -1,    -1,
     456,   778,   779,    -1,   460,   461,   462,    -1,    -1,    -1,
      -1,    -1,    -1,   469,    -1,    -1,   472,    -1,    -1,   907,
      -1,    -1,   340,   341,   342,   913,    -1,    -1,    -1,    -1,
      -1,    -1,   488,    -1,   352,    -1,    -1,    -1,    -1,   927,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   830,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   379,    -1,    -1,   340,   341,   342,    -1,    -1,    -1,
     346,   848,    -1,    -1,    -1,    -1,   352,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    11,    -1,   340,   341,   342,    16,   553,   875,    -1,
      -1,    -1,    -1,   379,    -1,   352,   883,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   437,
     438,   439,    -1,   579,    -1,    -1,    -1,    -1,    -1,   447,
     907,   449,   379,    -1,    -1,    -1,   913,    -1,   456,    -1,
      -1,    -1,   460,   461,   462,    -1,    -1,    -1,    -1,    -1,
     927,   469,    -1,    -1,   472,    -1,    -1,    -1,    -1,    -1,
      -1,   437,   438,   439,    -1,    -1,    -1,    -1,    -1,    -1,
     488,   447,    -1,   449,   630,    -1,    -1,    -1,    -1,    -1,
     456,    -1,    -1,    -1,   460,   461,   462,    -1,    -1,    -1,
     437,   438,   439,   469,    11,    -1,   472,    -1,    -1,    16,
     447,    -1,   449,    -1,    -1,    -1,    -1,    -1,    -1,   456,
      -1,    -1,   488,   460,   461,   462,    -1,    -1,    -1,    -1,
      -1,    -1,   469,    -1,   680,   472,    -1,    -1,    -1,    -1,
      -1,    -1,   152,    -1,    -1,   553,    -1,    -1,   158,   159,
      -1,   488,   560,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   174,    -1,    -1,    -1,    -1,    -1,
      -1,   579,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   553,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   752,    -1,    -1,    -1,
      -1,    -1,    -1,   579,    -1,    -1,   553,    -1,    -1,    -1,
      -1,    -1,   630,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   778,   779,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   579,    -1,    -1,   152,    -1,    -1,    -1,    -1,
      -1,   158,   159,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   630,    -1,    -1,   174,    -1,   815,
      -1,    -1,   680,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   830,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   630,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   848,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   680,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   875,
     340,   341,   342,    -1,    -1,    -1,    -1,   883,    -1,    -1,
      -1,    -1,   352,   680,   752,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   907,    -1,    -1,    -1,    -1,    -1,   913,    -1,   379,
     778,   779,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   927,    -1,    -1,    -1,    -1,   752,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   744,    -1,    -1,
      -1,    -1,   778,   779,    -1,   752,    -1,    -1,    -1,    -1,
      -1,    -1,   830,    -1,    -1,    -1,    -1,   437,   438,   439,
      -1,    -1,    -1,   340,   341,   342,    -1,   447,    -1,   449,
     848,   778,   779,    -1,    -1,   352,   456,    -1,    -1,    -1,
     460,   461,   462,    -1,    -1,    -1,    -1,    -1,    -1,   469,
      -1,    -1,   472,    -1,   830,    -1,    -1,   875,    -1,    -1,
      -1,    -1,   379,    -1,    -1,   883,    -1,    -1,   488,    -1,
      -1,    -1,   848,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   830,    -1,    -1,    -1,    -1,    -1,   907,
      -1,    -1,    -1,    -1,    -1,   913,    -1,    -1,    -1,   875,
      -1,   848,    -1,    -1,    -1,    -1,    -1,   883,    -1,   927,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     437,   438,   439,    -1,    -1,    -1,    -1,    -1,   875,    -1,
     447,   907,   449,   553,    -1,    -1,   883,   913,    -1,   456,
      -1,    -1,    -1,   460,   461,   462,    -1,    -1,    -1,    -1,
      -1,   927,   469,    -1,    -1,   472,    -1,    -1,    -1,   579,
     907,    -1,    -1,    -1,    -1,    -1,   913,    -1,    -1,    -1,
      -1,   488,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     927,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     1,    -1,    -1,    -1,    -1,
      -1,     7,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     630,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   553,    -1,    44,    -1,
      -1,    -1,    -1,    49,    50,    51,    52,    53,    -1,    -1,
      56,    57,    58,    59,    60,    61,    -1,    63,    64,    65,
     680,    -1,   579,    -1,    -1,    -1,    -1,    -1,    74,    75,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    94,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   111,    -1,    -1,    -1,    -1,
     116,    -1,    -1,   630,    -1,    -1,    -1,   123,   124,    -1,
      -1,   127,    -1,    -1,    -1,    -1,    -1,    -1,   134,    -1,
      -1,    -1,   752,    -1,    -1,   141,    -1,   143,   144,   145,
     146,   147,   148,   149,   150,   151,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   778,   779,
      -1,    -1,    -1,   680,    -1,    -1,   172,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   191,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   213,    -1,    -1,
     830,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   848,    -1,
      -1,    -1,    -1,    -1,    -1,   752,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   875,    -1,    -1,    -1,    -1,
      -1,   778,   779,   883,    -1,    -1,   272,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   281,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   907,    -1,    -1,
      -1,    -1,    -1,   913,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   927,    -1,    -1,
     316,    -1,    -1,   830,    -1,    -1,    -1,    -1,    -1,   325,
     326,   327,   328,   329,    -1,    -1,   332,   333,    -1,    -1,
      -1,   848,   338,    -1,    -1,    -1,    -1,   343,    -1,    -1,
     346,    -1,   348,    -1,    -1,    -1,    -1,    -1,    -1,   355,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   875,   365,
      -1,    -1,   368,    -1,    -1,    -1,   883,    -1,    -1,    -1,
      -1,   377,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   392,    -1,    -1,    -1,
     907,    -1,    -1,    -1,    -1,    -1,   913,    -1,    -1,    -1,
      -1,    -1,    -1,   409,    -1,    -1,    -1,    -1,    -1,    -1,
     927,    -1,    -1,   419,    -1,     1,    -1,   423,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   431,    -1,    -1,    -1,   435,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   448,    29,    -1,    -1,   452,    -1,    -1,   455,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   470,    -1,    16,    -1,    54,    -1,
      -1,    57,    58,    59,    60,    61,    -1,    63,    64,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    74,    -1,
      -1,    -1,    -1,    -1,   500,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   515,
      -1,    -1,    -1,    -1,    -1,    -1,   522,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    84,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   554,    -1,
     556,    -1,   558,    -1,    -1,   141,    -1,   143,   144,   145,
     146,   147,   148,   149,   150,   151,    -1,    -1,   574,   575,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   591,    -1,    -1,    -1,    -1,
     596,    -1,   598,   599,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   152,    -1,    -1,    -1,    -1,    -1,   158,   159,
      -1,    -1,    -1,   619,    -1,    -1,   622,    -1,    -1,    -1,
      -1,   627,    -1,    -1,   174,   631,    -1,   213,    -1,    -1,
       1,    -1,    -1,     4,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   667,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   679,    -1,   681,   682,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    57,    58,    59,    60,
      61,    -1,    63,    64,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   707,    -1,    74,    -1,    -1,    -1,    -1,   714,    -1,
      -1,    -1,    -1,    -1,    -1,   301,   302,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     316,    -1,   738,    -1,   740,   741,   742,    -1,   744,   325,
     326,   327,   328,   329,    -1,    -1,   332,   333,    -1,    -1,
     756,    -1,   123,    -1,    -1,   126,   127,    -1,    -1,    -1,
      -1,   767,   133,    -1,    -1,    -1,    -1,    -1,    -1,   355,
     141,    -1,   143,   144,   145,   146,   147,   148,   149,   150,
     151,    -1,   368,    -1,   790,    -1,    -1,    -1,    -1,   339,
     340,   341,   342,    -1,    -1,    -1,    -1,    -1,    -1,   385,
      -1,    -1,   352,    -1,    -1,    -1,   392,    -1,    -1,   815,
      -1,    -1,    -1,    -1,   820,    -1,    -1,    -1,    -1,    -1,
     826,    -1,    -1,   409,    -1,    -1,    -1,    -1,    -1,   379,
      -1,    -1,    -1,   419,    -1,    -1,    -1,   843,    -1,    -1,
      -1,   847,   213,    -1,    -1,   431,    -1,    -1,    -1,   855,
      -1,    -1,    -1,    -1,   860,   861,   862,   443,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     876,    -1,    -1,    16,    -1,    -1,    -1,    -1,   884,    -1,
      -1,    -1,    -1,    -1,   890,    -1,    -1,   437,   438,   439,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   905,
      -1,    -1,    -1,    -1,    -1,    -1,   456,   913,    -1,    -1,
     460,   461,   462,    -1,   500,    -1,    -1,    -1,    -1,   469,
      -1,    -1,   472,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    84,    -1,    -1,    -1,   316,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   325,   326,   327,   328,   329,    -1,
      -1,   332,   333,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     556,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   575,
      -1,    -1,    -1,    -1,    -1,   366,    -1,   368,    -1,    -1,
      -1,    -1,    -1,   553,    -1,   591,    -1,    -1,    -1,   152,
     596,    -1,    -1,    -1,    -1,   158,   159,    -1,    -1,    -1,
      -1,   392,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   174,    -1,   619,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   419,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     431,    -1,    -1,   649,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   448,    -1,    -1,
     630,   452,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   701,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   500,
     680,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   513,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   738,    -1,   740,   741,   742,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   753,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   556,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   339,   340,   341,   342,
     786,    -1,   752,    -1,   575,    -1,    -1,    -1,    -1,   352,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     591,    -1,    -1,    -1,    -1,   596,    -1,    -1,   778,   779,
      -1,   602,    -1,    -1,   820,    -1,   379,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   619,    -1,
      -1,   801,    -1,    -1,    -1,    -1,    -1,   843,    -1,    -1,
      -1,    -1,    -1,    -1,   850,   851,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   860,   861,   862,    -1,    -1,    -1,
     830,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     876,    -1,    -1,    -1,   437,   438,   439,    -1,   848,    -1,
      -1,    -1,    -1,    -1,   890,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   898,   456,    -1,   865,    -1,   460,   461,   462,
      -1,    -1,    -1,    -1,    -1,   875,   469,   913,    -1,   472,
       3,    -1,    -1,   883,    -1,    -1,    -1,    -1,    -1,    12,
      -1,    -1,    -1,    -1,   894,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    27,    -1,    -1,   907,    -1,    -1,
      -1,    -1,   912,   913,    -1,    -1,    -1,   738,    -1,   740,
     741,   742,    -1,    46,    -1,    -1,    -1,   927,    -1,   750,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    77,    78,    79,    -1,    -1,    82,
     553,   782,    -1,    -1,    -1,    -1,    89,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   101,    -1,
     103,   104,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   820,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   131,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   843,    -1,    -1,    -1,    -1,    -1,    -1,   850,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   630,    -1,   860,
     861,   862,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   876,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   186,    -1,    -1,    -1,    -1,    -1,   890,
      -1,    -1,    -1,   894,    -1,    -1,   199,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   680,    -1,    -1,
      -1,    -1,   913,    -1,    -1,    -1,    -1,    -1,   221,   222,
      -1,   224,   225,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    41,    -1,    -1,    44,   268,    -1,    -1,    -1,    49,
      50,    51,    52,    -1,    -1,    55,    56,    -1,    -1,   752,
      -1,   284,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    75,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   778,   779,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   322,
     323,   324,    -1,    -1,    -1,    -1,    -1,    -1,   801,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   344,    -1,   123,   124,    -1,   349,   127,    -1,    -1,
      -1,    -1,     4,    -1,    -1,    -1,    -1,   830,    -1,    -1,
      -1,    -1,   152,    -1,    -1,    -1,    -1,    -1,   158,   159,
      -1,   374,   375,    -1,    -1,   848,    -1,   380,   381,    -1,
      -1,   161,    -1,   163,   174,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   865,    -1,    -1,   175,    -1,    -1,    -1,    -1,
      -1,    -1,   875,    -1,    -1,    57,    58,    59,    60,    61,
     883,    63,    64,    -1,    -1,    -1,    -1,    -1,   198,    -1,
      -1,   894,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   434,    -1,   436,   907,    -1,    -1,    -1,    -1,   912,
     913,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     453,    -1,    -1,    -1,   927,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   466,   467,   468,    -1,    -1,    -1,    -1,
      -1,   123,    -1,    -1,   126,   127,    -1,    -1,    -1,    -1,
      -1,   133,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   141,
     493,   143,   144,   145,   146,   147,   148,   149,   150,   151,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   517,   518,   519,    -1,   521,    -1,
     523,   524,    -1,   526,    -1,   528,   529,    -1,    -1,    -1,
     533,    -1,   535,   536,   537,   538,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   551,    -1,
     340,   341,   342,    -1,    -1,    -1,   559,    -1,   338,    -1,
      -1,   213,   352,    -1,    -1,    -1,    -1,   347,   348,   572,
     573,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   581,    -1,
      -1,    -1,    -1,    -1,   587,    -1,    -1,    -1,    -1,   379,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   377,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    49,    50,    51,    52,    -1,    -1,
      -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     633,    -1,    -1,    -1,    -1,   638,    -1,    -1,    -1,    74,
      75,   421,    77,    -1,    79,    -1,    -1,   437,   438,   439,
      -1,    -1,    -1,    -1,    -1,   435,    -1,   447,    -1,   449,
      -1,    -1,    -1,    -1,    -1,    -1,   456,   102,   448,    -1,
     460,   461,   462,   325,   326,   327,   328,   329,    -1,   469,
     332,   333,   472,    -1,   687,   688,   689,   467,   123,   124,
     470,    -1,   127,    -1,   697,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   489,
      -1,    -1,    -1,    -1,   366,    -1,   368,    -1,   721,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   163,    -1,
      -1,   734,   735,   736,   737,   515,    -1,    -1,    -1,    -1,
     392,    -1,   522,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   754,   755,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   765,   553,    -1,    -1,    -1,   419,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   558,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   579,
      -1,    -1,   795,    -1,   574,    -1,   448,    -1,    -1,    -1,
     452,    -1,    -1,    -1,    -1,    -1,   809,   810,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   598,   599,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     630,    -1,   622,   846,    -1,   625,   281,    -1,   500,    -1,
      -1,    -1,    -1,   856,    -1,    -1,    -1,    -1,    -1,    -1,
     863,   513,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   874,    -1,    -1,    -1,   878,   879,   880,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   667,    -1,    -1,
     680,    -1,   895,   896,    -1,    -1,    -1,   900,   901,   679,
     903,   681,   682,   338,   556,    -1,    -1,   910,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   701,    -1,   575,    -1,    -1,   706,    -1,    -1,    -1,
      -1,    -1,    -1,   368,   714,    -1,    -1,    -1,    -1,   591,
      -1,    -1,   377,    -1,   596,    -1,    -1,    -1,    -1,    -1,
     602,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   752,    -1,   744,    -1,    -1,   619,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   756,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   778,   779,
      -1,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   434,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     790,    -1,    -1,   448,    -1,    -1,    54,   452,    -1,    57,
      58,    59,    60,    61,    -1,    63,    64,   817,    -1,    -1,
     810,   811,    -1,    -1,    -1,   470,    74,    -1,   828,    -1,
     830,    -1,   832,   833,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   848,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   855,    -1,    -1,    -1,    -1,
     515,    -1,    -1,    -1,    -1,   875,   738,   867,   740,   741,
     742,    -1,    -1,   883,   874,    -1,    -1,    -1,   750,    -1,
      -1,    -1,    -1,   141,    -1,   143,   144,   145,   146,   147,
     148,   149,   150,   151,    -1,    -1,    -1,   907,    -1,    -1,
      -1,    -1,    -1,   913,    -1,    -1,    -1,    -1,    -1,    -1,
     782,    -1,   912,    -1,    -1,    -1,    -1,   927,    -1,   574,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      29,    -1,   597,   598,   599,    -1,    -1,    -1,   820,    -1,
      -1,    -1,    -1,    -1,    -1,   213,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    54,    -1,    -1,    57,    58,
      59,    60,    61,    -1,    63,    64,    -1,    -1,   850,    -1,
      -1,    -1,    -1,    -1,    -1,    74,    -1,   152,   860,   861,
     862,    -1,    -1,   158,   159,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   876,    -1,    -1,    -1,    -1,   174,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   890,    -1,
      -1,    -1,   894,    -1,   679,    -1,   681,   682,    -1,    -1,
      -1,    -1,   687,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   701,    -1,    -1,    -1,
      -1,   706,   141,    -1,   143,   144,   145,   146,   147,   148,
     149,   150,   151,    -1,    -1,    -1,    -1,   325,   326,   327,
     328,   329,    -1,    -1,   332,   333,    -1,   732,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   744,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   756,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     368,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   213,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   392,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   409,    -1,    -1,    -1,    -1,    -1,    -1,   813,    -1,
      -1,   419,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   431,    -1,   340,   341,   342,    -1,    -1,
     835,    -1,    -1,    -1,    -1,   443,    -1,   352,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     855,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   379,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   325,   326,   327,   328,
     329,    -1,   500,   332,   333,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   912,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   437,   438,   439,    -1,    -1,    -1,    -1,   368,
      -1,    -1,   447,    -1,   449,    -1,    -1,    -1,    -1,    -1,
      -1,   456,    -1,    -1,    -1,   460,   461,   462,   556,    -1,
      -1,    -1,    -1,   392,   469,    -1,    -1,   472,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   575,    -1,    -1,
     409,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     419,    -1,    -1,   591,    -1,    -1,    -1,    -1,   596,    -1,
      -1,    -1,   431,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   443,    -1,    -1,    -1,    -1,    -1,
      -1,   619,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   553,    -1,
      44,   649,    -1,    -1,    -1,    49,    50,    51,    52,    -1,
      -1,    -1,    56,    57,    58,    59,    60,    61,    -1,    63,
      64,   500,    -1,    -1,   579,    -1,    -1,    -1,    -1,    -1,
      74,    75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      94,    -1,    -1,   701,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   116,    -1,    -1,   630,    -1,   556,    -1,   123,
     124,    -1,    -1,   127,    -1,    -1,    -1,    -1,    -1,    -1,
     738,    -1,   740,   741,   742,    -1,   575,   141,    -1,   143,
     144,   145,   146,   147,   148,   149,   150,   151,    -1,    -1,
      -1,    -1,   591,    -1,    -1,    -1,    -1,   596,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   680,    -1,    -1,   172,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   786,    -1,
     619,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   213,
     649,    -1,   820,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   843,    -1,   752,    -1,    -1,
      -1,    -1,   850,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   860,   861,   862,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   701,   778,   779,    -1,    -1,    -1,   876,    -1,
      -1,    -1,    -1,    -1,   789,    -1,    -1,   281,    -1,    -1,
      -1,    -1,   890,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     898,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   738,
      -1,   740,   741,   742,   152,    -1,    -1,    -1,    -1,    -1,
     158,   159,    -1,   828,    -1,   830,    -1,   832,   833,    -1,
      -1,   325,   326,   327,   328,   329,   174,    -1,   332,   333,
      -1,    -1,    -1,   848,   338,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   346,    -1,   348,    -1,    -1,   786,    -1,    -1,
      -1,   355,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     875,   365,    -1,    -1,   368,    -1,    -1,    -1,   883,    -1,
      44,    -1,    -1,   377,    -1,    49,    50,    51,    52,    -1,
      -1,   820,    56,    57,    58,    59,    60,    61,   392,    63,
      64,    -1,   907,    -1,    -1,    -1,    -1,    -1,   913,    -1,
      74,    75,    -1,    -1,   843,   409,    -1,    -1,    -1,    -1,
      -1,   850,   927,    -1,    -1,   419,    -1,    -1,    -1,    -1,
      94,   860,   861,   862,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   435,    -1,    -1,    -1,    -1,    -1,   876,    -1,    -1,
      -1,    -1,   116,    -1,   448,    -1,    -1,    -1,   452,   123,
     124,   890,    -1,   127,    -1,    -1,    -1,    -1,    -1,   898,
      -1,    -1,    -1,    -1,    -1,    -1,   470,   141,    -1,   143,
     144,   145,   146,   147,   148,   149,   150,   151,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   340,   341,   342,    -1,   500,    -1,   172,    -1,
      -1,    -1,    -1,    -1,   352,    -1,    -1,    -1,    -1,    -1,
      -1,   515,    -1,    -1,    -1,    -1,    -1,    -1,   522,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   379,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   213,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   556,    -1,   558,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     574,   575,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   591,    -1,   437,
     438,   439,   596,    -1,   598,   599,    -1,    -1,    -1,   447,
      -1,   449,    -1,    -1,    -1,    -1,    -1,   281,   456,    -1,
      -1,    -1,   460,   461,   462,   619,    -1,    -1,   622,    -1,
      -1,   469,    -1,    -1,   472,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   325,   326,   327,   328,   329,    -1,    -1,   332,   333,
      -1,    -1,    -1,   667,   338,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   346,    -1,   348,   679,    -1,   681,   682,   152,
      -1,   355,    -1,    -1,    -1,   158,   159,    -1,    -1,    -1,
      -1,   365,    -1,    -1,   368,    -1,    -1,    -1,    -1,    -1,
      -1,   174,    -1,   377,    -1,   553,    -1,    -1,    -1,    -1,
     714,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   392,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   579,    -1,    -1,   738,   409,   740,   741,   742,    -1,
     744,    -1,    -1,    -1,    -1,   419,    -1,    -1,    -1,    -1,
      -1,    -1,   756,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   435,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   448,    -1,    -1,    -1,   452,    -1,
      -1,    -1,   630,    -1,    -1,    -1,   790,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   470,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   815,    -1,    -1,    -1,    -1,   820,    -1,    -1,    -1,
      -1,    -1,   826,   152,    -1,    -1,   500,    -1,    -1,   158,
     159,    -1,   680,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   515,    -1,    -1,    -1,   174,    -1,    -1,   522,    -1,
      -1,   855,    -1,    -1,    -1,    -1,   860,   861,   862,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   340,   341,   342,
      -1,    -1,   876,    -1,    -1,    -1,    -1,    -1,    -1,   352,
     884,    -1,   556,    -1,   558,    -1,   890,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     574,   575,    -1,    -1,   752,    -1,   379,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   591,    -1,    -1,
      -1,    -1,   596,    -1,   598,   599,    -1,    -1,    -1,    -1,
     778,   779,    -1,    -1,   152,    -1,    -1,    -1,    -1,    -1,
     158,   159,    -1,    -1,    -1,   619,    -1,    -1,   622,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   174,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   437,   438,   439,    -1,    -1,   817,
      -1,    -1,    -1,    -1,   447,    -1,   449,    -1,    -1,    -1,
     828,    -1,   830,   456,   832,   833,    -1,   460,   461,   462,
      -1,    -1,    -1,   667,    -1,    -1,   469,    -1,    -1,   472,
     848,    -1,    -1,    -1,    -1,   679,    -1,   681,   682,    -1,
      -1,   340,   341,   342,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   352,    -1,    -1,    -1,   875,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   883,    -1,    -1,    -1,    -1,
     714,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     379,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   907,
      -1,    -1,    -1,    -1,   738,   913,   740,   741,   742,    -1,
     744,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   927,
     553,   152,   756,    -1,    -1,    -1,    -1,   158,   159,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   174,    -1,    -1,   579,    -1,   437,   438,
     439,    -1,    -1,    -1,    -1,    -1,   790,    -1,   447,    -1,
     449,    -1,   340,   341,   342,    -1,    -1,   456,    -1,    -1,
      -1,   460,   461,   462,   352,    -1,    -1,    -1,    -1,    -1,
     469,   815,    -1,   472,    -1,    -1,   820,    -1,    -1,    -1,
      -1,    -1,   826,    -1,    -1,    -1,   152,   630,    -1,    -1,
      -1,   379,   158,   159,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   174,    -1,
      -1,   855,    -1,    -1,    -1,    -1,   860,   861,   862,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   876,    -1,    -1,   152,    -1,   680,    -1,    -1,
     884,   158,   159,    -1,    -1,    -1,   890,    -1,    -1,   437,
     438,   439,    -1,    -1,   553,    -1,    -1,   174,    -1,   447,
      -1,   449,    -1,    -1,    -1,    -1,    -1,    -1,   456,    -1,
      -1,    -1,   460,   461,   462,    -1,    -1,    -1,    -1,    -1,
     579,   469,    -1,    -1,   472,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   340,
     341,   342,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   752,
      -1,   352,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   630,    -1,    -1,    -1,   778,   779,    -1,   379,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   789,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   553,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   340,   341,   342,    -1,    -1,    -1,
      -1,   680,    -1,    -1,    -1,   828,   352,   830,    -1,   832,
     833,   579,    -1,    -1,    -1,    -1,   437,   438,   439,    -1,
      -1,    -1,    -1,    -1,    -1,   848,   447,    -1,   449,    -1,
      -1,    -1,    -1,   379,    -1,   456,    -1,    -1,    -1,   460,
     461,   462,    -1,   340,   341,   342,    -1,    -1,   469,    -1,
      -1,   472,   875,    -1,    -1,   352,    -1,    -1,    -1,    -1,
     883,    -1,   630,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   752,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   379,    -1,   907,    -1,    -1,    -1,    -1,    -1,
     913,   437,   438,   439,    -1,    -1,    -1,    -1,    -1,   778,
     779,   447,    -1,   449,   927,    -1,    -1,    -1,    -1,    -1,
     456,    -1,   680,    -1,   460,   461,   462,    -1,    -1,    -1,
      -1,    -1,    -1,   469,    -1,    -1,   472,    -1,    -1,    -1,
      -1,    -1,   553,    -1,    -1,    -1,    -1,    -1,   817,    -1,
     437,   438,   439,    -1,    -1,    -1,    -1,    -1,    -1,   828,
     447,   830,   449,   832,   833,    -1,    -1,    -1,   579,   456,
      -1,    -1,    -1,   460,   461,   462,    -1,    -1,    -1,   848,
      -1,    -1,   469,    -1,    -1,   472,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   752,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   875,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   883,    -1,    -1,   553,    -1,   630,
     778,   779,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   907,    -1,
      -1,    -1,    -1,   579,   913,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   927,    -1,
     671,    -1,    -1,    -1,    -1,    -1,   553,    -1,    -1,   680,
     828,    -1,   830,    -1,   832,   833,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     848,    -1,   579,    -1,   630,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   875,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   883,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   752,    -1,   630,   680,    -1,    -1,    -1,    -1,   907,
      -1,    -1,    -1,    -1,    -1,   913,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   778,   779,   927,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   680,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   752,    -1,    -1,   830,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   848,    -1,    -1,
      -1,    -1,   778,   779,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   869,    -1,
      -1,    -1,    -1,    -1,   875,   752,    -1,    -1,    -1,    -1,
      -1,    -1,   883,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   778,   779,    -1,   830,    -1,   907,    -1,    -1,    -1,
      -1,    -1,   913,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   848,    -1,    -1,    -1,   927,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   875,
      -1,    -1,    -1,   830,    -1,   832,    -1,   883,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   848,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   907,    -1,    -1,    -1,    -1,    -1,   913,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   875,    -1,
      -1,   927,    -1,    -1,    -1,    -1,   883,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     907,    -1,    -1,    -1,    -1,    -1,   913,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     927
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,   930,   931,     0,   932,   933,   934,   937,   938,   384,
     386,   935,   936,   939,   940,   950,   951,   952,   565,   947,
     965,   936,   351,   617,   953,   956,   220,   820,   274,   974,
     975,   957,   954,   947,   947,   820,    36,   966,   967,   220,
     948,   154,   976,   977,   820,   820,   256,   941,   942,   943,
     250,   945,   409,  2180,   198,   969,   820,   187,  1137,  1139,
    1140,   713,   399,  1057,  1058,    19,   112,   170,   173,   175,
     196,   289,   459,   551,   555,   666,   705,   751,   753,   785,
     835,   913,   978,   979,   980,   981,   985,   999,  1005,  1006,
    1007,  1008,  1009,  1015,  1031,  1033,  1038,  1041,  1046,  1047,
    1049,  1050,  1051,  1052,  1053,  1054,  1055,   456,   618,   958,
     958,   944,   943,   946,   503,   756,   759,   760,   968,   691,
     271,   970,   220,   949,   824,  1141,   820,   713,   307,  1059,
       1,   913,  2056,  2056,   766,   738,  2208,  2180,  2180,  2180,
    2056,   738,   820,   820,  2180,   820,   820,   110,   155,  2161,
    1056,  1010,   980,     1,   820,  1008,   390,  1032,    37,   960,
     960,   456,   618,   959,   959,   489,  2192,  2180,   404,   972,
     820,   612,  1415,  1416,  1420,   713,  1142,   820,   820,  1060,
    1016,   337,  1044,  2171,  2180,  2180,   913,  2049,  2103,   135,
    2049,  2180,  2180,   986,  1000,  2049,   982,   913,  1039,  1040,
    1203,   913,  1034,  1035,  1036,  2057,  2180,   456,   558,   561,
    1011,  1013,  1014,  1814,  2109,  2180,   913,   456,   820,   955,
     820,   820,  2180,   119,   769,   822,   971,   692,   820,   220,
    1445,  1446,   820,   304,   708,  1138,  1143,  1144,  1146,   417,
     717,  1061,  1120,  1121,  1017,  1020,  1021,  2171,  2180,    23,
     500,  2049,   456,   390,   557,  2232,   456,   843,   109,   481,
     616,   716,   913,   987,   988,   989,   990,   991,   995,   996,
     998,  2160,  2203,   350,   616,  1001,  1002,  1003,   983,   998,
    1040,  2180,  1035,    31,   409,  2057,  2182,  2056,  1814,   409,
     766,  2199,  2180,   170,  2056,   961,  2180,    48,   505,   506,
     507,   621,   836,   837,   849,  2142,  2180,  1417,     1,     5,
      10,    17,    26,    87,    88,   118,   138,   142,   160,   201,
     207,   209,   213,   217,   234,   270,   286,   296,   297,   345,
     353,   356,   361,   387,   395,   397,   400,   403,   418,   484,
     490,   492,   495,   511,   563,   586,   626,   632,   636,   639,
     640,   656,   672,   677,   684,   690,   709,   723,   729,   747,
     761,   771,   772,   780,   783,   798,   820,   845,   858,   864,
     888,   917,   922,  1447,  1448,  1477,  1482,  1487,  1492,  1518,
    1522,  1530,  1534,  1535,  1539,  1542,  1547,  1552,  1604,  1608,
    1610,  1615,  1631,  1639,  1643,  1646,  1649,  1653,  1654,  1661,
    1671,  1674,  1677,  1695,  1704,  1708,  1710,  1714,  1717,  1721,
    1735,  1749,  1751,  1755,  1770,  1771,  1781,  1784,  1785,  1789,
    1795,  1796,  1804,  1811,  1828,  1838,  1847,  1853,  1864,  1868,
    1870,  1873,  1876,  1879,  1890,  1910,  1918,  1946,  1447,   915,
    1193,  1195,  1196,     1,   913,  2037,   820,   532,   564,  2139,
      30,   494,   669,   701,  1122,  1123,  1124,  1125,  1127,  1128,
    1129,  1134,  1018,  1019,    23,   500,   379,   456,   472,   630,
     752,   830,   927,  1042,  1043,  2113,   912,  1048,  2223,  2103,
     725,   744,  2211,  2180,   820,   989,   820,   913,   988,   113,
     122,   992,  2162,    16,   352,   913,  1004,   913,     1,   820,
    1003,   984,  2223,    16,   379,   456,   472,   630,   752,   830,
     927,  2114,  2115,  2116,   456,  1037,  2110,  2199,   409,  2056,
    2056,  1012,  1013,   820,   139,   301,   648,   826,   962,   963,
     964,   505,   506,   621,   849,   973,    85,   488,   577,   764,
     769,   822,  1499,  1500,     5,    10,    17,    26,    87,    88,
     118,   138,   142,   160,   201,   213,   217,   236,   241,   242,
     243,   244,   246,   247,   248,   249,   251,   253,   254,   255,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   270,   286,   296,   297,   345,   353,   356,   361,   387,
     395,   397,   400,   403,   484,   490,   492,   495,   511,   563,
     586,   636,   656,   677,   684,   690,   709,   729,   747,   761,
     771,   772,   780,   783,   798,   820,   845,   858,   864,   917,
     922,  2146,  2147,  2148,  1449,  1478,  1483,  1488,  1493,  1519,
    1523,  1531,  1536,  1543,  1540,  1548,  1553,  1605,  1609,   337,
    1611,  1616,  1632,  1640,  1644,  1647,  1650,   354,   678,  1510,
    1642,  1655,  1662,  1672,  1675,  1678,   353,   584,  1709,  1711,
    1715,  1718,   724,  1722,  1736,  1750,  1752,  1756,  1772,  1782,
    1786,  1790,  1797,  1805,  1812,  1829,  1839,   456,   630,   699,
     752,   805,   927,  1851,  1852,  2005,  2097,  2098,  2103,  1854,
    1865,   610,  1869,  1871,  1434,  1874,  1877,  1880,  1891,  1911,
     353,   584,   713,   140,  1174,   233,   730,   743,  1197,  1198,
    1200,  1211,  1213,  1215,  2131,   820,  1145,   564,  2056,   138,
     167,   184,   185,   300,   465,   476,   605,   643,   660,   918,
     919,  1130,   561,  1135,  2197,   641,   747,   748,  1126,     1,
     820,  1124,  2180,  2180,   390,  1043,  1045,   807,   592,  2180,
    2109,   820,  2180,   727,   406,   960,     1,   352,   406,   960,
     820,   820,   195,  2116,   816,  2110,  2056,   964,  2203,   139,
     912,  1496,   560,   913,  1450,  1453,  1454,  1455,  2038,  2097,
      11,   152,   158,   159,   168,   174,   340,   341,   342,   352,
     437,   438,   439,   447,   449,   460,   461,   462,   469,   488,
     553,   579,   680,   778,   779,   793,   848,   875,   883,   907,
    1479,  2029,  2061,  2062,  2064,  2065,  2097,  2114,  2118,  2119,
    2120,  2121,  2240,   828,   832,   833,  1484,  2024,  2025,  2026,
    2027,  2028,  2029,  2065,  2068,  2097,  2115,  2118,   456,  1489,
    1490,  2045,  2046,  2047,  2103,  1494,  1499,   456,   618,  1520,
    1521,  2081,  2097,   911,  1524,  1525,  1527,  2037,    11,  1532,
    2029,  2030,  2031,  2059,  2100,  2101,  2103,  2115,    14,  1537,
     824,  1544,  2037,    16,  1541,  2097,  2099,   398,   416,   571,
     797,  1549,  1551,   281,   334,   391,   456,   485,   560,   756,
     781,   826,   911,  1554,  1555,  1556,  1557,  1559,  1567,  1569,
    1570,  1571,  1574,  1579,  1582,  1583,  1586,  1588,  2061,  2081,
    2097,  1606,  2062,  1549,   356,  1499,  1613,   823,   834,  1617,
    1618,  1619,  2009,  2010,  2011,   108,  1633,  1635,   350,   582,
     586,   616,   713,  1641,  1645,  2058,  2059,  1648,  2103,   815,
    1651,  2219,  2062,     1,  2008,  2009,  1663,  2058,   913,  1673,
    2039,   161,   911,  1356,  1591,  1676,  2097,  1679,  1680,  2097,
    2114,  2118,  1696,  1705,  1830,  2090,  2091,  2103,  1356,  1591,
    1712,   168,  1716,  2062,  1719,  2062,   295,  1723,  1724,  1725,
     390,  1737,  2003,  2173,   913,  2038,   291,  1753,  2097,  1757,
    2037,  1773,  2038,  1783,  2032,  2103,  1787,  2037,   824,  1791,
    2032,  2033,    16,  1798,  2034,  2103,  1806,  2038,   274,   427,
     488,  1813,  1816,  1817,  1820,  1821,  1822,  1823,  1824,  1825,
    1826,  1827,  2005,  2040,  2041,  2058,  2089,  2091,  2103,  1830,
    1840,  2037,  1848,  2097,   832,  2107,  2108,  1855,  1856,  1857,
     168,   793,  1866,  2061,  1872,  2039,   820,   913,  1435,  1436,
    1439,  1440,  1445,  1875,  2092,  2097,  1878,  2037,   456,  1881,
    2082,  2097,  2118,  1892,  2097,  1912,  2033,  1919,  1947,   820,
     713,   463,  1282,  1203,  1203,  1203,  1198,   820,     1,   316,
    1201,  1202,  1203,   442,  1147,  1062,  2197,  2219,  2219,   557,
    2196,  2197,  2197,  2219,  2197,  2197,  2219,  2197,  2197,   824,
    2170,   290,  2169,   456,  1074,  2103,    32,  2152,   820,    39,
     229,   379,   456,   459,   472,   503,   630,   752,   757,   758,
     927,  1022,  1024,  1025,  1026,  1029,   853,   885,   886,  1023,
    1024,   913,  1087,  2113,   456,  2109,   459,   787,   882,   997,
    2052,  2104,  2105,   993,   489,  2116,  1497,   107,   884,  1421,
     241,  1476,  1451,    41,    55,   347,   489,  1460,  1461,  1462,
    1466,  1469,  2155,  2156,  2223,   832,  1457,   485,  2191,   346,
    2196,  2097,   832,   832,   832,  2123,   832,  2232,  2232,   832,
     832,   832,   832,  2232,  2090,   832,  2123,   242,  1481,   815,
    1480,  2062,  2098,  2115,  2118,   832,  2122,   832,   832,  2028,
    2097,  2024,  2028,   110,   828,   833,   819,   829,   298,  2098,
    2115,  2118,   396,  2134,  1490,   815,  2232,   243,  1517,  2003,
    1521,  1528,  2037,   650,   857,  1526,  2223,  2238,  2196,   244,
    1533,   280,   821,  2031,  2229,   691,  2140,  2107,  2108,  1538,
    1545,  2037,   246,  1546,   641,  2205,   162,  2164,  2097,   797,
    2216,   797,  2038,  1568,   362,  1589,    78,  2158,   247,  1603,
     291,   543,  1961,  1963,  1965,  1557,  2060,  2061,  1558,   912,
    1560,  1457,  1580,  1589,   870,   871,   872,   873,   248,  1607,
      83,   405,   815,   456,   249,  1630,    25,   906,  1620,  1621,
    1622,  1624,    28,   298,   409,   532,   566,   817,   819,   828,
     829,   832,   833,  2012,  2013,  2015,  2062,  2180,   497,  1636,
     183,  1642,  2059,   270,  2044,   804,  1657,  1664,  2223,  2039,
    2097,     8,    15,    45,    66,    67,    68,    69,    70,    71,
      72,    73,    81,    86,    97,    98,    99,   100,   115,   125,
     128,   129,   130,   132,   166,   175,   176,   177,   178,   179,
     180,   181,   182,   188,   189,   214,   215,   218,   219,   223,
     245,   269,   273,   288,   293,   294,   311,   312,   313,   314,
     315,   318,   357,   358,   359,   360,   366,   367,   369,   371,
     372,   373,   376,   378,   382,   401,   402,   410,   411,   412,
     413,   414,   415,   424,   428,   429,   432,   471,   475,   477,
     478,   479,   480,   487,   504,   512,   547,   548,   580,   583,
     594,   600,   604,   606,   607,   620,   623,   624,   628,   642,
     644,   645,   653,   654,   673,   674,   675,   693,   694,   695,
     696,   698,   702,   703,   710,   711,   718,   719,   720,   726,
     731,   749,   762,   763,   768,   791,   792,   800,   808,   814,
     844,   850,   891,   897,   899,   902,   909,   921,   924,  1361,
    1363,  1365,  1367,  1369,  1371,  1373,  1375,  1378,  1380,  1382,
    1383,  1385,  1387,  1388,  1390,  1392,  1395,  1396,   430,   744,
     813,  1397,  1398,   164,   662,   794,  1681,  1682,  1684,  1685,
    1697,  2097,  1706,  2097,  1832,   832,  2107,   532,   774,  1358,
    1359,  1360,  1361,  2138,  1397,   253,  1713,  2062,   815,   254,
    1720,    83,  1724,   299,   398,   416,   571,  1726,    84,   339,
     456,  1205,  1742,  1743,  1744,  2045,  2065,  2083,  2097,  2103,
    2114,  2118,  2223,   805,   913,  1754,   257,  1769,   511,   603,
    2137,   258,  1780,   485,   715,  1774,   346,  1913,   259,  1788,
    2205,   913,   260,  1794,  1913,  2034,   261,  1803,   894,  1799,
     346,  1807,  1808,  2075,  2079,  2097,  2115,  2118,   291,  1823,
    1825,  2058,   611,   815,  2041,   226,   815,   866,  1815,    42,
    2107,   262,  1846,   319,   421,   427,  1842,  1510,  1849,  2062,
    2223,  2022,  2024,   832,  2108,   263,  1863,   405,  1858,  1859,
    2062,  2097,  2090,   264,  1867,   346,  2039,   713,   820,   820,
     346,   641,   647,  2206,   265,  1889,   202,  1882,  2097,   266,
    1917,  1913,  1920,  2097,  1948,  2097,  1194,   820,   713,   454,
    1284,  1214,  1216,   659,   820,   820,  1199,   155,    76,   121,
     187,   423,   446,   641,   646,   663,   665,   820,   890,  1148,
    1149,  1151,  1155,  1156,  1159,  1160,  1166,  1169,  1171,  1172,
    2180,     1,  1063,  1064,  2048,  2049,  2049,  2109,  2109,  2035,
    2037,  2035,  2109,  2035,  2035,  2049,  2035,  2035,   796,  2215,
     240,  1136,  2109,  2171,  2052,  1026,    25,   807,   110,   491,
     914,  2236,   913,  2106,   994,  2171,  2180,    85,   577,   769,
    1498,  1423,  1422,   678,  1431,  1460,   927,  2084,  2089,  2109,
    2180,  1462,   123,   127,   448,   598,   599,  1467,  1468,  2228,
     810,    44,    49,    50,    51,    52,    56,    75,   124,   161,
     163,   175,   198,   338,   348,   377,   435,   467,   470,   515,
     522,   558,   574,   622,   625,   667,   679,   681,   682,   701,
     706,   714,   756,   790,   811,   855,   867,   874,  1470,  1473,
    1474,  1475,  2165,  2204,   137,   456,  1458,  1459,  2070,  2097,
    2097,   169,    34,    35,   126,   133,   136,   190,   192,   193,
     274,   276,   283,   291,   398,   448,   452,   704,   788,   799,
     810,   881,   913,  1465,  2041,  2226,   270,   305,   306,   616,
    2073,  2098,   815,  2022,  2024,  2129,  2022,  2130,   817,  2022,
    2125,  2126,   913,   913,  2024,  2128,  2128,  2128,  2067,  2097,
    2115,  2118,  2127,   913,   815,  2067,  2124,    11,  2029,  2030,
    2062,  2103,  2115,   354,  2024,  2067,  2022,   817,   396,  2135,
    2025,  2025,  2026,  2026,  2026,   458,  1485,   614,  1491,  2047,
    1501,  1502,  2082,  2097,  1526,   464,   515,  2171,  2098,  2024,
     489,  2141,  2108,  2024,  2037,   676,  1762,  1763,  1764,  1550,
    2223,  1560,   911,  2061,  1442,  1443,  1442,  1964,  1965,  1962,
    1963,   869,  1466,  1469,  1562,  1563,  1565,  2223,    49,    50,
      51,    52,    56,    74,    75,   124,   163,   281,   338,   377,
     470,   574,   701,   706,   744,   756,   855,  1474,  1561,  1602,
     281,  1572,  1573,  2097,  2115,   869,  1590,   911,  1961,  1961,
    1961,  1961,  2062,  2030,  2062,  1612,  1496,  1619,  1625,   906,
    1622,  1623,   249,   820,   906,  1442,  2014,  2015,  2013,    20,
      21,    22,   114,   280,   363,   364,   440,   441,   508,   542,
     551,   560,   601,   821,   825,   827,  2016,  2017,  2018,  2019,
    2020,  2021,  1634,   456,  2042,  2043,   204,  1652,  2045,   236,
    1656,  1658,    16,    20,    23,    24,   500,   501,   551,   552,
    1665,  1669,   316,   390,   821,  2174,  1394,  2109,  2174,  1396,
    2174,  2174,  2174,  1398,  2077,  2098,  2102,  2115,    16,   110,
     319,   431,   843,  1688,  1689,  1690,  1683,  1684,   252,  1703,
     346,  1703,   405,  1834,  2197,  2223,   409,   821,  2181,  1359,
      31,   409,   821,  2183,     3,    12,    27,    46,    65,    77,
      78,    79,    82,    89,   101,   103,   104,   131,   186,   199,
     221,   222,   224,   225,   268,   284,   322,   323,   324,   344,
     349,   374,   375,   380,   381,   434,   436,   453,   466,   467,
     468,   493,   517,   518,   519,   521,   523,   524,   526,   528,
     529,   533,   535,   536,   537,   538,   551,   559,   572,   573,
     581,   587,   633,   638,   687,   688,   689,   697,   721,   734,
     735,   736,   737,   754,   755,   765,   795,   809,   810,   846,
     856,   863,   874,   878,   879,   880,   895,   896,   900,   901,
     903,   910,  1362,  1364,  1366,  1368,  1370,  1372,  1374,  1376,
    1377,  1379,  1381,  1384,  1386,  1389,  1391,   815,  2058,  2030,
    2062,   733,  1727,  2196,   368,  2004,  2004,   865,   894,   807,
       1,    58,    59,    60,    61,    63,   144,   145,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   456,   596,   619,
    1206,  1207,  1208,  1209,  1210,  1246,  2071,  2098,   812,   801,
    2205,   405,  2088,  2097,  2114,  2118,   405,  1758,  1762,   240,
    1800,  2097,  1800,  2097,  1809,  2223,   815,   815,   815,   815,
    1814,   270,   744,   823,   834,  2062,    83,    56,    75,   377,
     435,   470,   574,   681,   855,  1818,  1819,  2180,  1841,  2223,
    2062,   282,   531,   137,   722,   817,  2023,   818,  2024,  2097,
    1859,   202,  1860,   346,   346,  2030,  2062,  1437,  2075,    83,
    2159,   405,  1885,    14,    55,  1914,  1915,   267,  1945,   346,
    1945,  1950,  2223,  1195,  1175,   820,   713,   663,  1286,   890,
    1274,  1233,  1234,  2180,  2131,    29,    54,    57,    58,    59,
      60,    61,    63,    64,    74,   141,   143,   144,   146,   147,
     148,   149,   150,   151,   213,   325,   326,   327,   328,   329,
     333,   368,   392,   419,   443,   500,   556,   575,   591,   596,
     619,   649,   701,   738,   740,   741,   742,   786,   850,   860,
     861,   862,   876,   898,  1221,  1222,  1223,  1224,  1225,  1228,
    1229,  1231,  1234,  1235,  1238,  1239,  1243,  1244,  1245,  1246,
    1249,  1252,  1269,  1270,  1272,  1273,  1274,  1279,  1280,  1281,
    2180,  2210,  1204,  2180,   156,  2163,  2180,   641,   647,  2237,
    2237,  2180,  2163,  2180,  2192,  2180,    31,  2151,   557,  1173,
    2056,   301,   355,   820,     6,     9,    27,    40,   309,   310,
     393,   448,   527,   568,   576,   641,   655,   670,   733,   747,
     820,   824,   840,   841,  1065,  1066,  1075,  1077,  1082,  1083,
    1086,  1088,  1089,  1090,  1091,  1097,  1098,  1099,  1100,  1103,
    1109,  1110,  1112,  1114,  1116,  1117,  1118,  1119,  2162,  2205,
    2231,  2049,  2197,  2197,   838,   839,  2241,  2037,  2197,  2197,
    2163,  2196,  2196,   647,  2035,  1027,  1029,  2232,    23,   500,
    2052,   454,  1424,  1425,  1426,  2159,  1424,   560,   913,   820,
     283,   291,   541,   543,  1954,  1956,  1957,  1959,  1960,    76,
     549,  2194,  2194,   456,  2085,  2089,  2111,  2180,  2180,  2180,
    2180,    56,   231,  1475,  2160,   226,   866,  2220,    14,  2150,
     421,   744,  1458,   137,   828,   833,  1954,   926,   925,  2075,
    1954,   421,  2185,   766,   766,   549,  1452,   496,  2196,  2196,
     456,  2074,  2098,  2097,  2023,   817,  2023,   817,   817,   590,
     817,  2067,  2023,   817,   817,   817,  2023,   817,  2090,  2023,
     817,  2196,   546,   745,  1976,  1978,  1980,  2107,  2108,  2030,
     818,   817,   817,   815,  2136,  1485,  2109,   678,  1486,   815,
    2045,  1495,   509,   618,  1503,    37,  1529,  2223,   683,   658,
    1976,  2180,   712,   339,  2171,   408,   544,  1997,  1998,  2000,
    2002,   421,  1584,  1575,  1444,   170,   171,   608,   913,  1566,
    2041,  1563,   516,  1602,  2181,   448,   704,  2180,   277,   279,
    1399,  1400,  2167,  2219,  2181,   226,  2220,  2180,  1602,  1573,
    2097,  1581,  1587,   354,  1976,   354,   456,  1614,   884,  1504,
       1,    29,   823,   834,  1627,  1628,  2010,   569,  1626,   927,
    2016,  2219,  1456,  1457,  1652,  2043,  2197,  1659,   251,  1660,
    1442,  2219,   662,  1666,  2219,  2097,  2097,  2097,  2097,  2097,
     815,    83,  1689,  1691,  2077,    16,   110,   431,   843,  1686,
    1687,  2075,  2093,  2097,  2097,  2097,  1083,  1835,  2162,    38,
     205,  1264,   227,  1393,  2097,  2109,  2061,  2058,  1976,   354,
    2223,  1762,  1206,  2173,  1743,  1738,  1739,   297,  1745,  2008,
    1746,  1747,  2097,  2045,   820,  1915,  1758,  2097,  2097,   240,
     539,  1986,  1989,  1991,  1792,  1793,  2223,  1442,   906,   906,
    1801,  1802,  1914,   232,   237,   285,  2097,  2075,   558,   927,
    2086,  2087,  2089,  2109,  2074,   557,  2062,  1814,  1814,  1814,
    1814,  1814,  1814,  1814,  1814,  1819,   532,   542,  1843,  1844,
    1845,  2017,  2138,  1997,   437,   744,  2239,   766,  2213,  2213,
    2024,   817,  2024,  1862,  2223,  2159,  2097,  2090,  1976,   354,
    1441,  2109,   815,    16,  1883,  1884,  2132,  1886,  2097,  1862,
    1886,  1762,    13,  2149,  2097,   678,  1951,   239,  1176,  1283,
     820,   713,   704,  1343,  2182,   890,   355,  2103,   437,   551,
     739,   859,  2209,   859,  2209,   859,  2209,   859,  2209,   859,
    2209,   906,  2221,  2196,   687,  2207,  2095,  2098,   228,  1255,
    2109,   459,  1240,  2098,    37,  2154,   409,   434,   687,  1271,
    2219,  2180,  1223,   301,   302,   385,   753,   851,   431,   843,
     346,  1217,  2154,   355,  2109,  1087,  2182,  2182,   913,  2053,
    2054,   560,   756,  2233,   456,  2049,  2055,  2109,   894,  2180,
     308,   384,   913,  1157,  2056,  2192,  2185,  2205,  2219,   728,
    2185,  2180,  2160,   203,  2185,  2185,   515,  1111,  2109,  2223,
    2180,  2180,   766,   464,   727,    57,  2157,  2182,  2035,  2035,
    2197,  2035,  2035,  1131,  1132,  2037,  2238,  2037,  1028,  1029,
    2106,  2180,  2180,  2052,  1425,   744,   859,  1427,  1428,   651,
     890,  1418,  1958,  1959,  1471,  1472,  2093,  2097,  1955,  1956,
    1442,  2084,  2084,  2084,  2084,  2085,  2084,  2180,  2006,  2087,
    2006,  2085,  2173,  2180,   817,   817,  1458,  2070,  2070,  1954,
     744,  1463,  1464,  1466,  2037,  2037,  2140,   789,  2122,   789,
    2122,   817,  2049,  2122,  2122,  2122,  2067,  2140,   431,   843,
    2122,  2098,  1442,  1442,  1979,  1980,  1977,  1978,  2108,  1976,
     817,  2024,  2122,  2122,  2080,  2097,  2114,  1486,  2059,  2004,
     515,  2142,  2024,  1442,  1442,  2001,  2002,  1999,  2000,  2081,
    1590,   198,   383,   813,   850,  1510,  1576,  1577,  1578,  1445,
    2084,  2084,   448,   704,   240,  2084,  2006,  2006,  2084,    77,
      79,   368,   452,   597,   732,   835,  1466,  1592,  1593,  1594,
    1595,  1596,  1598,  1599,  1600,  1601,  2223,  1592,  2030,  2031,
    2030,  2031,  1505,    25,   807,  1629,   249,   820,  1442,  1627,
     281,  2168,  2097,  1442,   236,   890,  1667,  1668,  1669,   804,
    1670,  2217,   890,  2078,  2102,  2114,  2075,    83,    14,    55,
    1692,  1693,  1694,  1687,  1692,   337,   169,  2007,  1707,  2223,
    1831,   727,  2185,   390,   567,  2175,  2030,    16,   515,   636,
    1113,  2035,  2097,  1442,   255,   820,  1741,    14,   346,    13,
     389,  1759,  1760,  1761,  1763,  1766,  1793,  2223,   187,   520,
    1775,  1777,  1779,  1442,  1442,  1990,  1991,  1989,  1997,   464,
     515,  2009,  2008,  1801,   662,  1810,  2062,  2017,  2097,  2018,
    2019,  2020,  2021,  2024,  1850,  2062,  1850,   817,   545,   831,
    1981,  1983,  1985,   596,   744,  1861,  2062,  2140,  2140,  2030,
     820,  2076,  2080,   566,  2075,   203,  1887,   794,  1888,  1792,
     578,  2041,  2084,  2007,   500,   889,  1952,  2079,    95,  1177,
    1178,  1195,  1285,   820,   713,    28,   298,   566,   817,   819,
     828,   829,   832,   833,  1205,  1220,  1276,  1277,  2180,   807,
    1212,   927,     7,    53,    65,   111,   134,   191,   272,   335,
     343,   423,   430,   455,   483,   627,   631,   707,   767,   781,
     805,   847,   893,   905,   911,   913,  1354,   832,  1226,  1227,
      90,  1257,   854,   815,  1253,  1241,  2180,  2095,   913,  2096,
       1,   913,  1245,    37,  1232,  2159,  1236,   773,  1230,   725,
    2143,  2143,   913,  1276,   815,  1154,   337,  1170,  2054,   452,
    2189,   815,  2161,  2173,   303,   320,   700,   852,   887,   892,
    1167,  1168,  2180,  2180,  2180,  2180,  2185,   228,   301,  1072,
    1073,  2180,   655,  1098,  2180,  2180,  2180,  2180,    32,    33,
    2153,  1113,  2055,  2109,  2180,  2192,   557,  1084,   728,  1115,
    2055,  2035,  1132,   599,  1133,    25,  2052,  2052,  2180,   744,
    1428,   564,  1430,   197,  1432,  1442,  2081,   448,   452,  2234,
    1472,  2086,   817,  2180,  1464,  1976,   346,  2144,   817,  1496,
     213,   712,   812,  1585,  2181,  2181,  2181,  2181,  2062,  1578,
    2196,   390,   409,  2184,  2084,  2152,  1593,   102,   434,   687,
    1597,   515,  1602,  1976,   657,  1976,   657,  1506,  1507,  1508,
    2159,  1628,  2009,  1637,  1638,  2097,  2114,  1659,  1668,   187,
    2166,  2219,  1692,  1692,  2078,   826,  2178,  2178,  1694,  1693,
    2173,  1698,   496,  1932,   208,   398,   884,  1836,  1833,   567,
    1976,   569,  2200,  2200,   562,    18,   212,   337,   433,   668,
     682,   912,  1728,  1729,  1733,  1734,  2223,  2224,   255,  1740,
    1747,  2062,  2197,   464,   421,  1767,  1765,  1766,  2223,   388,
     420,   904,  1442,  1442,  1778,  1779,  1776,  1777,   464,  1442,
    1442,   448,  2186,  1442,  1442,  1984,  1985,  1982,  1983,  2180,
    1976,  2144,  1976,   877,  1438,  1893,  1884,  2173,  2007,  2173,
    1981,   278,   540,  1916,  1992,  1994,  1996,  1998,   448,   452,
    2187,  1921,  2223,   615,  2056,  1195,  1195,  1287,   820,   807,
    1275,  1277,   511,   761,  1205,  1218,  1219,  1220,  2103,   200,
     321,   425,   482,   746,   842,  1247,   457,  1248,   456,  2072,
    2173,   346,  1254,   812,  2218,  2109,  2218,   744,   913,  1242,
     456,  2081,   170,   175,   289,   705,  1237,  2160,  2109,   110,
     647,  1150,  2048,  1161,  2109,  2211,   456,  1158,  2103,  1158,
     228,   634,   728,  1076,  2049,  2180,    91,    92,    93,   210,
     211,   213,   398,   399,   422,   448,   473,   571,   604,   608,
     609,   634,   796,  1067,  1068,  1069,  1070,  1071,  2049,  2055,
    1101,  2049,  2049,  2161,  2241,  2049,  2180,  2049,  1085,  2171,
    2180,  2055,   807,  2109,  1029,  2171,  2171,    44,   198,  2109,
    2180,   913,   820,  1419,  2086,   392,  2176,   206,  2145,  1504,
    1592,  2062,  2062,  2062,  2062,  2097,  2181,   813,   706,   916,
    2031,  2031,  1507,   560,  1427,   157,   651,   890,  1564,  1565,
    1638,  1442,    83,   198,  1692,  2062,  2062,  2097,  1932,  2196,
     784,  1700,   612,  2035,   354,   571,  1837,  2103,    16,   515,
     637,   868,   920,  1731,  1732,  1733,   515,    80,   464,   475,
    1730,    83,  1748,   464,  2180,  1768,  1987,  1989,  1991,  1997,
     464,   464,  2097,  2145,  1894,   820,  2097,  2097,  1442,  1442,
    1995,  1996,  1993,  1994,  1923,  1924,  1925,  2223,   824,  1953,
    2032,   612,  1179,  1288,  1344,  1205,   906,  1278,  2222,  2196,
    1220,   817,   913,  2109,   815,  1253,   204,   204,  1256,  2180,
     766,    77,   835,  1162,  1163,  1164,  1165,  2223,  2161,   346,
    1153,  2172,  2049,   346,    13,   884,   894,  2103,  2114,  2242,
      62,   451,   757,   913,  1102,   750,   821,  1104,  1105,  2049,
    2050,    47,   295,   474,  1092,  2180,    23,   500,  1087,   807,
    2055,   500,    23,    44,  1429,  2223,  1433,  1434,  2086,  2176,
    1976,  1509,  1510,  2097,  2181,  1976,  1976,  2063,  2064,  2094,
    2098,  2062,  1700,  1933,  1934,  2097,  1701,  1702,  2097,   291,
     543,  1971,  1973,  1975,  2180,  2035,   612,   570,  2201,   683,
    2065,  2069,  2072,  2097,  2118,   865,  2097,  1990,  1988,  1989,
    1976,    41,   230,   292,   355,  1895,  1896,  1897,  1899,  1903,
    1905,  1906,  1909,  2155,  2171,   498,  1927,  1925,    43,   239,
     923,  1926,   913,  2180,  1180,   635,  1289,  1200,  1215,  1345,
    1346,  1347,   729,   823,  2097,   396,  1258,  2197,  2197,   393,
    1259,  1261,  1262,  1263,  1264,  1266,  2109,  2055,  2055,   336,
    1154,  2109,  1104,  2103,  2170,  2103,  2180,   585,  1078,  1079,
    1106,  1107,   912,  1093,  1095,  2223,  1096,  2223,  1093,  1087,
    2180,  2180,  1087,  2055,  2180,  2180,   481,  1434,   815,  2086,
     291,   543,   831,  1512,  1514,  1516,    11,   405,   534,   560,
     830,  1511,  2179,  2062,  1699,  1934,  2180,  1702,  1442,  1442,
    1974,  1975,  1972,  1973,  1742,  2180,  2098,  2115,  2118,  2008,
      55,  2150,  1754,  1907,  1908,   616,   195,  2180,   496,  1929,
    2079,  1742,   820,  1181,  2171,  2039,     1,  1202,  1347,   820,
     815,  2180,  1259,  2049,  2049,  2159,  1266,  1262,  2185,  1260,
    2155,  2161,  2133,  2223,  1080,  2133,  1108,  2049,  1108,   464,
    2190,   690,   475,  1087,  1087,  2052,  2052,   744,   240,  2086,
    1442,  1442,  1442,  1515,  1516,  1513,  1514,  2196,  2097,  1971,
     560,  2114,  1742,   664,   756,  2212,   824,  2036,  1908,   240,
     761,  1904,  2197,  2079,  2196,   850,  1935,  1949,   571,  2178,
    1290,   820,  1348,  1349,   820,  1205,  1259,  1267,  1268,  2104,
    2180,  1261,  2055,   204,  1152,  1078,   227,   515,  2180,   561,
    2171,  2171,  2180,   197,  2097,  2097,   282,   291,  2230,  2037,
     824,    16,  1900,  1901,  2098,   499,  1928,  1930,  1931,  2097,
    2196,   784,  1940,   291,   543,  1966,  1968,  1970,   206,   282,
     766,   785,   802,  1186,  1187,  1188,   398,   416,     1,  1291,
    1351,   554,  1353,  1354,  1268,  2051,  2052,  2197,   783,  1081,
     227,  2049,   494,   641,   647,  2235,   500,    23,  2085,   820,
     612,  2202,  2037,   557,   613,   652,  1902,  1901,  2180,  1931,
    2180,  1936,  1937,  2097,   290,   908,  1941,  1942,  2097,  1922,
    1442,  1442,  1969,  1970,  1967,  1968,   169,   793,  2180,   421,
     421,   206,   437,  1188,   240,   485,   766,   785,   802,  1182,
    1183,  1184,  1185,  2097,  2191,  2214,   240,   485,   766,   802,
    1189,  1190,  1191,  1192,  2097,  2214,   820,   161,   162,   578,
     820,  1292,  1293,  1298,  2180,  2223,  2250,    44,    49,    50,
      51,    52,    56,    74,    75,    94,   116,   124,   172,   281,
     338,   346,   348,   365,   377,   435,   448,   452,   470,   515,
     556,   574,   622,   667,   714,   744,   756,   790,   815,   826,
     855,   884,  1239,  1244,  1249,  1269,  1272,  1274,  1352,  1413,
    1414,  1473,  1474,  2180,  2228,  1355,  2097,  2109,  1350,  2052,
    2049,   906,  2235,  1094,  1095,  2180,  2180,  2197,   557,  2095,
    2079,  2114,  1937,  2180,    42,   157,   235,   530,   551,  1939,
    1943,   379,   472,   752,   927,  1944,  2117,  1942,  1966,  2180,
     556,  2097,  2180,  2180,  2180,  2180,   421,   190,   810,   421,
     437,  1184,  2097,   169,   629,   750,   775,   776,   777,   421,
     190,   810,   421,   437,  1191,  2097,   797,  2182,  2182,   444,
     445,  2188,  1309,   355,   120,   317,  1294,  1295,  1296,  1297,
    2097,  2180,   448,   704,  1411,  2194,  1409,  2194,  2180,  2181,
    1399,  1400,  2180,  2088,  1409,  2181,  2109,   109,  2181,  2097,
    2097,   355,  1411,  1357,  1358,    16,   752,   927,  1030,  1094,
    1087,  1087,   299,   398,   416,   571,  1898,  2035,  1939,  1938,
    1939,  1938,   566,  2097,  2109,  2097,  2097,  2097,  2097,  2180,
    2180,  2180,  2180,  2180,  2097,  2180,  2180,  2180,  2180,  2180,
    2180,  2180,  2180,  2180,  2180,  2180,  2097,  2180,  2182,  2182,
     927,  1299,  1300,  1301,  2097,  2109,  2112,  1200,  1310,  2180,
    1296,  1297,  2084,  2180,  2180,  2084,  2093,  2109,  2084,  1406,
    2084,  2218,  2180,  2093,  2109,  1351,  2116,  2117,  2218,  2097,
    2097,  2097,  2097,  2097,  2097,  2097,  2097,  2097,  2097,  2097,
    2097,  2097,  2097,  2097,  2097,  2097,  2097,  2097,  1302,   448,
     452,  2187,  2226,  2234,     1,  1202,  1203,  2081,   486,   595,
     828,   833,  1402,  1403,  1404,  1405,  1412,  1402,  1404,  1410,
      96,   593,  1407,  1408,  2081,  1265,  1266,  2097,  2097,   319,
     336,   370,   427,   450,  1303,  1304,  1305,  1306,  1307,  1308,
    1300,  1301,   820,  1311,  2084,  2084,  2097,  2097,   194,   208,
    2243,  2180,  2180,   106,   161,  2243,  2244,  2180,  1312,  2097,
    2180,  1301,  1301,   370,  2180,  2180,  1301,     4,   123,   127,
     366,   448,   452,   513,   556,   602,   750,   782,   820,   850,
     894,  1239,  1243,  1244,  1249,  1250,  1269,  1272,  1274,  1313,
    1314,  1319,  1322,  1325,  1326,  1329,  1330,  1331,  1334,  1335,
    1341,  1342,  2225,  2226,  2227,  2097,  1301,  1301,  1301,   394,
    2177,   550,  2194,  2195,  2151,  2180,  2109,  2180,  2196,  2180,
    2097,    14,    55,   419,   906,   514,  1332,  1333,  1401,  1402,
    1338,  1339,  1340,  1402,  2109,  2195,  2097,  2182,   511,   514,
     578,  1320,  1321,  1402,  2109,  1253,  2068,  2066,  2068,   105,
     161,   578,   588,   589,   663,   685,   686,  1315,  2243,  2244,
    2245,  2246,  2247,  2248,  2249,   346,   510,  2193,  2193,    14,
      55,  2008,  1332,  2112,  1339,  2112,   101,   434,   687,  1336,
    1337,  2097,  2109,  2218,  2140,   671,   869,  1323,  2068,   336,
     336,   370,   336,   370,   337,   561,  2198,  2198,  2068,   566,
     578,  1327,  1328,  2097,  1327,  2193,  2193,  2182,  2097,  1256,
    2197,  2097,   317,  1316,  2097,    16,   317,  1318,  2097,    83,
    1327,   578,   578,   770,  1251,   317,  1324,  2097,   566,  1317,
    1317,  1317,  1317,  2068,  2109,   578
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int16 yyr1[] =
{
       0,   929,   931,   930,   932,   932,   934,   933,   935,   935,
     936,   936,   938,   937,   939,   940,   941,   941,   942,   942,
     944,   943,   946,   945,   948,   949,   947,   950,   950,   951,
     952,   952,   954,   955,   953,   957,   956,   958,   958,   959,
     959,   960,   960,   961,   961,   962,   962,   962,   962,   963,
     963,   964,   964,   965,   965,   966,   967,   967,   968,   968,
     968,   968,   969,   969,   970,   970,   971,   971,   971,   972,
     972,   973,   973,   973,   973,   974,   975,   975,   976,   977,
     977,   978,   978,   979,   979,   980,   980,   980,   980,   980,
     982,   981,   983,   983,   984,   984,   986,   985,   987,   987,
     987,   987,   988,   988,   989,   989,   989,   989,   990,   991,
     993,   992,   994,   994,   994,   994,   994,   994,   995,   996,
     997,   997,   997,   997,   998,   998,  1000,   999,  1001,  1001,
    1001,  1002,  1002,  1003,  1003,  1003,  1003,  1003,  1004,  1004,
    1005,  1006,  1007,  1007,  1007,  1008,  1008,  1008,  1008,  1008,
    1008,  1008,  1008,  1008,  1008,  1008,  1008,  1008,  1008,  1010,
    1009,  1011,  1011,  1011,  1011,  1012,  1012,  1013,  1014,  1014,
    1016,  1015,  1018,  1017,  1019,  1017,  1020,  1020,  1021,  1022,
    1022,  1022,  1022,  1022,  1023,  1023,  1023,  1023,  1024,  1024,
    1024,  1025,  1025,  1026,  1026,  1027,  1026,  1028,  1028,  1029,
    1029,  1029,  1029,  1029,  1029,  1030,  1030,  1031,  1032,  1032,
    1033,  1034,  1034,  1035,  1036,  1036,  1037,  1037,  1038,  1039,
    1039,  1040,  1041,  1042,  1042,  1043,  1043,  1044,  1044,  1044,
    1045,  1045,  1046,  1047,  1048,  1048,  1049,  1050,  1051,  1052,
    1053,  1054,  1056,  1055,  1057,  1058,  1058,  1059,  1059,  1060,
    1060,  1062,  1061,  1063,  1063,  1064,  1064,  1065,  1065,  1065,
    1065,  1065,  1065,  1065,  1065,  1065,  1065,  1065,  1065,  1065,
    1065,  1065,  1065,  1065,  1065,  1065,  1066,  1066,  1066,  1066,
    1066,  1067,  1067,  1067,  1068,  1068,  1068,  1068,  1068,  1068,
    1068,  1069,  1069,  1069,  1069,  1070,  1070,  1070,  1070,  1070,
    1070,  1070,  1071,  1072,  1072,  1073,  1073,  1074,  1074,  1075,
    1076,  1076,  1076,  1077,  1078,  1078,  1080,  1079,  1081,  1081,
    1081,  1082,  1084,  1083,  1085,  1085,  1085,  1085,  1085,  1085,
    1086,  1087,  1088,  1089,  1089,  1089,  1091,  1090,  1092,  1092,
    1092,  1093,  1093,  1093,  1093,  1094,  1094,  1095,  1096,  1096,
    1097,  1097,  1098,  1098,  1098,  1098,  1099,  1101,  1100,  1102,
    1102,  1102,  1102,  1103,  1104,  1104,  1105,  1105,  1107,  1106,
    1106,  1108,  1109,  1110,  1111,  1111,  1112,  1113,  1113,  1113,
    1114,  1115,  1115,  1116,  1117,  1118,  1119,  1120,  1120,  1121,
    1122,  1122,  1122,  1123,  1123,  1124,  1124,  1124,  1124,  1125,
    1126,  1126,  1126,  1126,  1127,  1127,  1127,  1127,  1127,  1128,
    1128,  1128,  1128,  1128,  1128,  1128,  1128,  1130,  1129,  1131,
    1131,  1132,  1133,  1133,  1134,  1135,  1136,  1136,  1138,  1137,
    1139,  1139,  1140,  1141,  1141,  1142,  1142,  1143,  1145,  1144,
    1144,  1146,  1146,  1147,  1147,  1148,  1148,  1148,  1148,  1148,
    1148,  1148,  1148,  1148,  1148,  1148,  1149,  1150,  1150,  1150,
    1151,  1151,  1151,  1152,  1152,  1153,  1153,  1154,  1154,  1155,
    1156,  1156,  1157,  1157,  1158,  1158,  1159,  1160,  1161,  1161,
    1162,  1162,  1162,  1163,  1164,  1165,  1166,  1167,  1167,  1167,
    1167,  1167,  1168,  1168,  1169,  1170,  1170,  1171,  1172,  1172,
    1173,  1173,  1174,  1175,  1174,  1176,  1176,  1177,  1179,  1178,
    1180,  1180,  1181,  1181,  1181,  1182,  1182,  1182,  1183,  1183,
    1184,  1184,  1184,  1184,  1184,  1184,  1184,  1184,  1184,  1184,
    1184,  1185,  1186,  1186,  1187,  1187,  1188,  1188,  1188,  1188,
    1188,  1188,  1188,  1189,  1189,  1189,  1190,  1190,  1191,  1191,
    1191,  1191,  1191,  1191,  1192,  1193,  1194,  1193,  1195,  1196,
    1195,  1197,  1197,  1198,  1198,  1198,  1199,  1198,  1198,  1200,
    1201,  1201,  1202,  1202,  1203,  1204,  1204,  1205,  1205,  1205,
    1206,  1206,  1206,  1206,  1206,  1206,  1206,  1206,  1206,  1206,
    1206,  1206,  1206,  1206,  1206,  1207,  1207,  1208,  1208,  1209,
    1209,  1209,  1210,  1210,  1211,  1212,  1212,  1214,  1213,  1215,
    1216,  1215,  1217,  1217,  1218,  1218,  1218,  1219,  1219,  1220,
    1220,  1220,  1220,  1220,  1220,  1220,  1220,  1220,  1220,  1221,
    1221,  1222,  1222,  1223,  1223,  1223,  1223,  1223,  1223,  1223,
    1223,  1223,  1223,  1223,  1223,  1223,  1223,  1223,  1223,  1223,
    1223,  1223,  1223,  1223,  1224,  1225,  1226,  1226,  1227,  1228,
    1229,  1230,  1230,  1231,  1232,  1232,  1233,  1233,  1234,  1236,
    1235,  1237,  1237,  1237,  1237,  1238,  1239,  1240,  1240,  1241,
    1241,  1242,  1243,  1244,  1244,  1244,  1244,  1245,  1245,  1245,
    1245,  1245,  1245,  1245,  1245,  1245,  1245,  1245,  1245,  1245,
    1245,  1245,  1245,  1245,  1245,  1245,  1245,  1245,  1245,  1245,
    1245,  1245,  1245,  1245,  1245,  1245,  1245,  1245,  1245,  1245,
    1245,  1245,  1245,  1245,  1245,  1245,  1245,  1245,  1245,  1245,
    1245,  1245,  1245,  1245,  1245,  1245,  1245,  1246,  1246,  1247,
    1247,  1247,  1247,  1247,  1247,  1247,  1248,  1248,  1249,  1249,
    1250,  1251,  1251,  1252,  1252,  1252,  1253,  1253,  1254,  1254,
    1255,  1255,  1256,  1256,  1257,  1257,  1258,  1258,  1259,  1259,
    1260,  1259,  1259,  1259,  1261,  1262,  1262,  1263,  1264,  1264,
    1265,  1265,  1266,  1267,  1267,  1268,  1269,  1270,  1271,  1271,
    1271,  1272,  1273,  1275,  1274,  1276,  1276,  1277,  1277,  1278,
    1278,  1279,  1279,  1280,  1281,  1282,  1283,  1282,  1284,  1285,
    1284,  1286,  1287,  1286,  1288,  1288,  1290,  1289,  1291,  1291,
    1291,  1292,  1292,  1292,  1292,  1293,  1294,  1294,  1294,  1295,
    1296,  1296,  1297,  1298,  1299,  1299,  1299,  1300,  1301,  1301,
    1302,  1302,  1303,  1303,  1303,  1303,  1303,  1303,  1304,  1305,
    1306,  1307,  1308,  1309,  1309,  1311,  1310,  1310,  1312,  1312,
    1313,  1313,  1313,  1313,  1313,  1313,  1313,  1313,  1313,  1313,
    1313,  1313,  1313,  1313,  1313,  1313,  1313,  1314,  1315,  1315,
    1315,  1315,  1315,  1315,  1315,  1316,  1316,  1316,  1317,  1317,
    1318,  1318,  1318,  1318,  1319,  1320,  1320,  1320,  1321,  1321,
    1321,  1322,  1323,  1323,  1323,  1324,  1324,  1325,  1325,  1325,
    1325,  1325,  1326,  1326,  1327,  1327,  1328,  1328,  1328,  1329,
    1330,  1331,  1331,  1332,  1332,  1333,  1333,  1334,  1335,  1336,
    1336,  1337,  1337,  1337,  1338,  1338,  1339,  1339,  1340,  1341,
    1342,  1343,  1344,  1343,  1345,  1345,  1346,  1346,  1347,  1348,
    1347,  1349,  1350,  1347,  1347,  1351,  1351,  1352,  1352,  1352,
    1352,  1352,  1352,  1352,  1352,  1352,  1352,  1352,  1352,  1352,
    1352,  1352,  1352,  1352,  1352,  1352,  1352,  1352,  1352,  1352,
    1352,  1352,  1352,  1352,  1352,  1352,  1352,  1352,  1352,  1352,
    1352,  1352,  1352,  1352,  1352,  1352,  1352,  1352,  1352,  1352,
    1352,  1352,  1352,  1352,  1352,  1352,  1353,  1353,  1354,  1354,
    1354,  1354,  1354,  1354,  1354,  1354,  1354,  1354,  1354,  1354,
    1354,  1354,  1354,  1354,  1355,  1355,  1356,  1356,  1357,  1357,
    1358,  1358,  1359,  1359,  1360,  1360,  1361,  1361,  1362,  1362,
    1362,  1362,  1362,  1362,  1362,  1362,  1362,  1362,  1362,  1362,
    1362,  1362,  1363,  1363,  1363,  1363,  1363,  1363,  1363,  1363,
    1363,  1363,  1363,  1363,  1363,  1363,  1363,  1364,  1364,  1364,
    1364,  1364,  1364,  1364,  1364,  1364,  1364,  1365,  1365,  1366,
    1366,  1366,  1366,  1366,  1367,  1368,  1368,  1368,  1368,  1368,
    1368,  1368,  1368,  1368,  1368,  1368,  1368,  1368,  1368,  1368,
    1369,  1369,  1369,  1369,  1369,  1369,  1369,  1369,  1369,  1369,
    1370,  1370,  1370,  1370,  1370,  1370,  1370,  1370,  1370,  1370,
    1371,  1371,  1372,  1372,  1373,  1373,  1374,  1374,  1374,  1374,
    1374,  1375,  1375,  1375,  1375,  1375,  1375,  1375,  1375,  1375,
    1375,  1375,  1375,  1375,  1375,  1375,  1375,  1376,  1376,  1376,
    1377,  1377,  1377,  1377,  1377,  1377,  1377,  1377,  1378,  1378,
    1378,  1378,  1378,  1378,  1379,  1379,  1379,  1379,  1379,  1379,
    1379,  1379,  1380,  1380,  1380,  1380,  1381,  1381,  1381,  1382,
    1382,  1382,  1382,  1382,  1382,  1383,  1383,  1383,  1383,  1384,
    1384,  1384,  1384,  1384,  1384,  1384,  1385,  1385,  1385,  1385,
    1385,  1385,  1385,  1385,  1385,  1385,  1385,  1385,  1385,  1385,
    1385,  1385,  1385,  1385,  1385,  1385,  1385,  1385,  1385,  1385,
    1385,  1385,  1385,  1385,  1385,  1385,  1385,  1385,  1385,  1385,
    1385,  1385,  1385,  1385,  1385,  1385,  1385,  1385,  1385,  1385,
    1385,  1385,  1385,  1386,  1386,  1386,  1387,  1387,  1387,  1387,
    1387,  1387,  1387,  1387,  1387,  1388,  1388,  1388,  1388,  1388,
    1388,  1388,  1388,  1388,  1388,  1388,  1388,  1388,  1388,  1388,
    1388,  1388,  1388,  1388,  1388,  1388,  1388,  1388,  1389,  1390,
    1391,  1391,  1391,  1391,  1391,  1391,  1391,  1391,  1392,  1392,
    1392,  1393,  1393,  1394,  1395,  1395,  1396,  1396,  1397,  1397,
    1398,  1398,  1398,  1399,  1399,  1400,  1400,  1401,  1401,  1402,
    1403,  1403,  1404,  1405,  1405,  1406,  1407,  1407,  1408,  1408,
    1409,  1410,  1410,  1410,  1411,  1412,  1412,  1412,  1413,  1414,
    1415,  1415,  1417,  1418,  1419,  1416,  1420,  1416,  1421,  1422,
    1421,  1423,  1421,  1424,  1424,  1425,  1426,  1426,  1426,  1427,
    1427,  1427,  1427,  1427,  1427,  1428,  1429,  1429,  1430,  1430,
    1431,  1431,  1431,  1432,  1433,  1432,  1434,  1434,  1435,  1435,
    1435,  1435,  1435,  1437,  1436,  1438,  1438,  1439,  1440,  1441,
    1441,  1443,  1444,  1442,  1446,  1445,  1445,  1447,  1447,  1447,
    1447,  1447,  1447,  1447,  1447,  1447,  1447,  1447,  1447,  1447,
    1447,  1447,  1447,  1447,  1447,  1447,  1447,  1447,  1447,  1447,
    1447,  1447,  1447,  1447,  1447,  1447,  1447,  1447,  1447,  1447,
    1447,  1447,  1447,  1447,  1447,  1447,  1447,  1447,  1447,  1447,
    1447,  1447,  1447,  1447,  1447,  1447,  1447,  1447,  1447,  1447,
    1447,  1447,  1447,  1447,  1447,  1447,  1447,  1447,  1447,  1447,
    1447,  1447,  1447,  1449,  1448,  1451,  1450,  1452,  1450,  1450,
    1450,  1450,  1450,  1450,  1450,  1450,  1450,  1450,  1450,  1450,
    1450,  1450,  1450,  1450,  1450,  1450,  1450,  1450,  1450,  1450,
    1450,  1450,  1453,  1453,  1455,  1454,  1456,  1456,  1457,  1457,
    1457,  1458,  1458,  1458,  1459,  1459,  1460,  1460,  1461,  1461,
    1462,  1462,  1462,  1462,  1462,  1463,  1463,  1464,  1464,  1465,
    1465,  1466,  1466,  1466,  1467,  1468,  1469,  1470,  1470,  1470,
    1470,  1470,  1470,  1470,  1470,  1470,  1470,  1470,  1470,  1470,
    1470,  1470,  1470,  1470,  1470,  1470,  1470,  1470,  1470,  1470,
    1470,  1470,  1470,  1470,  1470,  1470,  1470,  1470,  1470,  1470,
    1470,  1470,  1470,  1471,  1471,  1472,  1473,  1473,  1473,  1474,
    1474,  1474,  1475,  1475,  1476,  1476,  1478,  1477,  1479,  1479,
    1479,  1479,  1480,  1480,  1481,  1481,  1483,  1482,  1484,  1484,
    1485,  1485,  1486,  1486,  1488,  1487,  1489,  1489,  1490,  1491,
    1491,  1493,  1492,  1495,  1494,  1496,  1497,  1496,  1498,  1498,
    1498,  1499,  1499,  1500,  1500,  1500,  1500,  1500,  1500,  1501,
    1501,  1502,  1502,  1503,  1503,  1504,  1505,  1504,  1506,  1506,
    1507,  1507,  1508,  1508,  1508,  1508,  1509,  1509,  1509,  1509,
    1509,  1510,  1510,  1511,  1511,  1512,  1512,  1512,  1513,  1513,
    1514,  1514,  1515,  1515,  1516,  1517,  1517,  1519,  1518,  1520,
    1520,  1521,  1521,  1523,  1522,  1524,  1524,  1525,  1525,  1526,
    1526,  1526,  1526,  1526,  1528,  1527,  1529,  1529,  1531,  1530,
    1532,  1533,  1533,  1534,  1536,  1535,  1537,  1538,  1537,  1540,
    1539,  1541,  1541,  1543,  1542,  1544,  1544,  1545,  1545,  1546,
    1546,  1548,  1547,  1549,  1550,  1550,  1551,  1551,  1551,  1551,
    1551,  1553,  1552,  1554,  1554,  1554,  1554,  1554,  1554,  1554,
    1554,  1554,  1554,  1554,  1555,  1555,  1556,  1556,  1558,  1557,
    1559,  1559,  1560,  1560,  1561,  1561,  1562,  1562,  1563,  1563,
    1563,  1563,  1563,  1564,  1564,  1565,  1565,  1565,  1565,  1566,
    1566,  1568,  1567,  1569,  1571,  1570,  1572,  1572,  1573,  1573,
    1573,  1575,  1574,  1576,  1576,  1577,  1577,  1578,  1578,  1578,
    1578,  1578,  1580,  1581,  1579,  1582,  1582,  1584,  1585,  1583,
    1587,  1586,  1588,  1588,  1588,  1589,  1589,  1590,  1590,  1591,
    1591,  1591,  1592,  1592,  1593,  1593,  1593,  1593,  1593,  1593,
    1593,  1593,  1594,  1595,  1596,  1596,  1596,  1597,  1597,  1597,
    1597,  1598,  1598,  1599,  1599,  1600,  1601,  1602,  1602,  1602,
    1602,  1602,  1602,  1602,  1602,  1602,  1602,  1602,  1602,  1602,
    1602,  1602,  1602,  1602,  1602,  1602,  1602,  1602,  1602,  1602,
    1603,  1603,  1605,  1604,  1606,  1606,  1606,  1606,  1606,  1607,
    1607,  1609,  1608,  1611,  1610,  1612,  1610,  1613,  1614,  1616,
    1615,  1617,  1618,  1618,  1619,  1619,  1619,  1620,  1620,  1621,
    1621,  1622,  1622,  1622,  1623,  1623,  1623,  1625,  1624,  1626,
    1624,  1627,  1627,  1628,  1628,  1628,  1628,  1628,  1629,  1629,
    1630,  1630,  1632,  1631,  1634,  1633,  1635,  1635,  1636,  1636,
    1637,  1637,  1638,  1638,  1640,  1639,  1641,  1641,  1641,  1641,
    1641,  1641,  1641,  1642,  1642,  1644,  1643,  1645,  1647,  1646,
    1648,  1650,  1649,  1651,  1651,  1652,  1652,  1653,  1655,  1654,
    1656,  1656,  1656,  1657,  1657,  1658,  1659,  1660,  1660,  1662,
    1661,  1663,  1664,  1664,  1665,  1665,  1665,  1666,  1666,  1667,
    1667,  1668,  1669,  1669,  1669,  1669,  1669,  1669,  1669,  1670,
    1670,  1672,  1671,  1673,  1673,  1675,  1674,  1676,  1676,  1678,
    1677,  1679,  1680,  1680,  1680,  1681,  1681,  1681,  1681,  1683,
    1682,  1684,  1685,  1686,  1686,  1687,  1687,  1687,  1687,  1687,
    1687,  1688,  1688,  1689,  1689,  1690,  1690,  1690,  1690,  1690,
    1691,  1692,  1692,  1692,  1692,  1692,  1693,  1694,  1696,  1695,
    1698,  1699,  1697,  1700,  1700,  1701,  1701,  1702,  1703,  1703,
    1705,  1704,  1706,  1707,  1707,  1709,  1708,  1711,  1710,  1712,
    1712,  1713,  1713,  1715,  1714,  1716,  1716,  1718,  1717,  1719,
    1719,  1720,  1720,  1722,  1721,  1723,  1723,  1724,  1725,  1725,
    1726,  1726,  1726,  1726,  1727,  1727,  1728,  1728,  1728,  1728,
    1728,  1729,  1729,  1730,  1730,  1730,  1731,  1731,  1731,  1732,
    1732,  1732,  1733,  1733,  1734,  1734,  1734,  1736,  1735,  1737,
    1738,  1737,  1739,  1737,  1740,  1740,  1741,  1741,  1742,  1742,
    1743,  1743,  1743,  1743,  1743,  1744,  1744,  1745,  1745,  1746,
    1746,  1747,  1748,  1748,  1750,  1749,  1752,  1751,  1753,  1753,
    1754,  1756,  1755,  1757,  1758,  1758,  1759,  1759,  1759,  1759,
    1760,  1760,  1761,  1761,  1762,  1762,  1763,  1764,  1764,  1764,
    1765,  1765,  1766,  1766,  1766,  1767,  1767,  1768,  1768,  1769,
    1769,  1770,  1772,  1771,  1773,  1774,  1774,  1775,  1775,  1775,
    1776,  1776,  1777,  1778,  1778,  1779,  1780,  1780,  1782,  1781,
    1783,  1784,  1786,  1785,  1787,  1788,  1788,  1790,  1789,  1791,
    1792,  1792,  1793,  1793,  1794,  1794,  1795,  1797,  1796,  1798,
    1798,  1799,  1799,  1800,  1800,  1801,  1801,  1802,  1803,  1803,
    1805,  1804,  1806,  1806,  1807,  1807,  1808,  1809,  1809,  1809,
    1809,  1810,  1810,  1812,  1811,  1813,  1813,  1813,  1813,  1813,
    1813,  1813,  1813,  1814,  1814,  1815,  1815,  1816,  1817,  1818,
    1818,  1819,  1819,  1819,  1819,  1819,  1819,  1819,  1819,  1820,
    1820,  1820,  1821,  1822,  1822,  1823,  1824,  1824,  1825,  1825,
    1826,  1827,  1829,  1828,  1831,  1830,  1832,  1832,  1833,  1833,
    1834,  1834,  1835,  1835,  1836,  1836,  1836,  1837,  1837,  1837,
    1839,  1838,  1840,  1841,  1841,  1842,  1842,  1842,  1842,  1843,
    1843,  1843,  1843,  1843,  1843,  1844,  1845,  1845,  1846,  1846,
    1848,  1847,  1847,  1847,  1849,  1849,  1849,  1849,  1849,  1850,
    1850,  1851,  1851,  1852,  1852,  1852,  1852,  1854,  1853,  1855,
    1857,  1856,  1858,  1858,  1859,  1860,  1860,  1861,  1861,  1862,
    1862,  1863,  1863,  1865,  1864,  1866,  1866,  1866,  1866,  1867,
    1867,  1868,  1869,  1869,  1871,  1870,  1872,  1872,  1874,  1873,
    1875,  1877,  1876,  1878,  1880,  1879,  1881,  1882,  1882,  1883,
    1883,  1884,  1885,  1885,  1886,  1887,  1887,  1888,  1888,  1889,
    1889,  1891,  1890,  1892,  1892,  1894,  1893,  1895,  1895,  1895,
    1895,  1895,  1896,  1897,  1897,  1898,  1898,  1898,  1898,  1898,
    1899,  1900,  1900,  1901,  1901,  1901,  1902,  1902,  1902,  1902,
    1903,  1904,  1904,  1905,  1906,  1907,  1907,  1908,  1908,  1909,
    1909,  1911,  1910,  1912,  1913,  1913,  1914,  1914,  1914,  1914,
    1915,  1915,  1916,  1916,  1916,  1917,  1917,  1919,  1918,  1921,
    1922,  1920,  1923,  1923,  1924,  1924,  1925,  1926,  1926,  1926,
    1927,  1927,  1928,  1928,  1929,  1929,  1930,  1930,  1931,  1932,
    1932,  1933,  1933,  1934,  1934,  1935,  1935,  1936,  1936,  1937,
    1938,  1938,  1939,  1939,  1939,  1940,  1940,  1941,  1941,  1942,
    1942,  1942,  1943,  1943,  1943,  1944,  1944,  1945,  1945,  1947,
    1946,  1949,  1948,  1950,  1950,  1951,  1951,  1952,  1952,  1953,
    1953,  1954,  1954,  1954,  1955,  1955,  1956,  1957,  1957,  1958,
    1958,  1959,  1960,  1960,  1961,  1961,  1961,  1962,  1962,  1963,
    1964,  1964,  1965,  1966,  1966,  1966,  1967,  1967,  1968,  1969,
    1969,  1970,  1971,  1971,  1971,  1972,  1972,  1973,  1974,  1974,
    1975,  1976,  1976,  1976,  1977,  1977,  1978,  1979,  1979,  1980,
    1981,  1981,  1981,  1982,  1982,  1983,  1984,  1984,  1985,  1986,
    1986,  1987,  1987,  1988,  1988,  1989,  1990,  1990,  1991,  1992,
    1992,  1993,  1993,  1994,  1995,  1995,  1996,  1997,  1997,  1998,
    1998,  1999,  1999,  2000,  2001,  2001,  2002,  2003,  2003,  2004,
    2004,  2005,  2005,  2006,  2006,  2007,  2007,  2008,  2008,  2009,
    2011,  2010,  2012,  2012,  2013,  2013,  2013,  2013,  2013,  2013,
    2013,  2013,  2013,  2013,  2013,  2013,  2013,  2013,  2014,  2014,
    2015,  2016,  2016,  2016,  2016,  2016,  2016,  2016,  2016,  2016,
    2016,  2016,  2016,  2016,  2016,  2017,  2017,  2018,  2018,  2019,
    2019,  2020,  2021,  2022,  2022,  2023,  2023,  2023,  2024,  2024,
    2024,  2025,  2025,  2025,  2026,  2026,  2027,  2027,  2027,  2028,
    2028,  2029,  2029,  2029,  2029,  2029,  2029,  2030,  2030,  2031,
    2032,  2033,  2033,  2034,  2035,  2035,  2036,  2036,  2037,  2038,
    2039,  2040,  2040,  2041,  2042,  2042,  2043,  2044,  2044,  2045,
    2046,  2046,  2046,  2047,  2048,  2048,  2049,  2050,  2050,  2051,
    2051,  2052,  2053,  2053,  2054,  2055,  2055,  2056,  2056,  2057,
    2058,  2058,  2059,  2059,  2059,  2060,  2060,  2061,  2061,  2062,
    2062,  2063,  2063,  2064,  2064,  2064,  2064,  2064,  2064,  2064,
    2064,  2064,  2064,  2064,  2065,  2066,  2066,  2067,  2067,  2067,
    2068,  2068,  2068,  2068,  2068,  2068,  2068,  2069,  2069,  2069,
    2069,  2069,  2069,  2070,  2071,  2072,  2073,  2073,  2074,  2074,
    2075,  2076,  2077,  2077,  2078,  2078,  2079,  2079,  2079,  2080,
    2080,  2081,  2081,  2082,  2082,  2082,  2083,  2083,  2083,  2084,
    2084,  2084,  2085,  2085,  2086,  2086,  2087,  2087,  2088,  2088,
    2088,  2089,  2090,  2091,  2091,  2092,  2093,  2094,  2095,  2096,
    2097,  2098,  2098,  2098,  2098,  2099,  2099,  2100,  2100,  2101,
    2101,  2101,  2101,  2102,  2103,  2103,  2105,  2104,  2106,  2106,
    2107,  2108,  2108,  2109,  2110,  2111,  2112,  2112,  2113,  2113,
    2113,  2113,  2113,  2113,  2113,  2114,  2114,  2115,  2115,  2116,
    2116,  2116,  2116,  2116,  2116,  2116,  2117,  2117,  2117,  2117,
    2118,  2118,  2118,  2118,  2118,  2118,  2118,  2118,  2118,  2118,
    2118,  2118,  2118,  2118,  2119,  2119,  2120,  2120,  2120,  2120,
    2121,  2121,  2121,  2121,  2121,  2122,  2122,  2122,  2123,  2123,
    2123,  2124,  2124,  2124,  2126,  2125,  2127,  2127,  2128,  2128,
    2129,  2129,  2130,  2130,  2131,  2132,  2132,  2133,  2133,  2133,
    2134,  2134,  2135,  2135,  2136,  2136,  2137,  2137,  2137,  2138,
    2138,  2139,  2139,  2139,  2140,  2140,  2141,  2141,  2142,  2142,
    2142,  2142,  2142,  2142,  2142,  2142,  2143,  2143,  2144,  2144,
    2145,  2145,  2146,  2146,  2146,  2146,  2147,  2147,  2147,  2147,
    2147,  2147,  2147,  2147,  2147,  2147,  2147,  2147,  2147,  2147,
    2147,  2147,  2147,  2147,  2147,  2147,  2147,  2147,  2147,  2147,
    2147,  2147,  2147,  2147,  2147,  2147,  2147,  2147,  2147,  2147,
    2147,  2147,  2147,  2147,  2147,  2147,  2147,  2147,  2147,  2147,
    2147,  2147,  2147,  2147,  2147,  2147,  2147,  2147,  2148,  2148,
    2148,  2148,  2148,  2148,  2148,  2148,  2148,  2148,  2148,  2148,
    2148,  2148,  2148,  2148,  2148,  2148,  2148,  2148,  2148,  2148,
    2148,  2149,  2149,  2150,  2150,  2151,  2151,  2152,  2152,  2153,
    2153,  2153,  2154,  2154,  2155,  2155,  2156,  2156,  2157,  2157,
    2158,  2158,  2159,  2159,  2160,  2160,  2161,  2161,  2162,  2162,
    2163,  2163,  2164,  2164,  2165,  2165,  2166,  2166,  2167,  2167,
    2168,  2168,  2169,  2169,  2170,  2170,  2171,  2171,  2172,  2172,
    2173,  2173,  2174,  2174,  2174,  2175,  2175,  2175,  2176,  2176,
    2177,  2177,  2178,  2178,  2179,  2179,  2180,  2180,  2181,  2181,
    2181,  2182,  2182,  2182,  2183,  2183,  2183,  2183,  2184,  2184,
    2184,  2185,  2185,  2186,  2186,  2187,  2187,  2187,  2188,  2188,
    2188,  2189,  2189,  2190,  2190,  2191,  2191,  2192,  2192,  2193,
    2193,  2194,  2194,  2195,  2195,  2196,  2196,  2197,  2197,  2198,
    2198,  2198,  2199,  2199,  2199,  2199,  2200,  2200,  2201,  2201,
    2202,  2202,  2203,  2203,  2204,  2204,  2205,  2205,  2206,  2206,
    2206,  2207,  2207,  2208,  2208,  2209,  2209,  2210,  2210,  2210,
    2211,  2211,  2212,  2212,  2213,  2213,  2214,  2214,  2215,  2215,
    2216,  2216,  2217,  2217,  2218,  2218,  2219,  2219,  2220,  2220,
    2221,  2221,  2222,  2222,  2223,  2223,  2224,  2224,  2224,  2225,
    2225,  2226,  2226,  2227,  2227,  2228,  2228,  2228,  2228,  2229,
    2229,  2230,  2230,  2231,  2231,  2232,  2232,  2233,  2233,  2234,
    2234,  2235,  2235,  2236,  2236,  2236,  2237,  2237,  2238,  2238,
    2239,  2239,  2240,  2240,  2241,  2241,  2242,  2242,  2243,  2243,
    2244,  2244,  2245,  2245,  2246,  2246,  2247,  2247,  2248,  2248,
    2249,  2249,  2250,  2250
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     2,     1,     1,     0,     2,     1,     2,
       1,     1,     0,     2,     4,     4,     0,     1,     1,     2,
       0,     4,     0,     4,     0,     0,     6,     0,     1,     3,
       1,     1,     0,     0,     8,     0,     6,     1,     1,     1,
       1,     0,     2,     0,     3,     1,     1,     1,     1,     2,
       2,     1,     1,     0,     3,     5,     0,     3,     1,     1,
       1,     1,     0,     5,     0,     3,     1,     1,     1,     0,
       4,     1,     1,     1,     1,     3,     0,     3,     2,     0,
       3,     0,     1,     1,     2,     1,     1,     1,     1,     1,
       0,     4,     0,     3,     0,     3,     0,     4,     0,     2,
       3,     2,     1,     2,     1,     1,     1,     1,     5,     2,
       0,     4,     2,     3,     4,     4,     8,     8,     3,     4,
       1,     1,     1,     1,     1,     2,     0,     4,     0,     2,
       3,     1,     2,     3,     3,     3,     3,     3,     1,     2,
       2,     2,     1,     2,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       3,     2,     3,     3,     1,     0,     1,     1,     3,     4,
       0,     4,     0,     4,     0,     4,     0,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       1,     1,     2,     1,     3,     0,     4,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     0,     2,
       3,     1,     2,     3,     1,     2,     1,     2,     3,     1,
       2,     3,     6,     1,     2,     1,     3,     0,     2,     2,
       0,     2,     4,     5,     0,     3,     3,     5,     3,     4,
       3,     3,     0,     4,     4,     0,     3,     0,     2,     0,
       2,     0,     5,     2,     2,     0,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     5,     5,     6,     6,
       4,     0,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     0,     1,     1,     1,     1,     1,     4,
       1,     1,     1,     9,     0,     1,     0,     4,     0,     4,
       3,     1,     0,     4,     2,     3,     4,     4,     8,     8,
       6,     1,     5,     0,     1,     1,     0,     5,     2,     2,
       2,     0,     5,     6,     1,     0,     1,     2,     0,     2,
       3,     1,     1,     3,     1,     2,     4,     0,     5,     1,
       1,     1,     1,     7,     0,     2,     1,     2,     0,     2,
       2,     1,     4,     3,     1,     1,     3,     2,     2,     2,
       3,     3,     4,     4,     4,     4,     4,     0,     2,     2,
       0,     2,     3,     1,     2,     1,     1,     1,     1,     5,
       0,     1,     1,     1,     4,     4,     4,     4,     1,     6,
       6,     7,     4,     6,     4,     6,     4,     0,     6,     1,
       2,     2,     0,     2,     6,     2,     2,     3,     0,    10,
       0,     1,     3,     0,     3,     0,     2,     2,     0,     5,
       3,     1,     1,     0,     2,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     5,     0,     1,     1,
       4,     6,     9,     0,     3,     0,     2,     0,     2,     3,
       5,     5,     1,     1,     1,     1,     3,     5,     0,     2,
       1,     1,     1,     4,     2,     2,     4,     1,     1,     1,
       1,     1,     1,     1,     4,     0,     2,     2,     2,     2,
       1,     2,     0,     0,     5,     0,     2,     2,     0,     5,
       0,     2,     4,     3,     4,     0,     1,     1,     1,     2,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,    11,     0,     1,     1,     2,     4,     4,     4,     6,
       4,     3,     4,     0,     1,     1,     1,     2,     4,     4,
       4,     4,     4,     4,     6,     0,     0,     5,     0,     0,
       2,     2,     3,     1,     1,     1,     0,     4,     3,     2,
       0,     1,     1,     1,     1,     0,     2,     1,     2,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     6,     0,     2,     0,     4,     5,
       0,     7,     2,     2,     1,     3,     1,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       1,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     3,     0,     1,     3,     3,
       3,     0,     1,     3,     0,     2,     0,     1,     2,     0,
       4,     1,     2,     1,     1,     1,     2,     0,     5,     0,
       2,     1,     3,     1,     3,     3,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     3,     4,     3,
       3,     3,     4,     3,     3,     1,     1,     1,     1,     1,
       1,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       1,     1,     1,     1,     1,     1,     0,     1,     3,     3,
       6,     0,     2,     6,     8,     7,     0,     2,     0,     2,
       0,     2,     0,     3,     0,     3,     0,     1,     0,     2,
       0,     3,     1,     1,     1,     1,     2,     4,     1,     1,
       0,     1,     3,     1,     2,     1,     2,     2,     0,     1,
       1,     3,     1,     0,     5,     1,     2,     3,     1,     0,
       4,     2,     2,     2,     4,     0,     0,     5,     0,     0,
       5,     0,     0,     5,     0,     2,     0,     6,     0,     2,
       2,     2,     4,     1,     1,     2,     2,     1,     1,     1,
       1,     2,     1,     4,     2,     1,     3,     2,     1,     1,
       0,     2,     1,     1,     1,     1,     1,     3,     3,     4,
       4,     4,     3,     0,     2,     0,     5,     3,     0,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     1,     1,
       3,     3,     1,     1,     1,     0,     2,     2,     0,     2,
       0,     2,     2,     1,     3,     1,     2,     1,     1,     1,
       1,     4,     0,     3,     2,     1,     1,     3,     4,     5,
       4,     5,     1,     1,     0,     2,     1,     1,     1,     6,
       2,     3,     2,     0,     2,     1,     2,     2,     4,     0,
       1,     1,     1,     1,     2,     1,     1,     2,     1,     4,
       2,     0,     0,     5,     0,     1,     2,     3,     1,     0,
       4,     0,     0,     7,     3,     0,     2,     2,     2,     1,
       1,     2,     2,     1,     1,     1,     1,     1,     1,     1,
       3,     3,     3,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     4,     1,     1,     2,     3,     2,
       2,     2,     3,     3,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     2,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     1,
       1,     2,     1,     3,     3,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     3,     3,     1,     2,
       3,     3,     3,     1,     2,     1,     2,     0,     1,     1,
       1,     1,     1,     1,     1,     2,     1,     1,     0,     1,
       4,     0,     1,     1,     4,     0,     1,     1,     3,     2,
       0,     1,     0,     0,     0,    12,     0,     4,     0,     0,
       3,     0,     3,     1,     2,     5,     0,     2,     2,     0,
       3,     3,     4,     2,     1,     3,     0,     5,     0,     1,
       0,     2,     2,     0,     0,     7,     0,     2,     1,     1,
       2,     1,     1,     0,     6,     0,     2,     2,     1,     0,
       1,     0,     0,     3,     0,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     0,     4,     0,     4,     0,     5,     3,
       3,     3,     3,     4,     3,     4,     3,     3,     4,     4,
       4,     3,     4,     3,     4,     5,     3,     4,     3,     3,
       2,     3,     1,     1,     0,     3,     0,     1,     5,     4,
       4,     1,     3,     3,     1,     1,     0,     1,     1,     2,
       1,     1,     1,     2,     3,     1,     2,     1,     3,     1,
       2,     2,     2,     2,     3,     3,     3,     1,     1,     1,
       2,     1,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     4,     1,     1,     1,
       1,     4,     1,     2,     1,     1,     3,     3,     3,     3,
       3,     3,     4,     0,     1,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     0,     1,     0,     4,     4,     5,
       6,     8,     0,     2,     0,     1,     0,     3,     4,     5,
       0,     2,     0,     2,     0,     3,     1,     2,     4,     0,
       2,     0,     4,     0,     9,     0,     0,     4,     1,     1,
       1,     0,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     0,     2,     1,     1,     0,     0,     3,     1,     2,
       2,     3,     0,     2,     2,     2,     0,     3,     2,     2,
       4,     1,     1,     1,     1,     0,     2,     2,     0,     1,
       2,     2,     0,     1,     2,     0,     1,     0,     3,     1,
       2,     1,     1,     0,     3,     1,     1,     2,     3,     0,
       1,     3,     3,     2,     0,     4,     0,     3,     0,     4,
       4,     0,     1,     1,     0,     3,     0,     0,     4,     0,
       3,     2,     1,     0,     4,     4,     2,     1,     2,     0,
       1,     0,     3,     3,     0,     3,     0,     2,     1,     2,
       1,     0,     4,     3,     3,     3,     3,     2,     1,     1,
       1,     1,     1,     1,     2,     1,     1,     2,     0,     3,
       1,     1,     0,     2,     1,     2,     1,     2,     1,     2,
       1,     1,     2,     0,     1,     2,     2,     2,     2,     1,
       1,     0,     3,     2,     0,     3,     1,     2,     1,     1,
       1,     0,     5,     0,     1,     1,     2,     3,     3,     3,
       3,     2,     0,     0,     5,     1,     1,     0,     0,     7,
       0,     5,     1,     1,     1,     0,     1,     0,     2,     1,
       2,     1,     1,     2,     1,     2,     1,     5,     1,     1,
       1,     2,     1,     1,     0,     1,     1,     1,     1,     0,
       1,     3,     3,     1,     1,     4,     3,     1,     2,     2,
       1,     1,     2,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     1,     3,     3,     3,     3,     3,
       0,     1,     0,     4,     4,     6,     6,     8,     8,     0,
       1,     0,     3,     0,     3,     0,     6,     4,     1,     0,
       4,     2,     1,     3,     1,     1,     1,     2,     1,     1,
       2,     2,     2,     2,     3,     3,     3,     0,     3,     0,
       4,     1,     3,     2,     1,     1,     1,     1,     0,     2,
       0,     1,     0,     3,     0,     7,     0,     1,     0,     1,
       1,     2,     1,     1,     0,     3,     0,     2,     1,     2,
       1,     1,     1,     0,     2,     0,     3,     1,     0,     3,
       1,     0,     3,     3,     4,     0,     3,     2,     0,     6,
       5,     3,     2,     0,     1,     0,     0,     0,     1,     0,
       3,     5,     0,     2,     0,     3,     3,     0,     2,     1,
       2,     4,     1,     1,     1,     1,     1,     1,     1,     0,
       3,     0,     3,     1,     2,     0,     3,     2,     2,     0,
       3,     2,     1,     1,     1,     2,     1,     1,     1,     0,
       3,     2,     5,     1,     2,     2,     2,     1,     1,     1,
       2,     1,     2,     4,     2,     0,     1,     1,     1,     1,
       4,     0,     1,     1,     2,     2,     3,     3,     0,     5,
       0,     0,     9,     0,     2,     1,     2,     1,     0,     1,
       0,     5,     7,     0,     2,     0,     3,     0,     4,     2,
       2,     0,     1,     0,     3,     3,     4,     0,     4,     4,
       6,     0,     1,     0,     3,     1,     2,     6,     0,     1,
       1,     1,     1,     1,     0,     3,     0,     1,     1,     2,
       1,     2,     2,     1,     1,     1,     2,     1,     1,     1,
       1,     1,     3,     1,     1,     1,     1,     0,     3,     4,
       0,     6,     0,     5,     0,     1,     1,     1,     1,     3,
       0,     2,     1,     3,     3,     0,     3,     1,     1,     1,
       3,     6,     0,     2,     0,     3,     0,     3,     2,     1,
       1,     0,     4,     7,     0,     2,     0,     1,     2,     1,
       2,     3,     3,     1,     0,     1,     1,     4,     4,     2,
       0,     1,     1,     3,     2,     0,     3,     1,     1,     0,
       1,     1,     0,     4,     5,     1,     1,     0,     2,     2,
       0,     1,     2,     0,     1,     2,     0,     1,     0,     3,
       2,     1,     0,     4,     4,     0,     1,     0,     4,     5,
       0,     1,     2,     3,     0,     1,     1,     0,     4,     4,
       6,     0,     2,     0,     2,     1,     2,     3,     0,     1,
       0,     3,     2,     5,     0,     1,     2,     2,     2,     2,
       2,     0,     2,     0,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     4,     3,     1,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     4,
       3,     5,     4,     1,     2,     3,     1,     2,     3,     3,
       4,     4,     0,     3,     0,     7,     0,     5,     0,     2,
       0,     3,     0,     1,     0,     2,     4,     0,     2,     4,
       0,     4,     4,     0,     3,     0,     4,     1,     1,     1,
       2,     2,     2,     2,     1,     1,     2,     1,     0,     1,
       0,     4,     2,     2,     0,     2,     1,     4,     4,     0,
       1,     1,     1,     1,     1,     1,     1,     0,     4,     5,
       0,     2,     1,     2,     2,     0,     3,     1,     1,     0,
       4,     0,     1,     0,     4,     4,     6,     6,     8,     0,
       1,     2,     0,     1,     0,     3,     1,     2,     0,     3,
       5,     0,     3,     2,     0,     4,     6,     0,     3,     1,
       3,     2,     2,     2,     3,     0,     3,     0,     3,     0,
       1,     0,     3,     1,     2,     0,     3,     1,     1,     1,
       1,     1,     7,     0,     1,     1,     1,     1,     1,     1,
       4,     1,     2,     1,     2,     3,     0,     1,     2,     1,
       3,     1,     1,     4,     2,     1,     2,     1,     2,     1,
       1,     0,     4,     6,     0,     2,     0,     4,     3,     3,
       1,     1,     0,     1,     1,     0,     1,     0,     5,     0,
       0,    12,     0,     1,     1,     2,     2,     2,     1,     1,
       0,     4,     0,     3,     0,     3,     1,     2,     3,     0,
       3,     1,     2,     3,     3,     0,     3,     1,     2,     3,
       0,     1,     1,     1,     1,     0,     2,     1,     2,     1,
       2,     2,     2,     2,     1,     1,     3,     0,     1,     0,
       5,     0,    10,     0,     3,     0,     2,     0,     3,     1,
       2,     0,     2,     2,     0,     1,     3,     1,     1,     0,
       1,     2,     1,     1,     0,     2,     2,     0,     1,     2,
       0,     1,     2,     0,     2,     2,     0,     1,     2,     0,
       1,     2,     0,     2,     2,     0,     1,     2,     0,     1,
       2,     0,     2,     2,     0,     1,     2,     0,     1,     2,
       0,     2,     2,     0,     1,     2,     0,     1,     2,     2,
       2,     2,     2,     0,     1,     2,     0,     1,     2,     2,
       2,     0,     1,     2,     0,     1,     2,     0,     1,     2,
       2,     0,     1,     2,     0,     1,     2,     0,     2,     0,
       3,     2,     1,     0,     2,     0,     3,     1,     1,     1,
       0,     2,     1,     2,     1,     2,     3,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     3,     0,     1,     1,     3,     3,
       1,     3,     3,     1,     3,     1,     2,     2,     1,     3,
       1,     1,     3,     1,     3,     1,     3,     1,     2,     2,
       1,     1,     2,     1,     1,     2,     2,     3,     1,     1,
       1,     1,     2,     1,     1,     2,     1,     0,     2,     1,
       1,     1,     3,     1,     1,     2,     1,     0,     1,     1,
       2,     1,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     2,     1,     1,     3,     0,     1,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     2,     2,     2,     4,
       3,     5,     5,     1,     1,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     2,     1,     1,     1,
       2,     2,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     1,     1,     1,     1,     1,
       1,     3,     2,     2,     1,     1,     2,     1,     1,     3,
       2,     2,     1,     1,     1,     3,     0,     2,     1,     3,
       3,     4,     5,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     5,     5,     5,     4,     5,     4,     5,     5,     5,
       5,     5,     2,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     4,     5,     0,     3,
       2,     1,     3,     3,     0,     2,     1,     3,     1,     3,
       1,     3,     1,     3,     0,     0,     1,     0,     3,     2,
       0,     1,     0,     2,     0,     2,     0,     1,     1,     0,
       1,     0,     1,     2,     0,     2,     0,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     2,     0,     5,
       0,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     1,     0,     1,     0,     1,     0,     1,     0,
       1,     1,     0,     1,     0,     1,     0,     1,     0,     1,
       0,     1,     0,     1,     0,     1,     0,     1,     0,     1,
       0,     1,     0,     1,     0,     1,     0,     1,     0,     3,
       0,     1,     0,     1,     0,     1,     0,     1,     0,     1,
       0,     1,     0,     1,     1,     0,     1,     2,     0,     1,
       0,     1,     0,     1,     0,     1,     0,     1,     0,     1,
       1,     0,     1,     1,     0,     1,     1,     1,     0,     1,
       1,     0,     1,     0,     1,     0,     1,     1,     0,     2,
       2,     0,     1,     0,     1,     0,     1,     0,     1,     0,
       1,     0,     1,     1,     1,     0,     1,     0,     1,     0,
       1,     1,     0,     2,     1,     1,     0,     1,     0,     1,
       0,     1,     0,     1,     0,     1,     0,     1,     0,     1,
       1,     0,     1,     0,     1,     0,     1,     0,     1,     2,
       0,     1,     0,     1,     0,     1,     0,     1,     0,     1,
       0,     1,     0,     1,     0,     1,     0,     1,     0,     1,
       0,     1,     0,     3,     0,     1,     0,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     1,     2,     1,     2,     1,     2,     1,     2,     1,
       2,     1,     2,     2
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2:
#line 3329 "parser.y"
  {
	clear_initial_values ();
	current_program = NULL;
	defined_prog_list = NULL;
	cobc_cs_check = 0;
	main_flag_set = 0;
	current_program = cb_build_program (NULL, 0);
	cb_set_intr_when_compiled ();
	cb_build_registers ();
	cb_add_external_defined_registers ();
  }
#line 12319 "parser.c"
    break;

  case 3:
#line 3341 "parser.y"
  {
	if (!current_program->flag_validated) {
		current_program->flag_validated = 1;
		cb_validate_program_body (current_program);
	}
	if (depth > 1) {
		cb_error (_("multiple PROGRAM-ID's without matching END PROGRAM"));
	}
	if (cobc_flag_main && !main_flag_set) {
		cb_error (_("executable requested but no program found"));
	}
	if (errorcount > 0) {
		YYABORT;
	}
	if (!current_program->entry_list) {
		emit_main_entry (current_program, NULL);
	}
  }
#line 12342 "parser.c"
    break;

  case 6:
#line 3367 "parser.y"
  {
	first_prog = 1;
	depth = 0;
	setup_from_identification = 0;
  }
#line 12352 "parser.c"
    break;

  case 12:
#line 3386 "parser.y"
  {
	program_init_without_program_id ();
  }
#line 12360 "parser.c"
    break;

  case 13:
#line 3391 "parser.y"
  {
	backup_current_pos ();
	clean_up_program (NULL, COB_MODULE_TYPE_PROGRAM);
  }
#line 12369 "parser.c"
    break;

  case 16:
#line 3417 "parser.y"
  {
	backup_current_pos ();
	clean_up_program (NULL, COB_MODULE_TYPE_PROGRAM);
  }
#line 12378 "parser.c"
    break;

  case 20:
#line 3431 "parser.y"
  {
	backup_current_pos ();
  }
#line 12386 "parser.c"
    break;

  case 21:
#line 3435 "parser.y"
  {
	first_nested_program = 0;
	clean_up_program (yyvsp[-1], COB_MODULE_TYPE_PROGRAM);
  }
#line 12395 "parser.c"
    break;

  case 22:
#line 3443 "parser.y"
  {
	backup_current_pos ();
  }
#line 12403 "parser.c"
    break;

  case 23:
#line 3447 "parser.y"
  {
	clean_up_program (yyvsp[-1], COB_MODULE_TYPE_FUNCTION);
  }
#line 12411 "parser.c"
    break;

  case 24:
#line 3457 "parser.y"
  {
	cb_validate_program_environment (current_program);
  }
#line 12419 "parser.c"
    break;

  case 25:
#line 3461 "parser.y"
  {
	/* note:
	   we also validate all references we found so far here */
	cb_validate_program_data (current_program);
	within_typedef_definition = 0;
  }
#line 12430 "parser.c"
    break;

  case 29:
#line 3479 "parser.y"
  {
	setup_program_start ();
	setup_from_identification = 1;
  }
#line 12439 "parser.c"
    break;

  case 32:
#line 3492 "parser.y"
  {
	cobc_in_id = 1;
  }
#line 12447 "parser.c"
    break;

  case 33:
#line 3496 "parser.y"
  {
	if (setup_program (yyvsp[-1], yyvsp[0], COB_MODULE_TYPE_PROGRAM)) {
		YYABORT;
	}

	setup_prototype (yyvsp[-1], yyvsp[0], COB_MODULE_TYPE_PROGRAM, 1);
  }
#line 12459 "parser.c"
    break;

  case 34:
#line 3504 "parser.y"
  {
	cobc_cs_check = 0;
	cobc_in_id = 0;
  }
#line 12468 "parser.c"
    break;

  case 35:
#line 3512 "parser.y"
  {
	cobc_in_id = 1;
  }
#line 12476 "parser.c"
    break;

  case 36:
#line 3516 "parser.y"
  {
	if (setup_program (yyvsp[-2], yyvsp[-1], COB_MODULE_TYPE_FUNCTION)) {
		YYABORT;
	}
	setup_prototype (yyvsp[-2], yyvsp[-1], COB_MODULE_TYPE_FUNCTION, 1);
	cobc_cs_check = 0;
	cobc_in_id = 0;
  }
#line 12489 "parser.c"
    break;

  case 37:
#line 3528 "parser.y"
  {
	if (CB_REFERENCE_P (yyvsp[0]) && CB_WORD_COUNT (yyvsp[0]) > 0) {
		redefinition_error (yyvsp[0]);
	}
	/*
	  The program name is a key part of defining the current_program, so we
	  mustn't lose it (unlike in undefined_word).
	*/
	yyval = yyvsp[0];
  }
#line 12504 "parser.c"
    break;

  case 38:
#line 3539 "parser.y"
  {
	cb_trim_program_id (yyvsp[0]);
  }
#line 12512 "parser.c"
    break;

  case 40:
#line 3547 "parser.y"
  {
	cb_trim_program_id (yyvsp[0]);
  }
#line 12520 "parser.c"
    break;

  case 41:
#line 3553 "parser.y"
                                { yyval = NULL; }
#line 12526 "parser.c"
    break;

  case 42:
#line 3554 "parser.y"
                                { yyval = yyvsp[0]; }
#line 12532 "parser.c"
    break;

  case 45:
#line 3563 "parser.y"
  {
	if (!current_program->nested_level) {
		cb_error (_("COMMON may only be used in a contained program"));
	} else {
		current_program->flag_common = 1;
		cb_add_common_prog (current_program);
	}
  }
#line 12545 "parser.c"
    break;

  case 46:
#line 3572 "parser.y"
  {
	if (!current_program->nested_level) {
		cb_error (_("COMMON may only be used in a contained program"));
	} else {
		current_program->flag_common = 1;
		cb_add_common_prog (current_program);
	}
  }
#line 12558 "parser.c"
    break;

  case 48:
#line 3582 "parser.y"
  {
	CB_PENDING (_("CALL prototypes"));
  }
#line 12566 "parser.c"
    break;

  case 51:
#line 3594 "parser.y"
  {
	current_program->flag_initial = 1;
  }
#line 12574 "parser.c"
    break;

  case 52:
#line 3598 "parser.y"
  {
	current_program->flag_recursive = 1;
  }
#line 12582 "parser.c"
    break;

  case 54:
#line 3607 "parser.y"
  {
	cobc_cs_check = 0;
  }
#line 12590 "parser.c"
    break;

  case 58:
#line 3627 "parser.y"
  {
/* FIXME: the IBM-compatible ARITHMETIC should only be disabled
          for the specified program (and its nested programs)
   note: ibm-strict.conf has no OPTIONS paragraph, but ibm.conf does */
	cb_arithmetic_osvs = 0;
  }
#line 12601 "parser.c"
    break;

  case 59:
#line 3634 "parser.y"
  {
	CB_PENDING ("STANDARD ARITHMETIC");
  }
#line 12609 "parser.c"
    break;

  case 60:
#line 3638 "parser.y"
  {
	CB_PENDING ("STANDARD-BINARY ARITHMETIC");
  }
#line 12617 "parser.c"
    break;

  case 61:
#line 3642 "parser.y"
  {
	CB_PENDING ("STANDARD-DECIMAL ARITHMETIC");
  }
#line 12625 "parser.c"
    break;

  case 62:
#line 3657 "parser.y"
  {
	default_rounded_mode = cb_int (COB_STORE_ROUND);
  }
#line 12633 "parser.c"
    break;

  case 63:
#line 3661 "parser.y"
  {
	if (yyvsp[0]) {
		default_rounded_mode = yyvsp[0];
	} else {
		default_rounded_mode = cb_int (COB_STORE_ROUND);
	}
  }
#line 12645 "parser.c"
    break;

  case 65:
#line 3673 "parser.y"
  {
	current_program->entry_convention = yyvsp[0];
  }
#line 12653 "parser.c"
    break;

  case 66:
#line 3680 "parser.y"
  {
	yyval = cb_int (CB_CONV_COBOL);
  }
#line 12661 "parser.c"
    break;

  case 67:
#line 3684 "parser.y"
  {
	yyval = cb_int0;
  }
#line 12669 "parser.c"
    break;

  case 68:
#line 3688 "parser.y"
  {
	yyval = cb_int (CB_CONV_STDCALL);
  }
#line 12677 "parser.c"
    break;

  case 70:
#line 3696 "parser.y"
  {
	CB_PENDING ("INTERMEDIATE ROUNDING");
  }
#line 12685 "parser.c"
    break;

  case 71:
#line 3703 "parser.y"
  {
	yyval = cb_int (COB_STORE_ROUND | COB_STORE_NEAR_AWAY_FROM_ZERO);
  }
#line 12693 "parser.c"
    break;

  case 72:
#line 3707 "parser.y"
  {
	yyval = cb_int (COB_STORE_ROUND | COB_STORE_NEAR_EVEN);
  }
#line 12701 "parser.c"
    break;

  case 73:
#line 3711 "parser.y"
  {
	yyval = cb_int (COB_STORE_ROUND | COB_STORE_PROHIBITED);
  }
#line 12709 "parser.c"
    break;

  case 74:
#line 3715 "parser.y"
  {
	yyval = cb_int (COB_STORE_ROUND | COB_STORE_TRUNCATION);
  }
#line 12717 "parser.c"
    break;

  case 77:
#line 3730 "parser.y"
  {
	header_check |= COBC_HD_ENVIRONMENT_DIVISION;
  }
#line 12725 "parser.c"
    break;

  case 80:
#line 3744 "parser.y"
  {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_CONFIGURATION_SECTION;
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "CONFIGURATION SECTION");
	}
  }
#line 12737 "parser.c"
    break;

  case 90:
#line 3775 "parser.y"
  {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION, 0, 0);
	check_conf_section_order (COBC_HD_SOURCE_COMPUTER);
	set_conf_section_part (COBC_HD_SOURCE_COMPUTER);
  }
#line 12748 "parser.c"
    break;

  case 95:
#line 3791 "parser.y"
  {
	current_program->flag_debugging = 1;
	needs_debug_item = 1;
	cobc_cs_check = 0;
	cb_build_debug_item ();
  }
#line 12759 "parser.c"
    break;

  case 96:
#line 3803 "parser.y"
  {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION, 0, 0);
	check_conf_section_order (COBC_HD_OBJECT_COMPUTER);
	set_conf_section_part (COBC_HD_OBJECT_COMPUTER);
  }
#line 12770 "parser.c"
    break;

  case 97:
#line 3810 "parser.y"
  {
	cobc_cs_check = 0;
  }
#line 12778 "parser.c"
    break;

  case 108:
#line 3836 "parser.y"
  {
	cb_verify (cb_memory_size_clause, "MEMORY SIZE");
  }
#line 12786 "parser.c"
    break;

  case 109:
#line 3844 "parser.y"
  {
	current_program->collating_sequence = alphanumeric_collation;
	current_program->collating_sequence_n = national_collation;
  }
#line 12795 "parser.c"
    break;

  case 110:
#line 3852 "parser.y"
  {
	alphanumeric_collation = national_collation = NULL;
  }
#line 12803 "parser.c"
    break;

  case 112:
#line 3860 "parser.y"
  {
	alphanumeric_collation = yyvsp[0];
  }
#line 12811 "parser.c"
    break;

  case 113:
#line 3864 "parser.y"
  {
	alphanumeric_collation = yyvsp[-1];
	CB_PENDING_X (yyvsp[0], "NATIONAL COLLATING SEQUENCE");
	national_collation = yyvsp[0];
  }
#line 12821 "parser.c"
    break;

  case 114:
#line 3870 "parser.y"
  {
	alphanumeric_collation = yyvsp[0];
  }
#line 12829 "parser.c"
    break;

  case 115:
#line 3874 "parser.y"
  {
	CB_PENDING_X (yyvsp[0], "NATIONAL COLLATING SEQUENCE");
	national_collation = yyvsp[0];
  }
#line 12838 "parser.c"
    break;

  case 116:
#line 3880 "parser.y"
  {
	alphanumeric_collation = yyvsp[-4];
	CB_PENDING_X (yyvsp[0], "NATIONAL COLLATING SEQUENCE");
	national_collation = yyvsp[0];
  }
#line 12848 "parser.c"
    break;

  case 117:
#line 3887 "parser.y"
  {
	CB_PENDING_X (yyvsp[-4], "NATIONAL COLLATING SEQUENCE");
	national_collation = yyvsp[-4];
	alphanumeric_collation = yyvsp[0];
  }
#line 12858 "parser.c"
    break;

  case 118:
#line 3896 "parser.y"
  {
	if (cb_verify (cb_section_segments, "SEGMENT LIMIT")) {
		int segnum = cb_get_int (yyvsp[0]);
		if (segnum == 0 || segnum > 49) {
			cb_error (_("segment-number must be in range of values 1 to 49"));
			yyval = NULL;
		}
	}
	/* Ignore */
  }
#line 12873 "parser.c"
    break;

  case 119:
#line 3910 "parser.y"
  {
	if (current_program->classification) {
		cb_error (_("duplicate CLASSIFICATION clause"));
	} else {
		current_program->classification = yyvsp[0];
	}
  }
#line 12885 "parser.c"
    break;

  case 120:
#line 3921 "parser.y"
  {
	yyval = yyvsp[0];
  }
#line 12893 "parser.c"
    break;

  case 121:
#line 3925 "parser.y"
  {
	yyval = NULL;
  }
#line 12901 "parser.c"
    break;

  case 122:
#line 3929 "parser.y"
  {
	yyval = cb_int1;
  }
#line 12909 "parser.c"
    break;

  case 123:
#line 3933 "parser.y"
  {
	yyval = cb_int1;
  }
#line 12917 "parser.c"
    break;

  case 126:
#line 3947 "parser.y"
  {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION, 0, 0);
	check_conf_section_order (COBC_HD_REPOSITORY);
	set_conf_section_part (COBC_HD_REPOSITORY);
  }
#line 12928 "parser.c"
    break;

  case 127:
#line 3954 "parser.y"
  {
	cobc_in_repository = 0;
  }
#line 12936 "parser.c"
    break;

  case 130:
#line 3963 "parser.y"
  {
	yyerrok;
  }
#line 12944 "parser.c"
    break;

  case 133:
#line 3975 "parser.y"
  {
	functions_are_all = 1;
  }
#line 12952 "parser.c"
    break;

  case 134:
#line 3979 "parser.y"
  {
	if (yyvsp[-1] != cb_error_node) {
		setup_prototype (yyvsp[-1], yyvsp[0], COB_MODULE_TYPE_FUNCTION, 0);
	}
  }
#line 12962 "parser.c"
    break;

  case 136:
#line 3986 "parser.y"
  {
	  if (yyvsp[-1] != cb_error_node
	      && cb_verify (cb_program_prototypes, _("PROGRAM phrase"))) {
		setup_prototype (yyvsp[-1], yyvsp[0], COB_MODULE_TYPE_PROGRAM, 0);
	}
  }
#line 12973 "parser.c"
    break;

  case 137:
#line 3993 "parser.y"
  {
	yyerrok;
  }
#line 12981 "parser.c"
    break;

  case 138:
#line 4000 "parser.y"
  {
	current_program->function_spec_list =
		cb_list_add (current_program->function_spec_list, yyvsp[0]);
  }
#line 12990 "parser.c"
    break;

  case 139:
#line 4005 "parser.y"
  {
	current_program->function_spec_list =
		cb_list_add (current_program->function_spec_list, yyvsp[0]);
  }
#line 12999 "parser.c"
    break;

  case 140:
#line 4016 "parser.y"
  {
	check_duplicate = 0;
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION, 0, 0);
	check_conf_section_order (COBC_HD_SPECIAL_NAMES);
	set_conf_section_part (COBC_HD_SPECIAL_NAMES);
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "SPECIAL-NAMES");
	}
  }
#line 13014 "parser.c"
    break;

  case 159:
#line 4061 "parser.y"
  {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_SPECIAL_NAMES, 0);
	check_duplicate = 0;
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "SPECIAL-NAMES");
		save_tree = NULL;
	} else {
		/* lookup system name with special translation
		   note: result in NULL + raised error if not found */
		save_tree = get_system_name_translated (yyvsp[0]);
	}
  }
#line 13033 "parser.c"
    break;

  case 161:
#line 4080 "parser.y"
  {
	if (save_tree) {
		if (CB_SYSTEM_NAME(save_tree)->token != CB_DEVICE_CONSOLE) {
			cb_error_x (save_tree, _("invalid %s clause"), "");
		} else {
			current_program->flag_console_is_crt = 1;
		}
	}
  }
#line 13047 "parser.c"
    break;

  case 162:
#line 4091 "parser.y"
  {
	if (save_tree) {
		if (CB_SYSTEM_NAME(save_tree)->token != CB_FEATURE_CONVENTION) {
			cb_error_x (save_tree, _("invalid %s clause"), "SPECIAL NAMES");
		} else if (CB_VALID_TREE (yyvsp[0])) {
			CB_SYSTEM_NAME(save_tree)->value = yyvsp[-2];
			cb_define (yyvsp[0], save_tree);
			CB_CHAIN_PAIR (current_program->mnemonic_spec_list,
					yyvsp[0], save_tree);
			/* remove non-standard context-sensitive words when identical to mnemonic */
			if (strcasecmp (CB_NAME(yyvsp[0]), "EXTERN" ) == 0 ||
			    strcasecmp (CB_NAME(yyvsp[0]), "STDCALL") == 0 ||
			    strcasecmp (CB_NAME(yyvsp[0]), "STATIC" ) == 0 ||
			    strcasecmp (CB_NAME(yyvsp[0]), "C"      ) == 0 ||
			    strcasecmp (CB_NAME(yyvsp[0]), "PASCAL" ) == 0) {
				remove_context_sensitivity (CB_NAME(yyvsp[0]), CB_CS_CALL);
			}
		}
	}
  }
#line 13072 "parser.c"
    break;

  case 163:
#line 4112 "parser.y"
  {
	if (save_tree && CB_VALID_TREE (yyvsp[-1])) {
		cb_define (yyvsp[-1], save_tree);
		CB_CHAIN_PAIR (current_program->mnemonic_spec_list,
				yyvsp[-1], save_tree);
	}
  }
#line 13084 "parser.c"
    break;

  case 167:
#line 4128 "parser.y"
  {
	  check_on_off_duplicate = 0;
  }
#line 13092 "parser.c"
    break;

  case 168:
#line 4135 "parser.y"
  {
	cb_tree		x;

	/* cb_define_switch_name checks param validity */
	x = cb_define_switch_name (yyvsp[0], save_tree, yyvsp[-2] == cb_int1);
	if (x) {
		if (yyvsp[-2] == cb_int1) {
			check_repeated ("ON", SYN_CLAUSE_1, &check_on_off_duplicate);
		} else {
			check_repeated ("OFF", SYN_CLAUSE_2, &check_on_off_duplicate);
		}
		CB_CHAIN_PAIR (current_program->mnemonic_spec_list, yyvsp[0], x);
	}
  }
#line 13111 "parser.c"
    break;

  case 169:
#line 4150 "parser.y"
  {
	cb_tree		x;

	/* cb_define_switch_name checks param validity */
	x = cb_define_switch_name (yyvsp[0], save_tree, yyvsp[-2] == cb_int1);
	if (x) {
		if (yyvsp[-2] == cb_int1) {
			check_repeated ("ON", SYN_CLAUSE_1, &check_on_off_duplicate);
		} else {
			check_repeated ("OFF", SYN_CLAUSE_2, &check_on_off_duplicate);
		}
		CB_CHAIN_PAIR (current_program->mnemonic_spec_list, yyvsp[0], x);
	}
  }
#line 13130 "parser.c"
    break;

  case 170:
#line 4170 "parser.y"
  {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_SPECIAL_NAMES, 0);
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "SPECIAL-NAMES");
		yyval = NULL;
	} else {
		/* Returns null on error */
		yyval = cb_build_alphabet_name (yyvsp[0]);
	}
  }
#line 13147 "parser.c"
    break;

  case 171:
#line 4183 "parser.y"
  {
	if (yyvsp[-1]) {
		current_program->alphabet_name_list =
			cb_list_add (current_program->alphabet_name_list, yyvsp[-1]);
	}
	cobc_cs_check = 0;
  }
#line 13159 "parser.c"
    break;

  case 172:
#line 4194 "parser.y"
  {
	yyval = yyvsp[-1];
	if (yyvsp[-1]) {
		CB_ALPHABET_NAME (yyvsp[-1])->alphabet_target = CB_ALPHABET_ALPHANUMERIC;
	}
  }
#line 13170 "parser.c"
    break;

  case 174:
#line 4202 "parser.y"
  {
	yyval = yyvsp[-1];
	if (yyvsp[-1]) {
		CB_ALPHABET_NAME(yyvsp[-1])->alphabet_target = CB_ALPHABET_NATIONAL;
	}
  }
#line 13181 "parser.c"
    break;

  case 180:
#line 4223 "parser.y"
  {
	if (yyvsp[(-1) - (1)]) {
		CB_ALPHABET_NAME (yyvsp[(-1) - (1)])->alphabet_type = CB_ALPHABET_ASCII;
	}
  }
#line 13191 "parser.c"
    break;

  case 181:
#line 4229 "parser.y"
  {
	if (yyvsp[(-1) - (1)]) {
		CB_ALPHABET_NAME (yyvsp[(-1) - (1)])->alphabet_type = CB_ALPHABET_ASCII;
	}
  }
#line 13201 "parser.c"
    break;

  case 182:
#line 4235 "parser.y"
  {
	if (yyvsp[(-1) - (1)]) {
		CB_ALPHABET_NAME (yyvsp[(-1) - (1)])->alphabet_type = CB_ALPHABET_EBCDIC;
	}
  }
#line 13211 "parser.c"
    break;

  case 183:
#line 4241 "parser.y"
  {
	if (yyvsp[(-1) - (1)]) {
		CB_ALPHABET_NAME (yyvsp[(-1) - (1)])->alphabet_type = CB_ALPHABET_ASCII;
	}
  }
#line 13221 "parser.c"
    break;

  case 185:
#line 4251 "parser.y"
  {
	if (yyvsp[(-1) - (1)]) {
		CB_PENDING_X (yyvsp[(-1) - (1)], "ALPHABET UCS-4");
		CB_ALPHABET_NAME (yyvsp[(-1) - (1)])->alphabet_type = CB_ALPHABET_UCS_4;
	}
  }
#line 13232 "parser.c"
    break;

  case 186:
#line 4258 "parser.y"
  {
	if (yyvsp[(-1) - (1)]) {
		CB_PENDING_X (yyvsp[(-1) - (1)], "ALPHABET UTF-8");
		CB_ALPHABET_NAME (yyvsp[(-1) - (1)])->alphabet_type = CB_ALPHABET_UTF_8;
	}
  }
#line 13243 "parser.c"
    break;

  case 187:
#line 4265 "parser.y"
  {
	if (yyvsp[(-1) - (1)]) {
		CB_PENDING_X (yyvsp[(-1) - (1)], "ALPHABET UTF-16");
		CB_ALPHABET_NAME (yyvsp[(-1) - (1)])->alphabet_type = CB_ALPHABET_UTF_16;
	}
  }
#line 13254 "parser.c"
    break;

  case 188:
#line 4275 "parser.y"
  {
	if (yyvsp[(-1) - (1)]) {
		CB_ALPHABET_NAME (yyvsp[(-1) - (1)])->alphabet_type = CB_ALPHABET_NATIVE;
	}
  }
#line 13264 "parser.c"
    break;

  case 189:
#line 4281 "parser.y"
  {
	if (yyvsp[(-1) - (2)]) {
		CB_ALPHABET_NAME (yyvsp[(-1) - (2)])->alphabet_type = CB_ALPHABET_LOCALE;
		CB_ALPHABET_NAME (yyvsp[(-1) - (2)])->custom_list = yyvsp[0];
		CB_PENDING_X (yyvsp[(-1) - (2)], "LOCALE ALPHABET");
	}
  }
#line 13276 "parser.c"
    break;

  case 190:
#line 4289 "parser.y"
  {
	if (yyvsp[(-1) - (1)]) {
		CB_ALPHABET_NAME (yyvsp[(-1) - (1)])->alphabet_type = CB_ALPHABET_CUSTOM;
		CB_ALPHABET_NAME (yyvsp[(-1) - (1)])->custom_list = yyvsp[0];
	}
  }
#line 13287 "parser.c"
    break;

  case 191:
#line 4299 "parser.y"
  {
	yyval = CB_LIST_INIT (yyvsp[0]);
  }
#line 13295 "parser.c"
    break;

  case 192:
#line 4303 "parser.y"
  {
	yyval = cb_list_add (yyvsp[-1], yyvsp[0]);
  }
#line 13303 "parser.c"
    break;

  case 193:
#line 4310 "parser.y"
  {
	yyval = yyvsp[0];
  }
#line 13311 "parser.c"
    break;

  case 194:
#line 4314 "parser.y"
  {
	yyval = CB_BUILD_PAIR (yyvsp[-2], yyvsp[0]);
  }
#line 13319 "parser.c"
    break;

  case 195:
#line 4318 "parser.y"
  {
	yyval = CB_LIST_INIT (yyvsp[-1]);
  }
#line 13327 "parser.c"
    break;

  case 196:
#line 4322 "parser.y"
  {
	yyval = yyvsp[-1];
  }
#line 13335 "parser.c"
    break;

  case 197:
#line 4329 "parser.y"
  {
	cb_list_add (yyvsp[-1], yyvsp[0]);
  }
#line 13343 "parser.c"
    break;

  case 198:
#line 4333 "parser.y"
  {
	cb_list_add (yyvsp[-3], yyvsp[0]);
  }
#line 13351 "parser.c"
    break;

  case 199:
#line 4339 "parser.y"
                                { yyval = yyvsp[0]; }
#line 13357 "parser.c"
    break;

  case 200:
#line 4340 "parser.y"
                                { yyval = cb_space; }
#line 13363 "parser.c"
    break;

  case 201:
#line 4341 "parser.y"
                                { yyval = cb_zero; }
#line 13369 "parser.c"
    break;

  case 202:
#line 4342 "parser.y"
                                { yyval = cb_quote; }
#line 13375 "parser.c"
    break;

  case 203:
#line 4343 "parser.y"
                                { yyval = cb_norm_high; }
#line 13381 "parser.c"
    break;

  case 204:
#line 4344 "parser.y"
                                { yyval = cb_norm_low; }
#line 13387 "parser.c"
    break;

  case 205:
#line 4348 "parser.y"
                                { yyval = cb_space; }
#line 13393 "parser.c"
    break;

  case 206:
#line 4349 "parser.y"
                                { yyval = cb_zero; }
#line 13399 "parser.c"
    break;

  case 207:
#line 4357 "parser.y"
  {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_SPECIAL_NAMES, 0);
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "SPECIAL-NAMES");
	} else if (yyvsp[-1]) {
		CB_CHAIN_PAIR (current_program->symbolic_char_list, yyvsp[-1], yyvsp[0]);
	}
  }
#line 13414 "parser.c"
    break;

  case 208:
#line 4371 "parser.y"
  {
	yyval = NULL;
  }
#line 13422 "parser.c"
    break;

  case 209:
#line 4375 "parser.y"
  {
	yyval = yyvsp[0];
  }
#line 13430 "parser.c"
    break;

  case 210:
#line 4383 "parser.y"
  {
	yyval = yyvsp[0];
  }
#line 13438 "parser.c"
    break;

  case 211:
#line 4390 "parser.y"
  {
	yyval = yyvsp[0];
  }
#line 13446 "parser.c"
    break;

  case 212:
#line 4394 "parser.y"
  {
	if (yyvsp[0]) {
		yyval = cb_list_append (yyvsp[-1], yyvsp[0]);
	} else {
		yyval = yyvsp[-1];
	}
  }
#line 13458 "parser.c"
    break;

  case 213:
#line 4405 "parser.y"
  {
	cb_tree		l1;
	cb_tree		l2;

	if (cb_list_length (yyvsp[-2]) != cb_list_length (yyvsp[0])) {
		cb_error (_("invalid %s clause"), "SYMBOLIC");
		yyval = NULL;
	} else {
		l1 = yyvsp[-2];
		l2 = yyvsp[0];
		for (; l1; l1 = CB_CHAIN (l1), l2 = CB_CHAIN (l2)) {
			CB_PURPOSE (l1) = CB_VALUE (l2);
		}
		yyval = yyvsp[-2];
	}
  }
#line 13479 "parser.c"
    break;

  case 214:
#line 4425 "parser.y"
  {
	if (yyvsp[0] == NULL) {
		yyval = NULL;
	} else {
		yyval = CB_LIST_INIT (yyvsp[0]);
	}
  }
#line 13491 "parser.c"
    break;

  case 215:
#line 4433 "parser.y"
  {
	if (yyvsp[0] == NULL) {
		yyval = yyvsp[-1];
	} else {
		yyval = cb_list_add (yyvsp[-1], yyvsp[0]);
	}
  }
#line 13503 "parser.c"
    break;

  case 216:
#line 4443 "parser.y"
                                { yyval = CB_LIST_INIT (yyvsp[0]); }
#line 13509 "parser.c"
    break;

  case 217:
#line 4444 "parser.y"
                                { yyval = cb_list_add (yyvsp[-1], yyvsp[0]); }
#line 13515 "parser.c"
    break;

  case 218:
#line 4453 "parser.y"
  {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_SPECIAL_NAMES, 0);
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "SPECIAL-NAMES");
	}
	(void)cb_verify (cb_symbolic_constant, "SYMBOLIC CONSTANT");
  }
#line 13529 "parser.c"
    break;

  case 221:
#line 4471 "parser.y"
  {
	struct cb_field *f;
	cb_tree v;

	v = CB_LIST_INIT (yyvsp[0]);
	f = CB_FIELD (cb_build_constant (yyvsp[-2], v));
	f->flag_item_78 = 1;
	f->flag_constant = 1;
	f->flag_is_global = 1;
	f->level = 1;
	f->values = v;
	cb_needs_01 = 1;
	/* Ignore return value */
	(void)cb_validate_78_item (f, 0);
  }
#line 13549 "parser.c"
    break;

  case 222:
#line 4492 "parser.y"
  {
	cb_tree		x;

	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_SPECIAL_NAMES, 0);
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "SPECIAL-NAMES");
	} else {
		/* Returns null on error */
		x = cb_build_class_name (yyvsp[-4], yyvsp[-1]);
		if (x) {
			current_program->class_name_list =
				cb_list_add (current_program->class_name_list, x);
		}
	}
  }
#line 13571 "parser.c"
    break;

  case 223:
#line 4512 "parser.y"
                                { yyval = CB_LIST_INIT (yyvsp[0]); }
#line 13577 "parser.c"
    break;

  case 224:
#line 4513 "parser.y"
                                { yyval = cb_list_add (yyvsp[-1], yyvsp[0]); }
#line 13583 "parser.c"
    break;

  case 225:
#line 4518 "parser.y"
  {
	yyval = yyvsp[0];
  }
#line 13591 "parser.c"
    break;

  case 226:
#line 4522 "parser.y"
  {
	if (CB_TREE_CLASS (yyvsp[-2]) != CB_CLASS_NUMERIC &&
	    CB_LITERAL_P (yyvsp[-2]) && CB_LITERAL (yyvsp[-2])->size != 1) {
		cb_error (_("CLASS literal with THRU must have size 1"));
	}
	if (CB_TREE_CLASS (yyvsp[0]) != CB_CLASS_NUMERIC &&
	    CB_LITERAL_P (yyvsp[0]) && CB_LITERAL (yyvsp[0])->size != 1) {
		cb_error (_("CLASS literal with THRU must have size 1"));
	}
	if (literal_value (yyvsp[-2]) <= literal_value (yyvsp[0])) {
		yyval = CB_BUILD_PAIR (yyvsp[-2], yyvsp[0]);
	} else {
		yyval = CB_BUILD_PAIR (yyvsp[0], yyvsp[-2]);
	}
  }
#line 13611 "parser.c"
    break;

  case 228:
#line 4542 "parser.y"
  {
	yyval = NULL;
  }
#line 13619 "parser.c"
    break;

  case 229:
#line 4546 "parser.y"
  {
	CB_PENDING_X (yyvsp[0], "NATIONAL CLASS");
	yyval = cb_int0;
  }
#line 13628 "parser.c"
    break;

  case 231:
#line 4555 "parser.y"
  {
	CB_PENDING_X (yyvsp[0], _("CLASS IS integer IN alphabet-name"));
	yyval = yyvsp[0];
  }
#line 13637 "parser.c"
    break;

  case 232:
#line 4565 "parser.y"
  {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_SPECIAL_NAMES, 0);
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "SPECIAL-NAMES");
	} else {
		/* Returns null on error */
		cb_tree	l = cb_build_locale_name (yyvsp[-2], yyvsp[0]);
		if (l) {
			current_program->locale_list =
				cb_list_add (current_program->locale_list, l);
		}
	}
  }
#line 13657 "parser.c"
    break;

  case 233:
#line 4586 "parser.y"
  {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_SPECIAL_NAMES, 0);
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "SPECIAL-NAMES");
	} else {
		unsigned int	error_ind = 0;

		/* FIXME: actual allowed (depending on dialect), see FR #246 */
		check_repeated ("CURRENCY", SYN_CLAUSE_1, &check_duplicate);

		/* checks of CURRENCY SIGN (being currency string) when separate */
		if (yyvsp[0]) {
			unsigned int	char_seen = 0;
			unsigned char	*s = CB_LITERAL (yyvsp[-1])->data;

			CB_PENDING_X (yyvsp[-1], _("separate currency symbol and currency string"));
			while (*s) {
				switch (*s) {
				case '0':
				case '1':
				case '2':
				case '3':
				case '4':
				case '5':
				case '6':
				case '7':
				case '8':
				case '9':
				case '+':
				case '-':
				case ',':
				case '.':
				case '*':
					error_ind = 1;
					break;
				case ' ':
					break;
				default:
					char_seen = 1;
					break;
				}
				s++;
			}
			if (!char_seen) {
				error_ind = 1;
			}
		}
		if (error_ind) {
			cb_error_x (yyvsp[-1], _("invalid CURRENCY SIGN '%s'"), (char*)CB_LITERAL (yyvsp[-1])->data);
		}
		if (yyvsp[0]) {
			set_currency_picture_symbol (yyvsp[0]);
		} else {
			if (!error_ind) {
				set_currency_picture_symbol (yyvsp[-1]);
			}
		}
	}
  }
#line 13723 "parser.c"
    break;

  case 234:
#line 4652 "parser.y"
  {
	yyval = NULL;
  }
#line 13731 "parser.c"
    break;

  case 235:
#line 4656 "parser.y"
  {
	yyval = yyvsp[0];
  }
#line 13739 "parser.c"
    break;

  case 236:
#line 4665 "parser.y"
  {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_SPECIAL_NAMES, 0);
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "SPECIAL-NAMES");
	} else {
		check_repeated ("DECIMAL-POINT", SYN_CLAUSE_2, &check_duplicate);
		current_program->decimal_point = ',';
		current_program->numeric_separator = '.';
	}
  }
#line 13756 "parser.c"
    break;

  case 237:
#line 4684 "parser.y"
  {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_SPECIAL_NAMES, 0);
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "SPECIAL-NAMES");
	} else {
		current_program->flag_trailing_separate = 1;
	}
  }
#line 13771 "parser.c"
    break;

  case 238:
#line 4700 "parser.y"
  {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_SPECIAL_NAMES, 0);
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "SPECIAL-NAMES");
	} else {
		check_repeated ("CURSOR", SYN_CLAUSE_3, &check_duplicate);
		current_program->cursor_pos = yyvsp[0];
	}
  }
#line 13787 "parser.c"
    break;

  case 239:
#line 4718 "parser.y"
  {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_SPECIAL_NAMES, 0);
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "SPECIAL-NAMES");
	} else {
		check_repeated ("CRT STATUS", SYN_CLAUSE_4, &check_duplicate);
		current_program->crt_status = yyvsp[0];
	}
  }
#line 13803 "parser.c"
    break;

  case 240:
#line 4736 "parser.y"
  {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_SPECIAL_NAMES, 0);
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "SPECIAL-NAMES");
	} else {
		check_repeated ("SCREEN CONTROL", SYN_CLAUSE_5, &check_duplicate);
		CB_PENDING ("SCREEN CONTROL");
	}
  }
#line 13819 "parser.c"
    break;

  case 241:
#line 4753 "parser.y"
  {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_SPECIAL_NAMES, 0);
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "SPECIAL-NAMES");
	} else {
		check_repeated ("EVENT STATUS", SYN_CLAUSE_6, &check_duplicate);
		CB_PENDING ("EVENT STATUS");
	}
  }
#line 13835 "parser.c"
    break;

  case 242:
#line 4770 "parser.y"
  {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_SPECIAL_NAMES, 0);
	check_duplicate = 0;
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "SPECIAL-NAMES");
		save_tree = NULL;
	} else {
		/* lookup system name
		   note: result in NULL + raised error if not found */
		save_tree = get_system_name ("TOP");
	}
  }
#line 13854 "parser.c"
    break;

  case 243:
#line 4785 "parser.y"
  {
	if (save_tree && CB_VALID_TREE (yyvsp[0])) {
		cb_define (yyvsp[0], save_tree);
		CB_CHAIN_PAIR (current_program->mnemonic_spec_list,
				yyvsp[0], save_tree);
	}
  }
#line 13866 "parser.c"
    break;

  case 246:
#line 4805 "parser.y"
  {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_INPUT_OUTPUT_SECTION;
  }
#line 13875 "parser.c"
    break;

  case 248:
#line 4815 "parser.y"
  {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_INPUT_OUTPUT_SECTION, 0, 0);
	header_check |= COBC_HD_FILE_CONTROL;
  }
#line 13885 "parser.c"
    break;

  case 251:
#line 4828 "parser.y"
  {
	char	buff[COB_MINI_BUFF];
	  
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_INPUT_OUTPUT_SECTION,
			       COBC_HD_FILE_CONTROL, 0);
	check_duplicate = 0;
	if (CB_VALID_TREE (yyvsp[0])) {
		/* Build new file */
		current_file = build_file (yyvsp[0]);
		current_file->optional = CB_INTEGER (yyvsp[-1])->val;

		/* Add file to current program list */
		CB_ADD_TO_CHAIN (CB_TREE (current_file),
				 current_program->file_list);
	} else {
		/* Create dummy file */
		snprintf (buff, COB_MINI_BUFF, "SELECT on line %d",
			  cb_source_line);
		current_file = build_file (cb_build_reference (buff));
		CB_ADD_TO_CHAIN (CB_TREE (current_file),
				 current_program->file_list);

	}
	key_type = NO_KEY;
  }
#line 13916 "parser.c"
    break;

  case 252:
#line 4855 "parser.y"
  {
	cobc_cs_check = 0;
	if (CB_VALID_TREE (yyvsp[-2])) {
		if (current_file->organization == COB_ORG_INDEXED
		    && key_type == RELATIVE_KEY) {
			cb_error_x (current_file->key,
				    _("cannot use RELATIVE KEY clause on INDEXED files"));
		} else if (current_file->organization == COB_ORG_RELATIVE
			   && key_type == RECORD_KEY) {
			cb_error_x (current_file->key,
				    _("cannot use RECORD KEY clause on RELATIVE files"));
		}

		validate_file (current_file, yyvsp[-2]);
	}
  }
#line 13937 "parser.c"
    break;

  case 254:
#line 4876 "parser.y"
  {
	yyerrok;
  }
#line 13945 "parser.c"
    break;

  case 256:
#line 4883 "parser.y"
  {
	/* reset context-sensitive words for next clauses */
	cobc_cs_check = CB_CS_SELECT;
  }
#line 13954 "parser.c"
    break;

  case 276:
#line 4936 "parser.y"
  {
	check_repeated ("ASSIGN", SYN_CLAUSE_1, &check_duplicate);
	if (ext_dyn_specified) {
		cb_error (_("EXTERNAL/DYNAMIC cannot be used with literals"));
	}

	current_file->assign_type = CB_ASSIGN_EXT_FILE_NAME_REQUIRED;
	current_file->assign = cb_build_assignment_name (current_file, yyvsp[0]);
  }
#line 13968 "parser.c"
    break;

  case 277:
#line 4946 "parser.y"
  {
	check_repeated ("ASSIGN", SYN_CLAUSE_1, &check_duplicate);

	/* current_file->assign_type is set by _ext_clause */
	if (!ext_dyn_specified) {
		current_file->flag_assign_no_keyword = 1;
	}
	current_file->assign = cb_build_assignment_name (current_file, yyvsp[0]);
  }
#line 13982 "parser.c"
    break;

  case 278:
#line 4956 "parser.y"
  {
	check_repeated ("ASSIGN", SYN_CLAUSE_1, &check_duplicate);
	if (ext_dyn_specified) {
		cb_error (_("EXTERNAL/DYNAMIC cannot be used with USING/VARYING"));
	}
        cb_verify (cb_assign_using_variable, "ASSIGN USING/VARYING variable");

	current_file->assign_type = CB_ASSIGN_VARIABLE_REQUIRED;
	current_file->assign = cb_build_assignment_name (current_file, yyvsp[0]);
  }
#line 13997 "parser.c"
    break;

  case 279:
#line 4967 "parser.y"
  {
	check_repeated ("ASSIGN", SYN_CLAUSE_1, &check_duplicate);
	if (ext_dyn_specified) {
		cb_error (_("EXTERNAL/DYNAMIC cannot be used with DISK FROM"));
	}
	cb_verify (cb_assign_disk_from, _("ASSIGN DISK FROM"));

	current_file->assign_type = CB_ASSIGN_VARIABLE_REQUIRED;
	current_file->assign = cb_build_assignment_name (current_file, yyvsp[0]);
  }
#line 14012 "parser.c"
    break;

  case 280:
#line 4978 "parser.y"
  {
	if (assign_device == CB_ASSIGN_DISPLAY_DEVICE) {
		current_file->assign =
			cb_build_alphanumeric_literal ("stdout", (size_t)6);
		current_file->special = COB_SELECT_STDOUT;
	} else if (assign_device == CB_ASSIGN_KEYBOARD_DEVICE) {
		current_file->assign =
			cb_build_alphanumeric_literal ("stdin", (size_t)5);
		current_file->special = COB_SELECT_STDIN;
	} else if (assign_device == CB_ASSIGN_PRINTER_DEVICE) {
		current_file->organization = COB_ORG_LINE_SEQUENTIAL;
		current_file->assign =
			cb_build_alphanumeric_literal ("PRINTER", (size_t)7);
	} else if (assign_device == CB_ASSIGN_PRINTER_1_DEVICE) {
		current_file->organization = COB_ORG_LINE_SEQUENTIAL;
		current_file->assign =
			cb_build_alphanumeric_literal ("PRINTER-1", (size_t)9);
	} else if (assign_device == CB_ASSIGN_PRINT_DEVICE) {
		current_file->organization = COB_ORG_LINE_SEQUENTIAL;
		current_file->assign =
			cb_build_alphanumeric_literal ("LPT1", (size_t)4);
	} else if (assign_device == CB_ASSIGN_LINE_SEQ_DEVICE
		   || assign_device == CB_ASSIGN_GENERAL_DEVICE) {
		current_file->flag_fileid = 1;
	}
  }
#line 14043 "parser.c"
    break;

  case 281:
#line 5008 "parser.y"
  {
	assign_device = CB_ASSIGN_NO_DEVICE;
  }
#line 14051 "parser.c"
    break;

  case 282:
#line 5012 "parser.y"
  {
	assign_device = CB_ASSIGN_NO_DEVICE;
  }
#line 14059 "parser.c"
    break;

  case 284:
#line 5020 "parser.y"
  {
	assign_device = CB_ASSIGN_GENERAL_DEVICE;
  }
#line 14067 "parser.c"
    break;

  case 285:
#line 5024 "parser.y"
  {
	current_file->organization = COB_ORG_LINE_SEQUENTIAL;
	assign_device = CB_ASSIGN_LINE_SEQ_DEVICE;
  }
#line 14076 "parser.c"
    break;

  case 286:
#line 5029 "parser.y"
  {
	assign_device = CB_ASSIGN_DISPLAY_DEVICE;
  }
#line 14084 "parser.c"
    break;

  case 287:
#line 5033 "parser.y"
  {
	assign_device = CB_ASSIGN_KEYBOARD_DEVICE;
  }
#line 14092 "parser.c"
    break;

  case 288:
#line 5041 "parser.y"
  {
	assign_device = CB_ASSIGN_PRINTER_DEVICE;
  }
#line 14100 "parser.c"
    break;

  case 289:
#line 5045 "parser.y"
  {
	assign_device = CB_ASSIGN_PRINTER_1_DEVICE;
  }
#line 14108 "parser.c"
    break;

  case 290:
#line 5049 "parser.y"
  {
	assign_device = CB_ASSIGN_PRINT_DEVICE;
  }
#line 14116 "parser.c"
    break;

  case 302:
#line 5074 "parser.y"
  {
	current_file->flag_line_adv = 1;
  }
#line 14124 "parser.c"
    break;

  case 303:
#line 5081 "parser.y"
  {
	ext_dyn_specified = 0;
	current_file->assign_type = cb_assign_type_default;
  }
#line 14133 "parser.c"
    break;

  case 304:
#line 5086 "parser.y"
  {
	ext_dyn_specified = 1;
	cb_verify (cb_assign_ext_dyn, _("ASSIGN EXTERNAL/DYNAMIC"));
  }
#line 14142 "parser.c"
    break;

  case 305:
#line 5094 "parser.y"
  {
	current_file->assign_type = CB_ASSIGN_EXT_FILE_NAME_REQUIRED;
  }
#line 14150 "parser.c"
    break;

  case 306:
#line 5098 "parser.y"
  {
	current_file->assign_type = CB_ASSIGN_VARIABLE_REQUIRED;
  }
#line 14158 "parser.c"
    break;

  case 309:
#line 5112 "parser.y"
  {
	check_repeated ("ACCESS", SYN_CLAUSE_2, &check_duplicate);
  }
#line 14166 "parser.c"
    break;

  case 310:
#line 5118 "parser.y"
                        { current_file->access_mode = COB_ACCESS_SEQUENTIAL; }
#line 14172 "parser.c"
    break;

  case 311:
#line 5119 "parser.y"
                        { current_file->access_mode = COB_ACCESS_DYNAMIC; }
#line 14178 "parser.c"
    break;

  case 312:
#line 5120 "parser.y"
                        { current_file->access_mode = COB_ACCESS_RANDOM; }
#line 14184 "parser.c"
    break;

  case 313:
#line 5128 "parser.y"
  {
	struct cb_alt_key *p;
	struct cb_alt_key *l;

	cb_tree composite_key;

	p = cobc_parse_malloc (sizeof (struct cb_alt_key));
	p->key = yyvsp[-4];
	p->component_list = NULL;
	if (yyvsp[-2]) {
		p->duplicates = CB_INTEGER (yyvsp[-2])->val;
	} else {
		/* note: we may add a compiler configuration here,
		         as at least ICOBOL defaults to WITH DUPLICATES
		         for ALTERNATE keys if not explicit deactivated
		*/
		p->duplicates = 0;
	}
	p->password = yyvsp[-1];
	if (yyvsp[0]) {
		p->tf_suppress = 1;
		p->char_suppress = CB_INTEGER (yyvsp[0])->val;
	} else {
		p->tf_suppress = 0;
	}
	p->next = NULL;

	/* handle split keys */
	if (yyvsp[-3]) {
		/* generate field (in w-s) for composite-key */
		composite_key = cb_build_field(yyvsp[-4]);
		if (composite_key == cb_error_node) {
			YYERROR;
		} else {
			composite_key->category = CB_CATEGORY_ALPHANUMERIC;
			((struct cb_field *)composite_key)->count = 1;
			p->key = cb_build_field_reference((struct cb_field *)composite_key, NULL);
			p->component_list = key_component_list;
		}
	}

	/* Add to the end of list */
	if (current_file->alt_key_list == NULL) {
		current_file->alt_key_list = p;
	} else {
		l = current_file->alt_key_list;
		for (; l->next; l = l->next) { ; }
		l->next = p;
	}
  }
#line 14239 "parser.c"
    break;

  case 314:
#line 5182 "parser.y"
  {
	yyval = NULL;
  }
#line 14247 "parser.c"
    break;

  case 316:
#line 5190 "parser.y"
  {
	CB_PENDING ("PASSWORD clause");
  }
#line 14255 "parser.c"
    break;

  case 317:
#line 5194 "parser.y"
  {
	yyval = yyvsp[0];
  }
#line 14263 "parser.c"
    break;

  case 318:
#line 5215 "parser.y"
  {
	yyval = NULL;
  }
#line 14271 "parser.c"
    break;

  case 319:
#line 5219 "parser.y"
  {
	yyval = cb_int (literal_value (yyvsp[0]));
  }
#line 14279 "parser.c"
    break;

  case 320:
#line 5223 "parser.y"
  {
	yyval = cb_int (literal_value (yyvsp[0]));
  }
#line 14287 "parser.c"
    break;

  case 321:
#line 5233 "parser.y"
  {
	check_repeated ("COLLATING", SYN_CLAUSE_3, &check_duplicate);
	current_file->collating_sequence = alphanumeric_collation;
	current_file->collating_sequence_n = national_collation;
	CB_PENDING ("FILE COLLATING SEQUENCE");
  }
#line 14298 "parser.c"
    break;

  case 322:
#line 5243 "parser.y"
  {
	alphanumeric_collation = national_collation = NULL;
  }
#line 14306 "parser.c"
    break;

  case 324:
#line 5251 "parser.y"
  {
	alphanumeric_collation = yyvsp[0];
  }
#line 14314 "parser.c"
    break;

  case 325:
#line 5255 "parser.y"
  {
	alphanumeric_collation = yyvsp[-1];
	CB_PENDING_X (yyvsp[0], "NATIONAL COLLATING SEQUENCE");
	national_collation = yyvsp[0];
  }
#line 14324 "parser.c"
    break;

  case 326:
#line 5261 "parser.y"
  {
	alphanumeric_collation = yyvsp[0];
  }
#line 14332 "parser.c"
    break;

  case 327:
#line 5265 "parser.y"
  {
	CB_PENDING_X (yyvsp[0], "NATIONAL COLLATING SEQUENCE");
	national_collation = yyvsp[0];
  }
#line 14341 "parser.c"
    break;

  case 328:
#line 5271 "parser.y"
  {
	alphanumeric_collation = yyvsp[-4];
	CB_PENDING_X (yyvsp[0], "NATIONAL COLLATING SEQUENCE");
	national_collation = yyvsp[0];
  }
#line 14351 "parser.c"
    break;

  case 329:
#line 5278 "parser.y"
  {
	CB_PENDING_X (yyvsp[-4], "NATIONAL COLLATING SEQUENCE");
	national_collation = yyvsp[-4];
	alphanumeric_collation = yyvsp[0];
  }
#line 14361 "parser.c"
    break;

  case 330:
#line 5287 "parser.y"
  {
	/* note: both entries must be resolved later on
	   and also attached to the correct key later, so just store in a list here: */
	current_file->collating_sequence_keys =
		cb_list_add(current_file->collating_sequence_keys, CB_BUILD_PAIR (yyvsp[0], yyvsp[-2]));
	CB_PENDING ("KEY COLLATING SEQUENCE");
  }
#line 14373 "parser.c"
    break;

  case 331:
#line 5298 "parser.y"
  {
	if (CB_ALPHABET_NAME_P (cb_ref (yyvsp[0]))) {
		yyval = yyvsp[0];
	} else {
		cb_error_x (yyvsp[0], _("'%s' is not an alphabet-name"),
			cb_name (yyvsp[0]));
		yyval = cb_error_node;
	}
  }
#line 14387 "parser.c"
    break;

  case 332:
#line 5313 "parser.y"
  {
	check_repeated ("STATUS", SYN_CLAUSE_4, &check_duplicate);
	current_file->file_status = yyvsp[-1];
	if (yyvsp[0]) {
		/* Ignore VSAM STATUS field */
		cb_verify (cb_vsam_status, _("VSAM status"));
	}
  }
#line 14400 "parser.c"
    break;

  case 336:
#line 5332 "parser.y"
  {
	check_repeated ("LOCK", SYN_CLAUSE_5, &check_duplicate);
  }
#line 14408 "parser.c"
    break;

  case 338:
#line 5340 "parser.y"
  {
	current_file->lock_mode |= COB_LOCK_MANUAL;
  }
#line 14416 "parser.c"
    break;

  case 339:
#line 5344 "parser.y"
  {
	current_file->lock_mode |= COB_LOCK_AUTOMATIC;
  }
#line 14424 "parser.c"
    break;

  case 340:
#line 5348 "parser.y"
  {
	current_file->lock_mode |= COB_LOCK_EXCLUSIVE;
  }
#line 14432 "parser.c"
    break;

  case 343:
#line 5357 "parser.y"
  {
	current_file->lock_mode |= COB_LOCK_MULTIPLE;
  }
#line 14440 "parser.c"
    break;

  case 344:
#line 5361 "parser.y"
  {
	current_file->lock_mode |= COB_LOCK_MULTIPLE;
  }
#line 14448 "parser.c"
    break;

  case 347:
#line 5372 "parser.y"
  {
	CB_PENDING ("WITH ROLLBACK");
  }
#line 14456 "parser.c"
    break;

  case 349:
#line 5379 "parser.y"
  {
	if (current_file->organization == COB_ORG_INDEXED) {
		current_file->lock_mode |= COB_LOCK_EXCLUSIVE;
		/* TODO: pass extra flag to fileio */
		CB_PENDING ("WITH MASS-UPDATE");
	} else {
		cb_error (_("%s only valid with ORGANIZATION %s"), "MASS-UPDATE", "INDEXED");
	}
  }
#line 14470 "parser.c"
    break;

  case 352:
#line 5400 "parser.y"
  {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6, &check_duplicate);
	error_if_record_delimiter_incompatible (COB_ORG_INDEXED, "INDEXED");
	current_file->organization = COB_ORG_INDEXED;
  }
#line 14480 "parser.c"
    break;

  case 353:
#line 5406 "parser.y"
  {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6, &check_duplicate);
	error_if_record_delimiter_incompatible (COB_ORG_SEQUENTIAL, "SEQUENTIAL");
	current_file->organization = COB_ORG_SEQUENTIAL;
  }
#line 14490 "parser.c"
    break;

  case 354:
#line 5412 "parser.y"
  {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6, &check_duplicate);
	error_if_record_delimiter_incompatible (COB_ORG_RELATIVE, "RELATIVE");
	current_file->organization = COB_ORG_RELATIVE;
  }
#line 14500 "parser.c"
    break;

  case 355:
#line 5418 "parser.y"
  {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6, &check_duplicate);
	error_if_record_delimiter_incompatible (COB_ORG_LINE_SEQUENTIAL,
						"LINE SEQUENTIAL");
	current_file->organization = COB_ORG_LINE_SEQUENTIAL;
  }
#line 14511 "parser.c"
    break;

  case 356:
#line 5431 "parser.y"
  {
	check_repeated ("PADDING", SYN_CLAUSE_7, &check_duplicate);
	cb_verify (cb_padding_character_clause, "PADDING CHARACTER");
  }
#line 14520 "parser.c"
    break;

  case 357:
#line 5441 "parser.y"
  {
	check_repeated ("RECORD DELIMITER", SYN_CLAUSE_8, &check_duplicate);
	current_file->flag_delimiter = 1;
  }
#line 14529 "parser.c"
    break;

  case 359:
#line 5450 "parser.y"
  {
	if (current_file->organization != COB_ORG_SEQUENTIAL) {
		cb_error (_("RECORD DELIMITER %s only allowed with SEQUENTIAL files"),
			  "STANDARD-1");
		current_file->flag_delimiter = 0;
	} else if (cb_verify (cb_record_delimiter, _("RECORD DELIMITER clause"))) {
		cb_warning (cb_warn_additional,
			    _("%s ignored"), "RECORD DELIMITER STANDARD-1");
	}
  }
#line 14544 "parser.c"
    break;

  case 360:
#line 5461 "parser.y"
  {
	if (current_file->organization != COB_ORG_SEQUENTIAL
	 && current_file->organization != COB_ORG_LINE_SEQUENTIAL) {
		cb_error (_("RECORD DELIMITER %s only allowed with (LINE) SEQUENTIAL files"),
			  "LINE-SEQUENTIAL");
		current_file->flag_delimiter = 0;
	}

	if (cb_verify (cb_record_delimiter, _("RECORD DELIMITER clause"))
	 && cb_verify (cb_sequential_delimiters, _("LINE-SEQUENTIAL phrase"))) {
		current_file->organization = COB_ORG_LINE_SEQUENTIAL;
	}
  }
#line 14562 "parser.c"
    break;

  case 361:
#line 5475 "parser.y"
  {
	if (current_file->organization != COB_ORG_SEQUENTIAL) {
		cb_error (_("RECORD DELIMITER %s only allowed with SEQUENTIAL files"),
			  "BINARY-SEQUENTIAL");
		current_file->flag_delimiter = 0;
	}

	if (cb_verify (cb_record_delimiter, _("RECORD DELIMITER clause"))
	 && cb_verify (cb_sequential_delimiters, _("BINARY-SEQUENTIAL phrase"))) {
		current_file->organization = COB_ORG_SEQUENTIAL;
	}
  }
#line 14579 "parser.c"
    break;

  case 362:
#line 5488 "parser.y"
  {
	if (current_file->organization != COB_ORG_SEQUENTIAL
	 && current_file->organization != COB_ORG_LINE_SEQUENTIAL) {
		cb_error (_("RECORD DELIMITER clause only allowed with (LINE) SEQUENTIAL files"));
		current_file->flag_delimiter = 0;
	} else if (cb_verify (cb_record_delimiter, _("RECORD DELIMITER clause"))) {
		cb_warning (cb_warn_additional,
			    _("RECORD DELIMITER %s not recognized; will be ignored"), cb_name (yyvsp[0]));
	}
  }
#line 14594 "parser.c"
    break;

  case 363:
#line 5504 "parser.y"
  {
	cb_tree composite_key;

	check_repeated ("RECORD KEY", SYN_CLAUSE_9, &check_duplicate);
	current_file->key = yyvsp[-3];
	key_type = RECORD_KEY;

	/* handle split keys */
	if (yyvsp[-2]) {
		/* generate field (in w-s) for composite-key */
		composite_key = cb_build_field (yyvsp[-3]);
		if (composite_key == cb_error_node) {
			YYERROR;
		} else {
			composite_key->category = CB_CATEGORY_ALPHANUMERIC;
			((struct cb_field *)composite_key)->count = 1;
			current_file->key = cb_build_field_reference ((struct cb_field *)composite_key, NULL);
			current_file->component_list = key_component_list;
		}
	}
	current_file->password = yyvsp[-1];
	if (yyvsp[0]) {
		/* note: we *may* add a compiler configuration here,
		         as most dialects do not allow this clause
		         on primary keys */
		if (CB_INTEGER (yyvsp[0])->val) {
			/* note: see ACUCOBOL docs for implementation notes, including [RE]WRITE rules
			         and "if the underlying (file) system does not support them OPEN
					 result in (sucessfull) io-status 0M" */
			CB_PENDING (_("DUPLICATES for primary keys"));
		};

	}
  }
#line 14633 "parser.c"
    break;

  case 364:
#line 5542 "parser.y"
  {
  	yyval = NULL;
  }
#line 14641 "parser.c"
    break;

  case 365:
#line 5546 "parser.y"
  {
  	yyval = cb_int0;
  }
#line 14649 "parser.c"
    break;

  case 368:
#line 5557 "parser.y"
  {
	key_component_list = NULL;
  }
#line 14657 "parser.c"
    break;

  case 371:
#line 5567 "parser.y"
  {
	struct cb_key_component *c;
	struct cb_key_component *comp = cobc_main_malloc (sizeof(struct cb_key_component));
	comp->next = NULL;
	comp->component = yyvsp[0];
	if (key_component_list == NULL) {
		key_component_list = comp;
	} else {
		for (c = key_component_list; c->next != NULL; c = c->next);
		c->next = comp;
	}
  }
#line 14674 "parser.c"
    break;

  case 372:
#line 5585 "parser.y"
  {
	check_repeated ("RELATIVE KEY", SYN_CLAUSE_10, &check_duplicate);
	current_file->key = yyvsp[0];
	key_type = RELATIVE_KEY;
  }
#line 14684 "parser.c"
    break;

  case 373:
#line 5596 "parser.y"
  {
	check_repeated ("RESERVE", SYN_CLAUSE_11, &check_duplicate);
  }
#line 14692 "parser.c"
    break;

  case 376:
#line 5610 "parser.y"
  {
	check_repeated ("SHARING", SYN_CLAUSE_12, &check_duplicate);
	current_file->sharing = yyvsp[0];
  }
#line 14701 "parser.c"
    break;

  case 377:
#line 5622 "parser.y"
                                { yyval = NULL; }
#line 14707 "parser.c"
    break;

  case 378:
#line 5623 "parser.y"
                                { yyval = cb_int (COB_LOCK_OPEN_EXCLUSIVE); }
#line 14713 "parser.c"
    break;

  case 379:
#line 5624 "parser.y"
                                { yyval = NULL; }
#line 14719 "parser.c"
    break;

  case 380:
#line 5631 "parser.y"
  {
	(void)cb_verify (CB_OBSOLETE, "FILE-LIMIT");
	check_repeated ("FILE-LIMIT", SYN_CLAUSE_13, &check_duplicate);
  }
#line 14728 "parser.c"
    break;

  case 383:
#line 5646 "parser.y"
  {
	(void)cb_verify (CB_OBSOLETE, "ACTUAL KEY");
	check_repeated ("ACTUAL KEY", SYN_CLAUSE_14, &check_duplicate);
  }
#line 14737 "parser.c"
    break;

  case 384:
#line 5656 "parser.y"
  {
	(void)cb_verify (CB_OBSOLETE, "NOMINAL KEY");
	check_repeated ("NOMINAL KEY", SYN_CLAUSE_15, &check_duplicate);
  }
#line 14746 "parser.c"
    break;

  case 385:
#line 5666 "parser.y"
  {
	(void)cb_verify (CB_OBSOLETE, "TRACK-AREA");
	check_repeated ("TRACK-AREA", SYN_CLAUSE_16, &check_duplicate);
  }
#line 14755 "parser.c"
    break;

  case 386:
#line 5676 "parser.y"
  {
	(void)cb_verify (CB_OBSOLETE, "TRACK-LIMIT");
	check_repeated ("TRACK-LIMIT", SYN_CLAUSE_17, &check_duplicate);
  }
#line 14764 "parser.c"
    break;

  case 388:
#line 5687 "parser.y"
  {
	cobc_cs_check = 0;
  }
#line 14772 "parser.c"
    break;

  case 389:
#line 5694 "parser.y"
{
	check_headers_present(COBC_HD_ENVIRONMENT_DIVISION,
				 COBC_HD_INPUT_OUTPUT_SECTION, 0, 0);
	header_check |= COBC_HD_I_O_CONTROL;
}
#line 14782 "parser.c"
    break;

  case 392:
#line 5704 "parser.y"
  {
	yyerrok;
  }
#line 14790 "parser.c"
    break;

  case 399:
#line 5725 "parser.y"
  {
	cb_tree l;

	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_INPUT_OUTPUT_SECTION,
			       COBC_HD_I_O_CONTROL, 0);
	switch (CB_INTEGER (yyvsp[-3])->val) {
	case 0:
		/* SAME AREA */
		break;
	case 1:
		/* SAME RECORD */
		for (l = yyvsp[0]; l; l = CB_CHAIN (l)) {
			if (CB_VALID_TREE (CB_VALUE (l))) {
				CB_FILE (cb_ref (CB_VALUE (l)))->same_clause = same_area;
			}
		}
		same_area++;
		break;
	case 2:
		/* SAME SORT-MERGE */
		break;
	}
  }
#line 14819 "parser.c"
    break;

  case 400:
#line 5752 "parser.y"
                                { yyval = cb_int0; }
#line 14825 "parser.c"
    break;

  case 401:
#line 5753 "parser.y"
                                { yyval = cb_int1; }
#line 14831 "parser.c"
    break;

  case 402:
#line 5754 "parser.y"
                                { yyval = cb_int2; }
#line 14837 "parser.c"
    break;

  case 403:
#line 5755 "parser.y"
                                { yyval = cb_int2; }
#line 14843 "parser.c"
    break;

  case 404:
#line 5762 "parser.y"
  {
	current_program->apply_commit = yyvsp[0];
	CB_PENDING("APPLY COMMIT");
  }
#line 14852 "parser.c"
    break;

  case 405:
#line 5767 "parser.y"
  {
	CB_PENDING ("APPLY LOCK-HOLDING");
  }
#line 14860 "parser.c"
    break;

  case 406:
#line 5771 "parser.y"
  {
	CB_PENDING ("APPLY PRINT-CONTROL");
  }
#line 14868 "parser.c"
    break;

  case 408:
#line 5776 "parser.y"
  {
	cb_verify (CB_OBSOLETE, _("DOS/VS APPLY phrase"));
  }
#line 14876 "parser.c"
    break;

  case 417:
#line 5796 "parser.y"
  {
	/* Fake for TAPE */
	cobc_cs_check = CB_CS_ASSIGN;
  }
#line 14885 "parser.c"
    break;

  case 418:
#line 5801 "parser.y"
  {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_INPUT_OUTPUT_SECTION,
			       COBC_HD_I_O_CONTROL, 0);
	cb_verify (cb_multiple_file_tape_clause, "MULTIPLE FILE TAPE");
	cobc_cs_check = 0;
  }
#line 14897 "parser.c"
    break;

  case 428:
#line 5844 "parser.y"
  {
	current_storage = CB_STORAGE_WORKING;
  }
#line 14905 "parser.c"
    break;

  case 432:
#line 5861 "parser.y"
  {
	header_check |= COBC_HD_DATA_DIVISION;
  }
#line 14913 "parser.c"
    break;

  case 434:
#line 5870 "parser.y"
  {
	current_storage = CB_STORAGE_FILE;
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_FILE_SECTION;
  }
#line 14923 "parser.c"
    break;

  case 437:
#line 5884 "parser.y"
  {
	if (CB_VALID_TREE (current_file)) {
		if (CB_VALID_TREE (yyvsp[0])) {
			/* Do not keep Record if this is really a report */
			if (!current_file->reports) {
				finalize_file (current_file, CB_FIELD (yyvsp[0]));
			}
		} else if (!current_file->reports) {
			cb_error (_("RECORD description missing or invalid"));
		}
	}
  }
#line 14940 "parser.c"
    break;

  case 438:
#line 5902 "parser.y"
  {
	current_storage = CB_STORAGE_FILE;
	check_headers_present (COBC_HD_DATA_DIVISION,
			       COBC_HD_FILE_SECTION, 0, 0);
	check_duplicate = 0;
	if (CB_INVALID_TREE (yyvsp[0])) {
		current_file = NULL;
		YYERROR;
	}
	current_file = CB_FILE (cb_ref (yyvsp[0]));
	current_file->description_entry = yyvsp[0];
	if (CB_VALID_TREE (current_file)) {
		if (yyvsp[-1] == cb_int1) {
			current_file->organization = COB_ORG_SORT;
		}
		/* note: this is a HACK and should be moved */
		if (current_file->flag_finalized) {
			cb_error_x (yyvsp[0], _("duplicate file description for %s"),
				cb_name (CB_TREE (current_file)));
		}
	}
  }
#line 14967 "parser.c"
    break;

  case 440:
#line 5926 "parser.y"
  {
	yyerrok;
  }
#line 14975 "parser.c"
    break;

  case 441:
#line 5933 "parser.y"
  {
	yyval = cb_int0;
  }
#line 14983 "parser.c"
    break;

  case 442:
#line 5937 "parser.y"
  {
	yyval = cb_int1;
  }
#line 14991 "parser.c"
    break;

  case 445:
#line 5948 "parser.y"
  {
	check_repeated ("EXTERNAL", SYN_CLAUSE_1, &check_duplicate);
#if	0	/* RXWRXW - Global/External */
	if (current_file->flag_global) {
		cb_error (_("file cannot have both EXTERNAL and GLOBAL clauses"));
	}
#endif
	current_file->flag_external = 1;
  }
#line 15005 "parser.c"
    break;

  case 446:
#line 5958 "parser.y"
  {
	check_repeated ("GLOBAL", SYN_CLAUSE_2, &check_duplicate);
#if	0	/* RXWRXW - Global/External */
	if (current_file->flag_external) {
		cb_error (_("file cannot have both EXTERNAL and GLOBAL clauses"));
	}
#endif
	if (current_program->prog_type == COB_MODULE_TYPE_FUNCTION) {
		cb_error (_("%s is invalid in a user FUNCTION"), "GLOBAL");
	} else {
		current_file->flag_global = 1;
		current_program->flag_file_global = 1;
	}
  }
#line 15024 "parser.c"
    break;

  case 456:
#line 5988 "parser.y"
  {
	check_repeated ("BLOCK", SYN_CLAUSE_3, &check_duplicate);
	/* ignore */
  }
#line 15033 "parser.c"
    break;

  case 460:
#line 6001 "parser.y"
  {
	check_repeated ("RECORD", SYN_CLAUSE_4, &check_duplicate);
	if (current_file->organization == COB_ORG_LINE_SEQUENTIAL) {
		cb_warning (cb_warn_additional, _("RECORD clause ignored for LINE SEQUENTIAL"));
	} else {
		set_record_size (NULL, yyvsp[-1]);
	}
  }
#line 15046 "parser.c"
    break;

  case 461:
#line 6010 "parser.y"
  {
	check_repeated ("RECORD", SYN_CLAUSE_4, &check_duplicate);
	if (current_file->organization == COB_ORG_LINE_SEQUENTIAL) {
		cb_warning (cb_warn_additional, _("RECORD clause ignored for LINE SEQUENTIAL"));
	} else {
		set_record_size (yyvsp[-3], yyvsp[-1]);
	}
  }
#line 15059 "parser.c"
    break;

  case 462:
#line 6020 "parser.y"
  {
	check_repeated ("RECORD", SYN_CLAUSE_4, &check_duplicate);
	set_record_size (yyvsp[-3], yyvsp[-2]);
	current_file->flag_check_record_varying_limits =
		current_file->record_min == 0 || current_file->record_max == 0;
  }
#line 15070 "parser.c"
    break;

  case 464:
#line 6030 "parser.y"
  {
	current_file->record_depending = yyvsp[0];
  }
#line 15078 "parser.c"
    break;

  case 465:
#line 6036 "parser.y"
                                { yyval = NULL; }
#line 15084 "parser.c"
    break;

  case 466:
#line 6037 "parser.y"
                                { yyval = yyvsp[0]; }
#line 15090 "parser.c"
    break;

  case 467:
#line 6041 "parser.y"
                                { yyval = NULL; }
#line 15096 "parser.c"
    break;

  case 468:
#line 6042 "parser.y"
                                { yyval = yyvsp[0]; }
#line 15102 "parser.c"
    break;

  case 469:
#line 6050 "parser.y"
  {
	check_repeated ("LABEL", SYN_CLAUSE_5, &check_duplicate);
	cb_verify (cb_label_records_clause, "LABEL RECORDS");
  }
#line 15111 "parser.c"
    break;

  case 470:
#line 6061 "parser.y"
  {
	check_repeated ("VALUE OF", SYN_CLAUSE_6, &check_duplicate);
	cb_verify (cb_value_of_clause, "VALUE OF");
  }
#line 15120 "parser.c"
    break;

  case 471:
#line 6066 "parser.y"
  {
	check_repeated ("VALUE OF", SYN_CLAUSE_6, &check_duplicate);
	cb_verify (cb_value_of_clause, "VALUE OF");
	if (!current_file->assign) {
		current_file->assign = cb_build_assignment_name (current_file, yyvsp[0]);
	}
  }
#line 15132 "parser.c"
    break;

  case 476:
#line 6089 "parser.y"
  {
	check_repeated ("DATA", SYN_CLAUSE_7, &check_duplicate);
	cb_verify (cb_data_records_clause, "DATA RECORDS");
  }
#line 15141 "parser.c"
    break;

  case 477:
#line 6101 "parser.y"
  {
	check_repeated ("LINAGE", SYN_CLAUSE_8, &check_duplicate);
	if (current_file->organization != COB_ORG_LINE_SEQUENTIAL &&
	    current_file->organization != COB_ORG_SEQUENTIAL) {
		cb_error (_("LINAGE clause with wrong file type"));
	} else {
		current_file->linage = yyvsp[-2];
		current_file->organization = COB_ORG_LINE_SEQUENTIAL;
		if (current_linage == 0) {
			linage_file = current_file;
		}
		current_linage++;
	}
  }
#line 15160 "parser.c"
    break;

  case 483:
#line 6129 "parser.y"
  {
	current_file->latfoot = yyvsp[0];
  }
#line 15168 "parser.c"
    break;

  case 484:
#line 6136 "parser.y"
  {
	current_file->lattop = yyvsp[0];
  }
#line 15176 "parser.c"
    break;

  case 485:
#line 6143 "parser.y"
  {
	current_file->latbot = yyvsp[0];
  }
#line 15184 "parser.c"
    break;

  case 486:
#line 6152 "parser.y"
  {
	cobc_cs_check ^= CB_CS_RECORDING;
	check_repeated ("RECORDING", SYN_CLAUSE_9, &check_duplicate);
	/* ignore */
  }
#line 15194 "parser.c"
    break;

  case 491:
#line 6165 "parser.y"
  {
	if (current_file->organization != COB_ORG_SEQUENTIAL) {
		cb_error (_("RECORDING MODE U or S can only be used with RECORD SEQUENTIAL files"));
	}
  }
#line 15204 "parser.c"
    break;

  case 494:
#line 6181 "parser.y"
  {
	struct cb_alphabet_name	*al;

	check_repeated ("CODE SET", SYN_CLAUSE_10, &check_duplicate);

	if (CB_VALID_TREE (yyvsp[-1])) {
		al = CB_ALPHABET_NAME (cb_ref (yyvsp[-1]));
		switch (al->alphabet_type) {
#ifdef	COB_EBCDIC_MACHINE
		case CB_ALPHABET_ASCII:
#else
		case CB_ALPHABET_EBCDIC:
#endif
		case CB_ALPHABET_CUSTOM:
			current_file->code_set = al;
			CB_PENDING ("CODE-SET");
			break;
		default:
			if (cb_warn_opt_val[cb_warn_additional] != COBC_WARN_DISABLED) {
				cb_warning_x (cb_warn_additional, yyvsp[-1], _("ignoring CODE-SET '%s'"),
						  cb_name (yyvsp[-1]));
			} else {
				CB_PENDING ("CODE-SET");
			}
			break;
		}
	}

	if (current_file->organization != COB_ORG_LINE_SEQUENTIAL &&
	    current_file->organization != COB_ORG_SEQUENTIAL) {
		cb_error (_("CODE-SET clause invalid for file type"));
	}

  }
#line 15243 "parser.c"
    break;

  case 496:
#line 6219 "parser.y"
  {
	  CB_PENDING ("FOR sub-records");
	  current_file->code_set_items = CB_LIST (yyvsp[0]);
  }
#line 15252 "parser.c"
    break;

  case 497:
#line 6229 "parser.y"
  {
	check_repeated ("REPORT", SYN_CLAUSE_11, &check_duplicate);
	if (current_file->organization != COB_ORG_LINE_SEQUENTIAL &&
	    current_file->organization != COB_ORG_SEQUENTIAL) {
		cb_error (_("REPORT clause with wrong file type"));
	} else {
		current_file->reports = yyvsp[0];
		current_file->organization = COB_ORG_LINE_SEQUENTIAL;
		current_file->flag_line_adv = 1;
	}
  }
#line 15268 "parser.c"
    break;

  case 500:
#line 6249 "parser.y"
  {
	if (CB_VALID_TREE (yyvsp[0])) {
		current_report = build_report (yyvsp[0]);
		current_report->file = current_file;
		current_program->report_list =
			cb_list_add (current_program->report_list,
				     CB_TREE (current_report));
		if (report_count == 0) {
			report_instance = current_report;
		}
		report_count++;
	}
  }
#line 15286 "parser.c"
    break;

  case 501:
#line 6263 "parser.y"
  {
	if (CB_VALID_TREE (yyvsp[0])) {
		current_report = build_report (yyvsp[0]);
		current_report->file = current_file;
		current_program->report_list =
			cb_list_add (current_program->report_list,
				     CB_TREE (current_report));
		if (report_count == 0) {
			report_instance = current_report;
		}
		report_count++;
	}
  }
#line 15304 "parser.c"
    break;

  case 503:
#line 6282 "parser.y"
  {
	current_storage = CB_STORAGE_COMMUNICATION;
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_COMMUNICATION_SECTION;
	/* add a compiler configuration if either */
	if (cb_std_define != CB_STD_85
	 && cb_std_define != CB_STD_RM
	 && cb_std_define != CB_STD_GC
	 && !cb_relaxed_syntax_checks) {
		cb_verify (CB_UNCONFORMABLE, "COMMUNICATION SECTION");
	} else if (cb_verify (CB_OBSOLETE, "COMMUNICATION SECTION")) {
		CB_PENDING ("COMMUNICATION SECTION");
	}
  }
#line 15323 "parser.c"
    break;

  case 507:
#line 6306 "parser.y"
  {
	if (CB_VALID_TREE (current_cd)) {
		if (CB_VALID_TREE (yyvsp[0])) {
			cb_finalize_cd (current_cd, CB_FIELD (yyvsp[0]));
		} else if (!current_cd->record) {
			cb_error (_("CD record missing"));
		}
	}
  }
#line 15337 "parser.c"
    break;

  case 508:
#line 6321 "parser.y"
  {
	/* CD internally defines a new file */
	if (CB_VALID_TREE (yyvsp[0])) {
		current_cd = cb_build_cd (yyvsp[0]);

		CB_ADD_TO_CHAIN (CB_TREE (current_cd),
				 current_program->cd_list);
	} else {
		current_cd = NULL;
		/* TO-DO: Is this necessary? */
		if (current_program->cd_list) {
			current_program->cd_list
				= CB_CHAIN (current_program->cd_list);
		}
	}
	check_duplicate = 0;
  }
#line 15359 "parser.c"
    break;

  case 556:
#line 6429 "parser.y"
  {
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_WORKING_STORAGE_SECTION;
	current_storage = CB_STORAGE_WORKING;
  }
#line 15369 "parser.c"
    break;

  case 557:
#line 6435 "parser.y"
  {
	if (yyvsp[0]) {
		CB_FIELD_ADD (current_program->working_storage, CB_FIELD (yyvsp[0]));
	}
  }
#line 15379 "parser.c"
    break;

  case 558:
#line 6444 "parser.y"
  {
	yyval = NULL;
  }
#line 15387 "parser.c"
    break;

  case 559:
#line 6448 "parser.y"
  {
	current_field = NULL;
	control_field = NULL;
	description_field = NULL;
	cb_clear_real_field ();
  }
#line 15398 "parser.c"
    break;

  case 560:
#line 6455 "parser.y"
  {
	yyval = get_finalized_description_tree ();
  }
#line 15406 "parser.c"
    break;

  case 566:
#line 6470 "parser.y"
  {
	if (current_field && !CB_INVALID_TREE (current_field->external_definition)) {
		/* finalize last field if target of SAME AS / type-name */
		inherit_external_definition (yyvsp[-1]);
	}
	if (set_current_field (yyvsp[-1], yyvsp[0])) {
		YYERROR;
	}
	save_tree = NULL;
  }
#line 15421 "parser.c"
    break;

  case 567:
#line 6481 "parser.y"
  {
	if (!qualifier) {
		current_field->flag_filler = 1;
	}
	if (!description_field) {
		description_field = current_field;
	}
  }
#line 15434 "parser.c"
    break;

  case 568:
#line 6490 "parser.y"
  {
#if 0 /* works fine without, leads to invalid free otherwise [COB_TREE_DEBUG] */
	/* Free tree associated with level number */
	cobc_parse_free (yyvsp[-2]);
#endif
	yyerrok;
	cb_unput_dot ();
	check_pic_duplicate = 0;
	check_duplicate = 0;
#if 0 /* CHECKME - *Why* would we want to change the field here? */
	current_field = cb_get_real_field ();
#endif
  }
#line 15452 "parser.c"
    break;

  case 569:
#line 6507 "parser.y"
  {
	yyval = yyvsp[0];
  }
#line 15460 "parser.c"
    break;

  case 572:
#line 6519 "parser.y"
  {
	yyval = cb_build_filler ();
	qualifier = NULL;
	keys_list = NULL;
	non_const_word = 0;
  }
#line 15471 "parser.c"
    break;

  case 574:
#line 6530 "parser.y"
  {
	yyval = yyvsp[0];
	qualifier = yyvsp[0];
	keys_list = NULL;
	non_const_word = 0;
  }
#line 15482 "parser.c"
    break;

  case 575:
#line 6540 "parser.y"
  {
	yyval = NULL;
  }
#line 15490 "parser.c"
    break;

  case 576:
#line 6544 "parser.y"
  {
	if (current_program->prog_type == COB_MODULE_TYPE_FUNCTION) {
		cb_error (_("%s is invalid in a user FUNCTION"), "GLOBAL");
		yyval = NULL;
	} else {
		yyval = cb_null;
	}
  }
#line 15503 "parser.c"
    break;

  case 577:
#line 6555 "parser.y"
                                        { yyval = yyvsp[0]; }
#line 15509 "parser.c"
    break;

  case 578:
#line 6556 "parser.y"
                                                { yyval = cb_build_const_length (yyvsp[0]); }
#line 15515 "parser.c"
    break;

  case 579:
#line 6558 "parser.y"
                                { yyval = cb_build_const_length (yyvsp[0]); }
#line 15521 "parser.c"
    break;

  case 580:
#line 6563 "parser.y"
  {
	yyval = yyvsp[0];
  }
#line 15529 "parser.c"
    break;

  case 581:
#line 6567 "parser.y"
  {
	yyval = yyvsp[0];
  }
#line 15537 "parser.c"
    break;

  case 582:
#line 6573 "parser.y"
  {
	yyval = cb_int1;
  }
#line 15545 "parser.c"
    break;

  case 583:
#line 6577 "parser.y"
  {
	yyval = cb_int2;
  }
#line 15553 "parser.c"
    break;

  case 584:
#line 6581 "parser.y"
  {
	yyval = cb_int4;
  }
#line 15561 "parser.c"
    break;

  case 585:
#line 6585 "parser.y"
  {
	yyval = cb_int8;
  }
#line 15569 "parser.c"
    break;

  case 586:
#line 6589 "parser.y"
  {
	yyval = cb_int ((int)sizeof(long));
  }
#line 15577 "parser.c"
    break;

  case 587:
#line 6593 "parser.y"
  {
	yyval = cb_int ((int)sizeof(void *));
  }
#line 15585 "parser.c"
    break;

  case 588:
#line 6597 "parser.y"
  {
	if (cb_binary_comp_1) {
		yyval = cb_int2;
	} else {
		yyval = cb_int ((int)sizeof(float));
	}
  }
#line 15597 "parser.c"
    break;

  case 589:
#line 6605 "parser.y"
  {
	yyval = cb_int ((int)sizeof(float));
  }
#line 15605 "parser.c"
    break;

  case 590:
#line 6609 "parser.y"
  {
	yyval = cb_int ((int)sizeof(double));
  }
#line 15613 "parser.c"
    break;

  case 591:
#line 6613 "parser.y"
  {
	yyval = cb_int4;
  }
#line 15621 "parser.c"
    break;

  case 592:
#line 6617 "parser.y"
  {
	yyval = cb_int8;
  }
#line 15629 "parser.c"
    break;

  case 593:
#line 6621 "parser.y"
  {
	yyval = cb_int16;
  }
#line 15637 "parser.c"
    break;

  case 594:
#line 6625 "parser.y"
  {
	yyerrok;
	cb_unput_dot ();
	check_pic_duplicate = 0;
	check_duplicate = 0;
	current_field = cb_get_real_field ();
  }
#line 15649 "parser.c"
    break;

  case 604:
#line 6657 "parser.y"
  {
	cb_tree renames_target = cb_ref (yyvsp[-1]);

	size_t sav = cb_needs_01;
	cb_needs_01 = 0;

	non_const_word = 0;

	if (set_current_field (yyvsp[-5], yyvsp[-4])) {
		/* error in the definition, no further checks possible */
	} else if (renames_target == cb_error_node) {
		/* error in the target, skip further checks */
		current_field->flag_invalid = 1;
	} else {
		cb_tree renames_thru = yyvsp[0];

		current_field->redefines = CB_FIELD (renames_target);
		if (renames_thru) {
			renames_thru = cb_ref (renames_thru);
		}
		if (CB_VALID_TREE (renames_thru)) {
			current_field->rename_thru = CB_FIELD (renames_thru);
		} else {
			/* If there is no THRU clause, RENAMES acts like REDEFINES. */
			current_field->pic = current_field->redefines->pic;
		}

		if (cb_validate_renames_item (current_field, yyvsp[-1], yyvsp[0])) {
			current_field->flag_invalid = 1;
		} else {
			/* ensure the reference was validated as this
			   also calculates the reference' picture and size */
			if (!current_field->redefines->flag_is_verified) {
				cb_validate_field (current_field->redefines);
			}
		}
	}
	cb_needs_01 = sav;
  }
#line 15693 "parser.c"
    break;

  case 605:
#line 6700 "parser.y"
  {
	yyval = NULL;
  }
#line 15701 "parser.c"
    break;

  case 606:
#line 6704 "parser.y"
  {
	yyval = yyvsp[0] == cb_error_node ? NULL : yyvsp[0];
  }
#line 15709 "parser.c"
    break;

  case 607:
#line 6711 "parser.y"
  {
	if (set_current_field (yyvsp[-1], yyvsp[0])) {
		YYERROR;
	}
  }
#line 15719 "parser.c"
    break;

  case 608:
#line 6717 "parser.y"
  {
	cb_validate_88_item (current_field);
  }
#line 15727 "parser.c"
    break;

  case 609:
#line 6724 "parser.y"
  {
	cb_tree x;
	int	level;

	cobc_cs_check = 0;
	level = cb_get_level (yyvsp[-4]);
	/* Free tree associated with level number */
	cobc_parse_free (yyvsp[-4]);
	if (level != 1) {
		cb_error (_("CONSTANT item not at 01 level"));
	} else if (yyvsp[0]) {
		if (cb_verify(cb_constant_01, "01 CONSTANT")) {
			x = cb_build_constant (yyvsp[-3], yyvsp[0]);
			CB_FIELD (x)->flag_item_78 = 1;
			CB_FIELD (x)->flag_constant = 1;
			CB_FIELD (x)->level = 1;
			CB_FIELD (x)->values = yyvsp[0];
			cb_needs_01 = 1;
			if (yyvsp[-1]) {
				CB_FIELD (x)->flag_is_global = 1;
			}
			/* Ignore return value */
			(void)cb_validate_78_item (CB_FIELD (x), 0);
		}
	}
  }
#line 15758 "parser.c"
    break;

  case 610:
#line 6751 "parser.y"
  {
	if (set_current_field (yyvsp[-1], yyvsp[0])) {
		YYERROR;
	}
  }
#line 15768 "parser.c"
    break;

  case 611:
#line 6758 "parser.y"
  {
	/* Reset to last non-78 item */
	current_field = cb_validate_78_item (current_field, 0);
  }
#line 15777 "parser.c"
    break;

  case 612:
#line 6766 "parser.y"
  {
	yyval = yyvsp[0];
  }
#line 15785 "parser.c"
    break;

  case 613:
#line 6770 "parser.y"
  {
	yyval = CB_LIST_INIT(cb_build_const_from (yyvsp[0]));
  }
#line 15793 "parser.c"
    break;

  case 614:
#line 6777 "parser.y"
  {
	if (CB_VALID_TREE (current_field)) {
		current_field->values = yyvsp[0];
	}
  }
#line 15803 "parser.c"
    break;

  case 615:
#line 6783 "parser.y"
  {
	current_field->values = CB_LIST_INIT (cb_build_const_start (current_field, yyvsp[0]));
  }
#line 15811 "parser.c"
    break;

  case 616:
#line 6787 "parser.y"
  {
	current_field->values = CB_LIST_INIT (cb_build_const_next (current_field));
  }
#line 15819 "parser.c"
    break;

  case 617:
#line 6793 "parser.y"
                                        { yyval = CB_LIST_INIT (yyvsp[0]); }
#line 15825 "parser.c"
    break;

  case 618:
#line 6794 "parser.y"
                                                { yyval = cb_list_add (yyvsp[-1], yyvsp[0]); }
#line 15831 "parser.c"
    break;

  case 619:
#line 6798 "parser.y"
                                { yyval = yyvsp[0]; }
#line 15837 "parser.c"
    break;

  case 620:
#line 6799 "parser.y"
                                { yyval = cb_build_alphanumeric_literal ("(", 1); }
#line 15843 "parser.c"
    break;

  case 621:
#line 6800 "parser.y"
                                { yyval = cb_build_alphanumeric_literal (")", 1); }
#line 15849 "parser.c"
    break;

  case 622:
#line 6801 "parser.y"
                                { yyval = cb_build_alphanumeric_literal ("+", 1); }
#line 15855 "parser.c"
    break;

  case 623:
#line 6802 "parser.y"
                                { yyval = cb_build_alphanumeric_literal ("-", 1); }
#line 15861 "parser.c"
    break;

  case 624:
#line 6803 "parser.y"
                                { yyval = cb_build_alphanumeric_literal ("*", 1); }
#line 15867 "parser.c"
    break;

  case 625:
#line 6804 "parser.y"
                                { yyval = cb_build_alphanumeric_literal ("/", 1); }
#line 15873 "parser.c"
    break;

  case 626:
#line 6805 "parser.y"
                                { yyval = cb_build_alphanumeric_literal ("&", 1); }
#line 15879 "parser.c"
    break;

  case 627:
#line 6806 "parser.y"
                                { yyval = cb_build_alphanumeric_literal ("|", 1); }
#line 15885 "parser.c"
    break;

  case 628:
#line 6807 "parser.y"
                                { yyval = cb_build_alphanumeric_literal ("^", 1); }
#line 15891 "parser.c"
    break;

  case 631:
#line 6817 "parser.y"
  {
	save_tree = cb_int0;
  }
#line 15899 "parser.c"
    break;

  case 654:
#line 6852 "parser.y"
  {
	check_repeated ("REDEFINES", SYN_CLAUSE_1, &check_pic_duplicate);
	if (save_tree != NULL) {
		cb_verify_x (yyvsp[0], cb_free_redefines_position,
			     _("REDEFINES clause not following entry-name"));
	}

	current_field->redefines = cb_resolve_redefines (current_field, yyvsp[0]);
	if (current_field->redefines == NULL) {
		current_field->flag_is_verified = 1;
		current_field->flag_invalid = 1;
		YYERROR;
	}
  }
#line 15918 "parser.c"
    break;

  case 655:
#line 6873 "parser.y"
  {
	if (!check_repeated ("LIKE", SYN_CLAUSE_30, &check_pic_duplicate)) {
		if (current_field->external_definition) {
			emit_conflicting_clause_message ("TYPE TO", "SAME AS");
		}
		setup_external_definition (yyvsp[-1], 0);
		current_field->like_modifier = yyvsp[0];
		CB_PENDING_X (yyvsp[-1], "LIKE clause");
	}
  }
#line 15933 "parser.c"
    break;

  case 656:
#line 6886 "parser.y"
                { yyval = cb_int0; }
#line 15939 "parser.c"
    break;

  case 658:
#line 6891 "parser.y"
  {
	yyval = yyvsp[-1];
  }
#line 15947 "parser.c"
    break;

  case 659:
#line 6900 "parser.y"
  {
	if (!check_repeated ("SAME AS", SYN_CLAUSE_30, &check_pic_duplicate)) {
		if (current_field->external_definition) {
			emit_conflicting_clause_message ("TYPE TO", "SAME AS");
		}
		cb_verify (cb_same_as_clause, _("SAME AS clause"));
		setup_external_definition (yyvsp[0], 0);
	}


  }
#line 15963 "parser.c"
    break;

  case 660:
#line 6918 "parser.y"
  {
	if (current_field->flag_is_typedef) {
		emit_duplicate_clause_message ("TYPEDEF");
		YYERROR;
	}
	/* note: no explicit verification as all dialects with this reserved word use it */
	current_field->flag_is_typedef = 1;
	within_typedef_definition = 1;

	if (current_field->level != 1 && current_field->level != 77) {
		cb_error (_("%s only allowed at 01/77 level"), "TYPEDEF");
	}
	if (!qualifier) {
		cb_error (_("%s requires a data name"), "TYPEDEF");
	}
	if (current_storage == CB_STORAGE_SCREEN
	 || current_storage == CB_STORAGE_REPORT) {
		cb_error (_("%s not allowed in %s"), "TYPEDEF",
			enum_explain_storage(current_storage));
	}
  }
#line 15989 "parser.c"
    break;

  case 662:
#line 6943 "parser.y"
  {
	CB_PENDING ("TYPEDEF STRONG");
  }
#line 15997 "parser.c"
    break;

  case 663:
#line 6953 "parser.y"
  {
	check_repeated ("EXTERNAL", SYN_CLAUSE_2, &check_pic_duplicate);
	if (current_storage != CB_STORAGE_WORKING) {
		cb_error (_("%s not allowed here"), "EXTERNAL");
	} else if (current_field->level != 1 && current_field->level != 77) {
		cb_error (_("%s only allowed at 01/77 level"), "EXTERNAL");
	} else if (!qualifier) {
		cb_error (_("%s requires a data name"), "EXTERNAL");
#if	0	/* RXWRXW - Global/External */
	} else if (current_field->flag_is_global) {
		cb_error (_("%s and %s are mutually exclusive"), "GLOBAL", "EXTERNAL");
#endif
	} else if (current_field->flag_item_based) {
		cb_error (_("%s and %s are mutually exclusive"), "BASED", "EXTERNAL");
	} else if (current_field->redefines) {
		cb_error (_("%s and %s are mutually exclusive"), "EXTERNAL", "REDEFINES");
	} else if (current_field->flag_occurs) {
		cb_error (_("%s and %s are mutually exclusive"), "EXTERNAL", "OCCURS");
	} else {
		current_field->flag_external = 1;
		current_program->flag_has_external = 1;
	}
  }
#line 16025 "parser.c"
    break;

  case 664:
#line 6980 "parser.y"
  {
	current_field->ename = cb_to_cname (current_field->name);
  }
#line 16033 "parser.c"
    break;

  case 665:
#line 6984 "parser.y"
  {
	current_field->ename = cb_to_cname ((const char *)CB_LITERAL (yyvsp[0])->data);
  }
#line 16041 "parser.c"
    break;

  case 668:
#line 6997 "parser.y"
  {
	check_repeated ("GLOBAL", SYN_CLAUSE_3, &check_pic_duplicate);
	if (current_field->level != 1 && current_field->level != 77) {
		cb_error (_("%s only allowed at 01/77 level"), "GLOBAL");
	} else if (!qualifier) {
		cb_error (_("%s requires a data name"), "GLOBAL");
#if	0	/* RXWRXW - Global/External */
	} else if (current_field->flag_external) {
		cb_error (_("%s and %s are mutually exclusive"), "GLOBAL", "EXTERNAL");
#endif
	} else if (current_program->prog_type == COB_MODULE_TYPE_FUNCTION) {
		cb_error (_("%s is invalid in a user FUNCTION"), "GLOBAL");
	} else if (current_storage == CB_STORAGE_LOCAL) {
		cb_error (_("%s not allowed here"), "GLOBAL");
	} else {
		current_field->flag_is_global = 1;
	}
  }
#line 16064 "parser.c"
    break;

  case 669:
#line 7021 "parser.y"
  {
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "SPECIAL-NAMES");
	} else {
		cb_verify (cb_special_names_clause, "SPECIAL-NAMES clause");
	}
  }
#line 16076 "parser.c"
    break;

  case 671:
#line 7033 "parser.y"
  {
	if (current_program->cursor_pos) {
		emit_duplicate_clause_message ("CURSOR");
	} else {
		current_program->cursor_pos = cb_build_reference (current_field->name);
	}
  }
#line 16088 "parser.c"
    break;

  case 672:
#line 7041 "parser.y"
  {
	if (current_program->crt_status) {
		emit_duplicate_clause_message ("CRT STATUS");
	} else {
		current_program->crt_status = cb_build_reference (current_field->name);
	}
  }
#line 16100 "parser.c"
    break;

  case 673:
#line 7058 "parser.y"
  {
#if 0 /* not yet implemented */
	if (current_program->screen_control) {
		emit_duplicate_clause_message ("SCREEN CONTROL");
	} else {
		CB_PENDING ("SCREEN CONTROL");
	}
#else
	CB_PENDING ("SCREEN CONTROL");
#endif
  }
#line 16116 "parser.c"
    break;

  case 674:
#line 7070 "parser.y"
  {
#if 0 /* not yet implemented */
	if (current_program->event_status) {
		emit_duplicate_clause_message ("EVENT STATUS");
	} else {
		CB_PENDING ("EVENT STATUS");
	}
#else
	CB_PENDING ("EVENT STATUS");
#endif
  }
#line 16132 "parser.c"
    break;

  case 675:
#line 7087 "parser.y"
  {
	check_repeated ("VOLATILE", SYN_CLAUSE_24, &check_pic_duplicate);
	/* note: there is no reason to check current_storage as we only parse
	         volatile_clause and its parent tokens where applicable,
	         same is true for level 66,78,88 */
	/* missing part: always generate and initialize storage */
	CB_UNFINISHED ("VOLATILE");
	current_field->flag_volatile = 1;
	/* TODO: set VOLATILE flag for all parent fields */
  }
#line 16147 "parser.c"
    break;

  case 676:
#line 7105 "parser.y"
  {
	check_repeated ("PICTURE", SYN_CLAUSE_4, &check_pic_duplicate);
	current_field->pic = CB_PICTURE (yyvsp[-1]);

	if (CB_VALID_TREE (yyvsp[0])) {
		if (  (current_field->pic->category != CB_CATEGORY_NUMERIC
		    && current_field->pic->category != CB_CATEGORY_NUMERIC_EDITED)
		 || strpbrk (current_field->pic->orig, " CRDB-*") /* the standard seems to forbid also ',' */) {
			cb_error_x (yyvsp[-1], _("a locale-format PICTURE string must only consist of '9', '.', '+', 'Z' and the currency-sign"));
		} else {
			/* TODO: check that not we're not within a CONSTANT RECORD */
			CB_PENDING_X (yyvsp[-1], "locale-format PICTURE");
		}
	}
  }
#line 16167 "parser.c"
    break;

  case 677:
#line 7124 "parser.y"
  { yyval = NULL; }
#line 16173 "parser.c"
    break;

  case 678:
#line 7126 "parser.y"
  {
	/* $2 -> optional locale-name to be used */
	yyval = yyvsp[0];
  }
#line 16182 "parser.c"
    break;

  case 680:
#line 7135 "parser.y"
  {
	yyval = yyvsp[0];
  }
#line 16190 "parser.c"
    break;

  case 681:
#line 7143 "parser.y"
  {
	if (CB_LOCALE_NAME_P (cb_ref (yyvsp[0]))) {
		yyval = yyvsp[0];
	} else {
		cb_error_x (yyvsp[0], _("'%s' is not a locale-name"),	cb_name (yyvsp[0]));
		yyval = cb_error_node;
	}
  }
#line 16203 "parser.c"
    break;

  case 682:
#line 7158 "parser.y"
  {
	cb_verify (cb_type_to_clause, _("TYPE TO clause"));
	setup_external_definition_type (yyvsp[0]);
  }
#line 16212 "parser.c"
    break;

  case 685:
#line 7171 "parser.y"
  {
	{
		cb_tree x = cb_try_ref (yyvsp[0]);
		if (!CB_INVALID_TREE (x) && CB_FIELD_P (x) && CB_FIELD (x)->flag_is_typedef) {
			if (!check_repeated ("USAGE", SYN_CLAUSE_5, &check_pic_duplicate)) {
				if (current_field->external_definition) {
					emit_conflicting_clause_message ("USAGE", "SAME AS / TYPE TO");
				} else {
					cb_verify (cb_usage_type_name, _("USAGE type-name"));
					/* replace usage by type definition */
					check_pic_duplicate &= ~SYN_CLAUSE_5;
					check_repeated ("USAGE/TYPE", SYN_CLAUSE_31, &check_pic_duplicate);
					setup_external_definition (yyvsp[0], 1);
					break;	/* everything done here */
				}
			}
			YYERROR;
		}
	}
	if (is_reserved_word (CB_NAME (yyvsp[0]))) {
		cb_error_x (yyvsp[0], _("'%s' is not a valid USAGE"), CB_NAME (yyvsp[0]));
	} else if (is_default_reserved_word (CB_NAME (yyvsp[0]))) {
		cb_error_x (yyvsp[0], _("'%s' is not defined, but is a reserved word in another dialect"),
				CB_NAME (yyvsp[0]));
	} else {
		cb_error_x (yyvsp[0], _("unknown USAGE: %s"), CB_NAME (yyvsp[0]));
	}
	check_and_set_usage (CB_USAGE_ERROR);
	YYERROR;
  }
#line 16247 "parser.c"
    break;

  case 686:
#line 7202 "parser.y"
  {
	check_and_set_usage (CB_USAGE_ERROR);
  }
#line 16255 "parser.c"
    break;

  case 687:
#line 7209 "parser.y"
  {
	check_and_set_usage (CB_USAGE_BINARY);
  }
#line 16263 "parser.c"
    break;

  case 688:
#line 7213 "parser.y"
  {
	check_and_set_usage (CB_USAGE_BIT);
	CB_PENDING ("USAGE BIT");
  }
#line 16272 "parser.c"
    break;

  case 689:
#line 7218 "parser.y"
  {
	check_and_set_usage (CB_USAGE_BINARY);
  }
#line 16280 "parser.c"
    break;

  case 690:
#line 7222 "parser.y"
  {
	/* see FR #310 */
	CB_PENDING ("USAGE COMP-0");
  }
#line 16289 "parser.c"
    break;

  case 691:
#line 7227 "parser.y"
  {
	current_field->flag_comp_1 = 1;
	if (cb_binary_comp_1) {
		check_and_set_usage (CB_USAGE_SIGNED_SHORT);
	} else {
		check_and_set_usage (CB_USAGE_FLOAT);
	}
  }
#line 16302 "parser.c"
    break;

  case 692:
#line 7236 "parser.y"
  {
	check_and_set_usage (CB_USAGE_DOUBLE);
  }
#line 16310 "parser.c"
    break;

  case 693:
#line 7240 "parser.y"
  {
	check_and_set_usage (CB_USAGE_PACKED);
  }
#line 16318 "parser.c"
    break;

  case 694:
#line 7244 "parser.y"
  {
	check_and_set_usage (CB_USAGE_BINARY);
  }
#line 16326 "parser.c"
    break;

  case 695:
#line 7248 "parser.y"
  {
	check_and_set_usage (CB_USAGE_COMP_5);
  }
#line 16334 "parser.c"
    break;

  case 696:
#line 7252 "parser.y"
  {
	check_and_set_usage (CB_USAGE_COMP_6);
  }
#line 16342 "parser.c"
    break;

  case 697:
#line 7256 "parser.y"
  {
	check_and_set_usage (CB_USAGE_COMP_X);
  }
#line 16350 "parser.c"
    break;

  case 698:
#line 7260 "parser.y"
  {
	check_and_set_usage (CB_USAGE_COMP_N);
  }
#line 16358 "parser.c"
    break;

  case 699:
#line 7264 "parser.y"
  {
	check_and_set_usage (CB_USAGE_FLOAT);
  }
#line 16366 "parser.c"
    break;

  case 700:
#line 7268 "parser.y"
  {
	check_and_set_usage (CB_USAGE_DISPLAY);
  }
#line 16374 "parser.c"
    break;

  case 701:
#line 7272 "parser.y"
  {
	check_and_set_usage (CB_USAGE_INDEX);
  }
#line 16382 "parser.c"
    break;

  case 702:
#line 7276 "parser.y"
  {
	check_and_set_usage (CB_USAGE_PACKED);
  }
#line 16390 "parser.c"
    break;

  case 703:
#line 7280 "parser.y"
  {
	check_and_set_usage (CB_USAGE_POINTER);
	current_field->flag_is_pointer = 1;
  }
#line 16399 "parser.c"
    break;

  case 704:
#line 7285 "parser.y"
  {
	check_and_set_usage (CB_USAGE_PROGRAM_POINTER);
	current_field->flag_is_pointer = 1;
  }
#line 16408 "parser.c"
    break;

  case 705:
#line 7290 "parser.y"
  {
	check_and_set_usage (CB_USAGE_HNDL);
  }
#line 16416 "parser.c"
    break;

  case 706:
#line 7294 "parser.y"
  {
	check_and_set_usage (CB_USAGE_HNDL_WINDOW);
  }
#line 16424 "parser.c"
    break;

  case 707:
#line 7298 "parser.y"
  {
	check_and_set_usage (CB_USAGE_HNDL_SUBWINDOW);
  }
#line 16432 "parser.c"
    break;

  case 708:
#line 7302 "parser.y"
  {
	check_and_set_usage (CB_USAGE_HNDL_FONT);
	CB_PENDING ("HANDLE OF FONT");
  }
#line 16441 "parser.c"
    break;

  case 709:
#line 7307 "parser.y"
  {
	check_and_set_usage (CB_USAGE_HNDL_THREAD);
  }
#line 16449 "parser.c"
    break;

  case 710:
#line 7311 "parser.y"
  {
	check_and_set_usage (CB_USAGE_HNDL_MENU);
	CB_PENDING ("HANDLE OF MENU");
  }
#line 16458 "parser.c"
    break;

  case 711:
#line 7316 "parser.y"
  {
	check_and_set_usage (CB_USAGE_HNDL_VARIANT);
  }
#line 16466 "parser.c"
    break;

  case 712:
#line 7320 "parser.y"
  {
	check_and_set_usage (CB_USAGE_HNDL_LM);
	CB_PENDING ("HANDLE OF LAYOUT-MANAGER");
  }
#line 16475 "parser.c"
    break;

  case 713:
#line 7325 "parser.y"
  {
	check_and_set_usage (CB_USAGE_HNDL);
	CB_PENDING ("HANDLE OF control-type");
  }
#line 16484 "parser.c"
    break;

  case 714:
#line 7330 "parser.y"
  {
	check_and_set_usage (CB_USAGE_HNDL);
	cb_error_x (yyvsp[0], _("unknown HANDLE type: %s"), CB_NAME (yyvsp[0]));
  }
#line 16493 "parser.c"
    break;

  case 715:
#line 7335 "parser.y"
  {
	check_and_set_usage (CB_USAGE_SIGNED_SHORT);
  }
#line 16501 "parser.c"
    break;

  case 716:
#line 7339 "parser.y"
  {
	check_and_set_usage (CB_USAGE_SIGNED_INT);
  }
#line 16509 "parser.c"
    break;

  case 717:
#line 7343 "parser.y"
  {
#ifdef COB_32_BIT_LONG
	check_and_set_usage (CB_USAGE_SIGNED_INT);
#else
	check_and_set_usage (CB_USAGE_SIGNED_LONG);
#endif
  }
#line 16521 "parser.c"
    break;

  case 718:
#line 7351 "parser.y"
  {
	check_and_set_usage (CB_USAGE_UNSIGNED_SHORT);
  }
#line 16529 "parser.c"
    break;

  case 719:
#line 7355 "parser.y"
  {
	check_and_set_usage (CB_USAGE_UNSIGNED_INT);
  }
#line 16537 "parser.c"
    break;

  case 720:
#line 7359 "parser.y"
  {
#ifdef COB_32_BIT_LONG
	check_and_set_usage (CB_USAGE_UNSIGNED_INT);
#else
	check_and_set_usage (CB_USAGE_UNSIGNED_LONG);
#endif
  }
#line 16549 "parser.c"
    break;

  case 721:
#line 7367 "parser.y"
  {
	check_and_set_usage (CB_USAGE_SIGNED_CHAR);
  }
#line 16557 "parser.c"
    break;

  case 722:
#line 7371 "parser.y"
  {
	check_and_set_usage (CB_USAGE_UNSIGNED_CHAR);
  }
#line 16565 "parser.c"
    break;

  case 723:
#line 7375 "parser.y"
  {
	check_and_set_usage (CB_USAGE_SIGNED_SHORT);
  }
#line 16573 "parser.c"
    break;

  case 724:
#line 7379 "parser.y"
  {
	check_and_set_usage (CB_USAGE_UNSIGNED_SHORT);
  }
#line 16581 "parser.c"
    break;

  case 725:
#line 7383 "parser.y"
  {
	check_and_set_usage (CB_USAGE_SIGNED_INT);
  }
#line 16589 "parser.c"
    break;

  case 726:
#line 7387 "parser.y"
  {
	check_and_set_usage (CB_USAGE_UNSIGNED_INT);
  }
#line 16597 "parser.c"
    break;

  case 727:
#line 7391 "parser.y"
  {
	check_and_set_usage (CB_USAGE_SIGNED_LONG);
  }
#line 16605 "parser.c"
    break;

  case 728:
#line 7395 "parser.y"
  {
	check_and_set_usage (CB_USAGE_UNSIGNED_LONG);
  }
#line 16613 "parser.c"
    break;

  case 729:
#line 7399 "parser.y"
  {
#ifdef COB_32_BIT_LONG
	check_and_set_usage (CB_USAGE_SIGNED_INT);
#else
	check_and_set_usage (CB_USAGE_SIGNED_LONG);
#endif
  }
#line 16625 "parser.c"
    break;

  case 730:
#line 7407 "parser.y"
  {
#ifdef COB_32_BIT_LONG
	check_and_set_usage (CB_USAGE_UNSIGNED_INT);
#else
	check_and_set_usage (CB_USAGE_UNSIGNED_LONG);
#endif
  }
#line 16637 "parser.c"
    break;

  case 731:
#line 7415 "parser.y"
  {
	check_and_set_usage (CB_USAGE_FP_BIN32);
  }
#line 16645 "parser.c"
    break;

  case 732:
#line 7419 "parser.y"
  {
	check_and_set_usage (CB_USAGE_FP_BIN64);
  }
#line 16653 "parser.c"
    break;

  case 733:
#line 7423 "parser.y"
  {
	check_and_set_usage (CB_USAGE_FP_BIN128);
  }
#line 16661 "parser.c"
    break;

  case 734:
#line 7427 "parser.y"
  {
	check_and_set_usage (CB_USAGE_FP_DEC64);
  }
#line 16669 "parser.c"
    break;

  case 735:
#line 7431 "parser.y"
  {
	check_and_set_usage (CB_USAGE_FP_DEC128);
  }
#line 16677 "parser.c"
    break;

  case 736:
#line 7435 "parser.y"
  {
	check_repeated ("USAGE", SYN_CLAUSE_5, &check_pic_duplicate);
	CB_UNFINISHED ("USAGE NATIONAL");
  }
#line 16686 "parser.c"
    break;

  case 748:
#line 7465 "parser.y"
  {
	check_repeated ("SIGN", SYN_CLAUSE_6, &check_pic_duplicate);
	current_field->flag_sign_clause = 1;
	current_field->flag_sign_separate = (yyvsp[0] ? 1 : 0);
	current_field->flag_sign_leading  = 1;
  }
#line 16697 "parser.c"
    break;

  case 749:
#line 7472 "parser.y"
  {
	check_repeated ("SIGN", SYN_CLAUSE_6, &check_pic_duplicate);
	current_field->flag_sign_clause = 1;
	current_field->flag_sign_separate = (yyvsp[0] ? 1 : 0);
	current_field->flag_sign_leading  = 0;
  }
#line 16708 "parser.c"
    break;

  case 750:
#line 7486 "parser.y"
  {
	/* most of the field attributes are set when parsing the phrases */;
	setup_occurs ();
	setup_occurs_min_max (yyvsp[-4], yyvsp[-3]);
  }
#line 16718 "parser.c"
    break;

  case 752:
#line 7495 "parser.y"
  {
	current_field->step_count = cb_get_int (yyvsp[0]);
  }
#line 16726 "parser.c"
    break;

  case 753:
#line 7505 "parser.y"
  {
	/* most of the field attributes are set when parsing the phrases */;
	setup_occurs ();
	setup_occurs_min_max (yyvsp[-4], yyvsp[-3]);
  }
#line 16736 "parser.c"
    break;

  case 754:
#line 7512 "parser.y"
  {
	current_field->flag_unbounded = 1;
	if (current_field->parent) {
		current_field->parent->flag_unbounded = 1;
	}
	current_field->depending = yyvsp[-1];
	/* most of the field attributes are set when parsing the phrases */;
	setup_occurs ();
	setup_occurs_min_max (yyvsp[-6], cb_int0);
  }
#line 16751 "parser.c"
    break;

  case 755:
#line 7524 "parser.y"
  {
	setup_occurs ();
	current_field->occurs_min = yyvsp[-3] ? cb_get_int (yyvsp[-3]) : 0;
	if (yyvsp[-2]) {
		current_field->occurs_max = cb_get_int (yyvsp[-2]);
		if (current_field->occurs_max <= current_field->occurs_min) {
			cb_error (_("OCCURS TO must be greater than OCCURS FROM"));
		}
	} else {
		current_field->occurs_max = 0;
	}
	CB_PENDING ("OCCURS DYNAMIC");
  }
#line 16769 "parser.c"
    break;

  case 756:
#line 7540 "parser.y"
                                { yyval = NULL; }
#line 16775 "parser.c"
    break;

  case 757:
#line 7541 "parser.y"
                                { yyval = yyvsp[0]; }
#line 16781 "parser.c"
    break;

  case 758:
#line 7545 "parser.y"
                                { yyval = NULL; }
#line 16787 "parser.c"
    break;

  case 759:
#line 7546 "parser.y"
                                { yyval = yyvsp[0]; }
#line 16793 "parser.c"
    break;

  case 760:
#line 7550 "parser.y"
                                { yyval = NULL; }
#line 16799 "parser.c"
    break;

  case 761:
#line 7551 "parser.y"
                                { yyval = yyvsp[-1]; }
#line 16805 "parser.c"
    break;

  case 763:
#line 7556 "parser.y"
  {
	current_field->depending = yyvsp[0];
  }
#line 16813 "parser.c"
    break;

  case 765:
#line 7562 "parser.y"
  {
	yyval = cb_build_index (yyvsp[0], cb_zero, 0, current_field);
	CB_FIELD_PTR (yyval)->index_type = CB_STATIC_INT_INDEX;
  }
#line 16822 "parser.c"
    break;

  case 767:
#line 7570 "parser.y"
  {
	/* current_field->initialized = 1; */
  }
#line 16830 "parser.c"
    break;

  case 770:
#line 7579 "parser.y"
  {
	if (!cb_relaxed_syntax_checks) {
		cb_error (_("INDEXED should follow ASCENDING/DESCENDING"));
	} else {
		cb_warning (cb_warn_additional, _("INDEXED should follow ASCENDING/DESCENDING"));
	}
  }
#line 16842 "parser.c"
    break;

  case 774:
#line 7593 "parser.y"
  {
	cb_tree		l;
	struct cb_key	*keys;
	int		i;
	int		nkeys;

	l = yyvsp[0];
	nkeys = cb_list_length (yyvsp[0]);
	keys = cobc_parse_malloc (sizeof (struct cb_key) * nkeys);

	for (i = 0; i < nkeys; i++) {
		keys[i].dir = CB_PURPOSE_INT (l);
		keys[i].key = CB_VALUE (l);
		l = CB_CHAIN (l);
	}
	current_field->keys = keys;
	current_field->nkeys = nkeys;
  }
#line 16865 "parser.c"
    break;

  case 777:
#line 7620 "parser.y"
  {
	cb_tree ref = NULL;
	cb_tree rchain = NULL;
	cb_tree l;

	/* create reference chain all the way up
	   as later fields may have same name */
	if (!within_typedef_definition) {
		rchain = cb_build_full_field_reference (current_field->parent);
	}

	for (l = yyvsp[0]; l; l = CB_CHAIN (l)) {
		CB_PURPOSE (l) = yyvsp[-3];
		ref = CB_VALUE (l);
		if (CB_VALID_TREE(ref)) {
			CB_REFERENCE (ref)->chain = rchain;
		}
	}
	keys_list = cb_list_append (keys_list, yyvsp[0]);
	yyval = keys_list;
  }
#line 16891 "parser.c"
    break;

  case 778:
#line 7644 "parser.y"
                                { yyval = cb_int (COB_ASCENDING); }
#line 16897 "parser.c"
    break;

  case 779:
#line 7645 "parser.y"
                                { yyval = cb_int (COB_DESCENDING); }
#line 16903 "parser.c"
    break;

  case 782:
#line 7654 "parser.y"
  {
	current_field->index_list = yyvsp[0];
  }
#line 16911 "parser.c"
    break;

  case 783:
#line 7660 "parser.y"
                                { yyval = CB_LIST_INIT (yyvsp[0]); }
#line 16917 "parser.c"
    break;

  case 784:
#line 7662 "parser.y"
                                { yyval = cb_list_add (yyvsp[-1], yyvsp[0]); }
#line 16923 "parser.c"
    break;

  case 785:
#line 7667 "parser.y"
  {
	yyval = cb_build_index (yyvsp[0], cb_int1, 1U, current_field);
	CB_FIELD_PTR (yyval)->index_type = CB_STATIC_INT_INDEX;
  }
#line 16932 "parser.c"
    break;

  case 786:
#line 7678 "parser.y"
  {
	check_repeated ("JUSTIFIED", SYN_CLAUSE_8, &check_pic_duplicate);
	current_field->flag_justified = 1;
  }
#line 16941 "parser.c"
    break;

  case 787:
#line 7689 "parser.y"
  {
	check_repeated ("SYNCHRONIZED", SYN_CLAUSE_9, &check_pic_duplicate);
	if (cb_verify (cb_synchronized_clause, _("SYNCHRONIZED clause"))) {
		current_field->flag_synchronized = 1;
	}
  }
#line 16952 "parser.c"
    break;

  case 790:
#line 7701 "parser.y"
  {
	CB_PENDING ("SYNCHRONIZED RIGHT");
  }
#line 16960 "parser.c"
    break;

  case 791:
#line 7711 "parser.y"
  {
	check_repeated ("BLANK", SYN_CLAUSE_10, &check_pic_duplicate);
	current_field->flag_blank_zero = 1;
  }
#line 16969 "parser.c"
    break;

  case 792:
#line 7722 "parser.y"
  {
	check_repeated ("BASED", SYN_CLAUSE_11, &check_pic_duplicate);
	if (current_storage == CB_STORAGE_FILE) {
		cb_error (_("%s not allowed here"), "BASED");
	} else if (current_field->level != 1 && current_field->level != 77) {
		cb_error (_("%s only allowed at 01/77 level"), "BASED");
	} else if (!qualifier) {
		cb_error (_("%s requires a data name"), "BASED");
	} else if (current_field->flag_external) {
		cb_error (_("%s and %s are mutually exclusive"), "BASED", "EXTERNAL");
	} else if (current_field->redefines) {
		cb_error (_("%s and %s are mutually exclusive"), "BASED", "REDEFINES");
	} else if (current_field->flag_any_length) {
		cb_error (_("%s and %s are mutually exclusive"), "BASED", "ANY LENGTH");
	} else if (current_field->flag_occurs) {
		cb_error (_("%s and %s are mutually exclusive"), "BASED", "OCCURS");
	} else {
		current_field->flag_item_based = 1;
	}
  }
#line 16994 "parser.c"
    break;

  case 793:
#line 7748 "parser.y"
  {
	check_repeated ("VALUE", SYN_CLAUSE_12, &check_pic_duplicate);
	current_field->values = yyvsp[0];
  }
#line 17003 "parser.c"
    break;

  case 795:
#line 7756 "parser.y"
                                { yyval = CB_LIST_INIT (yyvsp[0]); }
#line 17009 "parser.c"
    break;

  case 796:
#line 7757 "parser.y"
                                { yyval = cb_list_add (yyvsp[-1], yyvsp[0]); }
#line 17015 "parser.c"
    break;

  case 797:
#line 7761 "parser.y"
                                                { yyval = CB_BUILD_PAIR (yyvsp[-2], yyvsp[0]); }
#line 17021 "parser.c"
    break;

  case 800:
#line 7768 "parser.y"
  {
	if (current_field->level != 88) {
		cb_error (_("FALSE clause only allowed for 88 level"));
	}
	current_field->false_88 = CB_LIST_INIT (yyvsp[0]);
  }
#line 17032 "parser.c"
    break;

  case 801:
#line 7780 "parser.y"
  {
	check_repeated ("ANY", SYN_CLAUSE_14, &check_pic_duplicate);
	if (current_field->flag_item_based) {
		cb_error (_("%s and %s are mutually exclusive"), "BASED", "ANY LENGTH");
	} else {
		current_field->flag_any_length = 1;
	}
  }
#line 17045 "parser.c"
    break;

  case 802:
#line 7789 "parser.y"
  {
	check_repeated ("ANY", SYN_CLAUSE_14, &check_pic_duplicate);
	if (current_field->flag_item_based) {
		cb_error (_("%s and %s are mutually exclusive"), "BASED", "ANY NUMERIC");
	} else {
		current_field->flag_any_length = 1;
		current_field->flag_any_numeric = 1;
	}
  }
#line 17059 "parser.c"
    break;

  case 803:
#line 7804 "parser.y"
  {
	check_repeated ("EXTERNAL-FORM", SYN_CLAUSE_2, &check_pic_duplicate);
	CB_PENDING ("EXTERNAL-FORM");
	if (current_storage != CB_STORAGE_WORKING) {
		cb_error (_("%s not allowed here"), "EXTERNAL-FORM");
	} else if (current_field->level != 1) {	/* docs say: at group level */
		cb_error (_("%s only allowed at 01 level"), "EXTERNAL-FORM");
	} else if (!qualifier) {
		cb_error (_("%s requires a data name"), "EXTERNAL-FORM");
	} else if (current_field->redefines) {
		cb_error (_("%s and %s combination not allowed"), "EXTERNAL-FORM", "REDEFINES");
	} else {
		current_field->flag_is_external_form = 1;
	}
  }
#line 17079 "parser.c"
    break;

  case 804:
#line 7827 "parser.y"
  {
	check_repeated ("IDENTIFIED BY", SYN_CLAUSE_3, &check_pic_duplicate);
	if (!current_field->flag_is_external_form) {
		CB_PENDING ("EXTERNAL-FORM (IDENTIFIED BY)");
		if (current_storage != CB_STORAGE_WORKING) {
			cb_error (_("%s not allowed here"), "IDENTIFIED BY");
		} else if (!qualifier) {
			cb_error (_("%s requires a data name"), "IDENTIFIED BY");
		} else if (current_field->redefines) {
			cb_error (_("%s and %s combination not allowed"), "IDENTIFIED BY", "REDEFINES");
		}
	}
	current_field->external_form_identifier = yyvsp[0];
  }
#line 17098 "parser.c"
    break;

  case 806:
#line 7847 "parser.y"
  {
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_LOCAL_STORAGE_SECTION;
	current_storage = CB_STORAGE_LOCAL;
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "LOCAL-STORAGE");
	} else if (cb_local_implies_recursive) {
		current_program->flag_recursive = 1;
	}
  }
#line 17113 "parser.c"
    break;

  case 807:
#line 7858 "parser.y"
  {
	if (yyvsp[0]) {
		current_program->local_storage = CB_FIELD (yyvsp[0]);
	}
  }
#line 17123 "parser.c"
    break;

  case 809:
#line 7870 "parser.y"
  {
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_LINKAGE_SECTION;
	current_storage = CB_STORAGE_LINKAGE;
  }
#line 17133 "parser.c"
    break;

  case 810:
#line 7876 "parser.y"
  {
	if (yyvsp[0]) {
		current_program->linkage_storage = CB_FIELD (yyvsp[0]);
	}
  }
#line 17143 "parser.c"
    break;

  case 812:
#line 7887 "parser.y"
  {
	header_check |= COBC_HD_REPORT_SECTION;
	current_storage = CB_STORAGE_REPORT;
	description_field = NULL;
	current_program->flag_report = 1;
	cb_clear_real_field ();
  }
#line 17155 "parser.c"
    break;

  case 816:
#line 7905 "parser.y"
  {
	if (CB_INVALID_TREE (yyvsp[0])) {
		YYERROR;
	} else {
		current_field = NULL;
		control_field = NULL;
		description_field = NULL;
		current_report = CB_REPORT_PTR (yyvsp[0]);
	}
	check_duplicate = 0;
  }
#line 17171 "parser.c"
    break;

  case 817:
#line 7918 "parser.y"
  {
	yyval = get_finalized_description_tree ();

	current_program->report_storage = description_field;
	current_program->flag_report = 1;
	if (current_report->records == NULL) {
		current_report->records = description_field;
	}
	finalize_report (current_report, description_field);
  }
#line 17186 "parser.c"
    break;

  case 820:
#line 7933 "parser.y"
  {
	yyerrok;
  }
#line 17194 "parser.c"
    break;

  case 821:
#line 7940 "parser.y"
  {
	check_repeated ("GLOBAL", SYN_CLAUSE_1, &check_duplicate);
	current_report->global = 1;
	cb_error (_("GLOBAL is not allowed with RD"));
  }
#line 17204 "parser.c"
    break;

  case 822:
#line 7946 "parser.y"
  {
	check_repeated ("CODE", SYN_CLAUSE_2, &check_duplicate);
	current_report->code_clause = yyvsp[0];
  }
#line 17213 "parser.c"
    break;

  case 825:
#line 7958 "parser.y"
  {
	check_repeated ("CONTROL", SYN_CLAUSE_3, &check_duplicate);
  }
#line 17221 "parser.c"
    break;

  case 829:
#line 7971 "parser.y"
  {
	current_report->control_final = 1;
  }
#line 17229 "parser.c"
    break;

  case 832:
#line 7983 "parser.y"
  {
	/* Add field to current control list */
	CB_ADD_TO_CHAIN (yyvsp[0], current_report->controls);
  }
#line 17238 "parser.c"
    break;

  case 833:
#line 7994 "parser.y"
  {
	check_repeated ("PAGE", SYN_CLAUSE_4, &check_duplicate);
	if (!current_report->heading) {
		current_report->heading = 1;
	}
	if (!current_report->first_detail) {
		current_report->first_detail = current_report->heading;
	}
	if (!current_report->last_control) {
		if (current_report->last_detail) {
			current_report->last_control = current_report->last_detail;
		} else if (current_report->footing) {
			current_report->last_control = current_report->footing;
		} else {
			current_report->last_control = current_report->lines;
		}
		if (current_report->t_last_detail) {
			current_report->t_last_control = current_report->t_last_detail;
		} else if (current_report->t_footing) {
			current_report->t_last_control = current_report->t_footing;
		} else if(current_report->t_lines) {
			current_report->t_last_control = current_report->t_lines;
		}
	}
	if (!current_report->last_detail && !current_report->footing) {
		current_report->last_detail = current_report->lines;
		current_report->footing = current_report->lines;
	} else if (!current_report->last_detail) {
		current_report->last_detail = current_report->footing;
	} else if (!current_report->footing) {
		current_report->footing = current_report->last_detail;
	}
	/* PAGE LIMIT values checked in finalize_report in typeck.c */
  }
#line 17277 "parser.c"
    break;

  case 834:
#line 8032 "parser.y"
  {
	if (CB_LITERAL_P (yyvsp[-1])) {
		current_report->lines = cb_get_int (yyvsp[-1]);
		if (current_report->lines > 999) {
			cb_error ("PAGE LIMIT lines > 999");
		}
	} else {
		current_report->t_lines = yyvsp[-1];
	}
  }
#line 17292 "parser.c"
    break;

  case 836:
#line 8044 "parser.y"
  {
	if (CB_LITERAL_P (yyvsp[-2])) {
		current_report->lines = cb_get_int (yyvsp[-2]);
		if (current_report->lines > 999) {
			cb_error ("PAGE LIMIT lines > 999");
		}
	} else {
		current_report->t_lines = yyvsp[-2];
	}
  }
#line 17307 "parser.c"
    break;

  case 837:
#line 8058 "parser.y"
  {
	/* may be repeated later by page detail */
	check_repeated ("LINE LIMIT", SYN_CLAUSE_5, &check_duplicate);
	if (CB_LITERAL_P (yyvsp[-1])) {
		current_report->columns = cb_get_int (yyvsp[-1]);
	} else {
		current_report->t_columns = yyvsp[-1];
	}
  }
#line 17321 "parser.c"
    break;

  case 847:
#line 8086 "parser.y"
  {
	check_repeated ("LINE LIMIT", SYN_CLAUSE_5, &check_duplicate);
	if (CB_LITERAL_P (yyvsp[0])) {
		current_report->columns = cb_get_int (yyvsp[0]);
	} else {
		current_report->t_columns = yyvsp[0];
	}
  }
#line 17334 "parser.c"
    break;

  case 848:
#line 8098 "parser.y"
  {
	check_repeated ("HEADING", SYN_CLAUSE_6, &check_duplicate);
	error_if_no_page_lines_limit ("HEADING");

	if (CB_LITERAL_P (yyvsp[0])) {
		current_report->heading = cb_get_int (yyvsp[0]);
	} else {
		current_report->t_heading = yyvsp[0];
	}
  }
#line 17349 "parser.c"
    break;

  case 849:
#line 8112 "parser.y"
  {
	check_repeated ("FIRST DETAIL", SYN_CLAUSE_7, &check_duplicate);
	error_if_no_page_lines_limit ("FIRST DETAIL");

	if (CB_LITERAL_P (yyvsp[0])) {
		current_report->first_detail = cb_get_int (yyvsp[0]);
	} else {
		current_report->t_first_detail = yyvsp[0];
	}
  }
#line 17364 "parser.c"
    break;

  case 850:
#line 8126 "parser.y"
  {
	check_repeated ("LAST CONTROL HEADING", SYN_CLAUSE_8, &check_duplicate);
	error_if_no_page_lines_limit ("LAST CONTROL HEADING");

	if (CB_LITERAL_P (yyvsp[0])) {
		current_report->last_control = cb_get_int (yyvsp[0]);
	} else {
		current_report->t_last_control = yyvsp[0];
	}
  }
#line 17379 "parser.c"
    break;

  case 851:
#line 8140 "parser.y"
  {
	check_repeated ("LAST DETAIL", SYN_CLAUSE_9, &check_duplicate);
	error_if_no_page_lines_limit ("LAST DETAIL");

	if (CB_LITERAL_P (yyvsp[0])) {
		current_report->last_detail = cb_get_int (yyvsp[0]);
	} else {
		current_report->t_last_detail = yyvsp[0];
	}
  }
#line 17394 "parser.c"
    break;

  case 852:
#line 8154 "parser.y"
  {
	check_repeated ("FOOTING", SYN_CLAUSE_10, &check_duplicate);
	error_if_no_page_lines_limit ("FOOTING");

	if (CB_LITERAL_P (yyvsp[0])) {
		current_report->footing = cb_get_int (yyvsp[0]);
	} else {
		current_report->t_footing = yyvsp[0];
	}
  }
#line 17409 "parser.c"
    break;

  case 855:
#line 8172 "parser.y"
  {
	if (set_current_field(yyvsp[-1], yyvsp[0])) {
		YYERROR;
	}
	if (!description_field) {
		description_field = current_field;
	}
  }
#line 17422 "parser.c"
    break;

  case 857:
#line 8182 "parser.y"
  {
	/* Free tree associated with level number */
	cobc_parse_free (yyvsp[-2]);
	cb_unput_dot ();
	yyerrok;
	check_pic_duplicate = 0;
	check_duplicate = 0;
	current_field = cb_get_real_field ();
  }
#line 17436 "parser.c"
    break;

  case 877:
#line 8219 "parser.y"
  {
	check_repeated ("TYPE IS", SYN_CLAUSE_16, &check_pic_duplicate);
  }
#line 17444 "parser.c"
    break;

  case 878:
#line 8226 "parser.y"
  {
	current_field->report_flag |= COB_REPORT_HEADING;
  }
#line 17452 "parser.c"
    break;

  case 879:
#line 8230 "parser.y"
  {
	current_field->report_flag |= COB_REPORT_PAGE_HEADING;
  }
#line 17460 "parser.c"
    break;

  case 882:
#line 8236 "parser.y"
  {
	if (current_report != NULL) {
		current_report->has_detail = 1;
	}
	current_field->report_flag |= COB_REPORT_DETAIL;
  }
#line 17471 "parser.c"
    break;

  case 883:
#line 8243 "parser.y"
  {
	current_field->report_flag |= COB_REPORT_PAGE_FOOTING;
  }
#line 17479 "parser.c"
    break;

  case 884:
#line 8247 "parser.y"
  {
	current_field->report_flag |= COB_REPORT_FOOTING;
  }
#line 17487 "parser.c"
    break;

  case 885:
#line 8254 "parser.y"
  {
	current_field->report_flag |= COB_REPORT_CONTROL_HEADING;
  }
#line 17495 "parser.c"
    break;

  case 886:
#line 8258 "parser.y"
  {
	current_field->report_flag |= COB_REPORT_CONTROL_HEADING;
	current_field->report_control = yyvsp[-1];
	if (yyvsp[0]) {
		current_field->report_flag |= COB_REPORT_PAGE;
	}
  }
#line 17507 "parser.c"
    break;

  case 887:
#line 8266 "parser.y"
  {
	current_field->report_flag |= COB_REPORT_CONTROL_HEADING_FINAL;
  }
#line 17515 "parser.c"
    break;

  case 888:
#line 8275 "parser.y"
                {yyval = NULL;}
#line 17521 "parser.c"
    break;

  case 889:
#line 8276 "parser.y"
                        {yyval = cb_int0;}
#line 17527 "parser.c"
    break;

  case 890:
#line 8281 "parser.y"
  {
	current_field->report_flag |= COB_REPORT_CONTROL_FOOTING;
  }
#line 17535 "parser.c"
    break;

  case 891:
#line 8285 "parser.y"
  {
	current_field->report_flag |= COB_REPORT_CONTROL_FOOTING;
	current_field->report_control = yyvsp[-1];
  }
#line 17544 "parser.c"
    break;

  case 892:
#line 8290 "parser.y"
  {
	current_field->report_flag |= COB_REPORT_CONTROL_FOOTING_FINAL;
  }
#line 17552 "parser.c"
    break;

  case 893:
#line 8294 "parser.y"
  {
	current_field->report_flag |= COB_REPORT_CONTROL_FOOTING;
	current_field->report_flag |= COB_REPORT_ALL;
  }
#line 17561 "parser.c"
    break;

  case 894:
#line 8302 "parser.y"
  {
	check_repeated ("NEXT GROUP", SYN_CLAUSE_17, &check_pic_duplicate);
  }
#line 17569 "parser.c"
    break;

  case 895:
#line 8309 "parser.y"
  {
	if (CB_LITERAL_P(yyvsp[0]) && CB_LITERAL (yyvsp[0])->sign > 0) {
		current_field->report_flag |= COB_REPORT_NEXT_GROUP_PLUS;
	} else {
		current_field->report_flag |= COB_REPORT_NEXT_GROUP_LINE;
	}
	current_field->next_group_line = cb_get_int (yyvsp[0]);
  }
#line 17582 "parser.c"
    break;

  case 896:
#line 8318 "parser.y"
  {
	current_field->report_flag |= COB_REPORT_NEXT_GROUP_PLUS;
	current_field->next_group_line = cb_get_int(yyvsp[0]);
  }
#line 17591 "parser.c"
    break;

  case 897:
#line 8323 "parser.y"
  {
	current_field->report_flag |= COB_REPORT_NEXT_GROUP_PAGE;
  }
#line 17599 "parser.c"
    break;

  case 901:
#line 8336 "parser.y"
  {
	check_repeated ("SUM", SYN_CLAUSE_19, &check_pic_duplicate);
	current_field->report_sum_list = yyvsp[-1];
	build_sum_counter (current_report, current_field);
  }
#line 17609 "parser.c"
    break;

  case 904:
#line 8346 "parser.y"
  {
	current_field->report_sum_upon = yyvsp[0];
  }
#line 17617 "parser.c"
    break;

  case 905:
#line 8353 "parser.y"
  {
	current_field->report_reset = yyvsp[0];
  }
#line 17625 "parser.c"
    break;

  case 906:
#line 8357 "parser.y"
  {
	current_field->report_flag |= COB_REPORT_RESET_FINAL;
  }
#line 17633 "parser.c"
    break;

  case 907:
#line 8364 "parser.y"
  {
	check_repeated ("PRESENT", SYN_CLAUSE_20, &check_pic_duplicate);
	current_field->report_when = yyvsp[0];
  }
#line 17642 "parser.c"
    break;

  case 908:
#line 8369 "parser.y"
  {
	check_repeated ("PRESENT", SYN_CLAUSE_20, &check_pic_duplicate);
	current_field->report_flag |= COB_REPORT_PRESENT;
	current_field->report_flag &= ~COB_REPORT_BEFORE;
  }
#line 17652 "parser.c"
    break;

  case 909:
#line 8375 "parser.y"
  {
	check_repeated ("PRESENT", SYN_CLAUSE_20, &check_pic_duplicate);
	current_field->report_flag |= COB_REPORT_PRESENT;
	current_field->report_flag &= ~COB_REPORT_BEFORE;
	current_field->report_flag |= COB_REPORT_PAGE;
  }
#line 17663 "parser.c"
    break;

  case 910:
#line 8382 "parser.y"
  {
	check_repeated ("PRESENT", SYN_CLAUSE_20, &check_pic_duplicate);
	current_field->report_flag |= COB_REPORT_PRESENT;
	current_field->report_flag |= COB_REPORT_BEFORE;
  }
#line 17673 "parser.c"
    break;

  case 911:
#line 8388 "parser.y"
  {
	check_repeated ("PRESENT", SYN_CLAUSE_20, &check_pic_duplicate);
	current_field->report_flag |= COB_REPORT_PRESENT;
	current_field->report_flag |= COB_REPORT_BEFORE;
	current_field->report_flag |= COB_REPORT_PAGE;
  }
#line 17684 "parser.c"
    break;

  case 912:
#line 8398 "parser.y"
  {
	current_field->report_flag |= COB_REPORT_PRESENT;
  }
#line 17692 "parser.c"
    break;

  case 913:
#line 8402 "parser.y"
  {
	current_field->report_flag |= COB_REPORT_PRESENT;
	current_field->report_flag |= COB_REPORT_NEGATE;
  }
#line 17701 "parser.c"
    break;

  case 916:
#line 8415 "parser.y"
  {
	current_field->report_flag |= COB_REPORT_PAGE;
  }
#line 17709 "parser.c"
    break;

  case 917:
#line 8419 "parser.y"
  {
	current_field->report_control = yyvsp[0];
  }
#line 17717 "parser.c"
    break;

  case 919:
#line 8427 "parser.y"
  {
	CB_PENDING ("RW VARYING clause");
  }
#line 17725 "parser.c"
    break;

  case 920:
#line 8434 "parser.y"
  {
	check_repeated ("LINE", SYN_CLAUSE_21, &check_pic_duplicate);
	current_field->report_flag |= COB_REPORT_LINE;
  }
#line 17734 "parser.c"
    break;

  case 925:
#line 8452 "parser.y"
  {
	current_field->report_flag |= COB_REPORT_LINE_NEXT_PAGE;
  }
#line 17742 "parser.c"
    break;

  case 926:
#line 8456 "parser.y"
  {
	current_field->report_line = cb_get_int (yyvsp[0]);
	if (yyvsp[-1]) {
		current_field->report_flag |= COB_REPORT_LINE_PLUS;
		if (current_field->report_line == 0) {
			CB_PENDING ("LINE PLUS 0");
		}
	}
  }
#line 17756 "parser.c"
    break;

  case 927:
#line 8470 "parser.y"
  {
	check_repeated ("COLUMN", SYN_CLAUSE_18, &check_pic_duplicate);
	if ((current_field->report_flag & (COB_REPORT_COLUMN_LEFT|COB_REPORT_COLUMN_RIGHT|COB_REPORT_COLUMN_CENTER))
	 && (current_field->report_flag & COB_REPORT_COLUMN_PLUS)) {
		if (cb_relaxed_syntax_checks) {
			cb_warning (COBC_WARN_FILLER, _("PLUS is not recommended with LEFT, RIGHT or CENTER"));
		} else {
			cb_error (_("PLUS is not allowed with LEFT, RIGHT or CENTER"));
		}
	}
  }
#line 17772 "parser.c"
    break;

  case 931:
#line 8494 "parser.y"
  {
	current_field->report_flag |= COB_REPORT_COLUMN_LEFT;
  }
#line 17780 "parser.c"
    break;

  case 932:
#line 8498 "parser.y"
  {
	current_field->report_flag |= COB_REPORT_COLUMN_RIGHT;
  }
#line 17788 "parser.c"
    break;

  case 933:
#line 8502 "parser.y"
  {
	current_field->report_flag |= COB_REPORT_COLUMN_CENTER;
  }
#line 17796 "parser.c"
    break;

  case 934:
#line 8509 "parser.y"
  {
	int colnum = cb_get_int (yyvsp[0]);
	if (colnum != 0) {
		if (current_field->parent
		 && current_field->parent->children == current_field) {
			cb_warning (COBC_WARN_FILLER, _("PLUS is ignored on first field of line"));
			if (current_field->step_count == 0) {
				current_field->step_count = colnum;
			}
		} else {
			current_field->report_flag |= COB_REPORT_COLUMN_PLUS;
		}
	} else {
		colnum = 0;
	}
	if (current_field->report_column == 0) {
		current_field->report_column = colnum;
	}
	current_field->report_num_col++;
  }
#line 17821 "parser.c"
    break;

  case 938:
#line 8539 "parser.y"
  {
	int colnum;
	colnum = cb_get_int (yyvsp[0]);
	if (colnum < 0) {
		/* already handled by integer check */
	} else if (colnum == 0) {
		cb_error (_("invalid COLUMN integer; must be > 0"));
	} else if (colnum <= current_field->report_column) {
		cb_warning (COBC_WARN_FILLER, _("COLUMN numbers should increase"));
	}
	current_field->report_column_list =
			cb_list_append (current_field->report_column_list, CB_LIST_INIT (yyvsp[0]));
	if (current_field->report_column == 0) {
		current_field->report_column = colnum;
	}
	current_field->report_num_col++;
  }
#line 17843 "parser.c"
    break;

  case 939:
#line 8560 "parser.y"
  {
	check_repeated ("SOURCE", SYN_CLAUSE_22, &check_pic_duplicate);
	current_field->report_source = yyvsp[-1];
  }
#line 17852 "parser.c"
    break;

  case 940:
#line 8568 "parser.y"
  {
	check_repeated ("GROUP", SYN_CLAUSE_23, &check_pic_duplicate);
	current_field->report_flag |= COB_REPORT_GROUP_INDICATE;
  }
#line 17861 "parser.c"
    break;

  case 942:
#line 8578 "parser.y"
  {
	cobc_cs_check = CB_CS_SCREEN;
	current_storage = CB_STORAGE_SCREEN;
	current_field = NULL;
	description_field = NULL;
	cb_clear_real_field ();
  }
#line 17873 "parser.c"
    break;

  case 943:
#line 8586 "parser.y"
  {
	if (description_field) {
		get_finalized_description_tree ();
		current_program->screen_storage = description_field;
		current_program->flag_screen = 1;
	}
	cobc_cs_check = 0;
  }
#line 17886 "parser.c"
    break;

  case 949:
#line 8609 "parser.y"
  {
	if (set_current_field (yyvsp[-1], yyvsp[0])) {
		YYERROR;
	}
	if (current_field->parent) {
		current_field->screen_foreg = current_field->parent->screen_foreg;
		current_field->screen_backg = current_field->parent->screen_backg;
		current_field->screen_prompt = current_field->parent->screen_prompt;
	}
  }
#line 17901 "parser.c"
    break;

  case 950:
#line 8620 "parser.y"
  {
	cob_flags_t	flags;

	if (current_field->parent) {
		flags = current_field->parent->screen_flag;
		flags &= ~COB_SCREEN_BLANK_LINE;
		flags &= ~COB_SCREEN_BLANK_SCREEN;
		flags &= ~COB_SCREEN_ERASE_EOL;
		flags &= ~COB_SCREEN_ERASE_EOS;
		flags &= ~COB_SCREEN_LINE_PLUS;
		flags &= ~COB_SCREEN_LINE_MINUS;
		flags &= ~COB_SCREEN_COLUMN_PLUS;
		flags &= ~COB_SCREEN_COLUMN_MINUS;

		flags = zero_conflicting_flags (current_field->screen_flag,
						flags);

		current_field->screen_flag |= flags;
	}

	if (current_field->screen_flag & COB_SCREEN_INITIAL) {
		if (!(current_field->screen_flag & COB_SCREEN_INPUT)) {
			cb_error (_("INITIAL specified on non-input field"));
		}
	}
	if (!qualifier) {
		current_field->flag_filler = 1;
	}

	if (!description_field) {
		description_field = current_field;
	}
	if (current_field->flag_occurs
	 && !has_relative_pos (current_field)) {
		cb_error (_("relative LINE/COLUMN clause required with OCCURS"));
	}
  }
#line 17943 "parser.c"
    break;

  case 951:
#line 8659 "parser.y"
  {
	if (set_current_field (yyvsp[-1], yyvsp[0])) {
		YYERROR;
	}

	if (current_field->parent) {
		current_field->screen_foreg = current_field->parent->screen_foreg;
		current_field->screen_backg = current_field->parent->screen_backg;
		current_field->screen_prompt = current_field->parent->screen_prompt;
	}
  }
#line 17959 "parser.c"
    break;

  case 952:
#line 8671 "parser.y"
  {
	CB_PENDING ("GRAPHICAL CONTROL");
  }
#line 17967 "parser.c"
    break;

  case 953:
#line 8676 "parser.y"
  {
	cob_flags_t	flags;

	if (current_field->parent) {
		flags = current_field->parent->screen_flag;
		flags &= ~COB_SCREEN_BLANK_LINE;
		flags &= ~COB_SCREEN_BLANK_SCREEN;
		flags &= ~COB_SCREEN_ERASE_EOL;
		flags &= ~COB_SCREEN_ERASE_EOS;
		flags &= ~COB_SCREEN_LINE_PLUS;
		flags &= ~COB_SCREEN_LINE_MINUS;
		flags &= ~COB_SCREEN_COLUMN_PLUS;
		flags &= ~COB_SCREEN_COLUMN_MINUS;

		flags = zero_conflicting_flags (current_field->screen_flag,
						flags);

		current_field->screen_flag |= flags;
	}

	if (current_field->screen_flag & COB_SCREEN_INITIAL) {
		if (!(current_field->screen_flag & COB_SCREEN_INPUT)) {
			cb_error (_("INITIAL specified on non-input field"));
		}
	}
	if (!qualifier) {
		current_field->flag_filler = 1;
	}

	if (!description_field) {
		description_field = current_field;
	}
	if (current_field->flag_occurs
	 && !has_relative_pos (current_field)) {
		cb_error (_("relative LINE/COLUMN clause required with OCCURS"));
	}
	cobc_cs_check = CB_CS_SCREEN;
  }
#line 18010 "parser.c"
    break;

  case 954:
#line 8716 "parser.y"
  {
	/*
	  Tree associated with level number has already been freed; we don't
	  need to do anything here.
	*/
	yyerrok;
	cb_unput_dot ();
	check_pic_duplicate = 0;
	check_duplicate = 0;
#if	1	/* RXWRXW Screen field */
	if (current_field) {
		current_field->flag_is_verified = 1;
		current_field->flag_invalid = 1;
	}
#endif
	current_field = cb_get_real_field ();
  }
#line 18032 "parser.c"
    break;

  case 957:
#line 8742 "parser.y"
  {
	set_screen_attr_with_conflict ("BLANK LINE", COB_SCREEN_BLANK_LINE,
				       "BLANK SCREEN", COB_SCREEN_BLANK_SCREEN);
  }
#line 18041 "parser.c"
    break;

  case 958:
#line 8747 "parser.y"
  {
	set_screen_attr_with_conflict ("BLANK SCREEN", COB_SCREEN_BLANK_SCREEN,
				       "BLANK LINE", COB_SCREEN_BLANK_LINE);
  }
#line 18050 "parser.c"
    break;

  case 959:
#line 8752 "parser.y"
  {
	set_screen_attr ("BELL", COB_SCREEN_BELL);
  }
#line 18058 "parser.c"
    break;

  case 960:
#line 8756 "parser.y"
  {
	set_screen_attr ("BLINK", COB_SCREEN_BLINK);
  }
#line 18066 "parser.c"
    break;

  case 961:
#line 8760 "parser.y"
  {
	set_screen_attr_with_conflict ("ERASE EOL", COB_SCREEN_ERASE_EOL,
				       "ERASE EOS", COB_SCREEN_ERASE_EOS);
  }
#line 18075 "parser.c"
    break;

  case 962:
#line 8765 "parser.y"
  {
	set_screen_attr_with_conflict ("ERASE EOS", COB_SCREEN_ERASE_EOS,
				       "ERASE EOL", COB_SCREEN_ERASE_EOL);
  }
#line 18084 "parser.c"
    break;

  case 963:
#line 8770 "parser.y"
  {
	set_screen_attr_with_conflict ("HIGHLIGHT", COB_SCREEN_HIGHLIGHT,
				       "LOWLIGHT", COB_SCREEN_LOWLIGHT);
  }
#line 18093 "parser.c"
    break;

  case 964:
#line 8775 "parser.y"
  {
	set_screen_attr_with_conflict ("LOWLIGHT", COB_SCREEN_LOWLIGHT,
				       "HIGHLIGHT", COB_SCREEN_HIGHLIGHT);
  }
#line 18102 "parser.c"
    break;

  case 965:
#line 8780 "parser.y"
  {
	CB_PENDING ("STANDARD intensity");
#if 0 /* in general we could simply remove high/low, but for syntax checks
	we still need a flag */
	set_screen_attr_with_conflict ("LOWLIGHT", COB_SCREEN_LOWLIGHT,
				       "HIGHLIGHT", COB_SCREEN_HIGHLIGHT);
#endif
  }
#line 18115 "parser.c"
    break;

  case 966:
#line 8789 "parser.y"
  {
	CB_PENDING ("BACKGROUND intensity");
  }
#line 18123 "parser.c"
    break;

  case 967:
#line 8793 "parser.y"
  {
	CB_PENDING ("BACKGROUND intensity");
  }
#line 18131 "parser.c"
    break;

  case 968:
#line 8797 "parser.y"
  {
	CB_PENDING ("BACKGROUND intensity");
  }
#line 18139 "parser.c"
    break;

  case 969:
#line 8801 "parser.y"
  {
	set_screen_attr ("REVERSE-VIDEO", COB_SCREEN_REVERSE);
  }
#line 18147 "parser.c"
    break;

  case 970:
#line 8805 "parser.y"
  {
	/* set_screen_attr ("SIZE", COB_SCREEN_SIZE); */
	CB_PENDING ("SIZE clause");
	current_field->size = cb_get_int (yyvsp[0]);
  }
#line 18157 "parser.c"
    break;

  case 971:
#line 8811 "parser.y"
  {
	CB_PENDING (_("screen positions from data-item"));
  }
#line 18165 "parser.c"
    break;

  case 972:
#line 8815 "parser.y"
  {
	CB_PENDING (_("screen positions from data-item"));
	CB_PENDING ("SIZE clause");
  }
#line 18174 "parser.c"
    break;

  case 973:
#line 8820 "parser.y"
  {
	/* set_screen_attr ("SIZE", COB_SCREEN_SIZE); */
	CB_PENDING ("SIZE clause");
	current_field->size = cb_get_int (yyvsp[0]);
  }
#line 18184 "parser.c"
    break;

  case 974:
#line 8826 "parser.y"
  {
	set_screen_attr ("UNDERLINE", COB_SCREEN_UNDERLINE);
  }
#line 18192 "parser.c"
    break;

  case 975:
#line 8830 "parser.y"
  {
	set_screen_attr ("OVERLINE", COB_SCREEN_OVERLINE);
	CB_PENDING ("OVERLINE");
  }
#line 18201 "parser.c"
    break;

  case 976:
#line 8835 "parser.y"
  {
	set_screen_attr ("GRID", COB_SCREEN_GRID);
	CB_PENDING ("GRID");
  }
#line 18210 "parser.c"
    break;

  case 977:
#line 8840 "parser.y"
  {
	set_screen_attr ("LEFTLINE", COB_SCREEN_LEFTLINE);
	CB_PENDING ("LEFTLINE");
  }
#line 18219 "parser.c"
    break;

  case 978:
#line 8845 "parser.y"
  {
	set_screen_attr_with_conflict ("AUTO", COB_SCREEN_AUTO,
				       "TAB", COB_SCREEN_TAB);
  }
#line 18228 "parser.c"
    break;

  case 979:
#line 8850 "parser.y"
  {
	set_screen_attr_with_conflict ("TAB", COB_SCREEN_TAB,
				       "AUTO", COB_SCREEN_AUTO);
  }
#line 18237 "parser.c"
    break;

  case 980:
#line 8855 "parser.y"
  {
	set_screen_attr_with_conflict ("SECURE", COB_SCREEN_SECURE,
				       "NO-ECHO", COB_SCREEN_NO_ECHO);
  }
#line 18246 "parser.c"
    break;

  case 981:
#line 8860 "parser.y"
  {
	if (cb_no_echo_means_secure) {
		set_screen_attr ("SECURE", COB_SCREEN_SECURE);
	} else {
		set_screen_attr_with_conflict ("NO-ECHO", COB_SCREEN_NO_ECHO,
					       "SECURE", COB_SCREEN_SECURE);
	}
  }
#line 18259 "parser.c"
    break;

  case 982:
#line 8869 "parser.y"
  {
	set_screen_attr ("REQUIRED", COB_SCREEN_REQUIRED);
  }
#line 18267 "parser.c"
    break;

  case 983:
#line 8873 "parser.y"
  {
	set_screen_attr ("FULL", COB_SCREEN_FULL);
  }
#line 18275 "parser.c"
    break;

  case 984:
#line 8877 "parser.y"
  {
	/* FIXME: ACUCOBOL and (undocumented) MF have CHARACTER as optional here */
	set_screen_attr ("PROMPT", COB_SCREEN_PROMPT);
	current_field->screen_prompt = yyvsp[0];
  }
#line 18285 "parser.c"
    break;

  case 985:
#line 8883 "parser.y"
  {
	set_screen_attr ("PROMPT", COB_SCREEN_PROMPT);
  }
#line 18293 "parser.c"
    break;

  case 986:
#line 8887 "parser.y"
  {
	set_screen_attr ("INITIAL", COB_SCREEN_INITIAL);
  }
#line 18301 "parser.c"
    break;

  case 987:
#line 8891 "parser.y"
  {
	check_repeated ("LINE", SYN_CLAUSE_16, &check_pic_duplicate);
  }
#line 18309 "parser.c"
    break;

  case 988:
#line 8895 "parser.y"
  {
	CB_PENDING ("LINES clause");	/* note: should only occur with controls */
  }
#line 18317 "parser.c"
    break;

  case 989:
#line 8899 "parser.y"
  {
	/*check_repeated ("CLINE", SYN_CLAUSE_5000, &check_pic_duplicate);*/
  }
#line 18325 "parser.c"
    break;

  case 990:
#line 8903 "parser.y"
  {
	check_repeated ("COLUMN", SYN_CLAUSE_17, &check_pic_duplicate);
  }
#line 18333 "parser.c"
    break;

  case 991:
#line 8907 "parser.y"
  {
	/*check_repeated ("CCOL", SYN_CLAUSE_5001, &check_pic_duplicate);*/
  }
#line 18341 "parser.c"
    break;

  case 992:
#line 8911 "parser.y"
  {
#if 0 /* TODO: implement, and add reverse to BACKGROUND/FOREGROUND-COLOR */
	check_repeated ("COLOR", SYN_CLAUSE_19, &check_pic_duplicate);
	set_screen_attr_with_conflict ("COLOR", COB_SCREEN_COLOR,
				       "BACKGROUND-COLOR", COB_SCREEN_BACKGROUND_COLOR);
	set_screen_attr_with_conflict ("COLOR", COB_SCREEN_COLOR,
				       "FOREGROUND-COLOR", FOREGROUND_COLOR);
#endif
	CB_PENDING ("COLOR clause");
  }
#line 18356 "parser.c"
    break;

  case 993:
#line 8922 "parser.y"
  {
	check_repeated ("FOREGROUND-COLOR", SYN_CLAUSE_18, &check_pic_duplicate);
	current_field->screen_foreg = yyvsp[0];
  }
#line 18365 "parser.c"
    break;

  case 994:
#line 8927 "parser.y"
  {
	check_repeated ("BACKGROUND-COLOR", SYN_CLAUSE_19, &check_pic_duplicate);
	current_field->screen_backg = yyvsp[0];
  }
#line 18374 "parser.c"
    break;

  case 1003:
#line 8943 "parser.y"
  {
	yyval = check_not_88_level (yyvsp[0]);

	check_repeated ("USING", SYN_CLAUSE_20, &check_pic_duplicate);
	current_field->screen_from = yyval;
	current_field->screen_to = yyval;
	current_field->screen_flag |= COB_SCREEN_INPUT;
  }
#line 18387 "parser.c"
    break;

  case 1004:
#line 8952 "parser.y"
  {
	check_repeated ("FROM", SYN_CLAUSE_21, &check_pic_duplicate);
	current_field->screen_from = yyvsp[0];
  }
#line 18396 "parser.c"
    break;

  case 1005:
#line 8957 "parser.y"
  {
	yyval = check_not_88_level (yyvsp[0]);

	check_repeated ("TO", SYN_CLAUSE_22, &check_pic_duplicate);
	current_field->screen_to = yyval;
	current_field->screen_flag |= COB_SCREEN_INPUT;
  }
#line 18408 "parser.c"
    break;

  case 1007:
#line 8969 "parser.y"
  {
	cobc_cs_check |= CB_CS_GRAPHICAL_CONTROL;
  }
#line 18416 "parser.c"
    break;

  case 1307:
#line 9558 "parser.y"
              { yyval = NULL; }
#line 18422 "parser.c"
    break;

  case 1308:
#line 9559 "parser.y"
              { yyval = yyvsp[0]; }
#line 18428 "parser.c"
    break;

  case 1309:
#line 9563 "parser.y"
              { yyval = cb_int0; }
#line 18434 "parser.c"
    break;

  case 1312:
#line 9571 "parser.y"
               { yyval = cb_int1; }
#line 18440 "parser.c"
    break;

  case 1316:
#line 9583 "parser.y"
                { yyval = yyvsp[-1]; }
#line 18446 "parser.c"
    break;

  case 1317:
#line 9584 "parser.y"
                { yyval = cb_int1; }
#line 18452 "parser.c"
    break;

  case 1318:
#line 9588 "parser.y"
                { yyval = NULL; }
#line 18458 "parser.c"
    break;

  case 1319:
#line 9589 "parser.y"
                        { yyval = cb_int0; }
#line 18464 "parser.c"
    break;

  case 1320:
#line 9594 "parser.y"
  {
	if (yyvsp[0]) {
		current_field->screen_line = yyvsp[0];
	}
  }
#line 18474 "parser.c"
    break;

  case 1322:
#line 9604 "parser.y"
  {
	current_field->screen_flag |= COB_SCREEN_LINE_PLUS;
  }
#line 18482 "parser.c"
    break;

  case 1323:
#line 9608 "parser.y"
  {
	current_field->screen_flag |= COB_SCREEN_LINE_MINUS;
  }
#line 18490 "parser.c"
    break;

  case 1324:
#line 9615 "parser.y"
  {
	if (yyvsp[0]) {
		current_field->screen_column = yyvsp[0];
	}
  }
#line 18500 "parser.c"
    break;

  case 1325:
#line 9624 "parser.y"
  {
	/* Nothing */
  }
#line 18508 "parser.c"
    break;

  case 1326:
#line 9628 "parser.y"
  {
	current_field->screen_flag |= COB_SCREEN_COLUMN_PLUS;
  }
#line 18516 "parser.c"
    break;

  case 1327:
#line 9632 "parser.y"
  {
	current_field->screen_flag |= COB_SCREEN_COLUMN_MINUS;
  }
#line 18524 "parser.c"
    break;

  case 1328:
#line 9639 "parser.y"
  {
	CB_PENDING (_("OCCURS screen items"));
	check_repeated ("OCCURS", SYN_CLAUSE_23, &check_pic_duplicate);
	current_field->occurs_max = cb_get_int (yyvsp[-1]);
	current_field->occurs_min = current_field->occurs_max;
	current_field->indexes++;
	current_field->flag_occurs = 1;
  }
#line 18537 "parser.c"
    break;

  case 1329:
#line 9651 "parser.y"
  {
	CB_PENDING (_("GLOBAL screen items"));
  }
#line 18545 "parser.c"
    break;

  case 1330:
#line 9660 "parser.y"
  {
	current_section = NULL;
	current_paragraph = NULL;
	check_pic_duplicate = 0;
	check_duplicate = 0;
	if (!current_program->entry_convention) {
		current_program->entry_convention = cb_int (CB_CONV_COBOL);
	}
  }
#line 18559 "parser.c"
    break;

  case 1332:
#line 9674 "parser.y"
  {
	current_section = NULL;
	current_paragraph = NULL;
	check_pic_duplicate = 0;
	check_duplicate = 0;
	cobc_in_procedure = 1U;
	cb_set_system_names ();
	backup_current_pos ();
  }
#line 18573 "parser.c"
    break;

  case 1333:
#line 9684 "parser.y"
  {
	cb_tree call_conv = yyvsp[-4];
	if (yyvsp[-3]) {
		call_conv = yyvsp[-3];
		if (yyvsp[-4]) {
			/* note: $4 is likely to be a reference to SPECIAL-NAMES */
			cb_error_x (yyvsp[-3], _("%s and %s are mutually exclusive"),
				"CALL-CONVENTION", "WITH LINKAGE");
		}
	}
	if (call_conv) {
		if (current_program->entry_convention) {
			cb_warning (COBC_WARN_FILLER,
				_("overriding convention specified in ENTRY-CONVENTION"));
		}
		current_program->entry_convention = call_conv;
	} else if (!current_program->entry_convention) {
		current_program->entry_convention = cb_int (CB_CONV_COBOL);
	}
	header_check |= COBC_HD_PROCEDURE_DIVISION;
  }
#line 18599 "parser.c"
    break;

  case 1334:
#line 9706 "parser.y"
  {
	if (current_program->flag_main
	 && !current_program->flag_chained && yyvsp[-4]) {
		cb_error (_("executable program requested but PROCEDURE/ENTRY has USING clause"));
	}

	emit_main_entry (current_program, yyvsp[-4]);
  }
#line 18612 "parser.c"
    break;

  case 1335:
#line 9715 "parser.y"
  {
	if (current_paragraph) {
		if (current_paragraph->exit_label) {
			emit_statement (current_paragraph->exit_label);
		}
		emit_statement (cb_build_perform_exit (current_paragraph));
	}
	if (current_section) {
		if (current_section->exit_label) {
			emit_statement (current_section->exit_label);
		}
		emit_statement (cb_build_perform_exit (current_section));
	}
  }
#line 18631 "parser.c"
    break;

  case 1336:
#line 9730 "parser.y"
  {
	cb_tree label;

	/* No PROCEDURE DIVISION header here */
	/* Only a statement is allowed as first element */
	/* Thereafter, sections/paragraphs may be used */
	check_pic_duplicate = 0;
	check_duplicate = 0;
	if (!current_program->entry_convention) {
		current_program->entry_convention = cb_int (CB_CONV_COBOL);
	}
	cobc_in_procedure = 1U;
	label = cb_build_reference ("MAIN SECTION");
	current_section = CB_LABEL (cb_build_label (label, NULL));
	current_section->flag_section = 1;
	current_section->flag_dummy_section = 1;
	current_section->flag_skip_label = !!skip_statements;
	current_section->flag_declaratives = !!in_declaratives;
	current_section->xref.skip = 1;
	emit_statement (CB_TREE (current_section));
	label = cb_build_reference ("MAIN PARAGRAPH");
	current_paragraph = CB_LABEL (cb_build_label (label, NULL));
	current_paragraph->flag_declaratives = !!in_declaratives;
	current_paragraph->flag_skip_label = !!skip_statements;
	current_paragraph->flag_dummy_paragraph = 1;
	current_paragraph->xref.skip = 1;
	emit_statement (CB_TREE (current_paragraph));
	cb_set_system_names ();
  }
#line 18665 "parser.c"
    break;

  case 1338:
#line 9764 "parser.y"
  {
	yyval = NULL;
  }
#line 18673 "parser.c"
    break;

  case 1339:
#line 9768 "parser.y"
  {
	call_mode = CB_CALL_BY_REFERENCE;
	size_mode = CB_SIZE_4;
  }
#line 18682 "parser.c"
    break;

  case 1340:
#line 9773 "parser.y"
  {
	if (cb_list_length (yyvsp[0]) > MAX_CALL_FIELD_PARAMS) {
		cb_error (_("number of arguments exceeds maximum %d"),
			  MAX_CALL_FIELD_PARAMS);
	}
	yyval = yyvsp[0];
  }
#line 18694 "parser.c"
    break;

  case 1341:
#line 9781 "parser.y"
  {
	call_mode = CB_CALL_BY_REFERENCE;
	if (current_program->prog_type == COB_MODULE_TYPE_FUNCTION) {
		cb_error (_("CHAINING invalid in user FUNCTION"));
	} else {
		current_program->flag_chained = 1;
	}
  }
#line 18707 "parser.c"
    break;

  case 1342:
#line 9790 "parser.y"
  {
	if (cb_list_length (yyvsp[0]) > MAX_CALL_FIELD_PARAMS) {
		cb_error (_("number of arguments exceeds maximum %d"),
			  MAX_CALL_FIELD_PARAMS);
	}
	yyval = yyvsp[0];
  }
#line 18719 "parser.c"
    break;

  case 1343:
#line 9800 "parser.y"
                                { yyval = yyvsp[0]; }
#line 18725 "parser.c"
    break;

  case 1344:
#line 9802 "parser.y"
                                { yyval = cb_list_append (yyvsp[-1], yyvsp[0]); }
#line 18731 "parser.c"
    break;

  case 1345:
#line 9807 "parser.y"
  {
	cb_tree		x;
	struct cb_field	*f;

	x = cb_build_identifier (yyvsp[-1], 0);
	if (yyvsp[-2] == cb_int1 && CB_VALID_TREE (x) && cb_ref (x) != cb_error_node) {
		f = CB_FIELD (cb_ref (x));
		f->flag_is_pdiv_opt = 1;
	}

	if (call_mode == CB_CALL_BY_VALUE
	 && CB_REFERENCE_P (yyvsp[-1])
	 && CB_FIELD (cb_ref (yyvsp[-1]))->flag_any_length) {
		cb_error_x (yyvsp[-1], _("ANY LENGTH items may only be BY REFERENCE formal parameters"));
	}

	yyval = CB_BUILD_PAIR (cb_int (call_mode), x);
	CB_SIZES (yyval) = size_mode;
  }
#line 18755 "parser.c"
    break;

  case 1347:
#line 9831 "parser.y"
  {
	call_mode = CB_CALL_BY_REFERENCE;
  }
#line 18763 "parser.c"
    break;

  case 1348:
#line 9835 "parser.y"
  {
	if (current_program->flag_chained) {
		cb_error (_("%s not allowed in CHAINED programs"), "BY VALUE");
	} else {
		CB_UNFINISHED (_("parameters passed BY VALUE"));
		call_mode = CB_CALL_BY_VALUE;
	}
  }
#line 18776 "parser.c"
    break;

  case 1350:
#line 9848 "parser.y"
  {
	if (call_mode != CB_CALL_BY_VALUE) {
		cb_error (_("SIZE only allowed for BY VALUE items"));
	} else {
		size_mode = CB_SIZE_AUTO;
	}
  }
#line 18788 "parser.c"
    break;

  case 1351:
#line 9856 "parser.y"
  {
	if (call_mode != CB_CALL_BY_VALUE) {
		cb_error (_("SIZE only allowed for BY VALUE items"));
	} else {
		size_mode = CB_SIZE_4;
	}
  }
#line 18800 "parser.c"
    break;

  case 1352:
#line 9864 "parser.y"
  {
	if (call_mode != CB_CALL_BY_VALUE) {
		cb_error (_("SIZE only allowed for BY VALUE items"));
	} else {
		size_mode = CB_SIZE_AUTO | CB_SIZE_UNSIGNED;
	}
  }
#line 18812 "parser.c"
    break;

  case 1353:
#line 9872 "parser.y"
  {
	if (size_mode) {
		size_mode |= CB_SIZE_UNSIGNED;
	}
  }
#line 18822 "parser.c"
    break;

  case 1355:
#line 9882 "parser.y"
  {
	unsigned char *s = CB_LITERAL (yyvsp[0])->data;
	size_mode = 0;

	if (call_mode != CB_CALL_BY_VALUE) {
		cb_error (_("SIZE only allowed for BY VALUE items"));
	} else if (CB_LITERAL (yyvsp[0])->size != 1) {
		cb_error_x (yyvsp[0], _("invalid value for SIZE"));
	} else {
		size_mode = 0;
		switch (*s) {
		case '1':
			size_mode = CB_SIZE_1;
			break;
		case '2':
			size_mode = CB_SIZE_2;
			break;
		case '4':
			size_mode = CB_SIZE_4;
			break;
		case '8':
			size_mode = CB_SIZE_8;
			break;
		default:
			cb_error_x (yyvsp[0], _("invalid value for SIZE"));
			break;
		}
	}
  }
#line 18856 "parser.c"
    break;

  case 1357:
#line 9920 "parser.y"
  {
	CB_PENDING_X (yyvsp[-1], _("MEMORY SIZE phrase in CALL statement"));
  }
#line 18864 "parser.c"
    break;

  case 1358:
#line 9927 "parser.y"
  {
	yyval = cb_int0;
  }
#line 18872 "parser.c"
    break;

  case 1359:
#line 9931 "parser.y"
  {
	if (call_mode != CB_CALL_BY_REFERENCE) {
		cb_error (_("OPTIONAL only allowed for BY REFERENCE items"));
		yyval = cb_int0;
	} else {
		yyval = cb_int1;
	}
  }
#line 18885 "parser.c"
    break;

  case 1360:
#line 9943 "parser.y"
  {
	if (current_program->prog_type == COB_MODULE_TYPE_FUNCTION) {
		cb_error (_("RETURNING clause is required for a FUNCTION"));
	}
  }
#line 18895 "parser.c"
    break;

  case 1361:
#line 9949 "parser.y"
  {
	if (current_program->flag_main) {
		cb_error (_("RETURNING clause cannot be OMITTED for main program"));
	}
	if (current_program->prog_type == COB_MODULE_TYPE_FUNCTION) {
		cb_error (_("RETURNING clause cannot be OMITTED for a FUNCTION"));
	}
	current_program->flag_void = 1;
  }
#line 18909 "parser.c"
    break;

  case 1362:
#line 9959 "parser.y"
  {
	struct cb_field	*f;

	if (cb_ref (yyvsp[0]) != cb_error_node) {
		f = CB_FIELD_PTR (yyvsp[0]);
		/* standard rule: returning item is allocated in the
		   activating runtime element */
		if (f->storage != CB_STORAGE_LINKAGE) {
			cb_error (_("RETURNING item is not defined in LINKAGE SECTION"));
		} else if (f->level != 1 && f->level != 77) {
			cb_error (_("RETURNING item must have level 01"));
		} else if (f->flag_occurs) {
			cb_error (_("RETURNING item should not have OCCURS"));
		} else {
			if (current_program->prog_type == COB_MODULE_TYPE_FUNCTION) {
				if (f->flag_any_length) {
					cb_error (_("function RETURNING item may not be ANY LENGTH"));
				}
				f->flag_is_returning = 1;
			}
#if 0	/* doesn't work for programs, will be fixed with allocating in the source-unit */
			current_program->returning = yyvsp[0];
#else
			if (current_program->prog_type == COB_MODULE_TYPE_FUNCTION) {
				current_program->returning = yyvsp[0];
			} else {
				CB_PENDING ("program RETURNING");
			}
#endif
		}
	}
  }
#line 18946 "parser.c"
    break;

  case 1364:
#line 9995 "parser.y"
  {
	in_declaratives = 1;
	emit_statement (cb_build_comment ("DECLARATIVES"));
  }
#line 18955 "parser.c"
    break;

  case 1365:
#line 10001 "parser.y"
  {
	if (needs_field_debug) {
		start_debug = 1;
	}
	in_declaratives = 0;
	in_debugging = 0;
	if (current_paragraph) {
		if (current_paragraph->exit_label) {
			emit_statement (current_paragraph->exit_label);
		}
		emit_statement (cb_build_perform_exit (current_paragraph));
		current_paragraph = NULL;
	}
	if (current_section) {
		if (current_section->exit_label) {
			emit_statement (current_section->exit_label);
		}
		current_section->flag_fatal_check = 1;
		emit_statement (cb_build_perform_exit (current_section));
		current_section = NULL;
	}
	skip_statements = 0;
	emit_statement (cb_build_comment ("END DECLARATIVES"));
	check_unreached = 0;
  }
#line 18985 "parser.c"
    break;

  case 1370:
#line 10039 "parser.y"
  {
	if (next_label_list) {
		cb_tree	plabel;
		char	name[32];

		snprintf (name, sizeof(name), "L$%d", next_label_id);
		plabel = cb_build_label (cb_build_reference (name), NULL);
		CB_LABEL (plabel)->flag_next_sentence = 1;
		emit_statement (plabel);
		current_program->label_list =
			cb_list_append (current_program->label_list, next_label_list);
		next_label_list = NULL;
		next_label_id++;
	}
	/* check_unreached = 0; */
	cb_end_statement();
  }
#line 19007 "parser.c"
    break;

  case 1372:
#line 10058 "parser.y"
  {
	/* check_unreached = 0; */
	cb_end_statement();
  }
#line 19016 "parser.c"
    break;

  case 1373:
#line 10069 "parser.y"
  {
	non_const_word = 0;
	check_unreached = 0;
	if (cb_build_section_name (yyvsp[-1], 0) == cb_error_node) {
		YYERROR;
	}

	/* Exit the last paragraph/section */
	if (current_paragraph) {
		if (current_paragraph->exit_label) {
			emit_statement (current_paragraph->exit_label);
		}
		emit_statement (cb_build_perform_exit (current_paragraph));
	}
	if (current_section) {
		if (current_section->exit_label) {
			emit_statement (current_section->exit_label);
		}
		emit_statement (cb_build_perform_exit (current_section));
	}
	if (current_program->flag_debugging && !in_debugging) {
		if (current_paragraph || current_section) {
			emit_statement (cb_build_comment (
					"DEBUGGING - Fall through"));
			emit_statement (cb_build_debug (cb_debug_contents,
					"FALL THROUGH", NULL));
		}
	}

	/* Begin a new section */
	current_section = CB_LABEL (cb_build_label (yyvsp[-1], NULL));
	current_section->flag_section = 1;
	/* Careful here, one negation */
	current_section->flag_real_label = !in_debugging;
	current_section->flag_declaratives = !!in_declaratives;
	current_section->flag_skip_label = !!skip_statements;
	current_paragraph = NULL;
  }
#line 19059 "parser.c"
    break;

  case 1374:
#line 10109 "parser.y"
  {
	emit_statement (CB_TREE (current_section));
  }
#line 19067 "parser.c"
    break;

  case 1377:
#line 10120 "parser.y"
  {
	cb_tree label;

	non_const_word = 0;
	check_unreached = 0;
	if (cb_build_section_name (yyvsp[-1], 1) == cb_error_node) {
		YYERROR;
	}

	/* Exit the last paragraph */
	if (current_paragraph) {
		if (current_paragraph->exit_label) {
			emit_statement (current_paragraph->exit_label);
		}
		emit_statement (cb_build_perform_exit (current_paragraph));
		if (current_program->flag_debugging && !in_debugging) {
			emit_statement (cb_build_comment (
					"DEBUGGING - Fall through"));
			emit_statement (cb_build_debug (cb_debug_contents,
					"FALL THROUGH", NULL));
		}
	}

	/* Begin a new paragraph */
	if (!current_section) {
		label = cb_build_reference ("MAIN SECTION");
		current_section = CB_LABEL (cb_build_label (label, NULL));
		current_section->flag_section = 1;
		current_section->flag_dummy_section = 1;
		current_section->flag_declaratives = !!in_declaratives;
		current_section->flag_skip_label = !!skip_statements;
		current_section->xref.skip = 1;
		emit_statement (CB_TREE (current_section));
	}
	current_paragraph = CB_LABEL (cb_build_label (yyvsp[-1], current_section));
	current_paragraph->flag_declaratives = !!in_declaratives;
	current_paragraph->flag_skip_label = !!skip_statements;
	current_paragraph->flag_real_label = !in_debugging;
	current_paragraph->segment = current_section->segment;
	emit_statement (CB_TREE (current_paragraph));
  }
#line 19113 "parser.c"
    break;

  case 1378:
#line 10165 "parser.y"
  {
	non_const_word = 0;
	check_unreached = 0;
	if (cb_build_section_name (yyvsp[0], 0) != cb_error_node) {
		if (is_reserved_word (CB_NAME (yyvsp[0]))) {
			cb_error_x (yyvsp[0], _("'%s' is not a statement"), CB_NAME (yyvsp[0]));
		} else if (is_default_reserved_word (CB_NAME (yyvsp[0]))) {
			cb_error_x (yyvsp[0], _("unknown statement '%s'; it may exist in another dialect"),
				    CB_NAME (yyvsp[0]));
		} else {
			cb_error_x (yyvsp[0], _("unknown statement '%s'"), CB_NAME (yyvsp[0]));
		}
	}
	YYERROR;
  }
#line 19133 "parser.c"
    break;

  case 1379:
#line 10184 "parser.y"
  {
	yyval = NULL;
  }
#line 19141 "parser.c"
    break;

  case 1380:
#line 10188 "parser.y"
  {
	yyval = NULL;
	if (cb_verify (cb_section_segments, _("section segments"))) {
		int segnum = cb_get_int (yyvsp[0]);
		if (segnum > 99) {
			cb_error (_("SECTION segment-number must be less than or equal to 99"));
		} else {
			if (in_declaratives && segnum > 49) {
				cb_error (_("SECTION segment-number in DECLARATIVES must be less than 50"));
			}
			if (!in_declaratives) {
				current_program->flag_segments = 1;
				current_section->segment = segnum;
			} else {
				/* Simon: old version did not allow segments in declaratives at all
					ToDo: check codegen for possible missing parts */
				CB_PENDING (_("SECTION segment within DECLARATIVES"));
			}
		}
	}
  }
#line 19167 "parser.c"
    break;

  case 1381:
#line 10216 "parser.y"
  {
	/* push exec_list on the stack ($1), then unset */
	yyval = current_program->exec_list;
	current_program->exec_list = NULL;
	check_unreached = 0;
  }
#line 19178 "parser.c"
    break;

  case 1382:
#line 10222 "parser.y"
  {
	/* push statement on the stack ($2), then unset */
	yyval = CB_TREE (current_statement);
	current_statement = NULL;
  }
#line 19188 "parser.c"
    break;

  case 1383:
#line 10228 "parser.y"
  {
	/* reorder exec_list which was filled in "statements" and push to stack ($$),
	   then backup exec_list and statement from the stack ($1, $2) */
	yyval = cb_list_reverse (current_program->exec_list);
	current_program->exec_list = yyvsp[-2];
	current_statement = CB_STATEMENT (yyvsp[-1]);
  }
#line 19200 "parser.c"
    break;

  case 1384:
#line 10238 "parser.y"
  {
	cb_tree label;

	if (!current_section) {
		label = cb_build_reference ("MAIN SECTION");
		current_section = CB_LABEL (cb_build_label (label, NULL));
		current_section->flag_section = 1;
		current_section->flag_dummy_section = 1;
		current_section->flag_skip_label = !!skip_statements;
		current_section->flag_declaratives = !!in_declaratives;
		current_section->xref.skip = 1;
		emit_statement (CB_TREE (current_section));
	}
	if (!current_paragraph) {
		label = cb_build_reference ("MAIN PARAGRAPH");
		current_paragraph = CB_LABEL (cb_build_label (label, NULL));
		CB_TREE (current_paragraph)->source_file
			= CB_TREE (current_section)->source_file;
		CB_TREE (current_paragraph)->source_line
			= CB_TREE (current_section)->source_line;
		current_paragraph->flag_declaratives = !!in_declaratives;
		current_paragraph->flag_skip_label = !!skip_statements;
		current_paragraph->flag_dummy_paragraph = 1;
		current_paragraph->xref.skip = 1;
		emit_statement (CB_TREE (current_paragraph));
	}
	if (check_headers_present (COBC_HD_PROCEDURE_DIVISION, 0, 0, 0) == 1) {
		if (current_program->prog_type == COB_MODULE_TYPE_PROGRAM) {
			emit_main_entry (current_program, NULL);
		}
	}

	cobc_apply_turn_directives ();
  }
#line 19239 "parser.c"
    break;

  case 1385:
#line 10273 "parser.y"
  {
	cobc_cs_check = 0;
	cobc_apply_turn_directives ();
  }
#line 19248 "parser.c"
    break;

  case 1386:
#line 10278 "parser.y"
  {
	cobc_cs_check = 0;
	cobc_apply_turn_directives ();
  }
#line 19257 "parser.c"
    break;

  case 1451:
#line 10353 "parser.y"
  {
	if (cb_verify (cb_next_sentence_phrase, "NEXT SENTENCE")) {
		cb_tree label;
		char	name[32];

		begin_statement ("NEXT SENTENCE", 0);
		sprintf (name, "L$%d", next_label_id);
		label = cb_build_reference (name);
		next_label_list = cb_list_add (next_label_list, label);
		emit_statement (cb_build_goto (label, NULL));
	}
	check_unreached = 0;
  }
#line 19275 "parser.c"
    break;

  case 1452:
#line 10367 "parser.y"
  {
	yyerrok;
	cobc_cs_check = 0;
  }
#line 19284 "parser.c"
    break;

  case 1453:
#line 10378 "parser.y"
  {
	begin_statement ("ACCEPT", TERM_ACCEPT);
	cobc_cs_check = CB_CS_ACCEPT;
  }
#line 19293 "parser.c"
    break;

  case 1455:
#line 10388 "parser.y"
  {
	check_duplicate = 0;
	check_line_col_duplicate = 0;
	line_column = NULL;
  }
#line 19303 "parser.c"
    break;

  case 1456:
#line 10394 "parser.y"
  {
	/* Check for invalid use of screen clauses */
	if (current_statement->attr_ptr
	 || (!is_screen_field (yyvsp[-3]) && line_column)) {
		cb_verify_x (yyvsp[-3], cb_accept_display_extensions,
			     _("non-standard ACCEPT"));
	}

	if (cb_accept_update && !has_dispattr (COB_SCREEN_NO_UPDATE)) {
		set_dispattr (COB_SCREEN_UPDATE);
	}
	if (cb_accept_auto && !has_dispattr (COB_SCREEN_TAB)) {
		set_dispattr (COB_SCREEN_AUTO);
	}
	if (yyvsp[-3] == cb_null && current_statement->attr_ptr) {
		if (current_statement->attr_ptr->prompt) {
			emit_conflicting_clause_message ("ACCEPT OMITTED",
				_("PROMPT clause"));
		}
		if (current_statement->attr_ptr->size_is) {
			emit_conflicting_clause_message ("ACCEPT OMITTED",
				_("SIZE IS clause"));
		}
	}
	cobc_cs_check = 0;
	cb_emit_accept (yyvsp[-3], line_column, current_statement->attr_ptr);
  }
#line 19335 "parser.c"
    break;

  case 1457:
#line 10422 "parser.y"
  {
	check_duplicate = 0;
	check_line_col_duplicate = 0;
	line_column = NULL;
  }
#line 19345 "parser.c"
    break;

  case 1458:
#line 10428 "parser.y"
  {
	cobc_cs_check = 0;
	CB_PENDING ("ACCEPT FROM SCREEN");
  }
#line 19354 "parser.c"
    break;

  case 1459:
#line 10433 "parser.y"
  {
	cb_emit_accept_line_or_col (yyvsp[-2], 0);
  }
#line 19362 "parser.c"
    break;

  case 1460:
#line 10437 "parser.y"
  {
	cb_emit_accept_line_or_col (yyvsp[-2], 1);
  }
#line 19370 "parser.c"
    break;

  case 1461:
#line 10441 "parser.y"
  {
	/* information about terminal and its capabilities
	cb_emit_accept_terminal_info ($1); */
	CB_PENDING ("ACCEPT FROM TERMINAL INFO");
  }
#line 19380 "parser.c"
    break;

  case 1462:
#line 10447 "parser.y"
  {
	/* information about OS and runtime features
	cb_emit_accept_system_info ($1); */
	CB_PENDING ("ACCEPT FROM SYSTEM INFO");
  }
#line 19390 "parser.c"
    break;

  case 1463:
#line 10453 "parser.y"
  {
	cobc_cs_check = 0;
	cb_emit_accept_date_yyyymmdd (yyvsp[-3]);
  }
#line 19399 "parser.c"
    break;

  case 1464:
#line 10458 "parser.y"
  {
	cobc_cs_check = 0;
	cb_emit_accept_date (yyvsp[-2]);
  }
#line 19408 "parser.c"
    break;

  case 1465:
#line 10463 "parser.y"
  {
	cobc_cs_check = 0;
	cb_emit_accept_day_yyyyddd (yyvsp[-3]);
  }
#line 19417 "parser.c"
    break;

  case 1466:
#line 10468 "parser.y"
  {
	cobc_cs_check = 0;
	cb_emit_accept_day (yyvsp[-2]);
  }
#line 19426 "parser.c"
    break;

  case 1467:
#line 10473 "parser.y"
  {
	cb_emit_accept_day_of_week (yyvsp[-2]);
  }
#line 19434 "parser.c"
    break;

  case 1468:
#line 10479 "parser.y"
  {
	cb_emit_accept_escape_key (yyvsp[-3]);
  }
#line 19442 "parser.c"
    break;

  case 1469:
#line 10485 "parser.y"
  {
	cb_emit_accept_exception_status (yyvsp[-3]);
  }
#line 19450 "parser.c"
    break;

  case 1470:
#line 10489 "parser.y"
  {
	/* check is data from keyboard available? "1", else "0"
	cb_emit_accept_input_status ($1); */
	CB_PENDING ("ACCEPT FROM INPUT STATUS");
  }
#line 19460 "parser.c"
    break;

  case 1471:
#line 10495 "parser.y"
  {
	cb_emit_accept_time (yyvsp[-2]);
  }
#line 19468 "parser.c"
    break;

  case 1472:
#line 10499 "parser.y"
  {
	cobc_cs_check = 0;
	cb_emit_accept_user_name (yyvsp[-3]);
  }
#line 19477 "parser.c"
    break;

  case 1473:
#line 10504 "parser.y"
  {
	cb_emit_accept_command_line (yyvsp[-2]);
  }
#line 19485 "parser.c"
    break;

  case 1474:
#line 10508 "parser.y"
  {
	cb_emit_accept_environment (yyvsp[-3]);
  }
#line 19493 "parser.c"
    break;

  case 1475:
#line 10512 "parser.y"
  {
	cb_emit_get_environment (yyvsp[-1], yyvsp[-4]);
  }
#line 19501 "parser.c"
    break;

  case 1476:
#line 10516 "parser.y"
  {
	cb_emit_accept_arg_number (yyvsp[-2]);
  }
#line 19509 "parser.c"
    break;

  case 1477:
#line 10520 "parser.y"
  {
	cb_emit_accept_arg_value (yyvsp[-3]);
  }
#line 19517 "parser.c"
    break;

  case 1478:
#line 10524 "parser.y"
  {
	cb_emit_accept_mnemonic (yyvsp[-2], yyvsp[0]);
  }
#line 19525 "parser.c"
    break;

  case 1479:
#line 10528 "parser.y"
  {
	cb_emit_accept_name (yyvsp[-2], yyvsp[0]);
  }
#line 19533 "parser.c"
    break;

  case 1480:
#line 10532 "parser.y"
  {
	cb_verify_x (yyvsp[-1], cb_accept_display_extensions,
		     _("non-standard ACCEPT"));

	if (cb_accept_update && !has_dispattr (COB_SCREEN_NO_UPDATE)) {
		set_dispattr (COB_SCREEN_UPDATE);
	}
	if (cb_accept_auto && !has_dispattr (COB_SCREEN_TAB)) {
		set_dispattr (COB_SCREEN_AUTO);
	}
	cobc_cs_check = 0;
	cb_emit_accept (yyvsp[-1], line_column, current_statement->attr_ptr);
  }
#line 19551 "parser.c"
    break;

  case 1481:
#line 10546 "parser.y"
  {
	CB_PENDING ("ACCEPT MESSAGE COUNT");
  }
#line 19559 "parser.c"
    break;

  case 1483:
#line 10554 "parser.y"
  {
	yyval = cb_null;
  }
#line 19567 "parser.c"
    break;

  case 1484:
#line 10560 "parser.y"
  {
	check_duplicate = 0;
	check_line_col_duplicate = 0;
	line_column = NULL;
  }
#line 19577 "parser.c"
    break;

  case 1485:
#line 10566 "parser.y"
  {
	yyval = yyvsp[0];
  }
#line 19585 "parser.c"
    break;

  case 1488:
#line 10577 "parser.y"
  {
	line_column = CB_BUILD_PAIR (yyvsp[-3], yyvsp[-1]);
  }
#line 19593 "parser.c"
    break;

  case 1489:
#line 10581 "parser.y"
  {
	line_column = CB_BUILD_PAIR (yyvsp[-2], cb_int0);
  }
#line 19601 "parser.c"
    break;

  case 1490:
#line 10585 "parser.y"
  {
	line_column = CB_BUILD_PAIR (cb_int0, yyvsp[-1]);
  }
#line 19609 "parser.c"
    break;

  case 1491:
#line 10592 "parser.y"
  {
	yyval = yyvsp[0];
  }
#line 19617 "parser.c"
    break;

  case 1492:
#line 10596 "parser.y"
  {
	yyval = cb_build_binary_op (yyvsp[-2], '+', yyvsp[0]);
  }
#line 19625 "parser.c"
    break;

  case 1493:
#line 10600 "parser.y"
  {
	yyval = cb_build_binary_op (yyvsp[-2], '-', yyvsp[0]);
  }
#line 19633 "parser.c"
    break;

  case 1501:
#line 10624 "parser.y"
  {
	  check_repeated ("FROM CRT", SYN_CLAUSE_2, &check_duplicate);
  }
#line 19641 "parser.c"
    break;

  case 1502:
#line 10628 "parser.y"
  {
	  check_repeated ("MODE IS BLOCK", SYN_CLAUSE_3, &check_duplicate);
  }
#line 19649 "parser.c"
    break;

  case 1504:
#line 10633 "parser.y"
  {
	check_repeated (_("TIME-OUT or BEFORE TIME clauses"), SYN_CLAUSE_4,
			&check_duplicate);
	set_attribs (NULL, NULL, NULL, yyvsp[0], NULL, NULL, 0);
  }
#line 19659 "parser.c"
    break;

  case 1511:
#line 10658 "parser.y"
  {
	set_attr_with_conflict ("LINE", SYN_CLAUSE_1,
				_("AT screen-location"), SYN_CLAUSE_3, 1,
				&check_line_col_duplicate);

	if ((CB_LITERAL_P (yyvsp[0]) && cb_get_int (yyvsp[0]) == 0) || yyvsp[0] == cb_zero) {
		cb_verify (cb_accept_display_extensions, "LINE 0");
	}

	if (!line_column) {
		line_column = CB_BUILD_PAIR (yyvsp[0], cb_int0);
	} else {
		CB_PAIR_X (line_column) = yyvsp[0];
	}
  }
#line 19679 "parser.c"
    break;

  case 1512:
#line 10674 "parser.y"
  {
	set_attr_with_conflict ("COLUMN", SYN_CLAUSE_2,
				_("AT screen-location"), SYN_CLAUSE_3, 1,
				&check_line_col_duplicate);

	if ((CB_LITERAL_P (yyvsp[0]) && cb_get_int (yyvsp[0]) == 0) || yyvsp[0] == cb_zero) {
		cb_verify (cb_accept_display_extensions, "COLUMN 0");
	}

	if (!line_column) {
		line_column = CB_BUILD_PAIR (cb_int0, yyvsp[0]);
	} else {
		CB_PAIR_Y (line_column) = yyvsp[0];
	}
  }
#line 19699 "parser.c"
    break;

  case 1513:
#line 10690 "parser.y"
  {
	set_attr_with_conflict (_("AT screen-location"), SYN_CLAUSE_3,
				_("LINE or COLUMN"), SYN_CLAUSE_1 | SYN_CLAUSE_2,
				1, &check_line_col_duplicate);

	cb_verify (cb_accept_display_extensions, "AT clause");

	line_column = yyvsp[0];
  }
#line 19713 "parser.c"
    break;

  case 1514:
#line 10703 "parser.y"
  {
	/* FIXME: arithmetic expression should be possible, too, only numeric literals! */
	yyval = yyvsp[0];
  }
#line 19722 "parser.c"
    break;

  case 1515:
#line 10711 "parser.y"
  {
	/* FIXME: arithmetic expression should be possible, too, only numeric literals! */
	yyval = yyvsp[0];
  }
#line 19731 "parser.c"
    break;

  case 1516:
#line 10719 "parser.y"
  {
	cobc_cs_check = 0;
  }
#line 19739 "parser.c"
    break;

  case 1517:
#line 10726 "parser.y"
  {
	check_repeated ("AUTO", SYN_CLAUSE_5, &check_duplicate);
	set_dispattr_with_conflict ("AUTO", COB_SCREEN_AUTO,
				    "TAB", COB_SCREEN_TAB);
  }
#line 19749 "parser.c"
    break;

  case 1518:
#line 10732 "parser.y"
  {
	check_repeated ("TAB", SYN_CLAUSE_6, &check_duplicate);
	set_dispattr_with_conflict ("TAB", COB_SCREEN_TAB,
				    "AUTO", COB_SCREEN_AUTO);
  }
#line 19759 "parser.c"
    break;

  case 1519:
#line 10738 "parser.y"
  {
	check_repeated ("BELL", SYN_CLAUSE_7, &check_duplicate);
	set_dispattr (COB_SCREEN_BELL);
  }
#line 19768 "parser.c"
    break;

  case 1520:
#line 10743 "parser.y"
  {
	check_repeated ("BELL", SYN_CLAUSE_7, &check_duplicate);
	/* FIXME: do we need a COB_NO_SCREEN_BELL here?
	set_dispattr (COB_SCREEN_BELL); */
  }
#line 19778 "parser.c"
    break;

  case 1521:
#line 10749 "parser.y"
  {
	check_repeated ("BLINK", SYN_CLAUSE_8, &check_duplicate);
	set_dispattr (COB_SCREEN_BLINK);
  }
#line 19787 "parser.c"
    break;

  case 1522:
#line 10754 "parser.y"
  {
	check_repeated ("CONVERSION", SYN_CLAUSE_9, &check_duplicate);
	CB_PENDING ("ACCEPT CONVERSION");
  }
#line 19796 "parser.c"
    break;

  case 1523:
#line 10759 "parser.y"
  {
	/* FIXME: arithmetic expression should be possible, too! */
	if (current_program->cursor_pos) {
		emit_duplicate_clause_message ("CURSOR");
	} else {
		/* TODO: actually reasonable and easy extension: an 
		         *offset within the field* [auto-correct to 1/max]
				 (when variable also stored back on return)
		*/
		CB_PENDING ("ACCEPT ... WITH CURSOR");
	}
  }
#line 19813 "parser.c"
    break;

  case 1524:
#line 10772 "parser.y"
  {
	check_repeated ("FULL", SYN_CLAUSE_10, &check_duplicate);
	set_dispattr (COB_SCREEN_FULL);
  }
#line 19822 "parser.c"
    break;

  case 1525:
#line 10777 "parser.y"
  {
	check_repeated ("LEFTLINE", SYN_CLAUSE_12, &check_duplicate);
	set_dispattr (COB_SCREEN_LEFTLINE);
  }
#line 19831 "parser.c"
    break;

  case 1526:
#line 10782 "parser.y"
  {
	check_repeated ("LOWER", SYN_CLAUSE_13, &check_duplicate);
	set_dispattr_with_conflict ("LOWER", COB_SCREEN_LOWER,
				    "UPPER", COB_SCREEN_UPPER);
  }
#line 19841 "parser.c"
    break;

  case 1527:
#line 10788 "parser.y"
  {
	check_repeated ("HIGHLIGHT", SYN_CLAUSE_11, &check_duplicate);
	set_dispattr_with_conflict ("HIGHLIGHT", COB_SCREEN_HIGHLIGHT,
				    "LOWLIGHT", COB_SCREEN_LOWLIGHT);
  }
#line 19851 "parser.c"
    break;

  case 1528:
#line 10794 "parser.y"
  {
	check_repeated ("LOWLIGHT", SYN_CLAUSE_14, &check_duplicate);
	set_dispattr_with_conflict ("LOWLIGHT", COB_SCREEN_LOWLIGHT,
				    "HIGHLIGHT", COB_SCREEN_HIGHLIGHT);
  }
#line 19861 "parser.c"
    break;

  case 1529:
#line 10801 "parser.y"
  {
	CB_PENDING ("SAME phrase");
	/* may not be specified along with the UNDERLINED, BLINK, REVERSED,
	HIGH, LOW, STANDARD, COLOR, FOREGROUND-COLOR, or BACKGROUND-COLOR phrases */
  }
#line 19871 "parser.c"
    break;

  case 1530:
#line 10807 "parser.y"
  {
	CB_PENDING ("STANDARD intensity");
  }
#line 19879 "parser.c"
    break;

  case 1531:
#line 10811 "parser.y"
  {
	CB_PENDING ("BACKGROUND intensity");
  }
#line 19887 "parser.c"
    break;

  case 1532:
#line 10815 "parser.y"
  {
	CB_PENDING ("BACKGROUND intensity");
  }
#line 19895 "parser.c"
    break;

  case 1533:
#line 10819 "parser.y"
  {
	CB_PENDING ("BACKGROUND intensity");
  }
#line 19903 "parser.c"
    break;

  case 1534:
#line 10823 "parser.y"
  {
	if (cb_no_echo_means_secure) {
		check_repeated ("SECURE", SYN_CLAUSE_20, &check_duplicate);
		set_dispattr (COB_SCREEN_SECURE);
	} else {
		check_repeated ("NO-ECHO", SYN_CLAUSE_15, &check_duplicate);
		set_dispattr_with_conflict ("NO-ECHO", COB_SCREEN_NO_ECHO,
					    "SECURE", COB_SCREEN_SECURE);
	}
  }
#line 19918 "parser.c"
    break;

  case 1535:
#line 10834 "parser.y"
  {
	check_repeated ("OVERLINE", SYN_CLAUSE_16, &check_duplicate);
	set_dispattr (COB_SCREEN_OVERLINE);
  }
#line 19927 "parser.c"
    break;

  case 1536:
#line 10839 "parser.y"
  {
	/* Note: CHARACTER optional in ACUCOBOL, required by others */
	check_repeated ("PROMPT", SYN_CLAUSE_17, &check_duplicate);
	set_attribs (NULL, NULL, NULL, NULL, yyvsp[0], NULL, COB_SCREEN_PROMPT);
  }
#line 19937 "parser.c"
    break;

  case 1537:
#line 10845 "parser.y"
  {
	check_repeated ("PROMPT", SYN_CLAUSE_17, &check_duplicate);
	set_dispattr (COB_SCREEN_PROMPT);
  }
#line 19946 "parser.c"
    break;

  case 1538:
#line 10850 "parser.y"
  {
	check_repeated ("REQUIRED", SYN_CLAUSE_18, &check_duplicate);
	set_dispattr (COB_SCREEN_REQUIRED);
  }
#line 19955 "parser.c"
    break;

  case 1539:
#line 10855 "parser.y"
  {
	check_repeated ("REVERSE-VIDEO", SYN_CLAUSE_19, &check_duplicate);
	set_dispattr (COB_SCREEN_REVERSE);
  }
#line 19964 "parser.c"
    break;

  case 1540:
#line 10860 "parser.y"
  {
	check_repeated ("SECURE", SYN_CLAUSE_20, &check_duplicate);
	set_dispattr_with_conflict ("SECURE", COB_SCREEN_SECURE,
				    "NO-ECHO", COB_SCREEN_NO_ECHO);
  }
#line 19974 "parser.c"
    break;

  case 1541:
#line 10866 "parser.y"
  {
	/* FIXME: arithmetic expression should be possible, too! */
	check_repeated ("SIZE", SYN_CLAUSE_21, &check_duplicate);
	set_attribs (NULL, NULL, NULL, NULL, NULL, yyvsp[0], 0);
  }
#line 19984 "parser.c"
    break;

  case 1542:
#line 10872 "parser.y"
  {
	check_repeated ("UNDERLINE", SYN_CLAUSE_22, &check_duplicate);
	set_dispattr (COB_SCREEN_UNDERLINE);
  }
#line 19993 "parser.c"
    break;

  case 1543:
#line 10877 "parser.y"
  {
	check_repeated ("NO UPDATE", SYN_CLAUSE_23, &check_duplicate);
	set_dispattr_with_conflict ("NO UPDATE", COB_SCREEN_NO_UPDATE,
				    "UPDATE", COB_SCREEN_UPDATE);
  }
#line 20003 "parser.c"
    break;

  case 1544:
#line 10883 "parser.y"
  {
	check_repeated ("UPDATE", SYN_CLAUSE_24, &check_duplicate);
	set_dispattr_with_conflict ("UPDATE", COB_SCREEN_UPDATE,
				    "NO UPDATE", COB_SCREEN_NO_UPDATE);
  }
#line 20013 "parser.c"
    break;

  case 1545:
#line 10889 "parser.y"
  {
	check_repeated ("UPPER", SYN_CLAUSE_25, &check_duplicate);
	set_dispattr_with_conflict ("UPPER", COB_SCREEN_UPPER,
				    "LOWER", COB_SCREEN_LOWER);
  }
#line 20023 "parser.c"
    break;

  case 1546:
#line 10895 "parser.y"
  {
	/* FIXME: arithmetic expression should be possible, too! */
	check_repeated ("FOREGROUND-COLOR", SYN_CLAUSE_26, &check_duplicate);
	check_repeated ("BACKGROUND-COLOR", SYN_CLAUSE_27, &check_duplicate);
	CB_PENDING ("COLOR");
  }
#line 20034 "parser.c"
    break;

  case 1547:
#line 10902 "parser.y"
  {
	check_repeated ("FOREGROUND-COLOR", SYN_CLAUSE_26, &check_duplicate);
	set_attribs (yyvsp[0], NULL, NULL, NULL, NULL, NULL, 0);
  }
#line 20043 "parser.c"
    break;

  case 1548:
#line 10907 "parser.y"
  {
	check_repeated ("BACKGROUND-COLOR", SYN_CLAUSE_27, &check_duplicate);
	set_attribs (NULL, yyvsp[0], NULL, NULL, NULL, NULL, 0);
  }
#line 20052 "parser.c"
    break;

  case 1549:
#line 10912 "parser.y"
  {
	check_repeated ("SCROLL UP", SYN_CLAUSE_28, &check_duplicate);
	set_attribs_with_conflict (NULL, NULL, yyvsp[0], NULL, NULL, NULL,
				   "SCROLL UP", COB_SCREEN_SCROLL_UP,
				   "SCROLL DOWN", COB_SCREEN_SCROLL_DOWN);
  }
#line 20063 "parser.c"
    break;

  case 1550:
#line 10919 "parser.y"
  {
	check_repeated ("SCROLL DOWN", SYN_CLAUSE_19, &check_duplicate);
	set_attribs_with_conflict (NULL, NULL, yyvsp[0], NULL, NULL, NULL,
				   "SCROLL DOWN", COB_SCREEN_SCROLL_DOWN,
				   "SCROLL UP", COB_SCREEN_SCROLL_UP);
  }
#line 20074 "parser.c"
    break;

  case 1551:
#line 10926 "parser.y"
  {
	check_repeated (_("TIME-OUT or BEFORE TIME clauses"), SYN_CLAUSE_4,
			&check_duplicate);
	set_attribs (NULL, NULL, NULL, yyvsp[0], NULL, NULL, 0);
  }
#line 20084 "parser.c"
    break;

  case 1555:
#line 10939 "parser.y"
  {
	check_repeated ("CONTROL KEY", SYN_CLAUSE_29, &check_duplicate);
	CB_PENDING ("CONTROL KEY");
#if 0 /* should generate the following *after* the ACCEPT is finished */
	cb_emit_accept_escape_key (yyvsp[0]);
#endif
  }
#line 20096 "parser.c"
    break;

  case 1564:
#line 10967 "parser.y"
  {
	TERMINATOR_WARNING (yyvsp[(-2) - (0)], ACCEPT);
  }
#line 20104 "parser.c"
    break;

  case 1565:
#line 10971 "parser.y"
  {
	TERMINATOR_CLEAR (yyvsp[(-2) - (1)], ACCEPT);
# if 0 /* activate only for debugging purposes for attribs
	FIXME: Replace by DEBUG_LOG function */
	if (current_statement->attr_ptr) {
		print_bits (current_statement->attr_ptr->dispattrs);
	} else {
		fputs("No Attribs", stderr);
	}
#endif
  }
#line 20120 "parser.c"
    break;

  case 1566:
#line 10989 "parser.y"
  {
	begin_statement ("ADD", TERM_ADD);
  }
#line 20128 "parser.c"
    break;

  case 1568:
#line 10998 "parser.y"
  {
	cb_emit_arithmetic (yyvsp[-1], '+', cb_build_binary_list (yyvsp[-3], '+'));
  }
#line 20136 "parser.c"
    break;

  case 1569:
#line 11002 "parser.y"
  {
	if (yyvsp[-3]) {
		cb_list_add (yyvsp[-4], yyvsp[-3]);
	}
	cb_emit_arithmetic (yyvsp[-1], 0, cb_build_binary_list (yyvsp[-4], '+'));
  }
#line 20147 "parser.c"
    break;

  case 1570:
#line 11009 "parser.y"
  {
	cb_emit_corresponding (cb_build_add, yyvsp[-2], yyvsp[-4], yyvsp[-1]);
  }
#line 20155 "parser.c"
    break;

  case 1571:
#line 11013 "parser.y"
  {
	CB_PENDING ("ADD TABLE");
	cb_emit_tab_arithmetic (cb_build_add, yyvsp[-4], yyvsp[-6], yyvsp[-3], yyvsp[-2], yyvsp[-1]);
  }
#line 20164 "parser.c"
    break;

  case 1572:
#line 11020 "parser.y"
              { yyval = NULL; }
#line 20170 "parser.c"
    break;

  case 1573:
#line 11021 "parser.y"
              { yyval = yyvsp[0]; }
#line 20176 "parser.c"
    break;

  case 1574:
#line 11026 "parser.y"
  {
	TERMINATOR_WARNING (yyvsp[(-2) - (0)], ADD);
  }
#line 20184 "parser.c"
    break;

  case 1575:
#line 11030 "parser.y"
  {
	TERMINATOR_CLEAR (yyvsp[(-2) - (1)], ADD);
  }
#line 20192 "parser.c"
    break;

  case 1576:
#line 11040 "parser.y"
  {
	begin_statement ("ALLOCATE", 0);
	cobc_cs_check = CB_CS_ALLOCATE;
	current_statement->flag_no_based = 1;
  }
#line 20202 "parser.c"
    break;

  case 1578:
#line 11050 "parser.y"
  {
	cb_emit_allocate (yyvsp[-3], yyvsp[0], NULL, yyvsp[-2]);
  }
#line 20210 "parser.c"
    break;

  case 1579:
#line 11054 "parser.y"
  {
	if (yyvsp[0] == NULL) {
		cb_error_x (CB_TREE (current_statement),
			    _("ALLOCATE CHARACTERS requires RETURNING clause"));
	} else {
		cb_emit_allocate (NULL, yyvsp[0], yyvsp[-4], yyvsp[-2]);
	}
  }
#line 20223 "parser.c"
    break;

  case 1581:
#line 11067 "parser.y"
  {
	int adressing = cb_get_int (yyvsp[0]);

	if (adressing == 24
	 || adressing == 31) {
		cb_warning (COBC_WARN_FILLER, _("ignoring %s phrase"), "LOC");
	} else {
		cb_error (_("addressing mode should be either 24 or 31 bit"));
	}
  }
#line 20238 "parser.c"
    break;

  case 1582:
#line 11079 "parser.y"
                                { yyval = NULL; }
#line 20244 "parser.c"
    break;

  case 1583:
#line 11080 "parser.y"
                                { yyval = yyvsp[0]; }
#line 20250 "parser.c"
    break;

  case 1584:
#line 11088 "parser.y"
  {
	begin_statement ("ALTER", 0);
	cb_verify (cb_alter_statement, "ALTER");
  }
#line 20259 "parser.c"
    break;

  case 1588:
#line 11102 "parser.y"
  {
	cb_emit_alter (yyvsp[-3], yyvsp[0]);
  }
#line 20267 "parser.c"
    break;

  case 1591:
#line 11114 "parser.y"
  {
	begin_statement ("CALL", TERM_CALL);
	cobc_cs_check = CB_CS_CALL;
	call_nothing = 0;
	cobc_allow_program_name = 1;
	backup_current_pos ();
  }
#line 20279 "parser.c"
    break;

  case 1592:
#line 11123 "parser.y"
  {
	cobc_cs_check = 0;
  }
#line 20287 "parser.c"
    break;

  case 1593:
#line 11130 "parser.y"
  {
	cobc_allow_program_name = 0;
  }
#line 20295 "parser.c"
    break;

  case 1594:
#line 11138 "parser.y"
  {
	int call_conv = 0;
	int call_conv_local = 0;

	if (current_program->prog_type == COB_MODULE_TYPE_PROGRAM
	 && !current_program->flag_recursive
	 && is_recursive_call (yyvsp[-6])) {
	 	if (cb_verify_x (yyvsp[-6], cb_self_call_recursive, _("CALL to own PROGRAM-ID"))) {
			cb_note_x (cb_warn_dialect, yyvsp[-6], _("assuming RECURSIVE attribute"));
			current_program->flag_recursive = 1;
		}
	}
	call_conv = current_call_convention;
	if (yyvsp[-3]) {
		if (current_call_convention & CB_CONV_STATIC_LINK) {
			call_conv = CB_INTEGER (yyvsp[-3])->val | CB_CONV_STATIC_LINK;
		} else {
			call_conv = CB_INTEGER (yyvsp[-3])->val;
		}
		if (yyvsp[-8]) {
			/* note: $1 is likely to be a reference to SPECIAL-NAMES */
			cb_error_x (yyvsp[-3], _("%s and %s are mutually exclusive"),
				"CALL-CONVENTION", "WITH LINKAGE");
		}
	}
	if ((CB_PAIR_X (yyvsp[0]) != NULL)
	 && (call_conv & CB_CONV_STATIC_LINK)) {
		cb_warning_x (COBC_WARN_FILLER, yyvsp[-6],
		    _("STATIC CALL convention ignored because of ON EXCEPTION"));
		call_conv &= ~CB_CONV_STATIC_LINK;
	}
	if (yyvsp[-8]) {
		if (CB_INTEGER_P (yyvsp[-8])) {
			call_conv_local = CB_INTEGER (yyvsp[-8])->val;
			if ((CB_PAIR_X (yyvsp[0]) != NULL)
			 && (call_conv_local & CB_CONV_STATIC_LINK)) {
				cb_warning_x (COBC_WARN_FILLER, yyvsp[-8],
					_("ON EXCEPTION ignored because of STATIC CALL"));
				CB_PAIR_X (yyvsp[0]) = NULL;
			}
			call_conv |= call_conv_local;
			if (CB_INTEGER (yyvsp[-8])->val & CB_CONV_COBOL) {
				call_conv &= ~CB_CONV_STDCALL;
			} else {
				call_conv &= ~CB_CONV_COBOL;
			}
		} else {
			call_conv = cb_get_int(yyvsp[-8]);
		}
	}
	/* For CALL ... RETURNING NOTHING, set the call convention bit */
	if (call_nothing) {
		call_conv |= CB_CONV_NO_RET_UPD;
	}
	cb_emit_call (yyvsp[-6], yyvsp[-2], yyvsp[-1], CB_PAIR_X (yyvsp[0]), CB_PAIR_Y (yyvsp[0]),
		      cb_int (call_conv), yyvsp[-7], yyvsp[-4], backup_source_line);
  }
#line 20357 "parser.c"
    break;

  case 1595:
#line 11199 "parser.y"
  {
	yyval = NULL;
  }
#line 20365 "parser.c"
    break;

  case 1596:
#line 11203 "parser.y"
  {
	/* FIXME: hack - fake cs for context-sensitive WITH ... LINKAGE */
	cobc_cs_check |= CB_CS_OPTIONS;
	backup_current_pos ();
  }
#line 20375 "parser.c"
    break;

  case 1597:
#line 11209 "parser.y"
  {
	yyval = yyvsp[-1];
	restore_backup_pos (yyval);
	cobc_cs_check ^= CB_CS_OPTIONS;
	cb_verify_x (yyval, cb_call_convention_linkage, "WITH ... LINKAGE");
  }
#line 20386 "parser.c"
    break;

  case 1598:
#line 11219 "parser.y"
  {
	yyval = cb_int (CB_CONV_STDCALL);
  }
#line 20394 "parser.c"
    break;

  case 1599:
#line 11223 "parser.y"
  {
	yyval = cb_int (CB_CONV_C);
  }
#line 20402 "parser.c"
    break;

  case 1600:
#line 11227 "parser.y"
  {
	yyval = cb_int (CB_CONV_PASCAL);
  }
#line 20410 "parser.c"
    break;

  case 1601:
#line 11234 "parser.y"
  {
	yyval = NULL;
  }
#line 20418 "parser.c"
    break;

  case 1602:
#line 11238 "parser.y"
  {
	cb_verify (cb_call_convention_mnemonic, "CALL-/ENTRY-CONVENTION");
	yyval = yyvsp[0];
  }
#line 20427 "parser.c"
    break;

  case 1603:
#line 11246 "parser.y"
  {
	if (current_call_convention & CB_CONV_COBOL) {
		yyval = cb_int (CB_CONV_STATIC_LINK | CB_CONV_COBOL);
	} else {
		yyval = cb_int (CB_CONV_STATIC_LINK);
	}
  }
#line 20439 "parser.c"
    break;

  case 1604:
#line 11254 "parser.y"
  {
	yyval = cb_int (CB_CONV_STDCALL);
  }
#line 20447 "parser.c"
    break;

  case 1605:
#line 11258 "parser.y"
  {
	yyval = cb_int (CB_CONV_C);
  }
#line 20455 "parser.c"
    break;

  case 1606:
#line 11262 "parser.y"
  {
	yyval = cb_int (CB_CONV_C);
  }
#line 20463 "parser.c"
    break;

  case 1607:
#line 11266 "parser.y"
  {
	yyval = cb_int (CB_CONV_PASCAL);
  }
#line 20471 "parser.c"
    break;

  case 1608:
#line 11270 "parser.y"
  {
	cb_tree		x;

	x = cb_ref (yyvsp[0]);
	if (CB_VALID_TREE (x)) {
		if (CB_SYSTEM_NAME(x)->token != CB_FEATURE_CONVENTION) {
			cb_error_x (yyvsp[0], _("invalid mnemonic name"));
			yyval = NULL;
		} else {
			yyval = CB_SYSTEM_NAME(x)->value;
		}
	} else {
		yyval = NULL;
	}
  }
#line 20491 "parser.c"
    break;

  case 1609:
#line 11289 "parser.y"
  {
	if (CB_LITERAL_P (yyvsp[0])) {
		cb_trim_program_id (yyvsp[0]);
	}
  }
#line 20501 "parser.c"
    break;

  case 1610:
#line 11295 "parser.y"
  {
	cb_verify (cb_program_prototypes, _("CALL/CANCEL with program-prototype-name"));
	/* hack to push the prototype name */
	if (yyvsp[0] && CB_REFERENCE_P (yyvsp[0])) {
		if (yyvsp[-1]) {
			cb_warning_x (COBC_WARN_FILLER, yyvsp[-1], _("id/literal ignored, using prototype name"));
		}
		yyval = yyvsp[0];
	} else if (yyvsp[-1] && CB_LITERAL_P (yyvsp[-1])) {
		yyval = yyvsp[-1];
	} else {
		cb_error (_("NESTED phrase is only valid with literal"));
		yyval = cb_error_node;
	}
  }
#line 20521 "parser.c"
    break;

  case 1611:
#line 11314 "parser.y"
  {
	yyval = NULL;
  }
#line 20529 "parser.c"
    break;

  case 1612:
#line 11319 "parser.y"
  {
	if (CB_LITERAL_P (yyvsp[-1])) {
		cb_trim_program_id (yyvsp[-1]);
	}
	yyval = yyvsp[-1];
  }
#line 20540 "parser.c"
    break;

  case 1613:
#line 11329 "parser.y"
  {
	CB_PENDING ("NESTED phrase for CALL statement");
  }
#line 20548 "parser.c"
    break;

  case 1615:
#line 11337 "parser.y"
  {
	yyval = NULL;
  }
#line 20556 "parser.c"
    break;

  case 1616:
#line 11341 "parser.y"
  {
	call_mode = CB_CALL_BY_REFERENCE;
	size_mode = CB_SIZE_4;
  }
#line 20565 "parser.c"
    break;

  case 1617:
#line 11346 "parser.y"
  {
	if (cb_list_length (yyvsp[0]) > MAX_CALL_FIELD_PARAMS) {
		cb_error_x (CB_TREE (current_statement),
			    _("number of arguments exceeds maximum %d"),
			    MAX_CALL_FIELD_PARAMS);
	}
	yyval = yyvsp[0];
  }
#line 20578 "parser.c"
    break;

  case 1618:
#line 11357 "parser.y"
                                { yyval = yyvsp[0]; }
#line 20584 "parser.c"
    break;

  case 1619:
#line 11359 "parser.y"
                                { yyval = cb_list_append (yyvsp[-1], yyvsp[0]); }
#line 20590 "parser.c"
    break;

  case 1620:
#line 11364 "parser.y"
  {
	if (call_mode != CB_CALL_BY_REFERENCE) {
		cb_error_x (CB_TREE (current_statement),
			    _("OMITTED only allowed when arguments are passed BY REFERENCE"));
	}
	yyval = CB_BUILD_PAIR (cb_int (call_mode), cb_null);
  }
#line 20602 "parser.c"
    break;

  case 1621:
#line 11372 "parser.y"
  {
	int	save_mode;	/* internal single parameter only mode */

	save_mode = call_mode;
	if (call_mode != CB_CALL_BY_REFERENCE) {
		if (CB_FILE_P (yyvsp[0]) || (CB_REFERENCE_P (yyvsp[0]) &&
		    CB_FILE_P (CB_REFERENCE (yyvsp[0])->value))) {
			cb_error_x (CB_TREE (current_statement),
				    _("invalid file name reference"));
		} else if (call_mode == CB_CALL_BY_VALUE) {
			/* FIXME: compiler configuration needed, IBM allows one-byte
			          alphanumeric items [--> a `char`], too, while
			          COBOL 2002/2014 allow only numeric literals
			   --> revise after rw-merge */
			if (cb_category_is_alpha (yyvsp[0])) {
				cb_warning_x (COBC_WARN_FILLER, yyvsp[0],
					      _("BY CONTENT assumed for alphanumeric item '%s'"),
						  cb_name (yyvsp[0]));
				call_mode = CB_CALL_BY_CONTENT;
			} else if (cb_category_is_national (yyvsp[0])) {
				cb_warning_x (COBC_WARN_FILLER, yyvsp[0],
					      _("BY CONTENT assumed for national item '%s'"),
						  cb_name (yyvsp[0]));
				call_mode = CB_CALL_BY_CONTENT;
			}
		}
	}
	yyval = CB_BUILD_PAIR (cb_int (call_mode), yyvsp[0]);
	CB_SIZES (yyval) = size_mode;
	call_mode = save_mode;
  }
#line 20638 "parser.c"
    break;

  case 1623:
#line 11408 "parser.y"
  {
	call_mode = CB_CALL_BY_REFERENCE;
  }
#line 20646 "parser.c"
    break;

  case 1624:
#line 11412 "parser.y"
  {
	if (current_program->flag_chained) {
		cb_error_x (CB_TREE (current_statement),
			    _("%s not allowed in CHAINED programs"), "BY CONTENT");
	} else {
		call_mode = CB_CALL_BY_CONTENT;
	}
  }
#line 20659 "parser.c"
    break;

  case 1625:
#line 11421 "parser.y"
  {
	if (current_program->flag_chained) {
		cb_error_x (CB_TREE (current_statement),
			    _("%s not allowed in CHAINED programs"), "BY VALUE");
	} else {
		call_mode = CB_CALL_BY_VALUE;
	}
  }
#line 20672 "parser.c"
    break;

  case 1626:
#line 11433 "parser.y"
  {
	yyval = NULL;
  }
#line 20680 "parser.c"
    break;

  case 1627:
#line 11437 "parser.y"
  {
	yyval = yyvsp[0];
  }
#line 20688 "parser.c"
    break;

  case 1628:
#line 11441 "parser.y"
  {
	yyval = cb_null;
  }
#line 20696 "parser.c"
    break;

  case 1629:
#line 11445 "parser.y"
  {
	call_nothing = CB_CONV_NO_RET_UPD;
	yyval = cb_null;
  }
#line 20705 "parser.c"
    break;

  case 1630:
#line 11450 "parser.y"
  {
	struct cb_field	*f;

	if (cb_ref (yyvsp[0]) != cb_error_node) {
		f = CB_FIELD_PTR (yyvsp[0]);
		if (f->level != 1 && f->level != 77) {
			cb_error (_("RETURNING item must have level 01 or 77"));
			yyval = NULL;
		} else if (f->storage != CB_STORAGE_LINKAGE &&
			   !f->flag_item_based) {
			cb_error (_("RETURNING item must be a LINKAGE SECTION item or have BASED clause"));
			yyval = NULL;
		} else {
			yyval = cb_build_address (yyvsp[0]);
		}
	} else {
		yyval = NULL;
	}
  }
#line 20729 "parser.c"
    break;

  case 1635:
#line 11483 "parser.y"
  {
	yyval = CB_BUILD_PAIR (NULL, NULL);
  }
#line 20737 "parser.c"
    break;

  case 1636:
#line 11487 "parser.y"
  {
	yyval = CB_BUILD_PAIR (yyvsp[-1], yyvsp[0]);
  }
#line 20745 "parser.c"
    break;

  case 1637:
#line 11491 "parser.y"
  {
	if (yyvsp[0]) {
		cb_verify (cb_not_exception_before_exception,
			_("NOT EXCEPTION before EXCEPTION"));
	}
	yyval = CB_BUILD_PAIR (yyvsp[0], yyvsp[-1]);
  }
#line 20757 "parser.c"
    break;

  case 1638:
#line 11502 "parser.y"
  {
	yyval = NULL;
  }
#line 20765 "parser.c"
    break;

  case 1639:
#line 11506 "parser.y"
  {
	yyval = yyvsp[0];
  }
#line 20773 "parser.c"
    break;

  case 1640:
#line 11513 "parser.y"
  {
	yyval = yyvsp[0];
  }
#line 20781 "parser.c"
    break;

  case 1641:
#line 11517 "parser.y"
  {
	cb_verify (cb_call_overflow, "ON OVERFLOW");
	yyval = yyvsp[0];
  }
#line 20790 "parser.c"
    break;

  case 1642:
#line 11525 "parser.y"
  {
	yyval = NULL;
  }
#line 20798 "parser.c"
    break;

  case 1643:
#line 11529 "parser.y"
  {
	yyval = yyvsp[0];
  }
#line 20806 "parser.c"
    break;

  case 1644:
#line 11536 "parser.y"
  {
	yyval = yyvsp[0];
  }
#line 20814 "parser.c"
    break;

  case 1645:
#line 11543 "parser.y"
  {
	TERMINATOR_WARNING (yyvsp[(-2) - (0)], CALL);
  }
#line 20822 "parser.c"
    break;

  case 1646:
#line 11547 "parser.y"
  {
	TERMINATOR_CLEAR (yyvsp[(-2) - (1)], CALL);
  }
#line 20830 "parser.c"
    break;

  case 1647:
#line 11557 "parser.y"
  {
	begin_statement ("CANCEL", 0);
	cobc_allow_program_name = 1;
  }
#line 20839 "parser.c"
    break;

  case 1648:
#line 11562 "parser.y"
  {
	cobc_allow_program_name = 0;
  }
#line 20847 "parser.c"
    break;

  case 1649:
#line 11569 "parser.y"
  {
	cb_emit_cancel (yyvsp[0]);
  }
#line 20855 "parser.c"
    break;

  case 1650:
#line 11573 "parser.y"
  {
	cb_emit_cancel (yyvsp[0]);
  }
#line 20863 "parser.c"
    break;

  case 1652:
#line 11581 "parser.y"
  {
	cb_verify (cb_program_prototypes, _("CALL/CANCEL with program-prototype-name"));
  }
#line 20871 "parser.c"
    break;

  case 1653:
#line 11590 "parser.y"
  {
	begin_statement ("CLOSE", 0);
  }
#line 20879 "parser.c"
    break;

  case 1657:
#line 11603 "parser.y"
  {
#if 0 /* CHECKME: likely not needed */
	begin_implicit_statement ();
#endif
	cb_emit_close (yyvsp[-1], yyvsp[0]);
  }
#line 20890 "parser.c"
    break;

  case 1658:
#line 11610 "parser.y"
  {
	begin_implicit_statement ();
	cb_emit_close (yyvsp[-1], yyvsp[0]);
  }
#line 20899 "parser.c"
    break;

  case 1659:
#line 11617 "parser.y"
                                { yyval = cb_int (COB_CLOSE_NORMAL); }
#line 20905 "parser.c"
    break;

  case 1660:
#line 11618 "parser.y"
                                { yyval = cb_int (COB_CLOSE_UNIT); }
#line 20911 "parser.c"
    break;

  case 1661:
#line 11619 "parser.y"
                                { yyval = cb_int (COB_CLOSE_UNIT_REMOVAL); }
#line 20917 "parser.c"
    break;

  case 1662:
#line 11620 "parser.y"
                                { yyval = cb_int (COB_CLOSE_NO_REWIND); }
#line 20923 "parser.c"
    break;

  case 1663:
#line 11621 "parser.y"
                                { yyval = cb_int (COB_CLOSE_LOCK); }
#line 20929 "parser.c"
    break;

  case 1664:
#line 11626 "parser.y"
  {
	CB_PENDING ("GRAPHICAL WINDOW");
	current_statement->name = "CLOSE WINDOW";
  }
#line 20938 "parser.c"
    break;

  case 1665:
#line 11631 "parser.y"
  {
	cb_emit_close_window (yyvsp[-1], yyvsp[0]);
  }
#line 20946 "parser.c"
    break;

  case 1666:
#line 11637 "parser.y"
                                { yyval = NULL; }
#line 20952 "parser.c"
    break;

  case 1667:
#line 11638 "parser.y"
                                { yyval = cb_int0; }
#line 20958 "parser.c"
    break;

  case 1668:
#line 11646 "parser.y"
  {
	begin_statement ("COMPUTE", TERM_COMPUTE);
  }
#line 20966 "parser.c"
    break;

  case 1670:
#line 11655 "parser.y"
  {
	cb_emit_arithmetic (yyvsp[-3], 0, yyvsp[-1]);
  }
#line 20974 "parser.c"
    break;

  case 1671:
#line 11662 "parser.y"
  {
	TERMINATOR_WARNING (yyvsp[(-2) - (0)], COMPUTE);
  }
#line 20982 "parser.c"
    break;

  case 1672:
#line 11666 "parser.y"
  {
	TERMINATOR_CLEAR (yyvsp[(-2) - (1)], COMPUTE);
  }
#line 20990 "parser.c"
    break;

  case 1673:
#line 11676 "parser.y"
  {
	begin_statement ("COMMIT", 0);
	cb_emit_commit ();
  }
#line 20999 "parser.c"
    break;

  case 1674:
#line 11687 "parser.y"
  {
	backup_current_pos ();
  }
#line 21007 "parser.c"
    break;

  case 1675:
#line 11691 "parser.y"
  {
	if (!yyvsp[0]) {
		/* Do not check unreached for CONTINUE without after phrase */
		unsigned int	save_unreached = check_unreached;
		check_unreached = 0;
		begin_statement_from_backup_pos ("CONTINUE", 0);
		cb_emit_continue (NULL);
		check_unreached = save_unreached;
	} else {
		begin_statement_from_backup_pos ("CONTINUE AFTER", 0);
		cb_emit_continue (yyvsp[0]);
	}
  }
#line 21025 "parser.c"
    break;

  case 1676:
#line 11707 "parser.y"
                { yyval = NULL;}
#line 21031 "parser.c"
    break;

  case 1677:
#line 11708 "parser.y"
        {
	/* FIXME: hack - fake cs for context-sensitive SECONDS */
	cobc_cs_check = CB_CS_RETRY;
  }
#line 21040 "parser.c"
    break;

  case 1678:
#line 11713 "parser.y"
  {
	yyval = yyvsp[-1];
  }
#line 21048 "parser.c"
    break;

  case 1679:
#line 11723 "parser.y"
  {
	begin_statement ("DESTROY", 0);
	CB_PENDING ("GRAPHICAL CONTROL");
  }
#line 21057 "parser.c"
    break;

  case 1681:
#line 11732 "parser.y"
  {
	cb_emit_destroy (NULL);
  }
#line 21065 "parser.c"
    break;

  case 1682:
#line 11739 "parser.y"
  {
	cb_emit_destroy (yyvsp[0]);
  }
#line 21073 "parser.c"
    break;

  case 1683:
#line 11749 "parser.y"
  {
	begin_statement ("DELETE", TERM_DELETE);
  }
#line 21081 "parser.c"
    break;

  case 1685:
#line 11758 "parser.y"
  {
	cb_emit_delete (yyvsp[-3]);
  }
#line 21089 "parser.c"
    break;

  case 1687:
#line 11766 "parser.y"
  {
#if 0 /* CHECKME: likely not needed */
	begin_implicit_statement ();
#endif
	cb_emit_delete_file (yyvsp[0]);
  }
#line 21100 "parser.c"
    break;

  case 1688:
#line 11773 "parser.y"
  {
	begin_implicit_statement ();
	cb_emit_delete_file (yyvsp[0]);
  }
#line 21109 "parser.c"
    break;

  case 1689:
#line 11781 "parser.y"
  {
	TERMINATOR_WARNING (yyvsp[(-2) - (0)], DELETE);
  }
#line 21117 "parser.c"
    break;

  case 1690:
#line 11785 "parser.y"
  {
	TERMINATOR_CLEAR (yyvsp[(-2) - (1)], DELETE);
  }
#line 21125 "parser.c"
    break;

  case 1691:
#line 11795 "parser.y"
  {
	begin_statement ("DISABLE", 0);
  }
#line 21133 "parser.c"
    break;

  case 1695:
#line 11809 "parser.y"
  {
	/* Add cb_verify for <= COBOL-85 */
  }
#line 21141 "parser.c"
    break;

  case 1701:
#line 11827 "parser.y"
  {
	begin_statement ("DISPLAY", TERM_DISPLAY);
	cobc_cs_check = CB_CS_DISPLAY;
	display_type = UNKNOWN_DISPLAY;
	is_first_display_item = 1;
  }
#line 21152 "parser.c"
    break;

  case 1703:
#line 11839 "parser.y"
  {
	cb_emit_env_name (yyvsp[-2]);
  }
#line 21160 "parser.c"
    break;

  case 1704:
#line 11843 "parser.y"
  {
	cb_emit_env_value (yyvsp[-2]);
  }
#line 21168 "parser.c"
    break;

  case 1705:
#line 11847 "parser.y"
  {
	cb_emit_arg_number (yyvsp[-2]);
  }
#line 21176 "parser.c"
    break;

  case 1706:
#line 11851 "parser.y"
  {
	cb_emit_command_line (yyvsp[-2]);
  }
#line 21184 "parser.c"
    break;

  case 1714:
#line 11865 "parser.y"
  {
	if (yyvsp[0] != NULL) {
		error_if_different_display_type (yyvsp[0], NULL, NULL, NULL);
		cb_emit_display (yyvsp[0], NULL, cb_int1, NULL, NULL, 0,
				 display_type);
	}
  }
#line 21196 "parser.c"
    break;

  case 1715:
#line 11873 "parser.y"
  {
	set_display_type (yyvsp[0], NULL, NULL, NULL);
	cb_emit_display (yyvsp[0], NULL, cb_int1, NULL, NULL, 1,
			 display_type);
  }
#line 21206 "parser.c"
    break;

  case 1718:
#line 11887 "parser.y"
  {
	check_duplicate = 0;
	check_line_col_duplicate = 0;
	advancing_value = cb_int1;
	upon_value = NULL;
	line_column = NULL;
  }
#line 21218 "parser.c"
    break;

  case 1719:
#line 11895 "parser.y"
  {
	if (yyvsp[-2] == cb_null) {
		/* Emit DISPLAY OMITTED. */
		CB_UNFINISHED_X (CB_TREE(current_statement), "DISPLAY OMITTED");
		error_if_no_advancing_in_screen_display (advancing_value);
	}

	/* Emit device or screen DISPLAY. */

	/*
	  Check that disp_list does not contain an invalid mix of fields.
	*/
	if (display_type == UNKNOWN_DISPLAY) {
		set_display_type (yyvsp[-2], upon_value, line_column,
				  current_statement->attr_ptr);
	} else {
		error_if_different_display_type (yyvsp[-2], upon_value,
						 line_column,
						 current_statement->attr_ptr);
	}

	if (display_type == SCREEN_DISPLAY
	 || display_type == FIELD_ON_SCREEN_DISPLAY) {
		error_if_no_advancing_in_screen_display (advancing_value);
	}

	cb_emit_display (yyvsp[-2], upon_value, advancing_value, line_column,
			 current_statement->attr_ptr,
			 is_first_display_item, display_type);

	is_first_display_item = 0;
  }
#line 21255 "parser.c"
    break;

  case 1720:
#line 11931 "parser.y"
  {
	yyval = yyvsp[0];
  }
#line 21263 "parser.c"
    break;

  case 1721:
#line 11935 "parser.y"
  {
	yyval = cb_null;
  }
#line 21271 "parser.c"
    break;

  case 1728:
#line 11957 "parser.y"
  {
	check_repeated ("UPON", SYN_CLAUSE_1, &check_duplicate);
  }
#line 21279 "parser.c"
    break;

  case 1729:
#line 11961 "parser.y"
  {
	check_repeated ("NO ADVANCING", SYN_CLAUSE_2, &check_duplicate);
	advancing_value = cb_int0;
  }
#line 21288 "parser.c"
    break;

  case 1730:
#line 11966 "parser.y"
  {
	check_repeated ("MODE IS BLOCK", SYN_CLAUSE_3, &check_duplicate);
  }
#line 21296 "parser.c"
    break;

  case 1733:
#line 11975 "parser.y"
  {
	  upon_value = NULL;
  }
#line 21304 "parser.c"
    break;

  case 1735:
#line 11983 "parser.y"
  {
	upon_value = cb_build_display_mnemonic (yyvsp[0]);
  }
#line 21312 "parser.c"
    break;

  case 1736:
#line 11987 "parser.y"
  {
	upon_value = cb_build_display_name (yyvsp[0]);
  }
#line 21320 "parser.c"
    break;

  case 1737:
#line 11991 "parser.y"
  {
	upon_value = cb_int2;
  }
#line 21328 "parser.c"
    break;

  case 1738:
#line 11995 "parser.y"
  {
	upon_value = cb_null;
  }
#line 21336 "parser.c"
    break;

  case 1741:
#line 12007 "parser.y"
  {
	check_duplicate = SYN_CLAUSE_10;
	check_line_col_duplicate = 0;
	line_column = NULL;
	set_dispattr_with_conflict ("ERASE EOS", COB_SCREEN_ERASE_EOS,
				    "ERASE EOL", COB_SCREEN_ERASE_EOL);
  }
#line 21348 "parser.c"
    break;

  case 1742:
#line 12015 "parser.y"
  {
	cb_emit_display (CB_LIST_INIT (cb_space), cb_null, cb_int1, line_column, NULL, 1, FIELD_ON_SCREEN_DISPLAY);
  }
#line 21356 "parser.c"
    break;

  case 1743:
#line 12024 "parser.y"
  {
	cb_emit_display (yyvsp[-1], cb_null, cb_int1, line_column, NULL, 1, FIELD_ON_SCREEN_DISPLAY);
  }
#line 21364 "parser.c"
    break;

  case 1744:
#line 12030 "parser.y"
  {
	check_duplicate = 0;
	check_line_col_duplicate = 0;
	line_column = NULL;
  }
#line 21374 "parser.c"
    break;

  case 1745:
#line 12036 "parser.y"
  {
	yyval = yyvsp[0];
  }
#line 21382 "parser.c"
    break;

  case 1746:
#line 12043 "parser.y"
  {
	yyval = CB_LIST_INIT (yyvsp[0]);
  }
#line 21390 "parser.c"
    break;

  case 1747:
#line 12047 "parser.y"
  {
	yyval = cb_list_add (yyvsp[-1], yyvsp[0]);
  }
#line 21398 "parser.c"
    break;

  case 1750:
#line 12057 "parser.y"
  {
	set_dispattr_with_conflict ("ERASE EOS", COB_SCREEN_ERASE_EOS,
				    "ERASE EOL", COB_SCREEN_ERASE_EOL);
	yyval = cb_space;
  }
#line 21408 "parser.c"
    break;

  case 1751:
#line 12067 "parser.y"
  {
	CB_UNFINISHED_X (CB_TREE(current_statement), "DISPLAY MESSAGE");
	upon_value = NULL;
  }
#line 21417 "parser.c"
    break;

  case 1752:
#line 12072 "parser.y"
  {
	/* for now: minimal support for display and prompt only */
	if (upon_value) {
		cb_emit_display (CB_LIST_INIT (upon_value), NULL, NULL, NULL,
				 NULL, 1, FIELD_ON_SCREEN_DISPLAY);
	}
	cb_emit_display (yyvsp[-2], NULL, NULL, NULL,
			 NULL, 1, FIELD_ON_SCREEN_DISPLAY);
	cb_emit_accept (cb_null, NULL, NULL);
  }
#line 21432 "parser.c"
    break;

  case 1757:
#line 12096 "parser.y"
  {
	upon_value = yyvsp[0];
  }
#line 21440 "parser.c"
    break;

  case 1762:
#line 12107 "parser.y"
  {
	CB_PENDING ("GRAPHICAL WINDOW");
	current_statement->name = "DISPLAY WINDOW";
  }
#line 21449 "parser.c"
    break;

  case 1763:
#line 12112 "parser.y"
  {
	check_duplicate = 0;
	check_line_col_duplicate = 0;
	line_column = NULL;
	upon_value = NULL; /* Hack: stores the POP-UP AREA */
  }
#line 21460 "parser.c"
    break;

  case 1764:
#line 12119 "parser.y"
  {
	cb_emit_display_window (NULL, upon_value, yyvsp[-2], line_column,
			 current_statement->attr_ptr);
  }
#line 21469 "parser.c"
    break;

  case 1767:
#line 12132 "parser.y"
  {
	CB_PENDING ("GRAPHICAL WINDOW");
	current_statement->name = "DISPLAY FLOATING WINDOW";
  }
#line 21478 "parser.c"
    break;

  case 1768:
#line 12137 "parser.y"
  {
	check_duplicate = 0;
	check_line_col_duplicate = 0;
	line_column = NULL;
	upon_value = NULL; /* Hack: stores the POP-UP AREA */
  }
#line 21489 "parser.c"
    break;

  case 1769:
#line 12144 "parser.y"
  {
	if (yyvsp[-5]) {
		/* TODO: set "CELL WIDTH" and "CELL HEIGHT" to "LABEL FONT" */
		/* if not set already */
	}
	cb_emit_display_window (cb_int0, upon_value, yyvsp[-2], line_column,
			 current_statement->attr_ptr);
  }
#line 21502 "parser.c"
    break;

  case 1770:
#line 12156 "parser.y"
  {
	CB_PENDING ("GRAPHICAL WINDOW");
	current_statement->name = "DISPLAY INITIAL WINDOW";
	check_duplicate = 0;
	check_line_col_duplicate = 0;
	line_column = NULL;
	upon_value = NULL; /* Hack: stores the POP-UP AREA */
	/* TODO: initialize attributes for SHADOW, BOTTOM */
  }
#line 21516 "parser.c"
    break;

  case 1771:
#line 12166 "parser.y"
  {
	if (yyvsp[-3]) {
		/* TODO: set "CELL WIDTH" and "CELL HEIGHT" to "LABEL FONT" */
		/* if not set already */
	}
	cb_emit_display_window (yyvsp[-4], upon_value, NULL, line_column,
			 current_statement->attr_ptr);
  }
#line 21529 "parser.c"
    break;

  case 1772:
#line 12177 "parser.y"
                {yyval = cb_int1;}
#line 21535 "parser.c"
    break;

  case 1773:
#line 12178 "parser.y"
                {yyval = cb_int2;}
#line 21541 "parser.c"
    break;

  case 1774:
#line 12179 "parser.y"
                {yyval = cb_int3;}
#line 21547 "parser.c"
    break;

  case 1775:
#line 12183 "parser.y"
                {yyval = NULL;}
#line 21553 "parser.c"
    break;

  case 1776:
#line 12184 "parser.y"
                {yyval = cb_int1;}
#line 21559 "parser.c"
    break;

  case 1777:
#line 12189 "parser.y"
  {
	yyval = NULL;
  }
#line 21567 "parser.c"
    break;

  case 1778:
#line 12193 "parser.y"
  {
	yyval = yyvsp[0];
  }
#line 21575 "parser.c"
    break;

  case 1779:
#line 12200 "parser.y"
  {
	struct cb_field	*f;

	if (cb_ref (yyvsp[0]) != cb_error_node) {
		f = CB_FIELD_PTR (yyvsp[0]);
		if (f->usage != CB_USAGE_HNDL_WINDOW
		 && f->usage != CB_USAGE_HNDL_SUBWINDOW) {
			cb_error_x (yyvsp[0], _("HANDLE must be a %s HANDLE"), "WINDOW");
		}
	}
	yyval = yyvsp[0];
  }
#line 21592 "parser.c"
    break;

  case 1780:
#line 12213 "parser.y"
  {
	struct cb_field	*f;

	if (cb_ref (yyvsp[0]) != cb_error_node) {
		f = CB_FIELD_PTR (yyvsp[0]);
		if (f->usage != CB_USAGE_HNDL) {
			cb_error_x (yyvsp[0], _("HANDLE must be a generic HANDLE"));
		}
	}
	yyval = yyvsp[0];
  }
#line 21608 "parser.c"
    break;

  case 1781:
#line 12225 "parser.y"
  {
	yyval = cb_null;
  }
#line 21616 "parser.c"
    break;

  case 1785:
#line 12240 "parser.y"
  {
	/* TODO: store */
  }
#line 21624 "parser.c"
    break;

  case 1792:
#line 12252 "parser.y"
                        { /* TODO: set attribute */ }
#line 21630 "parser.c"
    break;

  case 1793:
#line 12255 "parser.y"
                        { /* TODO: set attribute */ }
#line 21636 "parser.c"
    break;

  case 1794:
#line 12259 "parser.y"
                { yyval = cb_int0; }
#line 21642 "parser.c"
    break;

  case 1795:
#line 12260 "parser.y"
                        { yyval = cb_int0; }
#line 21648 "parser.c"
    break;

  case 1796:
#line 12261 "parser.y"
                        { yyval = cb_int1; }
#line 21654 "parser.c"
    break;

  case 1797:
#line 12265 "parser.y"
                        { yyval = cb_int0; }
#line 21660 "parser.c"
    break;

  case 1798:
#line 12266 "parser.y"
                        { yyval = cb_int1; }
#line 21666 "parser.c"
    break;

  case 1799:
#line 12267 "parser.y"
                { yyval = cb_int1; }
#line 21672 "parser.c"
    break;

  case 1800:
#line 12268 "parser.y"
                        { yyval = cb_int2; }
#line 21678 "parser.c"
    break;

  case 1805:
#line 12284 "parser.y"
  {
	if (upon_value) {
		emit_duplicate_clause_message("POP-UP AREA");
	}
	upon_value = yyvsp[0];
  }
#line 21689 "parser.c"
    break;

  case 1806:
#line 12294 "parser.y"
  {
	if (!strcmp (current_statement->name, "DISPLAY WINDOW")) {
		cb_error_x (yyvsp[0], _("HANDLE clause invalid for %s"),
			current_statement->name);
		upon_value = cb_error_node;
	} else{
		if (upon_value) {
			emit_duplicate_clause_message("POP-UP AREA / HANDLE IN");
		}
		upon_value = yyvsp[0];
	}
  }
#line 21706 "parser.c"
    break;

  case 1807:
#line 12310 "parser.y"
  {
	check_repeated ("BELL", SYN_CLAUSE_4, &check_duplicate);
	set_dispattr (COB_SCREEN_BELL);
  }
#line 21715 "parser.c"
    break;

  case 1808:
#line 12315 "parser.y"
  {
	check_repeated ("BLANK LINE", SYN_CLAUSE_5, &check_duplicate);
	set_dispattr_with_conflict ("BLANK LINE", COB_SCREEN_BLANK_LINE,
				    "BLANK SCREEN", COB_SCREEN_BLANK_SCREEN);
  }
#line 21725 "parser.c"
    break;

  case 1809:
#line 12321 "parser.y"
  {
	check_repeated ("BLANK SCREEN", SYN_CLAUSE_6, &check_duplicate);
	set_dispattr_with_conflict ("BLANK SCREEN", COB_SCREEN_BLANK_SCREEN,
				    "BLANK LINE", COB_SCREEN_BLANK_LINE);
  }
#line 21735 "parser.c"
    break;

  case 1810:
#line 12327 "parser.y"
  {
	check_repeated ("BLINK", SYN_CLAUSE_7, &check_duplicate);
	set_dispattr (COB_SCREEN_BLINK);
  }
#line 21744 "parser.c"
    break;

  case 1811:
#line 12332 "parser.y"
  {
	check_repeated ("CONVERSION", SYN_CLAUSE_8, &check_duplicate);
	cb_warning (COBC_WARN_FILLER, _("ignoring %s phrase"), "CONVERSION");
  }
#line 21753 "parser.c"
    break;

  case 1812:
#line 12337 "parser.y"
  {
	check_repeated ("ERASE EOL", SYN_CLAUSE_9, &check_duplicate);
	set_dispattr_with_conflict ("ERASE EOL", COB_SCREEN_ERASE_EOL,
				    "ERASE EOS", COB_SCREEN_ERASE_EOS);
  }
#line 21763 "parser.c"
    break;

  case 1813:
#line 12343 "parser.y"
  {
	check_repeated ("ERASE EOS", SYN_CLAUSE_10, &check_duplicate);
	set_dispattr_with_conflict ("ERASE EOS", COB_SCREEN_ERASE_EOS,
				    "ERASE EOL", COB_SCREEN_ERASE_EOL);
  }
#line 21773 "parser.c"
    break;

  case 1814:
#line 12349 "parser.y"
  {
	check_repeated ("HIGHLIGHT", SYN_CLAUSE_11, &check_duplicate);
	set_dispattr_with_conflict ("HIGHLIGHT", COB_SCREEN_HIGHLIGHT,
				    "LOWLIGHT", COB_SCREEN_LOWLIGHT);
  }
#line 21783 "parser.c"
    break;

  case 1815:
#line 12355 "parser.y"
  {
	check_repeated ("LOWLIGHT", SYN_CLAUSE_12, &check_duplicate);
	set_dispattr_with_conflict ("LOWLIGHT", COB_SCREEN_LOWLIGHT,
				    "HIGHLIGHT", COB_SCREEN_HIGHLIGHT);
  }
#line 21793 "parser.c"
    break;

  case 1816:
#line 12362 "parser.y"
  {
	CB_PENDING ("SAME phrase");
	/* may not be specified along with the UNDERLINED, BLINK, REVERSED,
	HIGH, LOW, STANDARD, COLOR, FOREGROUND-COLOR, or BACKGROUND-COLOR phrases */
  }
#line 21803 "parser.c"
    break;

  case 1817:
#line 12368 "parser.y"
  {
	CB_PENDING ("STANDARD intensity");
  }
#line 21811 "parser.c"
    break;

  case 1818:
#line 12372 "parser.y"
  {
	CB_PENDING ("BACKGROUND intensity");
  }
#line 21819 "parser.c"
    break;

  case 1819:
#line 12376 "parser.y"
  {
	CB_PENDING ("BACKGROUND intensity");
  }
#line 21827 "parser.c"
    break;

  case 1820:
#line 12380 "parser.y"
  {
	CB_PENDING ("BACKGROUND intensity");
  }
#line 21835 "parser.c"
    break;

  case 1821:
#line 12384 "parser.y"
  {
	check_repeated ("OVERLINE", SYN_CLAUSE_13, &check_duplicate);
	set_dispattr (COB_SCREEN_OVERLINE);
  }
#line 21844 "parser.c"
    break;

  case 1822:
#line 12389 "parser.y"
  {
	check_repeated ("REVERSE-VIDEO", SYN_CLAUSE_14, &check_duplicate);
	set_dispattr (COB_SCREEN_REVERSE);
  }
#line 21853 "parser.c"
    break;

  case 1823:
#line 12394 "parser.y"
  {
	check_repeated ("SIZE", SYN_CLAUSE_15, &check_duplicate);
	set_attribs (NULL, NULL, NULL, NULL, NULL, yyvsp[0], 0);
  }
#line 21862 "parser.c"
    break;

  case 1824:
#line 12399 "parser.y"
  {
	check_repeated ("UNDERLINE", SYN_CLAUSE_16, &check_duplicate);
	set_dispattr (COB_SCREEN_UNDERLINE);
  }
#line 21871 "parser.c"
    break;

  case 1825:
#line 12404 "parser.y"
  {
	check_repeated ("FOREGROUND-COLOR", SYN_CLAUSE_17, &check_duplicate);
	check_repeated ("BACKGROUND-COLOR", SYN_CLAUSE_18, &check_duplicate);
	CB_PENDING ("COLOR");
  }
#line 21881 "parser.c"
    break;

  case 1826:
#line 12410 "parser.y"
  {
	check_repeated ("FOREGROUND-COLOR", SYN_CLAUSE_17, &check_duplicate);
	set_attribs (yyvsp[0], NULL, NULL, NULL, NULL, NULL, 0);
  }
#line 21890 "parser.c"
    break;

  case 1827:
#line 12415 "parser.y"
  {
	check_repeated ("BACKGROUND-COLOR", SYN_CLAUSE_18, &check_duplicate);
	set_attribs (NULL, yyvsp[0], NULL, NULL, NULL, NULL, 0);
  }
#line 21899 "parser.c"
    break;

  case 1828:
#line 12420 "parser.y"
  {
	check_repeated ("SCROLL UP", SYN_CLAUSE_19, &check_duplicate);
	set_attribs_with_conflict (NULL, NULL, yyvsp[0], NULL, NULL, NULL,
				   "SCROLL UP", COB_SCREEN_SCROLL_UP,
				   "SCROLL DOWN", COB_SCREEN_SCROLL_DOWN);
  }
#line 21910 "parser.c"
    break;

  case 1829:
#line 12427 "parser.y"
  {
	check_repeated ("SCROLL DOWN", SYN_CLAUSE_20, &check_duplicate);
	set_attribs_with_conflict (NULL, NULL, yyvsp[0], NULL, NULL, NULL,
				   "SCROLL DOWN", COB_SCREEN_SCROLL_DOWN,
				   "SCROLL UP", COB_SCREEN_SCROLL_UP);
  }
#line 21921 "parser.c"
    break;

  case 1830:
#line 12437 "parser.y"
  {
	TERMINATOR_WARNING (yyvsp[(-2) - (0)], DISPLAY);
  }
#line 21929 "parser.c"
    break;

  case 1831:
#line 12441 "parser.y"
  {
	TERMINATOR_CLEAR (yyvsp[(-2) - (1)], DISPLAY);
  }
#line 21937 "parser.c"
    break;

  case 1832:
#line 12451 "parser.y"
  {
	begin_statement ("DIVIDE", TERM_DIVIDE);
  }
#line 21945 "parser.c"
    break;

  case 1834:
#line 12460 "parser.y"
  {
	cb_emit_arithmetic (yyvsp[-1], '/', yyvsp[-3]);
  }
#line 21953 "parser.c"
    break;

  case 1835:
#line 12464 "parser.y"
  {
	cb_emit_arithmetic (yyvsp[-1], 0, cb_build_binary_op (yyvsp[-3], '/', yyvsp[-5]));
  }
#line 21961 "parser.c"
    break;

  case 1836:
#line 12468 "parser.y"
  {
	cb_emit_arithmetic (yyvsp[-1], 0, cb_build_binary_op (yyvsp[-5], '/', yyvsp[-3]));
  }
#line 21969 "parser.c"
    break;

  case 1837:
#line 12472 "parser.y"
  {
	cb_emit_divide (yyvsp[-5], yyvsp[-7], yyvsp[-3], yyvsp[-1]);
  }
#line 21977 "parser.c"
    break;

  case 1838:
#line 12476 "parser.y"
  {
	cb_emit_divide (yyvsp[-7], yyvsp[-5], yyvsp[-3], yyvsp[-1]);
  }
#line 21985 "parser.c"
    break;

  case 1839:
#line 12483 "parser.y"
  {
	TERMINATOR_WARNING (yyvsp[(-2) - (0)], DIVIDE);
  }
#line 21993 "parser.c"
    break;

  case 1840:
#line 12487 "parser.y"
  {
	TERMINATOR_CLEAR (yyvsp[(-2) - (1)], DIVIDE);
  }
#line 22001 "parser.c"
    break;

  case 1841:
#line 12497 "parser.y"
  {
	begin_statement ("ENABLE", 0);
  }
#line 22009 "parser.c"
    break;

  case 1843:
#line 12508 "parser.y"
  {
	check_unreached = 0;
	begin_statement ("ENTRY", 0);
	backup_current_pos ();
  }
#line 22019 "parser.c"
    break;

  case 1845:
#line 12515 "parser.y"
  {
	check_unreached = 0;
	begin_statement ("ENTRY FOR GO TO", 0);
	backup_current_pos ();
  }
#line 22029 "parser.c"
    break;

  case 1847:
#line 12525 "parser.y"
  {
	if (current_program->nested_level) {
		cb_error (_("%s is invalid in nested program"), "ENTRY");
	} else if (current_program->prog_type == COB_MODULE_TYPE_FUNCTION) {
		cb_error (_("%s is invalid in a user FUNCTION"), "ENTRY");
	} else if (cb_verify (cb_entry_statement, "ENTRY")) {
		cb_tree call_conv = yyvsp[-3];
		if (yyvsp[-1]) {
			call_conv = yyvsp[-1];
			if (yyvsp[-3]) {
				/* note: $1 is likely to be a reference to SPECIAL-NAMES */
				cb_error_x (yyvsp[-1], _("%s and %s are mutually exclusive"),
					"CALL-CONVENTION", "WITH LINKAGE");
			}
		}
		if (!cobc_check_valid_name ((char *)(CB_LITERAL (yyvsp[-2])->data), ENTRY_NAME)) {
			emit_entry ((char *)(CB_LITERAL (yyvsp[-2])->data), 1, yyvsp[0], call_conv, 0);
		}
	}
  }
#line 22054 "parser.c"
    break;

  case 1848:
#line 12549 "parser.y"
  {
	if (cb_verify (cb_goto_entry, "ENTRY FOR GO TO")) {
		emit_entry_goto ((char *)(CB_LITERAL (yyvsp[0])->data));
	}
  }
#line 22064 "parser.c"
    break;

  case 1849:
#line 12561 "parser.y"
  {
	begin_statement ("EVALUATE", TERM_EVALUATE);
	eval_level++;
	if (eval_level >= EVAL_DEPTH) {
		cb_error (_("maximum evaluate depth exceeded (%d)"),
			  EVAL_DEPTH);
		eval_level = 0;
		eval_inc = 0;
		eval_inc2 = 0;
		YYERROR;
	} else {
		for (eval_inc = 0; eval_inc < EVAL_DEPTH; ++eval_inc) {
			eval_check[eval_level][eval_inc] = NULL;
		}
		eval_inc = 0;
		eval_inc2 = 0;
	}
	cb_end_cond (cb_any);
	cb_save_cond ();
	cb_true_side ();
  }
#line 22090 "parser.c"
    break;

  case 1851:
#line 12588 "parser.y"
  {
	if (!skip_statements) {
		cb_emit_evaluate (yyvsp[-1], yyvsp[0]);
	}
	eval_level--;
  }
#line 22101 "parser.c"
    break;

  case 1852:
#line 12597 "parser.y"
                                { yyval = CB_LIST_INIT (yyvsp[0]); }
#line 22107 "parser.c"
    break;

  case 1853:
#line 12599 "parser.y"
                                { yyval = cb_list_add (yyvsp[-2], yyvsp[0]); }
#line 22113 "parser.c"
    break;

  case 1854:
#line 12604 "parser.y"
  {
	yyval = yyvsp[0];
	eval_check[eval_level][eval_inc++] = yyvsp[0];
	if (eval_inc >= EVAL_DEPTH) {
		cb_error (_("maximum evaluate depth exceeded (%d)"),
			  EVAL_DEPTH);
		eval_inc = 0;
		YYERROR;
	}
  }
#line 22128 "parser.c"
    break;

  case 1855:
#line 12615 "parser.y"
  {
	yyval = cb_true;
	eval_check[eval_level][eval_inc++] = NULL;
	if (eval_inc >= EVAL_DEPTH) {
		cb_error (_("maximum evaluate depth exceeded (%d)"),
			  EVAL_DEPTH);
		eval_inc = 0;
		YYERROR;
	}
  }
#line 22143 "parser.c"
    break;

  case 1856:
#line 12626 "parser.y"
  {
	yyval = cb_false;
	eval_check[eval_level][eval_inc++] = cb_false;
	if (eval_inc >= EVAL_DEPTH) {
		cb_error (_("maximum evaluate depth exceeded (%d)"),
			  EVAL_DEPTH);
		eval_inc = 0;
		YYERROR;
	}
  }
#line 22158 "parser.c"
    break;

  case 1857:
#line 12640 "parser.y"
  {
	if (yyvsp[0]) {
		yyval = cb_list_add (yyvsp[-1], yyvsp[0]);
	} else {
		yyval = yyvsp[-1];
	}
  }
#line 22170 "parser.c"
    break;

  case 1858:
#line 12649 "parser.y"
  {
	yyval = yyvsp[0];
  }
#line 22178 "parser.c"
    break;

  case 1859:
#line 12655 "parser.y"
                                { yyval = CB_LIST_INIT (yyvsp[0]); }
#line 22184 "parser.c"
    break;

  case 1860:
#line 12657 "parser.y"
                                { yyval = cb_list_add (yyvsp[-1], yyvsp[0]); }
#line 22190 "parser.c"
    break;

  case 1861:
#line 12663 "parser.y"
  {
	yyval = CB_BUILD_CHAIN (yyvsp[0], yyvsp[-1]);
	eval_inc2 = 0;
  }
#line 22199 "parser.c"
    break;

  case 1862:
#line 12668 "parser.y"
  {
	eval_inc2 = 0;
	cb_verify (cb_missing_statement,
		_("WHEN without imperative statement"));
	/* Note: we don't clear the EVALUATE terminator here
	         as we'd have to skip this later
	         [side effect: possible warning about missing terminator] */
	yyval = CB_BUILD_CHAIN (CB_LIST_INIT (cb_build_continue ()), yyvsp[-1]);
  }
#line 22213 "parser.c"
    break;

  case 1863:
#line 12678 "parser.y"
  {
	eval_inc2 = 0;
	cb_verify (cb_missing_statement,
		_("WHEN without imperative statement"));
	/* Put the dot token back into the stack for reparse */
	cb_unput_dot ();
	yyval = CB_BUILD_CHAIN (CB_LIST_INIT (cb_build_continue ()), yyvsp[-1]);
  }
#line 22226 "parser.c"
    break;

  case 1864:
#line 12691 "parser.y"
  {
	yyval = CB_BUILD_CHAIN (yyvsp[0], NULL);
	eval_inc2 = 0;
  }
#line 22235 "parser.c"
    break;

  case 1865:
#line 12696 "parser.y"
  {
	eval_inc2 = 0;
	cb_verify (cb_missing_statement,
		_("WHEN OTHER without imperative statement"));
	/* Note: we don't clear the EVALUATE terminator here
	         as we'd have to skip this later
	         [side effect: possible warning about missing terminator] */
	yyval = NULL;
  }
#line 22249 "parser.c"
    break;

  case 1866:
#line 12706 "parser.y"
  {
	eval_inc2 = 0;
	cb_verify (cb_missing_statement,
		_("WHEN OTHER without imperative statement"));
	/* Put the dot token back into the stack for reparse */
	cb_unput_dot ();
	yyval = NULL;
  }
#line 22262 "parser.c"
    break;

  case 1867:
#line 12718 "parser.y"
  {
	backup_current_pos ();
  }
#line 22270 "parser.c"
    break;

  case 1868:
#line 12722 "parser.y"
  {
	yyval = CB_LIST_INIT (yyvsp[0]);
	restore_backup_pos (yyval);
	eval_inc2 = 0;
  }
#line 22280 "parser.c"
    break;

  case 1869:
#line 12729 "parser.y"
  {
	backup_current_pos ();
  }
#line 22288 "parser.c"
    break;

  case 1870:
#line 12733 "parser.y"
  {
	yyval = cb_list_add (yyvsp[-3], yyvsp[0]);
	restore_backup_pos (yyval);
	eval_inc2 = 0;
  }
#line 22298 "parser.c"
    break;

  case 1871:
#line 12741 "parser.y"
                                { yyval = CB_LIST_INIT (yyvsp[0]); }
#line 22304 "parser.c"
    break;

  case 1872:
#line 12743 "parser.y"
                                { yyval = cb_list_add (yyvsp[-2], yyvsp[0]); }
#line 22310 "parser.c"
    break;

  case 1873:
#line 12748 "parser.y"
  {
	cb_tree	not0;
	cb_tree	e1;
	cb_tree	e2;
	cb_tree	x;
	cb_tree	parm1;

	not0 = cb_int0;
	e2 = yyvsp[0];
	x = NULL;
	parm1 = yyvsp[-1];
	if (eval_check[eval_level][eval_inc2]
	 && eval_check[eval_level][eval_inc2] != cb_false) {
		/* Check if the first token is NOT */
		/* It may belong to the EVALUATE, however see */
		/* below when it may be part of a partial expression */
		if (CB_PURPOSE_INT (parm1) == '!') {
			/* Pop stack if subject not TRUE / FALSE */
			not0 = cb_int1;
			x = parm1;
			parm1 = CB_CHAIN (parm1);
		}
		/* Partial expression handling */
		switch (CB_PURPOSE_INT (parm1)) {
		/* Relational conditions */
		case '<':
		case '>':
		case '[':
		case ']':
		case '~':
		case '=':
		/* Class conditions */
		case '9':
		case 'A':
		case 'L':
		case 'U':
		case 'P':
		case 'N':
		case 'O':
		case 'C':
			if (e2) {
				cb_error_x (e2, _("invalid THROUGH usage"));
				e2 = NULL;
			}
			not0 = CB_PURPOSE (parm1);
			if (x) {
				/* Rebind the NOT to the partial expression */
				parm1 = cb_build_list (cb_int ('!'), NULL, parm1);
			}
			/* Insert subject at head of list */
			parm1 = cb_build_list (cb_int ('x'),
					    eval_check[eval_level][eval_inc2], parm1);
			break;
		}
	}

	/* Build expr now */
	e1 = cb_build_expr (parm1);

	eval_inc2++;
	yyval = CB_BUILD_PAIR (not0, CB_BUILD_PAIR (e1, e2));

	if (eval_check[eval_level][eval_inc2-1] == cb_false) {
		/* It was  EVALUATE FALSE; So flip condition */
		if (e1 == cb_true)
			e1 = cb_false;
		else if (e1 == cb_false)
			e1 = cb_true;
	}
	cb_terminate_cond ();
	cb_end_cond (e1);
	cb_save_cond ();
	cb_true_side ();
  }
#line 22389 "parser.c"
    break;

  case 1874:
#line 12822 "parser.y"
                                { yyval = cb_any; eval_inc2++; }
#line 22395 "parser.c"
    break;

  case 1875:
#line 12823 "parser.y"
                                { yyval = cb_true; eval_inc2++; }
#line 22401 "parser.c"
    break;

  case 1876:
#line 12824 "parser.y"
                                { yyval = cb_false; eval_inc2++; }
#line 22407 "parser.c"
    break;

  case 1877:
#line 12825 "parser.y"
                                { yyval = cb_error_node; eval_inc2++; }
#line 22413 "parser.c"
    break;

  case 1878:
#line 12829 "parser.y"
                                { yyval = NULL; }
#line 22419 "parser.c"
    break;

  case 1879:
#line 12830 "parser.y"
                                { yyval = yyvsp[0]; }
#line 22425 "parser.c"
    break;

  case 1880:
#line 12835 "parser.y"
  {
	TERMINATOR_WARNING (yyvsp[(-2) - (0)], EVALUATE);
  }
#line 22433 "parser.c"
    break;

  case 1881:
#line 12839 "parser.y"
  {
	TERMINATOR_CLEAR (yyvsp[(-2) - (1)], EVALUATE);
  }
#line 22441 "parser.c"
    break;

  case 1882:
#line 12848 "parser.y"
  {
	begin_statement ("EXHIBIT", 0);
	line_column = NULL;
	cobc_cs_check = CB_CS_EXHIBIT;
  }
#line 22451 "parser.c"
    break;

  case 1883:
#line 12854 "parser.y"
  {
	cobc_cs_check = 0;
  }
#line 22459 "parser.c"
    break;

  case 1884:
#line 12861 "parser.y"
  {
	if (yyvsp[0] || !yyvsp[-1]) {
		exhibit_named = 1;
		advancing_value = cb_int1;
	} else {
		exhibit_named = 0;
	}
	if (yyvsp[-1]) {
		exhibit_changed = 1;
		/* TODO: feature for a later version (needs temporary fields,
		   one per target, but not duplicated between multiple EXHIBIT) */
		CB_PENDING ("EXHIBIT CHANGED");
		/* note: literals are _always_ displayed, unchanged are replaced
		         by spaces in full length (including the possible NAMED part) */
	} else {
		exhibit_changed = 0;
	}
  }
#line 22482 "parser.c"
    break;

  case 1885:
#line 12880 "parser.y"
  {
	/* note: position-specifier, ERASE and UPON are MS-COBOL extensions,
	         but we won't add an extra dialect option for this - if wanted
			 we can add one for the position-specifier and use that for
			 those clauses, too */
	if (upon_value != NULL) {
		/* TODO: come back to this MS-COBOL feature later */
		CB_PENDING ("EXHIBIT UPON");
	}
	if (yyvsp[-2] != NULL) {
		attach_attrib_to_cur_stmt ();
		current_statement->attr_ptr->dispattrs = COB_SCREEN_ERASE_EOS;
	}
	/* note: while MF does not do this, OSVS had empty line suppression for
	         CHANGED - do the same ... later */
	cb_emit_display (yyvsp[-1], NULL, cb_int1, line_column,
			 current_statement->attr_ptr,
			 0, DEVICE_DISPLAY);
  }
#line 22506 "parser.c"
    break;

  case 1886:
#line 12901 "parser.y"
                { yyval = NULL; }
#line 22512 "parser.c"
    break;

  case 1887:
#line 12901 "parser.y"
                                                { yyval = cb_int0; }
#line 22518 "parser.c"
    break;

  case 1888:
#line 12902 "parser.y"
                { yyval = NULL; }
#line 22524 "parser.c"
    break;

  case 1889:
#line 12902 "parser.y"
                                                { yyval = cb_int0; }
#line 22530 "parser.c"
    break;

  case 1890:
#line 12906 "parser.y"
  {
	if (exhibit_named && !CB_LITERAL_P (yyvsp[0])) {
		yyval = CB_LIST_INIT (cb_exhbit_literal (yyvsp[0]));
		yyval = cb_list_add (yyval, yyvsp[0]);
	} else {
		yyval = CB_LIST_INIT (yyvsp[0]);
	}
  }
#line 22543 "parser.c"
    break;

  case 1891:
#line 12915 "parser.y"
  {
	yyval = cb_list_add (yyvsp[-1], cb_space);
	if (exhibit_named && !CB_LITERAL_P (yyvsp[0])) {
		yyval = cb_list_add (yyval, cb_exhbit_literal (yyvsp[0]));
	}
	yyval = cb_list_add (yyvsp[-1], yyvsp[0]);
  }
#line 22555 "parser.c"
    break;

  case 1894:
#line 12934 "parser.y"
  {
	begin_statement ("EXIT", 0);
	cobc_cs_check = CB_CS_EXIT;
  }
#line 22564 "parser.c"
    break;

  case 1895:
#line 12939 "parser.y"
  {
	cobc_cs_check = 0;
  }
#line 22572 "parser.c"
    break;

  case 1896:
#line 12946 "parser.y"
  {
  /* TODO: add warning/error if there's another statement in the paragraph */
  }
#line 22580 "parser.c"
    break;

  case 1897:
#line 12950 "parser.y"
  {
	if (in_declaratives && use_global_ind) {
		cb_error_x (CB_TREE (current_statement),
			    _("EXIT PROGRAM is not allowed within a USE GLOBAL procedure"));
	}
	if (current_program->prog_type != COB_MODULE_TYPE_PROGRAM) {
		cb_error_x (CB_TREE (current_statement),
			    _("EXIT PROGRAM not allowed within a FUNCTION"));
	}
	if (current_program->flag_main) {
		check_unreached = 0;
	} else {
		check_unreached = 1;
	}
	if (yyvsp[0]) {
		if (!current_program->cb_return_code) {
			cb_error_x (yyvsp[0], _("RETURNING/GIVING not allowed for non-returning runtime elements"));
		} else {
			cb_emit_move (yyvsp[0], CB_LIST_INIT (current_program->cb_return_code));
		}
	}
	current_statement->name = (const char *)"EXIT PROGRAM";
	cb_emit_exit (0);
  }
#line 22609 "parser.c"
    break;

  case 1898:
#line 12975 "parser.y"
  {
	if (in_declaratives && use_global_ind) {
		cb_error_x (CB_TREE (current_statement),
			    _("EXIT FUNCTION is not allowed within a USE GLOBAL procedure"));
	}
	if (current_program->prog_type != COB_MODULE_TYPE_FUNCTION) {
		cb_error_x (CB_TREE (current_statement),
			    _("EXIT FUNCTION only allowed within a FUNCTION"));
	}
	check_unreached = 1;
	current_statement->name = (const char *)"EXIT FUNCTION";
	cb_emit_exit (0);
  }
#line 22627 "parser.c"
    break;

  case 1899:
#line 12989 "parser.y"
  {
	struct cb_perform	*p;
	cb_tree			plabel;
	char			name[64];

	if (!perform_stack) {
		cb_error_x (CB_TREE (current_statement),
			    _("EXIT PERFORM is only valid with inline PERFORM"));
	} else if (CB_VALUE (perform_stack) != cb_error_node) {
		p = CB_PERFORM (CB_VALUE (perform_stack));
		if (!p->cycle_label) {
			sprintf (name, "EXIT PERFORM CYCLE %d", cb_id);
			p->cycle_label = cb_build_reference (name);
			plabel = cb_build_label (p->cycle_label, NULL);
			CB_LABEL (plabel)->flag_begin = 1;
			CB_LABEL (plabel)->flag_dummy_exit = 1;
		}
		current_statement->name = (const char *)"EXIT PERFORM CYCLE";
		cb_emit_goto (CB_LIST_INIT (p->cycle_label), NULL);
		check_unreached = 1;
	}
  }
#line 22654 "parser.c"
    break;

  case 1900:
#line 13012 "parser.y"
  {
	struct cb_perform	*p;
	cb_tree			plabel;
	char			name[64];

	if (!perform_stack) {
		cb_error_x (CB_TREE (current_statement),
			    _("EXIT PERFORM is only valid with inline PERFORM"));
	} else if (CB_VALUE (perform_stack) != cb_error_node) {
		p = CB_PERFORM (CB_VALUE (perform_stack));
		if (!p->exit_label) {
			sprintf (name, "EXIT PERFORM %d", cb_id);
			p->exit_label = cb_build_reference (name);
			plabel = cb_build_label (p->exit_label, NULL);
			CB_LABEL (plabel)->flag_begin = 1;
			CB_LABEL (plabel)->flag_dummy_exit = 1;
		}
		current_statement->name = (const char *)"EXIT PERFORM";
		cb_emit_goto (CB_LIST_INIT (p->exit_label), NULL);
		check_unreached = 1;
	}
  }
#line 22681 "parser.c"
    break;

  case 1901:
#line 13035 "parser.y"
  {
	cb_tree	plabel;
	char	name[64];

	if (!current_section) {
		cb_error_x (CB_TREE (current_statement),
			    _("EXIT SECTION is only valid with an active SECTION"));
	} else {
		if (!current_section->exit_label) {
			sprintf (name, "EXIT SECTION %d", cb_id);
			current_section->exit_label = cb_build_reference (name);
			plabel = cb_build_label (current_section->exit_label, NULL);
			CB_LABEL (plabel)->flag_begin = 1;
			CB_LABEL (plabel)->flag_dummy_exit = 1;
		}
		current_statement->name = (const char *)"EXIT SECTION";
		cb_emit_goto (CB_LIST_INIT (current_section->exit_label), NULL);
		check_unreached = 1;
	}
  }
#line 22706 "parser.c"
    break;

  case 1902:
#line 13056 "parser.y"
  {
	cb_tree	plabel;
	char	name[64];

	if (!current_paragraph) {
		cb_error_x (CB_TREE (current_statement),
			    _("EXIT PARAGRAPH is only valid with an active PARAGRAPH"));
	} else {
		if (!current_paragraph->exit_label) {
			sprintf (name, "EXIT PARAGRAPH %d", cb_id);
			current_paragraph->exit_label = cb_build_reference (name);
			plabel = cb_build_label (current_paragraph->exit_label, NULL);
			CB_LABEL (plabel)->flag_begin = 1;
			CB_LABEL (plabel)->flag_dummy_exit = 1;
		}
		current_statement->name = (const char *)"EXIT PARAGRAPH";
		cb_emit_goto (CB_LIST_INIT (current_paragraph->exit_label), NULL);
		check_unreached = 1;
	}
  }
#line 22731 "parser.c"
    break;

  case 1903:
#line 13079 "parser.y"
                                { yyval = NULL; }
#line 22737 "parser.c"
    break;

  case 1904:
#line 13082 "parser.y"
                        { yyval = yyvsp[0]; }
#line 22743 "parser.c"
    break;

  case 1905:
#line 13090 "parser.y"
  {
	begin_statement ("FREE", 0);
	current_statement->flag_no_based = 1;
  }
#line 22752 "parser.c"
    break;

  case 1907:
#line 13099 "parser.y"
  {
	cb_emit_free (yyvsp[0]);
  }
#line 22760 "parser.c"
    break;

  case 1908:
#line 13109 "parser.y"
  {
	begin_statement ("GENERATE", 0);
  }
#line 22768 "parser.c"
    break;

  case 1910:
#line 13118 "parser.y"
  {
#if 0 /* CHECKME: likely not needed */
	begin_implicit_statement ();
#endif
	if (yyvsp[0] != cb_error_node) {
		cb_emit_generate (yyvsp[0]);
	}
  }
#line 22781 "parser.c"
    break;

  case 1911:
#line 13132 "parser.y"
  {
	if (!current_paragraph->flag_statement) {
		current_paragraph->flag_first_is_goto = 1;
	}
	begin_statement ("GO TO", 0);
	save_debug = start_debug;
	start_debug = 0;
  }
#line 22794 "parser.c"
    break;

  case 1913:
#line 13145 "parser.y"
  {
	cb_emit_goto (yyvsp[-1], yyvsp[0]);
	start_debug = save_debug;
  }
#line 22803 "parser.c"
    break;

  case 1914:
#line 13150 "parser.y"
  {
	if (cb_verify (cb_goto_entry, "ENTRY FOR GO TO")) {
		cb_emit_goto_entry (yyvsp[-1], yyvsp[0]);
	}
	start_debug = save_debug;
  }
#line 22814 "parser.c"
    break;

  case 1915:
#line 13160 "parser.y"
  {
	check_unreached = 1;
	yyval = NULL;
  }
#line 22823 "parser.c"
    break;

  case 1916:
#line 13165 "parser.y"
  {
	check_unreached = 0;
	yyval = yyvsp[0];
  }
#line 22832 "parser.c"
    break;

  case 1917:
#line 13176 "parser.y"
  {
	begin_statement ("GOBACK", 0);
	check_unreached = 1;
	if (yyvsp[0]) {
		if (!current_program->cb_return_code) {
			cb_error_x (yyvsp[0], _("RETURNING/GIVING not allowed for non-returning runtime elements"));
		} else {
			cb_emit_move (yyvsp[0], CB_LIST_INIT (current_program->cb_return_code));
		}
	}
	cb_emit_exit (1U);
  }
#line 22849 "parser.c"
    break;

  case 1918:
#line 13195 "parser.y"
  {
	begin_statement ("IF", TERM_IF);
  }
#line 22857 "parser.c"
    break;

  case 1920:
#line 13204 "parser.y"
  {
	cb_emit_if (yyvsp[(-1) - (5)], yyvsp[-3], yyvsp[0]);
  }
#line 22865 "parser.c"
    break;

  case 1921:
#line 13208 "parser.y"
  {
	cb_emit_if (yyvsp[(-1) - (3)], NULL, yyvsp[0]);
	cb_verify (cb_missing_statement,
		_("IF without imperative statement"));
  }
#line 22875 "parser.c"
    break;

  case 1922:
#line 13214 "parser.y"
  {
	cb_emit_if (yyvsp[(-1) - (2)], yyvsp[0], NULL);
  }
#line 22883 "parser.c"
    break;

  case 1923:
#line 13220 "parser.y"
  {
	cb_save_cond ();
  }
#line 22891 "parser.c"
    break;

  case 1924:
#line 13224 "parser.y"
  {
	cb_save_cond ();
  }
#line 22899 "parser.c"
    break;

  case 1925:
#line 13230 "parser.y"
  {
	cb_true_side ();
  }
#line 22907 "parser.c"
    break;

  case 1926:
#line 13236 "parser.y"
  {
	cb_false_side ();
  }
#line 22915 "parser.c"
    break;

  case 1927:
#line 13243 "parser.y"
  {
	TERMINATOR_WARNING (yyvsp[(-4) - (0)], IF);
	cb_terminate_cond ();
  }
#line 22924 "parser.c"
    break;

  case 1928:
#line 13248 "parser.y"
  {
	TERMINATOR_CLEAR (yyvsp[(-4) - (1)], IF);
	cb_terminate_cond ();
  }
#line 22933 "parser.c"
    break;

  case 1929:
#line 13259 "parser.y"
  {
	begin_statement ("INITIALIZE", 0);
  }
#line 22941 "parser.c"
    break;

  case 1931:
#line 13268 "parser.y"
  {
	cb_emit_initialize (yyvsp[-4], yyvsp[-3], yyvsp[-2], yyvsp[-1], yyvsp[0]);
  }
#line 22949 "parser.c"
    break;

  case 1932:
#line 13274 "parser.y"
                                { yyval = NULL; }
#line 22955 "parser.c"
    break;

  case 1933:
#line 13275 "parser.y"
                                { yyval = cb_true; }
#line 22961 "parser.c"
    break;

  case 1934:
#line 13279 "parser.y"
                                { yyval = NULL; }
#line 22967 "parser.c"
    break;

  case 1935:
#line 13280 "parser.y"
                                { yyval = cb_true; }
#line 22973 "parser.c"
    break;

  case 1936:
#line 13281 "parser.y"
                                { yyval = yyvsp[-2]; }
#line 22979 "parser.c"
    break;

  case 1937:
#line 13286 "parser.y"
  {
	yyval = NULL;
  }
#line 22987 "parser.c"
    break;

  case 1938:
#line 13290 "parser.y"
  {
	yyval = yyvsp[0];
  }
#line 22995 "parser.c"
    break;

  case 1939:
#line 13297 "parser.y"
  {
	yyval = yyvsp[0];
  }
#line 23003 "parser.c"
    break;

  case 1940:
#line 13302 "parser.y"
  {
	yyval = cb_list_append (yyvsp[-1], yyvsp[0]);
  }
#line 23011 "parser.c"
    break;

  case 1941:
#line 13309 "parser.y"
  {
	yyval = CB_BUILD_PAIR (yyvsp[-3], yyvsp[0]);
  }
#line 23019 "parser.c"
    break;

  case 1942:
#line 13315 "parser.y"
                        { yyval = cb_int (CB_CATEGORY_ALPHABETIC); }
#line 23025 "parser.c"
    break;

  case 1943:
#line 13316 "parser.y"
                        { yyval = cb_int (CB_CATEGORY_ALPHANUMERIC); }
#line 23031 "parser.c"
    break;

  case 1944:
#line 13317 "parser.y"
                        { yyval = cb_int (CB_CATEGORY_NUMERIC); }
#line 23037 "parser.c"
    break;

  case 1945:
#line 13318 "parser.y"
                        { yyval = cb_int (CB_CATEGORY_ALPHANUMERIC_EDITED); }
#line 23043 "parser.c"
    break;

  case 1946:
#line 13319 "parser.y"
                        { yyval = cb_int (CB_CATEGORY_NUMERIC_EDITED); }
#line 23049 "parser.c"
    break;

  case 1947:
#line 13320 "parser.y"
                        { yyval = cb_int (CB_CATEGORY_NATIONAL); }
#line 23055 "parser.c"
    break;

  case 1948:
#line 13321 "parser.y"
                        { yyval = cb_int (CB_CATEGORY_NATIONAL_EDITED); }
#line 23061 "parser.c"
    break;

  case 1949:
#line 13333 "parser.y"
  {
	yyval = NULL;
  }
#line 23069 "parser.c"
    break;

  case 1950:
#line 13337 "parser.y"
  {
	yyval = cb_true;
  }
#line 23077 "parser.c"
    break;

  case 1951:
#line 13346 "parser.y"
  {
	begin_statement ("INITIATE", 0);
  }
#line 23085 "parser.c"
    break;

  case 1953:
#line 13354 "parser.y"
  {
#if 0 /* CHECKME: likely not needed */
	begin_implicit_statement ();
#endif
	if (yyvsp[0] != cb_error_node) {
		cb_emit_initiate (yyvsp[0]);
	}
  }
#line 23098 "parser.c"
    break;

  case 1954:
#line 13363 "parser.y"
  {
	begin_implicit_statement ();
	if (yyvsp[0] != cb_error_node) {
		cb_emit_initiate (yyvsp[0]);
	}
  }
#line 23109 "parser.c"
    break;

  case 1955:
#line 13375 "parser.y"
  {
	begin_statement ("INQUIRE", 0);
	cobc_cs_check = CB_CS_INQUIRE_MODIFY;
  }
#line 23118 "parser.c"
    break;

  case 1956:
#line 13380 "parser.y"
  {
	cobc_cs_check = 0;
  }
#line 23126 "parser.c"
    break;

  case 1959:
#line 13394 "parser.y"
  {
	begin_statement ("INSPECT", 0);
	inspect_keyword = 0;
  }
#line 23135 "parser.c"
    break;

  case 1969:
#line 13422 "parser.y"
  {
	previous_tallying_phrase = NO_PHRASE;
	cb_init_tallying ();
  }
#line 23144 "parser.c"
    break;

  case 1970:
#line 13427 "parser.y"
  {
	if (!(previous_tallying_phrase == CHARACTERS_PHRASE
	      || previous_tallying_phrase == VALUE_REGION_PHRASE)) {
		cb_error (_("TALLYING clause is incomplete"));
	} else {
		cb_emit_inspect (yyvsp[-3], yyvsp[0], TALLYING_CLAUSE);
	}

	yyval = yyvsp[-3];
  }
#line 23159 "parser.c"
    break;

  case 1971:
#line 13443 "parser.y"
  {
	cb_emit_inspect (yyvsp[-2], yyvsp[0], REPLACING_CLAUSE);
	inspect_keyword = 0;
  }
#line 23168 "parser.c"
    break;

  case 1972:
#line 13453 "parser.y"
  {
	cb_tree		x = cb_build_converting (yyvsp[-3], yyvsp[-1], yyvsp[0]);
	cb_emit_inspect (yyvsp[-5], x, CONVERTING_CLAUSE);
  }
#line 23177 "parser.c"
    break;

  case 1973:
#line 13461 "parser.y"
  {
	yyval = yyvsp[0];
  }
#line 23185 "parser.c"
    break;

  case 1974:
#line 13465 "parser.y"
  {
	yyval = cb_list_append (yyvsp[-1], yyvsp[0]);
  }
#line 23193 "parser.c"
    break;

  case 1975:
#line 13472 "parser.y"
  {
	check_preceding_tallying_phrases (FOR_PHRASE);
	yyval = cb_build_tallying_data (yyvsp[-1]);
  }
#line 23202 "parser.c"
    break;

  case 1976:
#line 13477 "parser.y"
  {
	check_preceding_tallying_phrases (CHARACTERS_PHRASE);
	yyval = cb_build_tallying_characters (yyvsp[0]);
  }
#line 23211 "parser.c"
    break;

  case 1977:
#line 13482 "parser.y"
  {
	check_preceding_tallying_phrases (ALL_LEADING_TRAILING_PHRASES);
	yyval = cb_build_tallying_all ();
  }
#line 23220 "parser.c"
    break;

  case 1978:
#line 13487 "parser.y"
  {
	check_preceding_tallying_phrases (ALL_LEADING_TRAILING_PHRASES);
	yyval = cb_build_tallying_leading ();
  }
#line 23229 "parser.c"
    break;

  case 1979:
#line 13492 "parser.y"
  {
	check_preceding_tallying_phrases (ALL_LEADING_TRAILING_PHRASES);
	yyval = cb_build_tallying_trailing ();
  }
#line 23238 "parser.c"
    break;

  case 1980:
#line 13497 "parser.y"
  {
	check_preceding_tallying_phrases (VALUE_REGION_PHRASE);
	yyval = cb_build_tallying_value (yyvsp[-1], yyvsp[0]);
  }
#line 23247 "parser.c"
    break;

  case 1981:
#line 13504 "parser.y"
                                { yyval = yyvsp[0]; }
#line 23253 "parser.c"
    break;

  case 1982:
#line 13505 "parser.y"
                                { yyval = cb_list_append (yyvsp[-1], yyvsp[0]); }
#line 23259 "parser.c"
    break;

  case 1983:
#line 13510 "parser.y"
  {
	yyval = cb_build_replacing_characters (yyvsp[-1], yyvsp[0]);
	inspect_keyword = 0;
  }
#line 23268 "parser.c"
    break;

  case 1984:
#line 13515 "parser.y"
  {
	yyval = yyvsp[0];
  }
#line 23276 "parser.c"
    break;

  case 1986:
#line 13522 "parser.y"
                                { inspect_keyword = 1; }
#line 23282 "parser.c"
    break;

  case 1987:
#line 13523 "parser.y"
                                { inspect_keyword = 2; }
#line 23288 "parser.c"
    break;

  case 1988:
#line 13524 "parser.y"
                                { inspect_keyword = 3; }
#line 23294 "parser.c"
    break;

  case 1989:
#line 13525 "parser.y"
                                { inspect_keyword = 4; }
#line 23300 "parser.c"
    break;

  case 1990:
#line 13530 "parser.y"
  {
	switch (inspect_keyword) {
		case 1:
			yyval = cb_build_replacing_all (yyvsp[-3], yyvsp[-1], yyvsp[0]);
			break;
		case 2:
			yyval = cb_build_replacing_leading (yyvsp[-3], yyvsp[-1], yyvsp[0]);
			break;
		case 3:
			yyval = cb_build_replacing_first (yyvsp[-3], yyvsp[-1], yyvsp[0]);
			break;
		case 4:
			yyval = cb_build_replacing_trailing (yyvsp[-3], yyvsp[-1], yyvsp[0]);
			break;
		default:
			cb_error_x (CB_TREE (current_statement),
				    _("INSPECT missing ALL/FIRST/LEADING/TRAILING"));
			yyval = cb_build_replacing_all (yyvsp[-3], yyvsp[-1], yyvsp[0]);
			break;
	}
  }
#line 23326 "parser.c"
    break;

  case 1991:
#line 13557 "parser.y"
  {
	yyval = cb_build_inspect_region_start ();
  }
#line 23334 "parser.c"
    break;

  case 1992:
#line 13561 "parser.y"
  {
	yyval = cb_list_add (cb_build_inspect_region_start (), yyvsp[0]);
  }
#line 23342 "parser.c"
    break;

  case 1993:
#line 13565 "parser.y"
  {
	yyval = cb_list_add (cb_build_inspect_region_start (), yyvsp[0]);
  }
#line 23350 "parser.c"
    break;

  case 1994:
#line 13569 "parser.y"
  {
	yyval = cb_list_add (cb_list_add (cb_build_inspect_region_start (), yyvsp[-1]), yyvsp[0]);
  }
#line 23358 "parser.c"
    break;

  case 1995:
#line 13573 "parser.y"
  {
	yyval = cb_list_add (cb_list_add (cb_build_inspect_region_start (), yyvsp[-1]), yyvsp[0]);
  }
#line 23366 "parser.c"
    break;

  case 1996:
#line 13580 "parser.y"
  {
	yyval = CB_BUILD_FUNCALL_1 ("cob_inspect_before", yyvsp[0]);
  }
#line 23374 "parser.c"
    break;

  case 1997:
#line 13587 "parser.y"
  {
	yyval = CB_BUILD_FUNCALL_1 ("cob_inspect_after", yyvsp[0]);
  }
#line 23382 "parser.c"
    break;

  case 1998:
#line 13596 "parser.y"
  {
	begin_statement ("JSON GENERATE", TERM_JSON);
	cobc_in_json_generate_body = 1;
	cobc_cs_check = CB_CS_JSON_GENERATE;
  }
#line 23392 "parser.c"
    break;

  case 2000:
#line 13608 "parser.y"
  {
	ml_suppress_list = NULL;
  }
#line 23400 "parser.c"
    break;

  case 2001:
#line 13613 "parser.y"
  {
	cobc_in_json_generate_body = 0;
	cobc_cs_check = 0;
  }
#line 23409 "parser.c"
    break;

  case 2002:
#line 13618 "parser.y"
  {
	cb_emit_json_generate (yyvsp[-8], yyvsp[-6], yyvsp[-5], yyvsp[-3], ml_suppress_list);
  }
#line 23417 "parser.c"
    break;

  case 2003:
#line 13625 "parser.y"
  {
	yyval = NULL;
  }
#line 23425 "parser.c"
    break;

  case 2004:
#line 13629 "parser.y"
  {
	yyval = yyvsp[0];
  }
#line 23433 "parser.c"
    break;

  case 2007:
#line 13641 "parser.y"
  {
	error_if_following_every_clause ();
	add_identifier_to_ml_suppress_conds (yyvsp[0]);
  }
#line 23442 "parser.c"
    break;

  case 2008:
#line 13649 "parser.y"
  {
	TERMINATOR_WARNING (yyvsp[(-2) - (0)], JSON);
  }
#line 23450 "parser.c"
    break;

  case 2009:
#line 13653 "parser.y"
  {
	TERMINATOR_CLEAR (yyvsp[(-2) - (1)], JSON);
  }
#line 23458 "parser.c"
    break;

  case 2010:
#line 13662 "parser.y"
  {
	begin_statement ("JSON PARSE", TERM_JSON);
	CB_PENDING (_("JSON PARSE"));
  }
#line 23467 "parser.c"
    break;

  case 2015:
#line 13687 "parser.y"
  {
	begin_statement ("MERGE", 0);
	current_statement->flag_merge = 1;
  }
#line 23476 "parser.c"
    break;

  case 2017:
#line 13699 "parser.y"
  {
	begin_statement ("MODIFY", TERM_MODIFY);
	cobc_cs_check = CB_CS_INQUIRE_MODIFY;
  }
#line 23485 "parser.c"
    break;

  case 2018:
#line 13705 "parser.y"
  {
	cobc_cs_check = 0;
  }
#line 23493 "parser.c"
    break;

  case 2021:
#line 13717 "parser.y"
  {
	TERMINATOR_WARNING (yyvsp[(-2) - (0)], MODIFY);
  }
#line 23501 "parser.c"
    break;

  case 2022:
#line 13721 "parser.y"
  {
	TERMINATOR_CLEAR (yyvsp[(-2) - (1)], MODIFY);
  }
#line 23509 "parser.c"
    break;

  case 2023:
#line 13731 "parser.y"
  {
	begin_statement ("MOVE", 0);
  }
#line 23517 "parser.c"
    break;

  case 2025:
#line 13739 "parser.y"
  {
	cb_emit_move (yyvsp[-2], yyvsp[0]);
  }
#line 23525 "parser.c"
    break;

  case 2026:
#line 13743 "parser.y"
  {
	cb_emit_move_corresponding (yyvsp[-2], yyvsp[0]);
  }
#line 23533 "parser.c"
    break;

  case 2027:
#line 13753 "parser.y"
  {
	begin_statement ("MULTIPLY", TERM_MULTIPLY);
  }
#line 23541 "parser.c"
    break;

  case 2029:
#line 13762 "parser.y"
  {
	cb_emit_arithmetic (yyvsp[-1], '*', yyvsp[-3]);
  }
#line 23549 "parser.c"
    break;

  case 2030:
#line 13766 "parser.y"
  {
	cb_emit_arithmetic (yyvsp[-1], 0, cb_build_binary_op (yyvsp[-5], '*', yyvsp[-3]));
  }
#line 23557 "parser.c"
    break;

  case 2031:
#line 13773 "parser.y"
  {
	TERMINATOR_WARNING (yyvsp[(-2) - (0)], MULTIPLY);
  }
#line 23565 "parser.c"
    break;

  case 2032:
#line 13777 "parser.y"
  {
	TERMINATOR_CLEAR (yyvsp[(-2) - (1)], MULTIPLY);
  }
#line 23573 "parser.c"
    break;

  case 2033:
#line 13787 "parser.y"
  {
	begin_statement ("OPEN", 0);
	cobc_cs_check = CB_CS_OPEN;
  }
#line 23582 "parser.c"
    break;

  case 2037:
#line 13801 "parser.y"
  {
	cb_tree l;
	cb_tree x;

	if ((yyvsp[-5] && yyvsp[-3]) || (yyvsp[-5] && yyvsp[0]) || (yyvsp[-3] && yyvsp[0])) {
		cb_error_x (CB_TREE (current_statement),
			    _("%s and %s are mutually exclusive"), "SHARING", _("LOCK clauses"));
	}
	if (yyvsp[0]) {
		x = yyvsp[0];
	} else if (yyvsp[-3]) {
		x = yyvsp[-3];
	} else {
		x = yyvsp[-5];
	}

	for (l = yyvsp[-1]; l; l = CB_CHAIN (l)) {
		if (CB_VALID_TREE (CB_VALUE (l))) {
			begin_implicit_statement ();
			cb_emit_open (CB_VALUE (l), yyvsp[-4], x);
		}
	}
  }
#line 23610 "parser.c"
    break;

  case 2038:
#line 13828 "parser.y"
                                { yyval = NULL; }
#line 23616 "parser.c"
    break;

  case 2039:
#line 13829 "parser.y"
                                { yyval = cb_int (COB_LOCK_OPEN_EXCLUSIVE); }
#line 23622 "parser.c"
    break;

  case 2040:
#line 13833 "parser.y"
                                { yyval = cb_int (COB_OPEN_INPUT); }
#line 23628 "parser.c"
    break;

  case 2041:
#line 13834 "parser.y"
                                { yyval = cb_int (COB_OPEN_OUTPUT); }
#line 23634 "parser.c"
    break;

  case 2042:
#line 13835 "parser.y"
                                { yyval = cb_int (COB_OPEN_I_O); }
#line 23640 "parser.c"
    break;

  case 2043:
#line 13836 "parser.y"
                                { yyval = cb_int (COB_OPEN_EXTEND); }
#line 23646 "parser.c"
    break;

  case 2044:
#line 13840 "parser.y"
                                { yyval = NULL; }
#line 23652 "parser.c"
    break;

  case 2045:
#line 13841 "parser.y"
                                { yyval = yyvsp[0]; }
#line 23658 "parser.c"
    break;

  case 2046:
#line 13845 "parser.y"
                                { yyval = NULL; }
#line 23664 "parser.c"
    break;

  case 2047:
#line 13846 "parser.y"
                        { yyval = yyvsp[0]; }
#line 23670 "parser.c"
    break;

  case 2048:
#line 13847 "parser.y"
                         { yyval = NULL; }
#line 23676 "parser.c"
    break;

  case 2049:
#line 13851 "parser.y"
                                        { yyval = yyvsp[-1]; }
#line 23682 "parser.c"
    break;

  case 2050:
#line 13853 "parser.y"
  {
	  (void)cb_verify (CB_OBSOLETE, "OPEN LEAVE/REREAD/DISP");
	  yyval = NULL;
  }
#line 23691 "parser.c"
    break;

  case 2051:
#line 13860 "parser.y"
                                { yyval = yyvsp[0]; }
#line 23697 "parser.c"
    break;

  case 2052:
#line 13861 "parser.y"
                                { yyval = yyvsp[0]; }
#line 23703 "parser.c"
    break;

  case 2053:
#line 13865 "parser.y"
                        { yyval = cb_int (COB_LOCK_OPEN_EXCLUSIVE); }
#line 23709 "parser.c"
    break;

  case 2054:
#line 13867 "parser.y"
  {
	yyval = cb_int (COB_LOCK_OPEN_EXCLUSIVE);
	/* TODO: check for indexed; pass extra flag to fileio */
	CB_PENDING ("WITH MASS-UPDATE");
  }
#line 23719 "parser.c"
    break;

  case 2055:
#line 13873 "parser.y"
  {
	yyval = cb_int (COB_LOCK_OPEN_EXCLUSIVE);
	/* TODO: check for indexed; pass extra flag to fileio */
	CB_PENDING ("WITH BULK-ADDITION");
  }
#line 23729 "parser.c"
    break;

  case 2056:
#line 13881 "parser.y"
                                { yyval = cb_int (COB_LOCK_OPEN_EXCLUSIVE); }
#line 23735 "parser.c"
    break;

  case 2057:
#line 13882 "parser.y"
                        { yyval = NULL; }
#line 23741 "parser.c"
    break;

  case 2058:
#line 13883 "parser.y"
                        { yyval = NULL; }
#line 23747 "parser.c"
    break;

  case 2062:
#line 13895 "parser.y"
  {
	/* FIXME: only allow for sequential files */
	/* FIXME: only allow with INPUT or OUTPUT */
	CB_PENDING ("OPEN WITH NO REWIND");
	yyval = NULL;
  }
#line 23758 "parser.c"
    break;

  case 2063:
#line 13902 "parser.y"
  {
	/* FIXME: only allow for sequential / line-sequential files */
	/* FIXME: only allow with INPUT */
	/* FIXME: add actual compiler configuration */
	if (cb_warn_opt_val[cb_warn_obsolete] == COBC_WARN_AS_ERROR) {
		(void)cb_verify (CB_OBSOLETE, "OPEN REVERSED");
	} else {
		/* FIXME: set file attribute */
		CB_PENDING ("OPEN REVERSED");
	};
	yyval = NULL;
  }
#line 23775 "parser.c"
    break;

  case 2067:
#line 13925 "parser.y"
  {
	begin_statement ("PERFORM", TERM_PERFORM);
	/* Turn off field debug - PERFORM is special */
	save_debug = start_debug;
	start_debug = 0;
	cobc_cs_check = CB_CS_PERFORM;
  }
#line 23787 "parser.c"
    break;

  case 2069:
#line 13940 "parser.y"
  {
	cb_emit_perform (yyvsp[0], yyvsp[-2], yyvsp[-3], yyvsp[-1]);
	start_debug = save_debug;
	cobc_cs_check = 0;
  }
#line 23797 "parser.c"
    break;

  case 2070:
#line 13948 "parser.y"
  {
	CB_ADD_TO_CHAIN (yyvsp[-1], perform_stack);
	/* Restore field debug before inline statements */
	start_debug = save_debug;
	cobc_cs_check = 0;
  }
#line 23808 "parser.c"
    break;

  case 2071:
#line 13955 "parser.y"
  {
	perform_stack = CB_CHAIN (perform_stack);
	cb_emit_perform (yyvsp[-4], yyvsp[-1], yyvsp[-5], yyvsp[-3]);
  }
#line 23817 "parser.c"
    break;

  case 2072:
#line 13962 "parser.y"
  {
	cb_verify (cb_missing_statement,
		_("inline PERFORM without imperative statement"));
  }
#line 23826 "parser.c"
    break;

  case 2073:
#line 13967 "parser.y"
  {
	cb_emit_perform (yyvsp[-3], NULL, yyvsp[-4], yyvsp[-2]);
	start_debug = save_debug;
	cobc_cs_check = 0;
  }
#line 23836 "parser.c"
    break;

  case 2074:
#line 13976 "parser.y"
  {
	if (cb_relaxed_syntax_checks) {
		TERMINATOR_WARNING (yyvsp[(-6) - (0)], PERFORM);
	} else {
		TERMINATOR_ERROR (yyvsp[(-6) - (0)], PERFORM);
	}
  }
#line 23848 "parser.c"
    break;

  case 2075:
#line 13984 "parser.y"
  {
	TERMINATOR_CLEAR (yyvsp[(-6) - (1)], PERFORM);
  }
#line 23856 "parser.c"
    break;

  case 2076:
#line 13991 "parser.y"
  {
	TERMINATOR_CLEAR (yyvsp[(-3) - (1)], PERFORM);
  }
#line 23864 "parser.c"
    break;

  case 2077:
#line 13995 "parser.y"
  {
	if (cb_relaxed_syntax_checks) {
		TERMINATOR_WARNING (yyvsp[(-3) - (1)], PERFORM);
	} else {
		TERMINATOR_ERROR (yyvsp[(-3) - (1)], PERFORM);
	}
	/* Put the dot token back into the stack for reparse */
	cb_unput_dot ();
  }
#line 23878 "parser.c"
    break;

  case 2078:
#line 14008 "parser.y"
  {
	/* Return from $1 */
	CB_REFERENCE (yyvsp[0])->length = cb_true;
	CB_REFERENCE (yyvsp[0])->flag_decl_ok = 1;
	yyval = CB_BUILD_PAIR (yyvsp[0], yyvsp[0]);
  }
#line 23889 "parser.c"
    break;

  case 2079:
#line 14015 "parser.y"
  {
	/* Return from $3 */
	CB_REFERENCE (yyvsp[0])->length = cb_true;
	CB_REFERENCE (yyvsp[-2])->flag_decl_ok = 1;
	CB_REFERENCE (yyvsp[0])->flag_decl_ok = 1;
	yyval = CB_BUILD_PAIR (yyvsp[-2], yyvsp[0]);
  }
#line 23901 "parser.c"
    break;

  case 2080:
#line 14026 "parser.y"
  {
	yyval = cb_build_perform_once (NULL);
  }
#line 23909 "parser.c"
    break;

  case 2081:
#line 14030 "parser.y"
  {
	yyval = cb_build_perform_times (yyvsp[-1]);
	current_program->loop_counter++;
  }
#line 23918 "parser.c"
    break;

  case 2082:
#line 14035 "parser.y"
  {
	yyval = cb_build_perform_forever (NULL);
  }
#line 23926 "parser.c"
    break;

  case 2083:
#line 14039 "parser.y"
  {
	cb_tree varying;

	if (!yyvsp[0]) {
		yyval = cb_build_perform_forever (NULL);
	} else {
		if (yyvsp[-2] == CB_AFTER)
			cb_build_perform_after_until();
		varying = CB_LIST_INIT (cb_build_perform_varying (NULL, NULL, NULL, yyvsp[0]));
		yyval = cb_build_perform_until (yyvsp[-2], varying);
	}
  }
#line 23943 "parser.c"
    break;

  case 2084:
#line 14052 "parser.y"
  {
	yyval = cb_build_perform_until (yyvsp[-2], yyvsp[0]);
  }
#line 23951 "parser.c"
    break;

  case 2085:
#line 14058 "parser.y"
                                { yyval = CB_BEFORE; }
#line 23957 "parser.c"
    break;

  case 2086:
#line 14059 "parser.y"
                                { yyval = yyvsp[0]; }
#line 23963 "parser.c"
    break;

  case 2087:
#line 14063 "parser.y"
                                { yyval = NULL; }
#line 23969 "parser.c"
    break;

  case 2088:
#line 14064 "parser.y"
                                { yyval = yyvsp[0]; }
#line 23975 "parser.c"
    break;

  case 2089:
#line 14067 "parser.y"
                                { yyval = CB_LIST_INIT (yyvsp[0]); }
#line 23981 "parser.c"
    break;

  case 2090:
#line 14069 "parser.y"
                                { yyval = cb_list_add (yyvsp[-2], yyvsp[0]); }
#line 23987 "parser.c"
    break;

  case 2091:
#line 14074 "parser.y"
  {
	cb_tree		x;
	int		data_type_ok = 1;

	if (yyvsp[-5] != cb_error_node
	 && yyvsp[-3] != cb_error_node
	 && yyvsp[-2] != cb_error_node) {

		if (cb_tree_category (yyvsp[-5]) != CB_CATEGORY_NUMERIC) {
			x = cb_ref (yyvsp[-5]);
			cb_error_x (CB_TREE (current_statement),
				_("PERFORM VARYING '%s' (line %d of %s) is not a numeric field"),
				cb_name (x),x->source_line, x->source_file);
			yyval = cb_int1;
			data_type_ok = 0;
		}
		if (cb_tree_category (yyvsp[-3]) != CB_CATEGORY_NUMERIC) {
			x = cb_ref (yyvsp[-3]);
			cb_error_x (CB_TREE (current_statement),
				_("PERFORM VARYING '%s' (line %d of %s) is not a numeric field"),
				cb_name (x),x->source_line, x->source_file);
			yyval = cb_int1;
			data_type_ok = 0;
		}
		if (cb_tree_category (yyvsp[-2]) != CB_CATEGORY_NUMERIC) {
			x = cb_ref (yyvsp[-2]);
			cb_error_x (CB_TREE (current_statement),
				_("PERFORM VARYING '%s' (line %d of %s) is not a numeric field"),
				cb_name (x),x->source_line, x->source_file);
			yyval = cb_int1;
			data_type_ok = 0;
		}

		if (data_type_ok) {
			yyval = cb_build_perform_varying (yyvsp[-5], yyvsp[-3], yyvsp[-2], yyvsp[0]);
		}
	}
  }
#line 24030 "parser.c"
    break;

  case 2092:
#line 14116 "parser.y"
  {
	cb_verify (cb_perform_varying_without_by, _("PERFORM VARYING without BY phrase"));
	yyval = cb_build_numeric_literal (0, "1", 0);
  }
#line 24039 "parser.c"
    break;

  case 2093:
#line 14121 "parser.y"
  {
	yyval = yyvsp[0];
  }
#line 24047 "parser.c"
    break;

  case 2094:
#line 14130 "parser.y"
  {
	begin_statement ("PURGE", 0);
  }
#line 24055 "parser.c"
    break;

  case 2095:
#line 14134 "parser.y"
  {
  }
#line 24062 "parser.c"
    break;

  case 2096:
#line 14142 "parser.y"
  {
	begin_statement ("RAISE", 0);
  }
#line 24070 "parser.c"
    break;

  case 2098:
#line 14150 "parser.y"
  {
	CB_PENDING ("RAISE statement");
	/* TODO: check for level 3 error here */
  }
#line 24079 "parser.c"
    break;

  case 2099:
#line 14155 "parser.y"
  {
	/* easy cheating here as we don't have any OO in */
	cb_error(_("'%s' is not an object-reference"), cb_name (yyvsp[0]));
  }
#line 24088 "parser.c"
    break;

  case 2100:
#line 14165 "parser.y"
  {
	/* TODO:
	cb_tree exception = get_exception (CB_NAME($1));
	if (!exception) {
		cb_error (_("'%s' is not an exception-name"), CB_NAME ($1));
	}
	*/
  }
#line 24101 "parser.c"
    break;

  case 2101:
#line 14179 "parser.y"
  {
	begin_statement ("READ", TERM_READ);
	cobc_cs_check = CB_CS_READ;
  }
#line 24110 "parser.c"
    break;

  case 2103:
#line 14189 "parser.y"
  {
	cobc_cs_check = 0;

	if (CB_VALID_TREE (yyvsp[-6])) {
		struct cb_file	*cf;

		cf = CB_FILE(cb_ref (yyvsp[-6]));
		if (yyvsp[-2] && (cf->lock_mode & COB_LOCK_AUTOMATIC)) {
			cb_error_x (CB_TREE (current_statement),
				    _("LOCK clause invalid with file LOCK AUTOMATIC"));
		} else if (yyvsp[-1] &&
		      (cf->organization != COB_ORG_RELATIVE &&
		       cf->organization != COB_ORG_INDEXED)) {
			cb_error_x (CB_TREE (current_statement),
				    _("KEY clause invalid with this file type"));
		} else if (current_statement->handler_type == INVALID_KEY_HANDLER &&
			   (cf->organization != COB_ORG_RELATIVE &&
			    cf->organization != COB_ORG_INDEXED)) {
			cb_error_x (CB_TREE (current_statement),
				    _("INVALID KEY clause invalid with this file type"));
		} else {
			cb_emit_read (yyvsp[-6], yyvsp[-5], yyvsp[-3], yyvsp[-1], yyvsp[-2]);
		}
	}
  }
#line 24140 "parser.c"
    break;

  case 2104:
#line 14217 "parser.y"
                                { yyval = NULL; }
#line 24146 "parser.c"
    break;

  case 2105:
#line 14218 "parser.y"
                                { yyval = yyvsp[0]; }
#line 24152 "parser.c"
    break;

  case 2106:
#line 14223 "parser.y"
  {
	yyval = NULL;
  }
#line 24160 "parser.c"
    break;

  case 2107:
#line 14227 "parser.y"
  {
	yyval = cb_int3;
  }
#line 24168 "parser.c"
    break;

  case 2108:
#line 14231 "parser.y"
  {
	yyval = yyvsp[0];
  }
#line 24176 "parser.c"
    break;

  case 2109:
#line 14235 "parser.y"
  {
	yyval = yyvsp[0];
  }
#line 24184 "parser.c"
    break;

  case 2112:
#line 14247 "parser.y"
  {
	CB_PENDING ("ADVANCING ON LOCK");
  }
#line 24192 "parser.c"
    break;

  case 2116:
#line 14260 "parser.y"
  {
	CB_PENDING ("RETRY");
	cobc_cs_check = 0;
  }
#line 24201 "parser.c"
    break;

  case 2122:
#line 14280 "parser.y"
  {
	yyval = yyvsp[0];
  }
#line 24209 "parser.c"
    break;

  case 2123:
#line 14284 "parser.y"
  {
   yyval = cb_int5;
  }
#line 24217 "parser.c"
    break;

  case 2124:
#line 14288 "parser.y"
  {
	/* TO-DO: Merge with RETRY phrase */
	yyval = cb_int4;
  }
#line 24226 "parser.c"
    break;

  case 2125:
#line 14295 "parser.y"
                                { yyval = NULL; }
#line 24232 "parser.c"
    break;

  case 2126:
#line 14296 "parser.y"
                                { yyval = yyvsp[0]; }
#line 24238 "parser.c"
    break;

  case 2129:
#line 14306 "parser.y"
  {
	TERMINATOR_WARNING (yyvsp[(-2) - (0)], READ);
  }
#line 24246 "parser.c"
    break;

  case 2130:
#line 14310 "parser.y"
  {
	TERMINATOR_CLEAR (yyvsp[(-2) - (1)], READ);
  }
#line 24254 "parser.c"
    break;

  case 2131:
#line 14320 "parser.y"
  {
	begin_statement ("READY TRACE", 0);
	cb_emit_ready_trace ();
  }
#line 24263 "parser.c"
    break;

  case 2132:
#line 14330 "parser.y"
  {
	begin_statement ("RECEIVE", TERM_RECEIVE);
  }
#line 24271 "parser.c"
    break;

  case 2146:
#line 14373 "parser.y"
  {
	TERMINATOR_WARNING (yyvsp[(-2) - (0)], RECEIVE);
  }
#line 24279 "parser.c"
    break;

  case 2147:
#line 14377 "parser.y"
  {
	TERMINATOR_CLEAR (yyvsp[(-2) - (1)], RECEIVE);
  }
#line 24287 "parser.c"
    break;

  case 2148:
#line 14386 "parser.y"
  {
	begin_statement ("RELEASE", 0);
  }
#line 24295 "parser.c"
    break;

  case 2150:
#line 14394 "parser.y"
  {
	cb_emit_release (yyvsp[-1], yyvsp[0]);
  }
#line 24303 "parser.c"
    break;

  case 2151:
#line 14404 "parser.y"
  {
	begin_statement ("RESET TRACE", 0);
	cb_emit_reset_trace ();
  }
#line 24312 "parser.c"
    break;

  case 2152:
#line 14414 "parser.y"
  {
	begin_statement ("RETURN", TERM_RETURN);
  }
#line 24320 "parser.c"
    break;

  case 2154:
#line 14423 "parser.y"
  {
	cb_emit_return (yyvsp[-3], yyvsp[-1]);
  }
#line 24328 "parser.c"
    break;

  case 2155:
#line 14430 "parser.y"
  {
	TERMINATOR_WARNING (yyvsp[(-2) - (0)], RETURN);
  }
#line 24336 "parser.c"
    break;

  case 2156:
#line 14434 "parser.y"
  {
	TERMINATOR_CLEAR (yyvsp[(-2) - (1)], RETURN);
  }
#line 24344 "parser.c"
    break;

  case 2157:
#line 14444 "parser.y"
  {
	begin_statement ("REWRITE", TERM_REWRITE);
	/* Special in debugging mode */
	save_debug = start_debug;
	start_debug = 0;
  }
#line 24355 "parser.c"
    break;

  case 2159:
#line 14456 "parser.y"
  {
	cb_emit_rewrite (yyvsp[-4], yyvsp[-3], yyvsp[-1]);
	start_debug = save_debug;
  }
#line 24364 "parser.c"
    break;

  case 2160:
#line 14464 "parser.y"
  {
	yyval = NULL;
  }
#line 24372 "parser.c"
    break;

  case 2162:
#line 14472 "parser.y"
  {
	yyval = cb_int1;
  }
#line 24380 "parser.c"
    break;

  case 2163:
#line 14476 "parser.y"
  {
	yyval = cb_int2;
  }
#line 24388 "parser.c"
    break;

  case 2164:
#line 14483 "parser.y"
  {
	TERMINATOR_WARNING (yyvsp[(-2) - (0)], REWRITE);
  }
#line 24396 "parser.c"
    break;

  case 2165:
#line 14487 "parser.y"
  {
	TERMINATOR_CLEAR (yyvsp[(-2) - (1)], REWRITE);
  }
#line 24404 "parser.c"
    break;

  case 2166:
#line 14497 "parser.y"
  {
	begin_statement ("ROLLBACK", 0);
	cb_emit_rollback ();
  }
#line 24413 "parser.c"
    break;

  case 2167:
#line 14508 "parser.y"
  {
	begin_statement ("SEARCH", TERM_SEARCH);
  }
#line 24421 "parser.c"
    break;

  case 2169:
#line 14517 "parser.y"
  {
	cb_emit_search (yyvsp[-3], yyvsp[-2], yyvsp[-1], yyvsp[0]);
  }
#line 24429 "parser.c"
    break;

  case 2170:
#line 14522 "parser.y"
  {
	current_statement->name = (const char *)"SEARCH ALL";
	cb_emit_search_all (yyvsp[-4], yyvsp[-3], yyvsp[-1], yyvsp[0]);
  }
#line 24438 "parser.c"
    break;

  case 2171:
#line 14529 "parser.y"
                                { yyval = NULL; }
#line 24444 "parser.c"
    break;

  case 2172:
#line 14530 "parser.y"
                                { yyval = yyvsp[0]; }
#line 24450 "parser.c"
    break;

  case 2173:
#line 14535 "parser.y"
  {
	yyval = NULL;
  }
#line 24458 "parser.c"
    break;

  case 2174:
#line 14540 "parser.y"
  {
	yyval = yyvsp[0];
  }
#line 24466 "parser.c"
    break;

  case 2175:
#line 14547 "parser.y"
  {
	yyval = CB_LIST_INIT (yyvsp[0]);
  }
#line 24474 "parser.c"
    break;

  case 2176:
#line 14551 "parser.y"
  {
	yyval = cb_list_add (yyvsp[0], yyvsp[-1]);
  }
#line 24482 "parser.c"
    break;

  case 2177:
#line 14559 "parser.y"
  {
	yyval = cb_build_if_check_break (yyvsp[-1], yyvsp[0]);
  }
#line 24490 "parser.c"
    break;

  case 2178:
#line 14566 "parser.y"
  {
	TERMINATOR_WARNING (yyvsp[(-2) - (0)], SEARCH);
  }
#line 24498 "parser.c"
    break;

  case 2179:
#line 14570 "parser.y"
  {
	TERMINATOR_CLEAR (yyvsp[(-2) - (1)], SEARCH);
  }
#line 24506 "parser.c"
    break;

  case 2180:
#line 14580 "parser.y"
  {
	begin_statement ("SEND", 0);
  }
#line 24514 "parser.c"
    break;

  case 2182:
#line 14588 "parser.y"
  {
  }
#line 24521 "parser.c"
    break;

  case 2183:
#line 14591 "parser.y"
  {
  }
#line 24528 "parser.c"
    break;

  case 2186:
#line 14602 "parser.y"
  {
  }
#line 24535 "parser.c"
    break;

  case 2193:
#line 14622 "parser.y"
  {
	begin_statement ("SET", 0);
	set_attr_val_on = 0;
	set_attr_val_off = 0;
	cobc_cs_check = CB_CS_SET;
  }
#line 24546 "parser.c"
    break;

  case 2194:
#line 14629 "parser.y"
  {
	cobc_cs_check = 0;
  }
#line 24554 "parser.c"
    break;

  case 2203:
#line 14646 "parser.y"
                                { yyval = cb_int1; }
#line 24560 "parser.c"
    break;

  case 2204:
#line 14647 "parser.y"
                                { yyval = cb_int0; }
#line 24566 "parser.c"
    break;

  case 2205:
#line 14651 "parser.y"
                                { yyval = cb_int0; }
#line 24572 "parser.c"
    break;

  case 2206:
#line 14652 "parser.y"
                                { yyval = cb_int1; }
#line 24578 "parser.c"
    break;

  case 2207:
#line 14659 "parser.y"
  {
	cb_emit_setenv (yyvsp[-2], yyvsp[0]);
  }
#line 24586 "parser.c"
    break;

  case 2208:
#line 14668 "parser.y"
  {
	cb_emit_set_attribute (yyvsp[-2], set_attr_val_on, set_attr_val_off);
  }
#line 24594 "parser.c"
    break;

  case 2211:
#line 14680 "parser.y"
  {
	bit_set_attr (yyvsp[0], COB_SCREEN_BELL);
  }
#line 24602 "parser.c"
    break;

  case 2212:
#line 14684 "parser.y"
  {
	bit_set_attr (yyvsp[0], COB_SCREEN_BLINK);
  }
#line 24610 "parser.c"
    break;

  case 2213:
#line 14688 "parser.y"
  {
	bit_set_attr (yyvsp[0], COB_SCREEN_HIGHLIGHT);
	check_not_highlight_and_lowlight (set_attr_val_on | set_attr_val_off,
					  COB_SCREEN_HIGHLIGHT);
  }
#line 24620 "parser.c"
    break;

  case 2214:
#line 14694 "parser.y"
  {
	bit_set_attr (yyvsp[0], COB_SCREEN_LOWLIGHT);
	check_not_highlight_and_lowlight (set_attr_val_on | set_attr_val_off,
					  COB_SCREEN_LOWLIGHT);
  }
#line 24630 "parser.c"
    break;

  case 2215:
#line 14700 "parser.y"
  {
	bit_set_attr (yyvsp[0], COB_SCREEN_REVERSE);
  }
#line 24638 "parser.c"
    break;

  case 2216:
#line 14704 "parser.y"
  {
	bit_set_attr (yyvsp[0], COB_SCREEN_UNDERLINE);
  }
#line 24646 "parser.c"
    break;

  case 2217:
#line 14708 "parser.y"
  {
	bit_set_attr (yyvsp[0], COB_SCREEN_LEFTLINE);
  }
#line 24654 "parser.c"
    break;

  case 2218:
#line 14712 "parser.y"
  {
	bit_set_attr (yyvsp[0], COB_SCREEN_OVERLINE);
  }
#line 24662 "parser.c"
    break;

  case 2219:
#line 14721 "parser.y"
  {
	cb_emit_set_to (yyvsp[-3], cb_build_ppointer (yyvsp[0]));
  }
#line 24670 "parser.c"
    break;

  case 2220:
#line 14725 "parser.y"
  {
	cb_emit_set_to (yyvsp[-2], yyvsp[0]);
  }
#line 24678 "parser.c"
    break;

  case 2221:
#line 14729 "parser.y"
  {
	cb_emit_move (cb_build_length (yyvsp[0]), yyvsp[-4]);
  }
#line 24686 "parser.c"
    break;

  case 2222:
#line 14738 "parser.y"
  {
	cb_emit_set_up_down (yyvsp[-3], yyvsp[-2], yyvsp[0]);
  }
#line 24694 "parser.c"
    break;

  case 2225:
#line 14752 "parser.y"
  {
	cb_emit_set_on_off (yyvsp[-2], yyvsp[0]);
  }
#line 24702 "parser.c"
    break;

  case 2228:
#line 14766 "parser.y"
  {
	cb_emit_set_true (yyvsp[-2]);
  }
#line 24710 "parser.c"
    break;

  case 2229:
#line 14770 "parser.y"
  {
	cb_emit_set_false (yyvsp[-2]);
  }
#line 24718 "parser.c"
    break;

  case 2230:
#line 14779 "parser.y"
  {
	  cb_emit_set_last_exception_to_off ();
  }
#line 24726 "parser.c"
    break;

  case 2231:
#line 14788 "parser.y"
  {
	cb_emit_set_thread_priority (yyvsp[-3], yyvsp[0]);
	CB_PENDING ("THREAD");
  }
#line 24735 "parser.c"
    break;

  case 2232:
#line 14799 "parser.y"
  {
	begin_statement ("SORT", 0);
  }
#line 24743 "parser.c"
    break;

  case 2234:
#line 14807 "parser.y"
  {
	cb_tree		x = cb_ref (yyvsp[-3]);

	yyval = NULL;
	if (CB_VALID_TREE (x)) {
		if (yyvsp[-2] == NULL || CB_VALUE(yyvsp[-2]) == NULL) {
			if (CB_FILE_P (x)) {
				cb_error (_("file sort requires KEY phrase"));
				yyvsp[-2] = cb_error_node;
			} else {
				struct cb_field	*f = CB_FIELD_PTR (x);
/* TODO: add compiler configuration cb_sort_without_keys
				if (f->nkeys
				 && cb_verify (cb_sort_without_keys, _("table SORT without keys"))) {
*/
				if (yyvsp[-2] != NULL || f->nkeys) {
					cb_tree lparm;
					if (yyvsp[-2] == NULL) {
						/* create reference to first key */
						x = cb_ref (f->keys[0].key);
					}
					/* use the OCCURS field / its defined KEY as single sort key */
					lparm = cb_list_add (NULL, x);
					/* search order is either specified, otherwise derived from definition */
					if (yyvsp[-2] != NULL) {
						CB_PURPOSE (lparm) = CB_PURPOSE (yyvsp[-2]);
					} else {
						CB_PURPOSE (lparm) = cb_int (f->keys[0].dir);
					}
					yyvsp[-2] = cb_list_append (NULL, lparm);
				} else {
					cb_error (_("table SORT requires KEY phrase"));
					yyvsp[-2] = cb_error_node;
				}
			}
		}
		if (CB_VALID_TREE (yyvsp[-2])) {
			cb_emit_sort_init (yyvsp[-3], yyvsp[-2], alphanumeric_collation, national_collation);
			yyval = yyvsp[-3];
		}
	}
  }
#line 24790 "parser.c"
    break;

  case 2235:
#line 14850 "parser.y"
  {
	if (yyvsp[-2] && CB_VALID_TREE (yyvsp[-6])) {
		cb_emit_sort_finish (yyvsp[-6]);
	}
  }
#line 24800 "parser.c"
    break;

  case 2236:
#line 14858 "parser.y"
                                { yyval = NULL; }
#line 24806 "parser.c"
    break;

  case 2237:
#line 14861 "parser.y"
  {
	cb_tree lparm = yyvsp[0];
	cb_tree l;

	if (lparm == NULL) {
		lparm = CB_LIST_INIT (NULL);
	}
	for (l = lparm; l; l = CB_CHAIN (l)) {
		CB_PURPOSE (l) = yyvsp[-2];
	}
	yyval = cb_list_append (yyvsp[-4], lparm);
  }
#line 24823 "parser.c"
    break;

  case 2238:
#line 14876 "parser.y"
                                { yyval = NULL; }
#line 24829 "parser.c"
    break;

  case 2239:
#line 14877 "parser.y"
                                { yyval = cb_list_add (yyvsp[-1], yyvsp[0]); }
#line 24835 "parser.c"
    break;

  case 2241:
#line 14882 "parser.y"
  {
	/* The GnuCOBOL sort is a stable sort. ie. dups are per default in order */
	/* Therefore nothing to do here */
  }
#line 24844 "parser.c"
    break;

  case 2242:
#line 14890 "parser.y"
  {
	alphanumeric_collation = national_collation = NULL;
  }
#line 24852 "parser.c"
    break;

  case 2244:
#line 14898 "parser.y"
  {
	if (yyvsp[0] && CB_FILE_P (cb_ref (yyvsp[0]))) {
		cb_error (_("file sort requires USING or INPUT PROCEDURE"));
	}
  }
#line 24862 "parser.c"
    break;

  case 2245:
#line 14904 "parser.y"
  {
	if (yyvsp[-2]) {
		if (!CB_FILE_P (cb_ref (yyvsp[-2]))) {
			cb_error (_("USING invalid with table SORT"));
		} else {
			cb_emit_sort_using (yyvsp[-2], yyvsp[0]);
		}
	}
  }
#line 24876 "parser.c"
    break;

  case 2246:
#line 14914 "parser.y"
  {
	if (yyvsp[-4]) {
		if (!CB_FILE_P (cb_ref (yyvsp[-4]))) {
			cb_error (_("INPUT PROCEDURE invalid with table SORT"));
		} else if (current_statement->flag_merge) {
			cb_error (_("INPUT PROCEDURE invalid with MERGE"));
		} else {
			cb_emit_sort_input (yyvsp[0]);
		}
	}
	cobc_cs_check = 0;
  }
#line 24893 "parser.c"
    break;

  case 2247:
#line 14930 "parser.y"
  {
	if (yyvsp[(-1) - (0)] && CB_FILE_P (cb_ref (yyvsp[(-1) - (0)]))) {
		cb_error (_("file sort requires GIVING or OUTPUT PROCEDURE"));
	}
  }
#line 24903 "parser.c"
    break;

  case 2248:
#line 14936 "parser.y"
  {
	if (yyvsp[(-1) - (2)]) {
		if (!CB_FILE_P (cb_ref (yyvsp[(-1) - (2)]))) {
			cb_error (_("GIVING invalid with table SORT"));
		} else {
			cb_emit_sort_giving (yyvsp[(-1) - (2)], yyvsp[0]);
		}
	}
  }
#line 24917 "parser.c"
    break;

  case 2249:
#line 14946 "parser.y"
  {
	if (yyvsp[(-1) - (4)]) {
		if (!CB_FILE_P (cb_ref (yyvsp[(-1) - (4)]))) {
			cb_error (_("OUTPUT PROCEDURE invalid with table SORT"));
		} else {
			cb_emit_sort_output (yyvsp[0]);
		}
	}
	cobc_cs_check = 0;
  }
#line 24932 "parser.c"
    break;

  case 2250:
#line 14963 "parser.y"
  {
	begin_statement ("START", TERM_START);
	start_tree = cb_int (COB_EQ);
  }
#line 24941 "parser.c"
    break;

  case 2252:
#line 14973 "parser.y"
  {
	if (yyvsp[-1] && !yyvsp[-2]) {
		cb_error_x (CB_TREE (current_statement),
			    _("SIZE/LENGTH invalid here"));
	} else {
		cb_emit_start (yyvsp[-3], start_tree, yyvsp[-2], yyvsp[-1]);
	}
  }
#line 24954 "parser.c"
    break;

  case 2253:
#line 14985 "parser.y"
  {
	yyval = NULL;
  }
#line 24962 "parser.c"
    break;

  case 2254:
#line 14989 "parser.y"
  {
	yyval = yyvsp[0];
  }
#line 24970 "parser.c"
    break;

  case 2255:
#line 14996 "parser.y"
  {
	yyval = NULL;
  }
#line 24978 "parser.c"
    break;

  case 2256:
#line 15000 "parser.y"
  {
	start_tree = yyvsp[-1];
	yyval = yyvsp[0];
  }
#line 24987 "parser.c"
    break;

  case 2257:
#line 15005 "parser.y"
  {
	start_tree = cb_int (COB_FI);
	yyval = NULL;
  }
#line 24996 "parser.c"
    break;

  case 2258:
#line 15010 "parser.y"
  {
	start_tree = cb_int (COB_LA);
	yyval = NULL;
  }
#line 25005 "parser.c"
    break;

  case 2259:
#line 15017 "parser.y"
                        { yyval = cb_int (COB_EQ); }
#line 25011 "parser.c"
    break;

  case 2260:
#line 15018 "parser.y"
                        { yyval = cb_int (yyvsp[-1] ? COB_LE : COB_GT); }
#line 25017 "parser.c"
    break;

  case 2261:
#line 15019 "parser.y"
                        { yyval = cb_int (yyvsp[-1] ? COB_GE : COB_LT); }
#line 25023 "parser.c"
    break;

  case 2262:
#line 15020 "parser.y"
                        { yyval = cb_int (yyvsp[-1] ? COB_LT : COB_GE); }
#line 25029 "parser.c"
    break;

  case 2263:
#line 15021 "parser.y"
                        { yyval = cb_int (yyvsp[-1] ? COB_GT : COB_LE); }
#line 25035 "parser.c"
    break;

  case 2264:
#line 15022 "parser.y"
                        { yyval = cb_int (COB_NE); }
#line 25041 "parser.c"
    break;

  case 2265:
#line 15027 "parser.y"
  {
	cb_error_x (CB_TREE (current_statement),
		    _("NOT EQUAL condition not allowed on START statement"));
  }
#line 25050 "parser.c"
    break;

  case 2268:
#line 15040 "parser.y"
  {
	TERMINATOR_WARNING (yyvsp[(-2) - (0)], START);
  }
#line 25058 "parser.c"
    break;

  case 2269:
#line 15044 "parser.y"
  {
	TERMINATOR_CLEAR (yyvsp[(-2) - (1)], START);
  }
#line 25066 "parser.c"
    break;

  case 2270:
#line 15054 "parser.y"
  {
	begin_statement ("STOP RUN", 0);
	cobc_cs_check = CB_CS_STOP;
  }
#line 25075 "parser.c"
    break;

  case 2271:
#line 15059 "parser.y"
  {
	cb_emit_stop_run (yyvsp[0]);
	check_unreached = 1;
	cobc_cs_check = 0;
  }
#line 25085 "parser.c"
    break;

  case 2272:
#line 15065 "parser.y"
  {
	begin_statement ("STOP", 0);
	cb_emit_display (CB_LIST_INIT (yyvsp[0]), cb_int0, cb_int1, NULL,
			 NULL, 1, DEVICE_DISPLAY);
	cb_emit_accept (cb_null, NULL, NULL);
	cobc_cs_check = 0;
  }
#line 25097 "parser.c"
    break;

  case 2273:
#line 15073 "parser.y"
  {
	begin_statement ("STOP THREAD", 0);
	cb_emit_stop_thread (yyvsp[0]);
	cobc_cs_check = 0;
	cb_warning_x (COBC_WARN_FILLER, yyvsp[0], _("%s is replaced by %s"), "STOP THREAD", "STOP RUN");
  }
#line 25108 "parser.c"
    break;

  case 2274:
#line 15083 "parser.y"
  {
	if (current_program->cb_return_code) {
		yyval = current_program->cb_return_code;
	} else {
		yyval = cb_int0;
	}
  }
#line 25120 "parser.c"
    break;

  case 2275:
#line 15091 "parser.y"
  {
	yyval = yyvsp[0];
  }
#line 25128 "parser.c"
    break;

  case 2276:
#line 15095 "parser.y"
  {
	yyval = yyvsp[0];
  }
#line 25136 "parser.c"
    break;

  case 2277:
#line 15099 "parser.y"
  {
	if (yyvsp[0]) {
		yyval = yyvsp[0];
	} else {
		yyval = cb_int1;
	}
  }
#line 25148 "parser.c"
    break;

  case 2278:
#line 15107 "parser.y"
  {
	if (yyvsp[0]) {
		yyval = yyvsp[0];
	} else {
		yyval = cb_int0;
	}
  }
#line 25160 "parser.c"
    break;

  case 2279:
#line 15118 "parser.y"
  {
	yyval = NULL;
  }
#line 25168 "parser.c"
    break;

  case 2280:
#line 15122 "parser.y"
  {
	yyval = yyvsp[0];
  }
#line 25176 "parser.c"
    break;

  case 2281:
#line 15129 "parser.y"
  {
	cb_verify (cb_stop_literal_statement, _("STOP literal"));
  }
#line 25184 "parser.c"
    break;

  case 2282:
#line 15133 "parser.y"
  {
	cb_verify (cb_stop_identifier_statement, _("STOP identifier"));
  }
#line 25192 "parser.c"
    break;

  case 2283:
#line 15139 "parser.y"
                                { yyval = yyvsp[0]; }
#line 25198 "parser.c"
    break;

  case 2284:
#line 15140 "parser.y"
                                { yyval = cb_space; }
#line 25204 "parser.c"
    break;

  case 2285:
#line 15141 "parser.y"
                                { yyval = cb_zero; }
#line 25210 "parser.c"
    break;

  case 2286:
#line 15142 "parser.y"
                                { yyval = cb_quote; }
#line 25216 "parser.c"
    break;

  case 2287:
#line 15149 "parser.y"
  {
	begin_statement ("STRING", TERM_STRING);
  }
#line 25224 "parser.c"
    break;

  case 2289:
#line 15158 "parser.y"
  {
	cb_emit_string (yyvsp[-4], yyvsp[-2], yyvsp[-1]);
  }
#line 25232 "parser.c"
    break;

  case 2290:
#line 15164 "parser.y"
  {
	save_tree = NULL;
  }
#line 25240 "parser.c"
    break;

  case 2291:
#line 15168 "parser.y"
  {
	yyval = save_tree;
  }
#line 25248 "parser.c"
    break;

  case 2294:
#line 15180 "parser.y"
  {
	if (!save_tree) {
		save_tree = CB_LIST_INIT (yyvsp[-1]);
	} else {
		save_tree = cb_list_add (save_tree, yyvsp[-1]);
	}
	if (yyvsp[0]) {
		save_tree = cb_list_add (save_tree, yyvsp[0]);
	}
  }
#line 25263 "parser.c"
    break;

  case 2295:
#line 15193 "parser.y"
                        { yyval = NULL; }
#line 25269 "parser.c"
    break;

  case 2296:
#line 15195 "parser.y"
                        { yyval = yyvsp[0]; }
#line 25275 "parser.c"
    break;

  case 2297:
#line 15199 "parser.y"
                { yyval = CB_BUILD_PAIR (cb_int0, NULL); }
#line 25281 "parser.c"
    break;

  case 2298:
#line 15200 "parser.y"
                { yyval = CB_BUILD_PAIR (yyvsp[0], NULL); }
#line 25287 "parser.c"
    break;

  case 2299:
#line 15204 "parser.y"
                                { yyval = NULL; }
#line 25293 "parser.c"
    break;

  case 2300:
#line 15205 "parser.y"
                                { yyval = yyvsp[0]; }
#line 25299 "parser.c"
    break;

  case 2301:
#line 15210 "parser.y"
  {
	TERMINATOR_WARNING (yyvsp[(-2) - (0)], STRING);
  }
#line 25307 "parser.c"
    break;

  case 2302:
#line 15214 "parser.y"
  {
	TERMINATOR_CLEAR (yyvsp[(-2) - (1)], STRING);
  }
#line 25315 "parser.c"
    break;

  case 2303:
#line 15224 "parser.y"
  {
	begin_statement ("SUBTRACT", TERM_SUBTRACT);
  }
#line 25323 "parser.c"
    break;

  case 2305:
#line 15233 "parser.y"
  {
	cb_emit_arithmetic (yyvsp[-1], '-', cb_build_binary_list (yyvsp[-3], '+'));
  }
#line 25331 "parser.c"
    break;

  case 2306:
#line 15237 "parser.y"
  {
	cb_emit_arithmetic (yyvsp[-1], 0, cb_build_binary_list (CB_BUILD_CHAIN (yyvsp[-3], yyvsp[-5]), '-'));
  }
#line 25339 "parser.c"
    break;

  case 2307:
#line 15241 "parser.y"
  {
	cb_emit_corresponding (cb_build_sub, yyvsp[-2], yyvsp[-4], yyvsp[-1]);
  }
#line 25347 "parser.c"
    break;

  case 2308:
#line 15245 "parser.y"
  {
	CB_PENDING ("SUBTRACT TABLE");
	cb_emit_tab_arithmetic (cb_build_sub, yyvsp[-4], yyvsp[-6], yyvsp[-3], yyvsp[-2], yyvsp[-1]);
  }
#line 25356 "parser.c"
    break;

  case 2309:
#line 15253 "parser.y"
  {
	TERMINATOR_WARNING (yyvsp[(-2) - (0)], SUBTRACT);
  }
#line 25364 "parser.c"
    break;

  case 2310:
#line 15257 "parser.y"
  {
	TERMINATOR_CLEAR (yyvsp[(-2) - (1)], SUBTRACT);
  }
#line 25372 "parser.c"
    break;

  case 2311:
#line 15267 "parser.y"
  {
	begin_statement ("SUPPRESS", 0);
	if (!in_declaratives) {
		cb_error_x (CB_TREE (current_statement),
			    _("SUPPRESS statement must be within DECLARATIVES"));
	}
	cb_emit_suppress (control_field);
  }
#line 25385 "parser.c"
    break;

  case 2314:
#line 15285 "parser.y"
  {
	begin_statement ("TERMINATE", 0);
  }
#line 25393 "parser.c"
    break;

  case 2316:
#line 15293 "parser.y"
  {
#if 0 /* CHECKME: likely not needed */
	begin_implicit_statement ();
#endif
	if (yyvsp[0] != cb_error_node) {
	    cb_emit_terminate (yyvsp[0]);
	}
  }
#line 25406 "parser.c"
    break;

  case 2317:
#line 15302 "parser.y"
  {
	begin_implicit_statement ();
	if (yyvsp[0] != cb_error_node) {
		cb_emit_terminate (yyvsp[0]);
	}
  }
#line 25417 "parser.c"
    break;

  case 2318:
#line 15314 "parser.y"
  {
	begin_statement ("TRANSFORM", 0);
  }
#line 25425 "parser.c"
    break;

  case 2320:
#line 15322 "parser.y"
  {
	cb_tree		x;

	x = cb_build_converting (yyvsp[-2], yyvsp[0], cb_build_inspect_region_start ());
	cb_emit_inspect (yyvsp[-4], x, TRANSFORM_STATEMENT);
  }
#line 25436 "parser.c"
    break;

  case 2321:
#line 15335 "parser.y"
  {
	begin_statement ("UNLOCK", 0);
  }
#line 25444 "parser.c"
    break;

  case 2323:
#line 15343 "parser.y"
  {
	if (CB_VALID_TREE (yyvsp[-1])) {
		if (CB_FILE (cb_ref (yyvsp[-1]))->organization == COB_ORG_SORT) {
			cb_error_x (CB_TREE (current_statement),
				    _("UNLOCK invalid for SORT files"));
		} else {
			cb_emit_unlock (yyvsp[-1]);
		}
	}
  }
#line 25459 "parser.c"
    break;

  case 2324:
#line 15359 "parser.y"
  {
	begin_statement ("UNSTRING", TERM_UNSTRING);
  }
#line 25467 "parser.c"
    break;

  case 2326:
#line 15370 "parser.y"
  {
	cb_emit_unstring (yyvsp[-5], yyvsp[-4], yyvsp[-3], yyvsp[-2], yyvsp[-1]);
  }
#line 25475 "parser.c"
    break;

  case 2327:
#line 15376 "parser.y"
                                { yyval = NULL; }
#line 25481 "parser.c"
    break;

  case 2328:
#line 15378 "parser.y"
                                { yyval = yyvsp[0]; }
#line 25487 "parser.c"
    break;

  case 2329:
#line 15382 "parser.y"
                                { yyval = CB_LIST_INIT (yyvsp[0]); }
#line 25493 "parser.c"
    break;

  case 2330:
#line 15384 "parser.y"
                                { yyval = cb_list_add (yyvsp[-2], yyvsp[0]); }
#line 25499 "parser.c"
    break;

  case 2331:
#line 15389 "parser.y"
  {
	yyval = cb_build_unstring_delimited (yyvsp[-1], yyvsp[0]);
  }
#line 25507 "parser.c"
    break;

  case 2332:
#line 15395 "parser.y"
                                { yyval = CB_LIST_INIT (yyvsp[0]); }
#line 25513 "parser.c"
    break;

  case 2333:
#line 15397 "parser.y"
                                { yyval = cb_list_add (yyvsp[-1], yyvsp[0]); }
#line 25519 "parser.c"
    break;

  case 2334:
#line 15402 "parser.y"
  {
	yyval = cb_build_unstring_into (yyvsp[-2], yyvsp[-1], yyvsp[0]);
  }
#line 25527 "parser.c"
    break;

  case 2335:
#line 15408 "parser.y"
                                { yyval = NULL; }
#line 25533 "parser.c"
    break;

  case 2336:
#line 15409 "parser.y"
                                { yyval = yyvsp[0]; }
#line 25539 "parser.c"
    break;

  case 2337:
#line 15413 "parser.y"
                                { yyval = NULL; }
#line 25545 "parser.c"
    break;

  case 2338:
#line 15414 "parser.y"
                                { yyval = yyvsp[0]; }
#line 25551 "parser.c"
    break;

  case 2339:
#line 15419 "parser.y"
  {
	TERMINATOR_WARNING (yyvsp[(-2) - (0)], UNSTRING);
  }
#line 25559 "parser.c"
    break;

  case 2340:
#line 15423 "parser.y"
  {
	TERMINATOR_CLEAR (yyvsp[(-2) - (1)], UNSTRING);
  }
#line 25567 "parser.c"
    break;

  case 2341:
#line 15432 "parser.y"
  {
	begin_statement ("VALIDATE", 0);
  }
#line 25575 "parser.c"
    break;

  case 2342:
#line 15436 "parser.y"
  {
#if 0	/* FIXME: at least add syntax checks here */
	cb_emit_validate (yyvsp[0]);
#else
	CB_PENDING ("VALIDATE");
#endif
  }
#line 25587 "parser.c"
    break;

  case 2343:
#line 15447 "parser.y"
  {
	check_validate_item (yyvsp[0]);
	yyval = CB_LIST_INIT (yyvsp[0]);
  }
#line 25596 "parser.c"
    break;

  case 2344:
#line 15452 "parser.y"
  {
	check_validate_item (yyvsp[0]);
	yyval = cb_list_add (yyvsp[-1], yyvsp[0]);
  }
#line 25605 "parser.c"
    break;

  case 2345:
#line 15463 "parser.y"
  {
	skip_statements = 0;
	in_debugging = 0;
  }
#line 25614 "parser.c"
    break;

  case 2352:
#line 15481 "parser.y"
  {
	if (!in_declaratives) {
		cb_error (_("USE statement must be within DECLARATIVES"));
	} else if (!current_section) {
		cb_error (_("SECTION header missing before USE statement"));
	} else {
		current_section->flag_begin = 1;
		current_section->flag_return = 1;
		current_section->flag_declarative_exit = 1;
		current_section->flag_real_label = 1;
		current_section->flag_skip_label = 0;
		/* TO-DO: Use cobc_ec_turn? */
		CB_EXCEPTION_ENABLE (COB_EC_I_O) = 1;
		if (use_global_ind) {
			current_section->flag_global = 1;
			current_program->global_list =
				cb_list_add (current_program->global_list,
					     CB_TREE (current_section));
		}
		emit_statement (cb_build_comment ("USE AFTER ERROR"));
	}
  }
#line 25641 "parser.c"
    break;

  case 2353:
#line 15507 "parser.y"
  {
	use_global_ind = 0;
  }
#line 25649 "parser.c"
    break;

  case 2354:
#line 15511 "parser.y"
  {
	if (current_program->prog_type == COB_MODULE_TYPE_FUNCTION) {
		cb_error (_("%s is invalid in a user FUNCTION"), "GLOBAL");
	} else {
		use_global_ind = 1;
		current_program->flag_global_use = 1;
	}
  }
#line 25662 "parser.c"
    break;

  case 2355:
#line 15523 "parser.y"
  {
	cb_tree		l;

	for (l = yyvsp[0]; l; l = CB_CHAIN (l)) {
		if (CB_VALID_TREE (CB_VALUE (l))) {
			setup_use_file (CB_FILE (cb_ref (CB_VALUE (l))));
		}
	}
  }
#line 25676 "parser.c"
    break;

  case 2356:
#line 15533 "parser.y"
  {
	current_program->global_handler[COB_OPEN_INPUT].handler_label = current_section;
	current_program->global_handler[COB_OPEN_INPUT].handler_prog = current_program;
  }
#line 25685 "parser.c"
    break;

  case 2357:
#line 15538 "parser.y"
  {
	current_program->global_handler[COB_OPEN_OUTPUT].handler_label = current_section;
	current_program->global_handler[COB_OPEN_OUTPUT].handler_prog = current_program;
  }
#line 25694 "parser.c"
    break;

  case 2358:
#line 15543 "parser.y"
  {
	current_program->global_handler[COB_OPEN_I_O].handler_label = current_section;
	current_program->global_handler[COB_OPEN_I_O].handler_prog = current_program;
  }
#line 25703 "parser.c"
    break;

  case 2359:
#line 15548 "parser.y"
  {
	current_program->global_handler[COB_OPEN_EXTEND].handler_label = current_section;
	current_program->global_handler[COB_OPEN_EXTEND].handler_prog = current_program;
  }
#line 25712 "parser.c"
    break;

  case 2360:
#line 15556 "parser.y"
  {
	cb_tree		plabel;
	char		name[64];

	cb_verify (cb_use_for_debugging, "USE FOR DEBUGGING");

	if (!in_declaratives) {
		cb_error (_("USE statement must be within DECLARATIVES"));
	} else if (current_program->nested_level) {
		cb_error (_("USE DEBUGGING not supported in contained program"));
	} else {
		in_debugging = 1;
		current_section->flag_begin = 1;
		current_section->flag_return = 1;
		current_section->flag_declarative_exit = 1;
		current_section->flag_real_label = 0;
		current_section->flag_is_debug_sect = 1;
		if (!needs_debug_item) {
			needs_debug_item = 1;
			cb_build_debug_item ();
		}
		if (!current_program->flag_debugging) {
			skip_statements = 1;
			current_section->flag_skip_label = 1;
		} else {
			current_program->flag_gen_debug = 1;
			sprintf (name, "EXIT SECTION %d", cb_id);
			plabel = cb_build_reference (name);
			plabel = cb_build_label (plabel, NULL);
			CB_LABEL (plabel)->flag_begin = 1;
			CB_LABEL (plabel)->flag_dummy_exit = 1;
			current_section->exit_label = plabel;
			emit_statement (cb_build_comment ("USE FOR DEBUGGING"));
		}
	}
  }
#line 25753 "parser.c"
    break;

  case 2363:
#line 15601 "parser.y"
  {
	if (current_program->flag_debugging) {

		cb_tree		z = CB_LIST_INIT (yyvsp[0]);
		current_program->debug_list =
			cb_list_append (current_program->debug_list, z);
		/* Check backward refs to file/data names */
		if (CB_WORD_COUNT (yyvsp[0]) > 0) {
			cb_tree		l = CB_VALUE (CB_WORD_ITEMS (yyvsp[0]));
			switch (CB_TREE_TAG (l)) {
			case CB_TAG_CD:
				if (CB_CD (l)->flag_field_debug) {
					cb_error_x (yyvsp[0], _("duplicate DEBUGGING target: '%s'"),
					    cb_name (l));
				} else {
					CB_CD (l)->debug_section = current_section;
					CB_CD (l)->flag_field_debug = 1;
				}
				break;
			case CB_TAG_FILE:
				if (CB_FILE (l)->flag_fl_debug) {
					cb_error_x (yyvsp[0], _("duplicate DEBUGGING target: '%s'"),
					    cb_name (l));
				} else {
					CB_FILE (l)->debug_section = current_section;
					CB_FILE (l)->flag_fl_debug = 1;
				}
				break;
			case CB_TAG_FIELD:
				{
					struct cb_field* fld;
					cb_tree		x = cb_ref (yyvsp[0]);
					if (!x || !CB_FIELD_P (x)) {
						break;
					}
					fld = CB_FIELD (x);
					if (fld->flag_item_78) {
						cb_error_x (yyvsp[0], _("constant item cannot be used here"));
					} else if (fld->flag_field_debug) {
						cb_error_x (yyvsp[0], _("duplicate DEBUGGING target: '%s'"),
							cb_name (x));
					} else {
						needs_field_debug = 1;
						fld->debug_section = current_section;
						fld->flag_field_debug = 1;
						CB_PURPOSE (z) = x;
					}
				}
				break;
			default:
				/* Label refs will be checked later (forward/backward ref) */
				break;
			}
		}
		CB_REFERENCE (yyvsp[0])->debug_section = current_section;
		CB_REFERENCE (yyvsp[0])->flag_debug_code = 1;
		CB_REFERENCE (yyvsp[0])->flag_all_debug = 0;
	}
  }
#line 25817 "parser.c"
    break;

  case 2364:
#line 15661 "parser.y"
  {
	if (current_program->flag_debugging) {
		if (current_program->all_procedure) {
			cb_error (_("duplicate USE DEBUGGING ON ALL PROCEDURES"));
		} else {
			current_program->all_procedure = current_section;
		}
	}
  }
#line 25831 "parser.c"
    break;

  case 2365:
#line 15671 "parser.y"
  {
	if (current_program->flag_debugging && yyvsp[0] != cb_error_node) {
		cb_tree x = cb_ref (yyvsp[0]);
		struct cb_field *fld = CB_FIELD (x);
		if (fld->flag_field_debug) {
			cb_error_x (yyvsp[0], _("duplicate DEBUGGING target: '%s'"),
				cb_name (x));
		} else {
			struct cb_reference *r = CB_REFERENCE (yyvsp[0]);
			needs_field_debug = 1;
			fld->debug_section = current_section;
			fld->flag_field_debug = 1;
			fld->flag_all_debug = 1;
			r->debug_section = current_section;
			r->flag_debug_code = 1;
			r->flag_all_debug = 1;
			CB_CHAIN_PAIR (current_program->debug_list, x, yyvsp[0]);
		}
	}
  }
#line 25856 "parser.c"
    break;

  case 2370:
#line 15701 "parser.y"
  {
	if (current_program->nested_level) {
		cb_error (_("%s is invalid in nested program"), "USE AT");
	}
  }
#line 25866 "parser.c"
    break;

  case 2371:
#line 15710 "parser.y"
  {
	emit_statement (cb_build_comment ("USE AT PROGRAM START"));
	CB_PENDING ("USE AT PROGRAM START");
	/* emit_entry ("_AT_START", 0, NULL, NULL, 0); */
  }
#line 25876 "parser.c"
    break;

  case 2372:
#line 15716 "parser.y"
  {
	emit_statement (cb_build_comment ("USE AT PROGRAM END"));
	CB_PENDING ("USE AT PROGRAM END");
	/* emit_entry ("_AT_END", 0, NULL, NULL, 0); */
  }
#line 25886 "parser.c"
    break;

  case 2373:
#line 15726 "parser.y"
  {
	current_section->flag_real_label = 1;
	current_section->flag_declaratives = 1;
	current_section->flag_begin = 1;
	current_section->flag_return = 1;
	current_section->flag_declarative_exit = 1;
	current_section->flag_real_label = 1;
	current_section->flag_skip_label = 0;

	if (yyvsp[0] != cb_error_node) {
		char	wrk[COB_MINI_BUFF];
		struct cb_field		*f = CB_FIELD_PTR(yyvsp[0]);
		control_field = f;
		f->report_decl_id = current_section->id;
		if (f->report != NULL) {
			f->report->has_declarative = 1;
		}
		snprintf (wrk, COB_MINI_MAX, "USE BEFORE REPORTING %s is %s%d",
			f->name, CB_PREFIX_LABEL, current_section->id);
		emit_statement (cb_build_comment (cobc_parse_strdup(wrk)));
	}
  }
#line 25913 "parser.c"
    break;

  case 2377:
#line 15762 "parser.y"
  {
	current_section->flag_real_label = 1;
	emit_statement (cb_build_comment ("USE AFTER EXCEPTION CONDITION"));
	CB_PENDING ("USE AFTER EXCEPTION CONDITION");
  }
#line 25923 "parser.c"
    break;

  case 2378:
#line 15768 "parser.y"
  {
	cb_tree		l;

	for (l = yyvsp[0]; l; l = CB_CHAIN (l)) {
		if (CB_VALID_TREE (CB_VALUE (l))) {
			setup_use_file (CB_FILE (cb_ref (CB_VALUE (l))));
		}
	}
	current_section->flag_real_label = 1;
	emit_statement(cb_build_comment("USE AFTER EXCEPTION CONDITION"));
	CB_PENDING("USE AFTER EXCEPTION CONDITION");
  }
#line 25940 "parser.c"
    break;

  case 2381:
#line 15791 "parser.y"
  {
	begin_statement ("WRITE", TERM_WRITE);
	/* Special in debugging mode */
	save_debug = start_debug;
	start_debug = 0;
  }
#line 25951 "parser.c"
    break;

  case 2383:
#line 15803 "parser.y"
  {
	if (CB_VALID_TREE (yyvsp[-5])) {
		cb_emit_write (yyvsp[-5], yyvsp[-4], yyvsp[-3], yyvsp[-1]);
	}
	start_debug = save_debug;
  }
#line 25962 "parser.c"
    break;

  case 2384:
#line 15812 "parser.y"
                                { yyval = NULL; }
#line 25968 "parser.c"
    break;

  case 2385:
#line 15813 "parser.y"
                                { yyval = yyvsp[0]; }
#line 25974 "parser.c"
    break;

  case 2386:
#line 15818 "parser.y"
  {
	yyval = cb_int0;
  }
#line 25982 "parser.c"
    break;

  case 2387:
#line 15822 "parser.y"
  {
	yyval = cb_build_write_advancing_lines (yyvsp[-3], yyvsp[-1]);
  }
#line 25990 "parser.c"
    break;

  case 2388:
#line 15826 "parser.y"
  {
	yyval = cb_build_write_advancing_mnemonic (yyvsp[-2], yyvsp[0]);
  }
#line 25998 "parser.c"
    break;

  case 2389:
#line 15830 "parser.y"
  {
	yyval = cb_build_write_advancing_page (yyvsp[-2]);
  }
#line 26006 "parser.c"
    break;

  case 2390:
#line 15836 "parser.y"
                                { yyval = CB_BEFORE; }
#line 26012 "parser.c"
    break;

  case 2391:
#line 15837 "parser.y"
                                { yyval = CB_AFTER; }
#line 26018 "parser.c"
    break;

  case 2395:
#line 15848 "parser.y"
  {
	TERMINATOR_WARNING (yyvsp[(-2) - (0)], WRITE);
  }
#line 26026 "parser.c"
    break;

  case 2396:
#line 15852 "parser.y"
  {
	TERMINATOR_CLEAR (yyvsp[(-2) - (1)], WRITE);
  }
#line 26034 "parser.c"
    break;

  case 2397:
#line 15861 "parser.y"
  {
	begin_statement ("XML GENERATE", TERM_XML);
	cobc_in_xml_generate_body = 1;
	cobc_cs_check = CB_CS_XML_GENERATE;
  }
#line 26044 "parser.c"
    break;

  case 2399:
#line 15873 "parser.y"
  {
	xml_encoding = NULL;
	with_xml_dec = 0;
	with_attrs = 0;
	ml_suppress_list = NULL;
  }
#line 26055 "parser.c"
    break;

  case 2400:
#line 15884 "parser.y"
  {
	cobc_in_xml_generate_body = 0;
	cobc_cs_check = 0;
  }
#line 26064 "parser.c"
    break;

  case 2401:
#line 15889 "parser.y"
  {
	cb_emit_xml_generate (yyvsp[-11], yyvsp[-9], yyvsp[-8], xml_encoding, with_xml_dec,
			      with_attrs, yyvsp[-5], yyvsp[-4], yyvsp[-3], ml_suppress_list);
  }
#line 26073 "parser.c"
    break;

  case 2407:
#line 15911 "parser.y"
  {
	xml_encoding = yyvsp[0];
	if (with_xml_dec) {
		cb_error (_("ENCODING clause must come before XML-DECLARATION"));
	} else if (with_attrs) {
		cb_error (_("ENCODING clause must come before ATTRIBUTES"));
	}
	cb_verify (cb_xml_generate_extra_phrases,
		   _("XML GENERATE ENCODING clause"));
	CB_PENDING ("XML GENERATE ENCODING");
  }
#line 26089 "parser.c"
    break;

  case 2408:
#line 15923 "parser.y"
  {
	with_xml_dec = 1;
	if (with_attrs) {
		cb_error (_("XML-DECLARATION clause must come before ATTRIBUTES"));
	}
	cb_verify (cb_xml_generate_extra_phrases,
		   _("XML GENERATE XML-DECLARATION clause"));
  }
#line 26102 "parser.c"
    break;

  case 2409:
#line 15932 "parser.y"
  {
	with_attrs = 1;
	cb_verify (cb_xml_generate_extra_phrases,
		   _("XML GENERATE WITH ATTRIBUTES clause"));
  }
#line 26112 "parser.c"
    break;

  case 2410:
#line 15941 "parser.y"
  {
	 yyval = NULL;
  }
#line 26120 "parser.c"
    break;

  case 2411:
#line 15945 "parser.y"
  {
	yyval = CB_BUILD_PAIR (yyvsp[-1], yyvsp[0]);
	cb_verify (cb_xml_generate_extra_phrases,
		   _("XML GENERATE NAMESPACE clause"));
  }
#line 26130 "parser.c"
    break;

  case 2412:
#line 15954 "parser.y"
  {
	yyval = cb_null;
  }
#line 26138 "parser.c"
    break;

  case 2413:
#line 15958 "parser.y"
  {
	yyval = yyvsp[0];
  }
#line 26146 "parser.c"
    break;

  case 2414:
#line 15965 "parser.y"
  {
	yyval = NULL;
  }
#line 26154 "parser.c"
    break;

  case 2415:
#line 15969 "parser.y"
  {
	yyval = yyvsp[0];
	cb_verify (cb_xml_generate_extra_phrases,
		   _("XML GENERATE NAME OF clause"));
  }
#line 26164 "parser.c"
    break;

  case 2416:
#line 15978 "parser.y"
  {
	yyval = CB_LIST_INIT (yyvsp[0]);
  }
#line 26172 "parser.c"
    break;

  case 2417:
#line 15982 "parser.y"
  {
	yyval = cb_list_add (yyvsp[-1], yyvsp[0]);
  }
#line 26180 "parser.c"
    break;

  case 2418:
#line 15989 "parser.y"
  {
	yyval = CB_BUILD_PAIR (yyvsp[-2], yyvsp[0]);
  }
#line 26188 "parser.c"
    break;

  case 2419:
#line 15996 "parser.y"
  {
	yyval = NULL;
  }
#line 26196 "parser.c"
    break;

  case 2420:
#line 16000 "parser.y"
  {
	yyval = yyvsp[0];
  }
#line 26204 "parser.c"
    break;

  case 2421:
#line 16007 "parser.y"
  {
	yyval = CB_LIST_INIT (yyvsp[0]);
  }
#line 26212 "parser.c"
    break;

  case 2422:
#line 16011 "parser.y"
  {
	yyval = cb_list_add (yyvsp[-1], yyvsp[0]);
  }
#line 26220 "parser.c"
    break;

  case 2423:
#line 16018 "parser.y"
  {
	yyval = CB_BUILD_PAIR (yyvsp[-2], yyvsp[0]);
  }
#line 26228 "parser.c"
    break;

  case 2424:
#line 16022 "parser.y"
  {
	yyval = CB_BUILD_PAIR (yyvsp[-2], cb_null);
  }
#line 26236 "parser.c"
    break;

  case 2425:
#line 16029 "parser.y"
  {
       yyval = NULL;
  }
#line 26244 "parser.c"
    break;

  case 2426:
#line 16033 "parser.y"
  {
       yyval = yyvsp[0];
       	cb_verify (cb_xml_generate_extra_phrases,
		   _("XML GENERATE TYPE OF clause"));
  }
#line 26254 "parser.c"
    break;

  case 2427:
#line 16042 "parser.y"
  {
	yyval = CB_LIST_INIT (yyvsp[0]);
  }
#line 26262 "parser.c"
    break;

  case 2428:
#line 16046 "parser.y"
  {
	yyval = cb_list_add (yyvsp[-1], yyvsp[0]);
  }
#line 26270 "parser.c"
    break;

  case 2429:
#line 16053 "parser.y"
  {
	yyval = CB_BUILD_PAIR (yyvsp[-2], yyvsp[0]);
  }
#line 26278 "parser.c"
    break;

  case 2430:
#line 16060 "parser.y"
  {
	yyval = cb_int ((int) CB_ML_ANY_TYPE);
  }
#line 26286 "parser.c"
    break;

  case 2432:
#line 16067 "parser.y"
                { yyval = cb_int ((int) CB_ML_ATTRIBUTE); }
#line 26292 "parser.c"
    break;

  case 2433:
#line 16068 "parser.y"
                { yyval = cb_int ((int) CB_ML_ELEMENT); }
#line 26298 "parser.c"
    break;

  case 2434:
#line 16069 "parser.y"
                { yyval = cb_int ((int) CB_ML_CONTENT); }
#line 26304 "parser.c"
    break;

  case 2436:
#line 16075 "parser.y"
  {
	cb_verify (cb_xml_generate_extra_phrases,
		   _("XML GENERATE SUPPRESS clause"));
  }
#line 26313 "parser.c"
    break;

  case 2439:
#line 16088 "parser.y"
  {
	error_if_following_every_clause ();
	add_identifier_to_ml_suppress_conds (yyvsp[0]);
  }
#line 26322 "parser.c"
    break;

  case 2440:
#line 16093 "parser.y"
  {
	error_if_following_every_clause ();
	add_type_to_ml_suppress_conds (ml_suppress_category, (enum cb_ml_type) CB_INTEGER (yyvsp[0])->val);
  }
#line 26331 "parser.c"
    break;

  case 2441:
#line 16098 "parser.y"
  {
	add_when_to_ml_suppress_conds (yyvsp[0]);
  }
#line 26339 "parser.c"
    break;

  case 2442:
#line 16105 "parser.y"
  {
	ml_suppress_category = CB_ML_SUPPRESS_CAT_NUMERIC;
	yyval = yyvsp[0];
  }
#line 26348 "parser.c"
    break;

  case 2443:
#line 16110 "parser.y"
  {
	ml_suppress_category = CB_ML_SUPPRESS_CAT_NONNUMERIC;
	yyval = yyvsp[0];
  }
#line 26357 "parser.c"
    break;

  case 2444:
#line 16115 "parser.y"
  {
	ml_suppress_category = CB_ML_SUPPRESS_CAT_ANY;
	yyval = yyvsp[0];
  }
#line 26366 "parser.c"
    break;

  case 2445:
#line 16123 "parser.y"
  {
	yyval = CB_LIST_INIT (yyvsp[0]);
  }
#line 26374 "parser.c"
    break;

  case 2446:
#line 16127 "parser.y"
  {
       yyval = cb_list_add (yyvsp[-2], yyvsp[0]);
  }
#line 26382 "parser.c"
    break;

  case 2447:
#line 16134 "parser.y"
  {
	TERMINATOR_WARNING (yyvsp[(-2) - (0)], XML);
  }
#line 26390 "parser.c"
    break;

  case 2448:
#line 16138 "parser.y"
  {
	TERMINATOR_CLEAR (yyvsp[(-2) - (1)], XML);
  }
#line 26398 "parser.c"
    break;

  case 2449:
#line 16148 "parser.y"
  {
	begin_statement ("XML PARSE", TERM_XML);
	/* TO-DO: Add xml-parse and xml-parse-extra-phrases config options. */
	CB_PENDING ("XML PARSE");
	cobc_cs_check = CB_CS_XML_PARSE;
  }
#line 26409 "parser.c"
    break;

  case 2451:
#line 16164 "parser.y"
  {
	cobc_cs_check = 0;
  }
#line 26417 "parser.c"
    break;

  case 2460:
#line 16188 "parser.y"
  {
	if (CB_FILE_P (cb_ref (yyvsp[0]))) {
		yyval = yyvsp[0];
	} else {
		cb_error_x (yyvsp[0], _("'%s' is not a file name"), CB_NAME (yyvsp[0]));
		yyval = cb_error_node;
	}
  }
#line 26430 "parser.c"
    break;

  case 2463:
#line 16206 "parser.y"
  {
	if (yyvsp[0]) {
		cb_verify (cb_not_exception_before_exception,
			_("NOT EXCEPTION before EXCEPTION"));
	}
  }
#line 26441 "parser.c"
    break;

  case 2464:
#line 16216 "parser.y"
  {
	yyval = NULL;
  }
#line 26449 "parser.c"
    break;

  case 2465:
#line 16220 "parser.y"
  {
	yyval = cb_int1;
  }
#line 26457 "parser.c"
    break;

  case 2466:
#line 16227 "parser.y"
  {
	current_statement->handler_type = ACCEPT_HANDLER;
	current_statement->ex_handler = yyvsp[0];
  }
#line 26466 "parser.c"
    break;

  case 2471:
#line 16245 "parser.y"
  {
	current_statement->handler_type = ACCEPT_HANDLER;
	current_statement->not_ex_handler = yyvsp[0];
  }
#line 26475 "parser.c"
    break;

  case 2476:
#line 16261 "parser.y"
  {
	if (yyvsp[0]) {
		cb_verify (cb_not_exception_before_exception,
			_("NOT EXCEPTION before EXCEPTION"));
	}
  }
#line 26486 "parser.c"
    break;

  case 2477:
#line 16271 "parser.y"
  {
	yyval = NULL;
  }
#line 26494 "parser.c"
    break;

  case 2478:
#line 16275 "parser.y"
  {
	yyval = cb_int1;
  }
#line 26502 "parser.c"
    break;

  case 2479:
#line 16282 "parser.y"
  {
	current_statement->handler_type = DISPLAY_HANDLER;
	current_statement->ex_handler = yyvsp[0];
  }
#line 26511 "parser.c"
    break;

  case 2482:
#line 16295 "parser.y"
  {
	current_statement->handler_type = DISPLAY_HANDLER;
	current_statement->not_ex_handler = yyvsp[0];
  }
#line 26520 "parser.c"
    break;

  case 2485:
#line 16305 "parser.y"
  {
	if (yyvsp[0]) {
		cb_verify (cb_not_exception_before_exception,
			   _("NOT EXCEPTION before EXCEPTION"));
	}
  }
#line 26531 "parser.c"
    break;

  case 2486:
#line 16315 "parser.y"
  {
	yyval = NULL;
  }
#line 26539 "parser.c"
    break;

  case 2487:
#line 16319 "parser.y"
  {
	yyval = cb_int1;
  }
#line 26547 "parser.c"
    break;

  case 2488:
#line 16326 "parser.y"
  {
	current_statement->handler_type = XML_HANDLER;
	current_statement->ex_handler = yyvsp[0];
  }
#line 26556 "parser.c"
    break;

  case 2491:
#line 16339 "parser.y"
  {
	current_statement->handler_type = XML_HANDLER;
	current_statement->not_ex_handler = yyvsp[0];
  }
#line 26565 "parser.c"
    break;

  case 2494:
#line 16349 "parser.y"
  {
	if (yyvsp[0]) {
		cb_verify (cb_not_exception_before_exception,
			   _("NOT EXCEPTION before EXCEPTION"));
	}
  }
#line 26576 "parser.c"
    break;

  case 2495:
#line 16359 "parser.y"
  {
	yyval = NULL;
  }
#line 26584 "parser.c"
    break;

  case 2496:
#line 16363 "parser.y"
  {
	yyval = cb_int1;
  }
#line 26592 "parser.c"
    break;

  case 2497:
#line 16370 "parser.y"
  {
	current_statement->handler_type = JSON_HANDLER;
	current_statement->ex_handler = yyvsp[0];
  }
#line 26601 "parser.c"
    break;

  case 2500:
#line 16383 "parser.y"
  {
	current_statement->handler_type = JSON_HANDLER;
	current_statement->not_ex_handler = yyvsp[0];
  }
#line 26610 "parser.c"
    break;

  case 2503:
#line 16395 "parser.y"
  {
	if (yyvsp[0]) {
		cb_verify (cb_not_exception_before_exception,
			_("NOT SIZE ERROR before SIZE ERROR"));
	}
  }
#line 26621 "parser.c"
    break;

  case 2504:
#line 16405 "parser.y"
  {
	yyval = NULL;
  }
#line 26629 "parser.c"
    break;

  case 2505:
#line 16409 "parser.y"
  {
	yyval = cb_int1;
  }
#line 26637 "parser.c"
    break;

  case 2506:
#line 16416 "parser.y"
  {
	current_statement->handler_type = SIZE_ERROR_HANDLER;
	current_statement->ex_handler = yyvsp[0];
  }
#line 26646 "parser.c"
    break;

  case 2509:
#line 16429 "parser.y"
  {
	current_statement->handler_type = SIZE_ERROR_HANDLER;
	current_statement->not_ex_handler = yyvsp[0];
  }
#line 26655 "parser.c"
    break;

  case 2512:
#line 16441 "parser.y"
  {
	if (yyvsp[0]) {
		cb_verify (cb_not_exception_before_exception,
			_("NOT OVERFLOW before OVERFLOW"));
	}
  }
#line 26666 "parser.c"
    break;

  case 2513:
#line 16451 "parser.y"
  {
	yyval = NULL;
  }
#line 26674 "parser.c"
    break;

  case 2514:
#line 16455 "parser.y"
  {
	yyval = cb_int1;
  }
#line 26682 "parser.c"
    break;

  case 2515:
#line 16462 "parser.y"
  {
	current_statement->handler_type = OVERFLOW_HANDLER;
	current_statement->ex_handler = yyvsp[0];
  }
#line 26691 "parser.c"
    break;

  case 2518:
#line 16475 "parser.y"
  {
	current_statement->handler_type = OVERFLOW_HANDLER;
	current_statement->not_ex_handler = yyvsp[0];
  }
#line 26700 "parser.c"
    break;

  case 2520:
#line 16487 "parser.y"
  {
	cb_verify (cb_not_exception_before_exception, "NOT AT END before AT END");
  }
#line 26708 "parser.c"
    break;

  case 2522:
#line 16496 "parser.y"
  {
	if (yyvsp[0]) {
		cb_verify (cb_not_exception_before_exception, "NOT AT END before AT END");
	}
  }
#line 26718 "parser.c"
    break;

  case 2523:
#line 16505 "parser.y"
  {
	yyval = NULL;
  }
#line 26726 "parser.c"
    break;

  case 2524:
#line 16509 "parser.y"
  {
	yyval = cb_int1;
  }
#line 26734 "parser.c"
    break;

  case 2525:
#line 16516 "parser.y"
  {
	current_statement->handler_type = AT_END_HANDLER;
	current_statement->ex_handler = yyvsp[0];
  }
#line 26743 "parser.c"
    break;

  case 2528:
#line 16529 "parser.y"
  {
	current_statement->handler_type = AT_END_HANDLER;
	current_statement->not_ex_handler = yyvsp[0];
  }
#line 26752 "parser.c"
    break;

  case 2530:
#line 16540 "parser.y"
  {
	if (yyvsp[0]) {
		cb_verify (cb_not_exception_before_exception,
			_("NOT AT END-OF-PAGE before AT END-OF-PAGE"));
	}
  }
#line 26763 "parser.c"
    break;

  case 2531:
#line 16550 "parser.y"
  {
	yyval = NULL;
  }
#line 26771 "parser.c"
    break;

  case 2532:
#line 16554 "parser.y"
  {
	yyval = cb_int1;
  }
#line 26779 "parser.c"
    break;

  case 2533:
#line 16561 "parser.y"
  {
	current_statement->handler_type = EOP_HANDLER;
	current_statement->ex_handler = yyvsp[0];
  }
#line 26788 "parser.c"
    break;

  case 2536:
#line 16574 "parser.y"
  {
	current_statement->handler_type = EOP_HANDLER;
	current_statement->not_ex_handler = yyvsp[0];
  }
#line 26797 "parser.c"
    break;

  case 2540:
#line 16590 "parser.y"
  {
	if (yyvsp[0]) {
		cb_verify (cb_not_exception_before_exception,
			_("NOT INVALID KEY before INVALID KEY"));
	}
  }
#line 26808 "parser.c"
    break;

  case 2541:
#line 16600 "parser.y"
  {
	yyval = NULL;
  }
#line 26816 "parser.c"
    break;

  case 2542:
#line 16604 "parser.y"
  {
	yyval = cb_int1;
  }
#line 26824 "parser.c"
    break;

  case 2543:
#line 16611 "parser.y"
  {
	current_statement->handler_type = INVALID_KEY_HANDLER;
	current_statement->ex_handler = yyvsp[0];
  }
#line 26833 "parser.c"
    break;

  case 2546:
#line 16624 "parser.y"
  {
	current_statement->handler_type = INVALID_KEY_HANDLER;
	current_statement->not_ex_handler = yyvsp[0];
  }
#line 26842 "parser.c"
    break;

  case 2547:
#line 16634 "parser.y"
  {
	yyval = NULL;
  }
#line 26850 "parser.c"
    break;

  case 2548:
#line 16638 "parser.y"
  {
	yyval = cb_int1;
	CB_PENDING ("THREAD");
  }
#line 26859 "parser.c"
    break;

  case 2549:
#line 16646 "parser.y"
  {
	yyval = NULL;
  }
#line 26867 "parser.c"
    break;

  case 2550:
#line 16650 "parser.y"
  {
	yyval = yyvsp[0];
	CB_PENDING ("THREAD");
  }
#line 26876 "parser.c"
    break;

  case 2551:
#line 16658 "parser.y"
  {
	yyval = yyvsp[0];
  }
#line 26884 "parser.c"
    break;

  case 2552:
#line 16662 "parser.y"
  {
	yyval = NULL;
  }
#line 26892 "parser.c"
    break;

  case 2553:
#line 16671 "parser.y"
  {
	yyval = cb_one;
  }
#line 26900 "parser.c"
    break;

  case 2554:
#line 16675 "parser.y"
  {
	yyval = yyvsp[-1];
  }
#line 26908 "parser.c"
    break;

  case 2555:
#line 16681 "parser.y"
                                { yyval = NULL; }
#line 26914 "parser.c"
    break;

  case 2556:
#line 16682 "parser.y"
                                { yyval = yyvsp[0]; }
#line 26920 "parser.c"
    break;

  case 2557:
#line 16689 "parser.y"
  {
	yyval = cb_build_cond (yyvsp[0]);
	cb_end_cond (yyval);
  }
#line 26929 "parser.c"
    break;

  case 2558:
#line 16694 "parser.y"
  {
	yyval = cb_error_node;
	cb_end_cond (yyval);
  }
#line 26938 "parser.c"
    break;

  case 2559:
#line 16702 "parser.y"
  {
	yyval = cb_build_expr (yyvsp[0]);
  }
#line 26946 "parser.c"
    break;

  case 2560:
#line 16708 "parser.y"
  {
	current_expr = NULL;
	cb_exp_line = cb_source_line;
  }
#line 26955 "parser.c"
    break;

  case 2561:
#line 16713 "parser.y"
  {
	yyval = cb_list_reverse (current_expr);
  }
#line 26963 "parser.c"
    break;

  case 2564:
#line 16724 "parser.y"
                                { push_expr ('x', yyvsp[0]); }
#line 26969 "parser.c"
    break;

  case 2567:
#line 16729 "parser.y"
                                        { push_expr ('x', cb_zero); }
#line 26975 "parser.c"
    break;

  case 2568:
#line 16731 "parser.y"
                                { push_expr ('(', NULL); }
#line 26981 "parser.c"
    break;

  case 2569:
#line 16732 "parser.y"
                                { push_expr (')', NULL); }
#line 26987 "parser.c"
    break;

  case 2570:
#line 16734 "parser.y"
                                { push_expr ('+', NULL); }
#line 26993 "parser.c"
    break;

  case 2571:
#line 16735 "parser.y"
                                { push_expr ('-', NULL); }
#line 26999 "parser.c"
    break;

  case 2572:
#line 16736 "parser.y"
                                { push_expr ('*', NULL); }
#line 27005 "parser.c"
    break;

  case 2573:
#line 16737 "parser.y"
                                { push_expr ('/', NULL); }
#line 27011 "parser.c"
    break;

  case 2574:
#line 16738 "parser.y"
                                { push_expr ('^', NULL); }
#line 27017 "parser.c"
    break;

  case 2576:
#line 16741 "parser.y"
                                { push_expr ('&', NULL); }
#line 27023 "parser.c"
    break;

  case 2577:
#line 16742 "parser.y"
                                { push_expr ('|', NULL); }
#line 27029 "parser.c"
    break;

  case 2580:
#line 16751 "parser.y"
                                { push_expr ('!', NULL); }
#line 27035 "parser.c"
    break;

  case 2581:
#line 16754 "parser.y"
                                { push_expr ('C', yyvsp[0]); }
#line 27041 "parser.c"
    break;

  case 2582:
#line 16756 "parser.y"
                                { push_expr ('=', NULL); }
#line 27047 "parser.c"
    break;

  case 2583:
#line 16757 "parser.y"
                                { push_expr ('>', NULL); }
#line 27053 "parser.c"
    break;

  case 2584:
#line 16758 "parser.y"
                                { push_expr ('<', NULL); }
#line 27059 "parser.c"
    break;

  case 2585:
#line 16759 "parser.y"
                                { push_expr (']', NULL); }
#line 27065 "parser.c"
    break;

  case 2586:
#line 16760 "parser.y"
                                { push_expr ('[', NULL); }
#line 27071 "parser.c"
    break;

  case 2587:
#line 16761 "parser.y"
                                { push_expr ('~', NULL); }
#line 27077 "parser.c"
    break;

  case 2588:
#line 16763 "parser.y"
                                { push_expr ('O', NULL); }
#line 27083 "parser.c"
    break;

  case 2589:
#line 16764 "parser.y"
                                { push_expr ('9', NULL); }
#line 27089 "parser.c"
    break;

  case 2590:
#line 16765 "parser.y"
                                { push_expr ('A', NULL); }
#line 27095 "parser.c"
    break;

  case 2591:
#line 16766 "parser.y"
                                { push_expr ('L', NULL); }
#line 27101 "parser.c"
    break;

  case 2592:
#line 16767 "parser.y"
                                { push_expr ('U', NULL); }
#line 27107 "parser.c"
    break;

  case 2593:
#line 16770 "parser.y"
                                { push_expr ('P', NULL); }
#line 27113 "parser.c"
    break;

  case 2594:
#line 16771 "parser.y"
                                { push_expr ('N', NULL); }
#line 27119 "parser.c"
    break;

  case 2603:
#line 16801 "parser.y"
  {
	yyval = CB_LIST_INIT (yyvsp[0]);
  }
#line 27127 "parser.c"
    break;

  case 2604:
#line 16805 "parser.y"
  {
	yyval = cb_list_add (yyvsp[-2], yyvsp[0]);
  }
#line 27135 "parser.c"
    break;

  case 2608:
#line 16817 "parser.y"
                                { yyval = cb_build_binary_op (yyvsp[-2], '+', yyvsp[0]); }
#line 27141 "parser.c"
    break;

  case 2609:
#line 16818 "parser.y"
                                { yyval = cb_build_binary_op (yyvsp[-2], '-', yyvsp[0]); }
#line 27147 "parser.c"
    break;

  case 2610:
#line 16819 "parser.y"
                                { yyval = yyvsp[0]; }
#line 27153 "parser.c"
    break;

  case 2611:
#line 16823 "parser.y"
                                { yyval = cb_build_binary_op (yyvsp[-2], '*', yyvsp[0]); }
#line 27159 "parser.c"
    break;

  case 2612:
#line 16824 "parser.y"
                                { yyval = cb_build_binary_op (yyvsp[-2], '/', yyvsp[0]); }
#line 27165 "parser.c"
    break;

  case 2613:
#line 16825 "parser.y"
                                { yyval = yyvsp[0]; }
#line 27171 "parser.c"
    break;

  case 2614:
#line 16830 "parser.y"
  {
	yyval = cb_build_binary_op (yyvsp[-2], '^', yyvsp[0]);
  }
#line 27179 "parser.c"
    break;

  case 2615:
#line 16833 "parser.y"
                                { yyval = yyvsp[0]; }
#line 27185 "parser.c"
    break;

  case 2616:
#line 16837 "parser.y"
                                { yyval = yyvsp[0]; }
#line 27191 "parser.c"
    break;

  case 2617:
#line 16838 "parser.y"
                                { yyval = cb_build_binary_op (cb_zero, '-', yyvsp[0]); }
#line 27197 "parser.c"
    break;

  case 2618:
#line 16839 "parser.y"
                                { yyval = yyvsp[0]; }
#line 27203 "parser.c"
    break;

  case 2619:
#line 16842 "parser.y"
                                        { yyval = yyvsp[-1]; }
#line 27209 "parser.c"
    break;

  case 2620:
#line 16843 "parser.y"
                                        { yyval = yyvsp[0]; }
#line 27215 "parser.c"
    break;

  case 2621:
#line 16854 "parser.y"
  {
	if (current_linage > 1) {
		cb_error (_("LINAGE-COUNTER must be qualified here"));
		yyval = cb_error_node;
	} else if (current_linage == 0) {
		cb_error (_("invalid LINAGE-COUNTER usage"));
		yyval = cb_error_node;
	} else {
		yyval = linage_file->linage_ctr;
	}
  }
#line 27231 "parser.c"
    break;

  case 2622:
#line 16866 "parser.y"
  {
	if (CB_FILE_P (cb_ref (yyvsp[0]))) {
		yyval = CB_FILE (cb_ref (yyvsp[0]))->linage_ctr;
	} else {
		cb_error_x (yyvsp[0], _("'%s' is not a file name"), CB_NAME (yyvsp[0]));
		yyval = cb_error_node;
	}
  }
#line 27244 "parser.c"
    break;

  case 2623:
#line 16875 "parser.y"
  {
	if (report_count > 1) {
		if (current_report != NULL) {
			yyval = current_report->line_counter;
		} else {
			cb_error (_("LINE-COUNTER must be qualified here"));
			yyval = cb_error_node;
		}
	} else if (report_count == 0) {
		cb_error (_("invalid LINE-COUNTER usage"));
		yyval = cb_error_node;
	} else {
		yyval = report_instance->line_counter;
	}
  }
#line 27264 "parser.c"
    break;

  case 2624:
#line 16891 "parser.y"
  {
	if (CB_REF_OR_REPORT_P (yyvsp[0])) {
		yyval = CB_REPORT_PTR (yyvsp[0])->line_counter;
	} else {
		cb_error_x (yyvsp[0], _("'%s' is not a report name"), CB_NAME (yyvsp[0]));
		yyval = cb_error_node;
	}
  }
#line 27277 "parser.c"
    break;

  case 2625:
#line 16900 "parser.y"
  {
	if (report_count > 1) {
		if (current_report != NULL) {
			yyval = current_report->page_counter;
		} else {
			cb_error (_("PAGE-COUNTER must be qualified here"));
			yyval = cb_error_node;
		}
	} else if (report_count == 0) {
		cb_error (_("invalid PAGE-COUNTER usage"));
		yyval = cb_error_node;
	} else {
		yyval = report_instance->page_counter;
	}
  }
#line 27297 "parser.c"
    break;

  case 2626:
#line 16916 "parser.y"
  {
	if (CB_REF_OR_REPORT_P (yyvsp[0])) {
		yyval = CB_REPORT_PTR (yyvsp[0])->page_counter;
	} else {
		cb_error_x (yyvsp[0], _("'%s' is not a report name"), CB_NAME (yyvsp[0]));
		yyval = cb_error_node;
	}
  }
#line 27310 "parser.c"
    break;

  case 2627:
#line 16930 "parser.y"
                                { yyval = yyvsp[0]; }
#line 27316 "parser.c"
    break;

  case 2628:
#line 16932 "parser.y"
                                { yyval = cb_list_append (yyvsp[-1], yyvsp[0]); }
#line 27322 "parser.c"
    break;

  case 2629:
#line 16937 "parser.y"
  {
	yyval = CB_BUILD_PAIR (yyvsp[0], yyvsp[-1]);
  }
#line 27330 "parser.c"
    break;

  case 2630:
#line 16945 "parser.y"
                                { cb_build_identifier (yyvsp[0], 0); }
#line 27336 "parser.c"
    break;

  case 2631:
#line 16952 "parser.y"
  {
	if (!CB_FILE_P (cb_ref (yyvsp[0]))) {
		yyval = yyvsp[0];
	} else {
		cb_error_x (yyvsp[0], _("%s requires a record name as subject"),
			current_statement->name);
		yyval = cb_error_node;
	}
  }
#line 27350 "parser.c"
    break;

  case 2632:
#line 16962 "parser.y"
  {
	if (CB_FILE_P (cb_ref (yyvsp[0]))) {
		yyval = yyvsp[0];
	} else {
		cb_error_x (yyvsp[0], _("'%s' is not a file name"), CB_NAME (yyvsp[0]));
		yyval = cb_error_node;
	}
  }
#line 27363 "parser.c"
    break;

  case 2633:
#line 16976 "parser.y"
  {
	cb_tree x;

	x = cb_ref (yyvsp[0]);
	if (!CB_FIELD_P (x)) {
		yyval = cb_error_node;
	} else if (!CB_FIELD (x)->index_list) {
		cb_error_x (yyvsp[0], _("'%s' not indexed"), cb_name (yyvsp[0]));
		cb_note_x (COB_WARNOPT_NONE, x, _("'%s' defined here"), cb_name (x));
		yyval = cb_error_node;
	} else {
		yyval = yyvsp[0];
	}
  }
#line 27382 "parser.c"
    break;

  case 2634:
#line 16996 "parser.y"
  {
	yyval = CB_LIST_INIT (yyvsp[0]);
  }
#line 27390 "parser.c"
    break;

  case 2635:
#line 17000 "parser.y"
  {
	cb_tree		l;

	if (CB_VALID_TREE (yyvsp[0])) {
		for (l = yyvsp[-1]; l; l = CB_CHAIN (l)) {
			if (CB_VALID_TREE (CB_VALUE (l)) &&
			    !strcasecmp (CB_NAME (yyvsp[0]), CB_NAME (CB_VALUE (l)))) {
				cb_error_x (yyvsp[0], _("multiple reference to '%s' "),
					    CB_NAME (yyvsp[0]));
				break;
			}
		}
		if (!l) {
			yyval = cb_list_add (yyvsp[-1], yyvsp[0]);
		}
	}
  }
#line 27412 "parser.c"
    break;

  case 2636:
#line 17021 "parser.y"
  {
	yyval = CB_LIST_INIT (yyvsp[0]);
  }
#line 27420 "parser.c"
    break;

  case 2637:
#line 17025 "parser.y"
  {
	cb_tree		l;

	if (CB_VALID_TREE (yyvsp[0])) {
		for (l = yyvsp[-2]; l; l = CB_CHAIN (l)) {
			if (CB_VALID_TREE (CB_VALUE (l)) &&
			    !strcasecmp (CB_NAME (yyvsp[0]), CB_NAME (CB_VALUE (l)))) {
				cb_error_x (yyvsp[0], _("multiple reference to '%s' "),
					    CB_NAME (yyvsp[-1]));
				break;
			}
		}
		if (!l) {
			yyval = cb_list_add (yyvsp[-2], yyvsp[0]);
		}
	}
  }
#line 27442 "parser.c"
    break;

  case 2638:
#line 17046 "parser.y"
  {
	if (CB_FILE_P (cb_ref (yyvsp[0]))) {
		yyval = yyvsp[0];
	} else {
		cb_error_x (yyvsp[0], _("'%s' is not a file name"), CB_NAME (yyvsp[0]));
		yyval = cb_error_node;
	}
  }
#line 27455 "parser.c"
    break;

  case 2639:
#line 17058 "parser.y"
  {
	if (CB_CD_P (cb_ref (yyvsp[0]))) {
		yyval = yyvsp[0];
	} else {
		cb_error_x (yyvsp[0], _("'%s' is not a CD name"), CB_NAME (yyvsp[0]));
		yyval = cb_error_node;
	}
  }
#line 27468 "parser.c"
    break;

  case 2640:
#line 17072 "parser.y"
  {
	if (CB_REF_OR_REPORT_P (yyvsp[0])) {
		yyval = yyvsp[0];
	} else {
		cb_error (_("'%s' is not a valid report name"), CB_NAME (yyvsp[0]));
		yyval = cb_error_node;
	}
  }
#line 27481 "parser.c"
    break;

  case 2641:
#line 17085 "parser.y"
                                { yyval = CB_LIST_INIT (yyvsp[0]); }
#line 27487 "parser.c"
    break;

  case 2642:
#line 17087 "parser.y"
                                { yyval = cb_list_add (yyvsp[-1], yyvsp[0]); }
#line 27493 "parser.c"
    break;

  case 2643:
#line 17091 "parser.y"
                                { yyval = yyvsp[0]; }
#line 27499 "parser.c"
    break;

  case 2644:
#line 17097 "parser.y"
                        { yyval = CB_LIST_INIT (yyvsp[0]); }
#line 27505 "parser.c"
    break;

  case 2645:
#line 17099 "parser.y"
                        { yyval = cb_list_add (yyvsp[-1], yyvsp[0]); }
#line 27511 "parser.c"
    break;

  case 2646:
#line 17104 "parser.y"
  {
	yyval = cb_build_reference ((char *)(CB_LITERAL (yyvsp[0])->data));
  }
#line 27519 "parser.c"
    break;

  case 2647:
#line 17113 "parser.y"
                                { yyval = NULL; }
#line 27525 "parser.c"
    break;

  case 2648:
#line 17115 "parser.y"
                                { yyval = cb_list_add (yyvsp[-1], yyvsp[0]); }
#line 27531 "parser.c"
    break;

  case 2649:
#line 17120 "parser.y"
  {
	struct cb_reference *r = CB_REFERENCE (yyvsp[0]);

	r->offset = CB_TREE (current_section);
	r->flag_in_decl = !!in_declaratives;
	r->flag_ignored = cb_set_ignore_error (-1);

	yyval = yyvsp[0];
	CB_ADD_TO_CHAIN (yyvsp[0], current_program->label_list);
  }
#line 27546 "parser.c"
    break;

  case 2652:
#line 17136 "parser.y"
  {
	CB_REFERENCE (yyvsp[-2])->chain = yyvsp[0];
  }
#line 27554 "parser.c"
    break;

  case 2653:
#line 17143 "parser.y"
  {
	yyval = cb_build_reference ((char *)(CB_LITERAL (yyvsp[0])->data));
	yyval->source_file = yyvsp[0]->source_file;
	yyval->source_line = yyvsp[0]->source_line;
  }
#line 27564 "parser.c"
    break;

  case 2654:
#line 17153 "parser.y"
                                { yyval = CB_LIST_INIT (yyvsp[0]); }
#line 27570 "parser.c"
    break;

  case 2655:
#line 17154 "parser.y"
                                { yyval = cb_list_add (yyvsp[-1], yyvsp[0]); }
#line 27576 "parser.c"
    break;

  case 2656:
#line 17159 "parser.y"
  {
	yyval = yyvsp[0];
	CB_ADD_TO_CHAIN (yyval, current_program->reference_list);
  }
#line 27585 "parser.c"
    break;

  case 2657:
#line 17166 "parser.y"
                {yyval = NULL;}
#line 27591 "parser.c"
    break;

  case 2658:
#line 17167 "parser.y"
                        {yyval = yyvsp[0];}
#line 27597 "parser.c"
    break;

  case 2659:
#line 17171 "parser.y"
                                        { yyval = CB_LIST_INIT (yyvsp[0]); }
#line 27603 "parser.c"
    break;

  case 2660:
#line 17172 "parser.y"
                                        { yyval = cb_list_add (yyvsp[-1], yyvsp[0]); }
#line 27609 "parser.c"
    break;

  case 2661:
#line 17177 "parser.y"
  {
	if (!within_typedef_definition) {
		CB_ADD_TO_CHAIN (yyvsp[0], current_program->reference_list);
	}
  }
#line 27619 "parser.c"
    break;

  case 2662:
#line 17189 "parser.y"
  {
	yyval = CB_LIST_INIT (yyvsp[0]);
  }
#line 27627 "parser.c"
    break;

  case 2663:
#line 17193 "parser.y"
  {
	yyval = cb_list_add (yyvsp[-1], yyvsp[0]);
  }
#line 27635 "parser.c"
    break;

  case 2664:
#line 17200 "parser.y"
  {
	yyval = yyvsp[0];
	CB_REFERENCE(yyval)->flag_optional = 1;
	CB_ADD_TO_CHAIN (yyval, current_program->reference_list);
  }
#line 27645 "parser.c"
    break;

  case 2667:
#line 17216 "parser.y"
  {
	if (CB_WORD_COUNT (yyvsp[0]) > 0) {
		redefinition_error (yyvsp[0]);
		yyval = cb_error_node;
	} else {
		yyval = yyvsp[0];
	}
  }
#line 27658 "parser.c"
    break;

  case 2668:
#line 17225 "parser.y"
  {
	yyclearin;
	yyerrok;
	yyval = cb_error_node;
  }
#line 27668 "parser.c"
    break;

  case 2669:
#line 17236 "parser.y"
  {
	if (CB_REFERENCE (yyvsp[0])->flag_duped || CB_WORD_COUNT (yyvsp[0]) > 0) {
		redefinition_error (yyvsp[0]);
		yyval = NULL;
	} else {
		CB_WORD_COUNT (yyvsp[0])++;
		yyval = yyvsp[0];
	}
  }
#line 27682 "parser.c"
    break;

  case 2670:
#line 17253 "parser.y"
  {
	yyval = CB_LIST_INIT (yyvsp[0]);
  }
#line 27690 "parser.c"
    break;

  case 2671:
#line 17257 "parser.y"
  {
	yyval = cb_list_add (yyvsp[-1], yyvsp[0]);
  }
#line 27698 "parser.c"
    break;

  case 2674:
#line 17266 "parser.y"
  {
	yyval = cb_build_address (yyvsp[0]);
  }
#line 27706 "parser.c"
    break;

  case 2675:
#line 17272 "parser.y"
                { yyval = NULL; }
#line 27712 "parser.c"
    break;

  case 2676:
#line 17273 "parser.y"
                { yyval = yyvsp[0]; }
#line 27718 "parser.c"
    break;

  case 2677:
#line 17278 "parser.y"
  {
	yyval = CB_LIST_INIT (yyvsp[0]);
  }
#line 27726 "parser.c"
    break;

  case 2678:
#line 17282 "parser.y"
  {
	yyval = cb_list_add (yyvsp[-1], yyvsp[0]);
  }
#line 27734 "parser.c"
    break;

  case 2686:
#line 17302 "parser.y"
  {
	yyval = cb_build_length (yyvsp[0]);
  }
#line 27742 "parser.c"
    break;

  case 2687:
#line 17306 "parser.y"
  {
	yyval = cb_build_length (yyvsp[0]);
  }
#line 27750 "parser.c"
    break;

  case 2688:
#line 17310 "parser.y"
  {
	yyval = cb_build_length (yyvsp[0]);
  }
#line 27758 "parser.c"
    break;

  case 2689:
#line 17314 "parser.y"
  {
	yyval = cb_build_ppointer (yyvsp[0]);
  }
#line 27766 "parser.c"
    break;

  case 2690:
#line 17318 "parser.y"
  {
	yyval = cb_build_address (check_not_88_level (yyvsp[0]));
  }
#line 27774 "parser.c"
    break;

  case 2691:
#line 17322 "parser.y"
  {
	CB_PENDING ("EXTFH address");
	yyval = cb_error_node;
  }
#line 27783 "parser.c"
    break;

  case 2692:
#line 17327 "parser.y"
  {
	CB_PENDING ("EXTFH address");
	yyval = cb_error_node;
  }
#line 27792 "parser.c"
    break;

  case 2693:
#line 17332 "parser.y"
  {
	cb_tree		x;
	cb_tree		switch_id;

	x = cb_ref (yyvsp[0]);
	if (CB_VALID_TREE (x)) {
		if (CB_SYSTEM_NAME (x)->category != CB_SWITCH_NAME) {
			cb_error_x (yyvsp[0], _("invalid mnemonic identifier"));
			yyval = cb_error_node;
		} else {
			switch_id = cb_int (CB_SYSTEM_NAME (x)->token);
			yyval = CB_BUILD_FUNCALL_1 ("cob_switch_value", switch_id);
		}
	} else {
		yyval = cb_error_node;
	}
  }
#line 27814 "parser.c"
    break;

  case 2694:
#line 17353 "parser.y"
  {
	/* FIXME: check with "lookup_register ("LENGTH OF") != NULL"
	          if we actually want to do this,
	          otherwise raise an error "not defined in this dialect"
	*/
  }
#line 27825 "parser.c"
    break;

  case 2695:
#line 17363 "parser.y"
  {
	yyval = CB_LIST_INIT (yyvsp[0]);
  }
#line 27833 "parser.c"
    break;

  case 2696:
#line 17367 "parser.y"
  {
	yyval = cb_list_add (yyvsp[-1], yyvsp[0]);
  }
#line 27841 "parser.c"
    break;

  case 2704:
#line 17384 "parser.y"
  {
	yyval = cb_build_length (yyvsp[0]);
  }
#line 27849 "parser.c"
    break;

  case 2705:
#line 17388 "parser.y"
  {
	yyval = cb_build_length (yyvsp[0]);
  }
#line 27857 "parser.c"
    break;

  case 2706:
#line 17392 "parser.y"
  {
	yyval = cb_build_length (yyvsp[0]);
  }
#line 27865 "parser.c"
    break;

  case 2710:
#line 17402 "parser.y"
  {
	yyval = cb_build_length (yyvsp[0]);
  }
#line 27873 "parser.c"
    break;

  case 2711:
#line 17406 "parser.y"
  {
	yyval = cb_build_length (yyvsp[0]);
  }
#line 27881 "parser.c"
    break;

  case 2712:
#line 17410 "parser.y"
  {
	yyval = cb_build_length (yyvsp[0]);
  }
#line 27889 "parser.c"
    break;

  case 2713:
#line 17417 "parser.y"
  {
	if (CB_TREE_CATEGORY (yyvsp[0]) != CB_CATEGORY_NUMERIC) {
		cb_error_x (yyvsp[0], _("a numeric literal is expected here"));
		yyval = cb_error_node;
	} else {
		yyval = yyvsp[0];
	}
  }
#line 27902 "parser.c"
    break;

  case 2714:
#line 17429 "parser.y"
  {
	if (CB_TREE_CATEGORY (yyvsp[0]) == CB_CATEGORY_NUMERIC) {
		cb_error_x (yyvsp[0], _("a non-numeric literal is expected here"));
		yyval = cb_error_node;
	} else {
		yyval = yyvsp[0];
	}
  }
#line 27915 "parser.c"
    break;

  case 2715:
#line 17441 "parser.y"
  {
	if (cb_tree_category (yyvsp[0]) != CB_CATEGORY_NUMERIC
	 || cb_get_int (yyvsp[0]) == 0) {
		cb_error (_("non-zero value expected"));
		yyval = cb_int1;
	} else {
		yyval = yyvsp[0];
	}
  }
#line 27929 "parser.c"
    break;

  case 2720:
#line 17465 "parser.y"
  {
	error_if_not_usage_display_or_nonnumeric_lit (yyvsp[0]);
  }
#line 27937 "parser.c"
    break;

  case 2721:
#line 17472 "parser.y"
  {
	error_if_not_usage_display_or_nonnumeric_lit (yyvsp[0]);
  }
#line 27945 "parser.c"
    break;

  case 2723:
#line 17480 "parser.y"
  {
	  error_if_not_usage_display_or_nonnumeric_lit (yyvsp[0]);
  }
#line 27953 "parser.c"
    break;

  case 2725:
#line 17488 "parser.y"
  {
	  error_if_not_usage_display_or_nonnumeric_lit (yyvsp[0]);
  }
#line 27961 "parser.c"
    break;

  case 2731:
#line 17506 "parser.y"
  {
	yyval = check_not_88_level (yyvsp[0]);
  }
#line 27969 "parser.c"
    break;

  case 2733:
#line 17514 "parser.y"
  {
	yyval = check_not_88_level (yyvsp[0]);
  }
#line 27977 "parser.c"
    break;

  case 2736:
#line 17523 "parser.y"
  {
	yyval = check_not_88_level (yyvsp[0]);
  }
#line 27985 "parser.c"
    break;

  case 2739:
#line 17532 "parser.y"
  {
	yyval = check_not_88_level (yyvsp[0]);
  }
#line 27993 "parser.c"
    break;

  case 2741:
#line 17537 "parser.y"
  {
	yyval = cb_zero;
  }
#line 28001 "parser.c"
    break;

  case 2742:
#line 17546 "parser.y"
  {
	yyval = check_not_88_level (yyvsp[0]);
  }
#line 28009 "parser.c"
    break;

  case 2746:
#line 17562 "parser.y"
  {
	yyval = check_not_88_level (yyvsp[0]);
  }
#line 28017 "parser.c"
    break;

  case 2748:
#line 17570 "parser.y"
  {
	yyval = check_not_88_level (yyvsp[0]);
  }
#line 28025 "parser.c"
    break;

  case 2751:
#line 17580 "parser.y"
                                { yyval = cb_build_identifier (yyvsp[0], 0); }
#line 28031 "parser.c"
    break;

  case 2752:
#line 17584 "parser.y"
                                { yyval = cb_build_identifier (yyvsp[0], 1); }
#line 28037 "parser.c"
    break;

  case 2753:
#line 17588 "parser.y"
                                { yyval = yyvsp[0]; }
#line 28043 "parser.c"
    break;

  case 2754:
#line 17589 "parser.y"
                                { yyval = yyvsp[-1]; }
#line 28049 "parser.c"
    break;

  case 2755:
#line 17594 "parser.y"
  {
	error_if_not_usage_display_or_nonnumeric_lit (yyvsp[0]);
  }
#line 28057 "parser.c"
    break;

  case 2756:
#line 17601 "parser.y"
  {
	if (yyvsp[0] != cb_error_node
	    && cb_tree_category (yyvsp[0]) != CB_CATEGORY_NUMERIC) {
		cb_error_x (yyvsp[0], _("'%s' is not numeric"), cb_name (yyvsp[0]));
	}
  }
#line 28068 "parser.c"
    break;

  case 2757:
#line 17611 "parser.y"
  {
	cb_tree x = NULL;
	if (CB_REFERENCE_P (yyvsp[0])) {
		x = cb_ref (yyvsp[0]);
	}
	if (x && (CB_FIELD_P (x) || CB_FILE_P (x))) {
		yyval = cb_build_identifier (yyvsp[0], 0);
	} else {
		if (x != cb_error_node) {
			cb_error_x (yyvsp[0], _("'%s' is not a field or file"), cb_name (yyvsp[0]));
		}
		yyval = cb_error_node;
	}
  }
#line 28087 "parser.c"
    break;

  case 2758:
#line 17630 "parser.y"
  {
	cb_tree x = NULL;
	if (CB_REFERENCE_P (yyvsp[0])) {
		x = cb_ref (yyvsp[0]);
	}

	if (x && CB_FIELD_P (x)) {
		yyval = yyvsp[0];
	} else {
		if (x != cb_error_node) {
			cb_error_x (yyvsp[0], _("'%s' is not a field"), cb_name (yyvsp[0]));
		}
		yyval = cb_error_node;
	}
  }
#line 28107 "parser.c"
    break;

  case 2759:
#line 17651 "parser.y"
  {
	cb_tree x = NULL;
	if (CB_REFERENCE_P (yyvsp[0])) {
		x = cb_ref (yyvsp[0]);
	}

	if (x && CB_FIELD_P (x) && CB_FIELD (x)->flag_is_typedef) {
		yyval = yyvsp[0];
	} else {
		if (x != cb_error_node) {
			cb_error_x (yyvsp[0], _("'%s' is not a type-name"), cb_name (yyvsp[0]));
		}
		yyval = cb_error_node;
	}
  }
#line 28127 "parser.c"
    break;

  case 2760:
#line 17670 "parser.y"
  {
	cb_tree x = NULL;
	if (CB_REFERENCE_P (yyvsp[0])) {
		x = cb_ref (yyvsp[0]);
	}
	if (x && CB_FIELD_P (x)) {
		yyval = cb_build_identifier (yyvsp[0], 0);
	} else {
		if (x != cb_error_node) {
			cb_error_x (yyvsp[0], _("'%s' is not a field"), cb_name (yyvsp[0]));
		}
		yyval = cb_error_node;
	}
  }
#line 28146 "parser.c"
    break;

  case 2761:
#line 17688 "parser.y"
  {
	yyval = yyvsp[-2];
	if (start_debug) {
		cb_check_field_debug (yyvsp[-2]);
	}
  }
#line 28157 "parser.c"
    break;

  case 2762:
#line 17695 "parser.y"
  {
	yyval = yyvsp[-1];
	if (start_debug) {
		cb_check_field_debug (yyvsp[-1]);
	}
  }
#line 28168 "parser.c"
    break;

  case 2763:
#line 17702 "parser.y"
  {
	yyval = yyvsp[-1];
	if (start_debug) {
		cb_check_field_debug (yyvsp[-1]);
	}
  }
#line 28179 "parser.c"
    break;

  case 2764:
#line 17709 "parser.y"
  {
	yyval = yyvsp[0];
	if (start_debug) {
		cb_check_field_debug (yyvsp[0]);
	}
  }
#line 28190 "parser.c"
    break;

  case 2765:
#line 17719 "parser.y"
  {
	yyval = CB_LIST_INIT (yyvsp[0]);
  }
#line 28198 "parser.c"
    break;

  case 2766:
#line 17723 "parser.y"
  {
	yyval = cb_list_add (yyvsp[-1], yyvsp[0]);
  }
#line 28206 "parser.c"
    break;

  case 2767:
#line 17730 "parser.y"
  {
	yyval = cb_build_identifier (yyvsp[0], 0);
  }
#line 28214 "parser.c"
    break;

  case 2768:
#line 17734 "parser.y"
  {
	yyval = cb_build_identifier (yyvsp[0], 0);
  }
#line 28222 "parser.c"
    break;

  case 2769:
#line 17741 "parser.y"
  {
	yyval = yyvsp[-2];
	if (CB_REFERENCE_P (yyvsp[-2])) {
		CB_REFERENCE (yyvsp[-2])->flag_target = 1;
	}
	if (start_debug) {
		cb_check_field_debug (yyvsp[-2]);
	}
  }
#line 28236 "parser.c"
    break;

  case 2770:
#line 17751 "parser.y"
  {
	yyval = yyvsp[-1];
	if (CB_REFERENCE_P (yyvsp[-1])) {
		CB_REFERENCE (yyvsp[-1])->flag_target = 1;
	}
	if (start_debug) {
		cb_check_field_debug (yyvsp[-1]);
	}
  }
#line 28250 "parser.c"
    break;

  case 2771:
#line 17761 "parser.y"
  {
	yyval = yyvsp[-1];
	if (CB_REFERENCE_P (yyvsp[-1])) {
		CB_REFERENCE (yyvsp[-1])->flag_target = 1;
	}
	if (start_debug) {
		cb_check_field_debug (yyvsp[-1]);
	}
  }
#line 28264 "parser.c"
    break;

  case 2772:
#line 17771 "parser.y"
  {
	yyval = yyvsp[0];
	if (CB_REFERENCE_P (yyvsp[0])) {
		CB_REFERENCE (yyvsp[0])->flag_target = 1;
	}
	if (start_debug) {
		cb_check_field_debug (yyvsp[0]);
	}
  }
#line 28278 "parser.c"
    break;

  case 2773:
#line 17784 "parser.y"
  {
	cb_tree x = NULL;
	yyval = yyvsp[0];
	if (start_debug) {
		cb_check_field_debug (yyvsp[0]);
	}
	if (CB_REFERENCE_P (yyvsp[0])) {
		x = cb_ref (yyvsp[0]);
	}
	if (x && CB_FIELD_P (x)) {
		yyval = cb_build_identifier (yyvsp[0], 0);
		error_if_not_usage_display_or_nonnumeric_lit (yyvsp[0]);
	} else if (x && CB_ALPHABET_NAME_P (x)) {
		/* TODO: add check for subscript/ ref-mod here [not allowed] */
		yyval = cb_build_identifier (yyvsp[0], 0);
	} else {
		if (x != cb_error_node) {
			cb_error_x (yyvsp[0], _("'%s' is not a field or alphabet"), cb_name (yyvsp[0]));
		}
		yyval = cb_error_node;
	}
  }
#line 28305 "parser.c"
    break;

  case 2774:
#line 17810 "parser.y"
  {
	yyval = yyvsp[0];
  }
#line 28313 "parser.c"
    break;

  case 2775:
#line 17814 "parser.y"
  {
	yyval = yyvsp[-2];
	CB_REFERENCE (yyvsp[-2])->chain = yyvsp[0];
  }
#line 28322 "parser.c"
    break;

  case 2776:
#line 17821 "parser.y"
  {
	start_tree = NULL;	/* actually not needed - initialized for clarity only */
  }
#line 28330 "parser.c"
    break;

  case 2777:
#line 17825 "parser.y"
  {
	if (yyvsp[0] == cb_error_node) {
		cb_error_x (start_tree, _("a subscripted data-item cannot be used here"));
	}
	yyval = start_tree;
  }
#line 28341 "parser.c"
    break;

  case 2778:
#line 17835 "parser.y"
  {
	start_tree = yyvsp[0];
	yyval = yyvsp[0];
  }
#line 28350 "parser.c"
    break;

  case 2779:
#line 17840 "parser.y"
  {
	start_tree = yyvsp[-2];
	yyval = cb_error_node;
  }
#line 28359 "parser.c"
    break;

  case 2780:
#line 17848 "parser.y"
  {
	yyval = yyvsp[-3];
	CB_REFERENCE (yyvsp[-3])->subs = cb_list_reverse (yyvsp[-1]);
  }
#line 28368 "parser.c"
    break;

  case 2781:
#line 17856 "parser.y"
  {
	CB_REFERENCE (yyvsp[-4])->offset = yyvsp[-2];
  }
#line 28376 "parser.c"
    break;

  case 2782:
#line 17860 "parser.y"
  {
	CB_REFERENCE (yyvsp[-5])->offset = yyvsp[-3];
	CB_REFERENCE (yyvsp[-5])->length = yyvsp[-1];
  }
#line 28385 "parser.c"
    break;

  case 2783:
#line 17870 "parser.y"
  {
	if (cb_tree_category (yyvsp[0]) != CB_CATEGORY_NUMERIC
	 || !CB_LITERAL_P(yyvsp[0])
	 || CB_LITERAL (yyvsp[0])->sign
	 || CB_LITERAL (yyvsp[0])->scale) {
		cb_error (_("unsigned integer value expected"));
		yyval = cb_build_numeric_literal (-1, "1", 0);
	} else {
		yyval = yyvsp[0];
	}
  }
#line 28401 "parser.c"
    break;

  case 2784:
#line 17885 "parser.y"
  {
	if (cb_tree_category (yyvsp[0]) != CB_CATEGORY_NUMERIC) {
		cb_error (_("integer value expected"));
		yyval = cb_int1;
	} else if (CB_LITERAL_P (yyvsp[0])
		&& (CB_LITERAL (yyvsp[0])->sign || CB_LITERAL (yyvsp[0])->scale)) {
		cb_error (_("integer value expected"));
		yyval = cb_int1;
	} else {
		int	n = cb_get_int (yyvsp[0]);
		if (n < 1 || n > 256) {
			cb_error (_("invalid symbolic integer"));
			yyval = cb_int1;
		} else {
			yyval = yyvsp[0];
		}
	}
  }
#line 28424 "parser.c"
    break;

  case 2785:
#line 17907 "parser.y"
  {
	if (cb_tree_category (yyvsp[0]) != CB_CATEGORY_NUMERIC
	 || !CB_LITERAL_P(yyvsp[0])
	 || CB_LITERAL (yyvsp[0])->sign
	 || CB_LITERAL (yyvsp[0])->scale) {
		cb_error (_("unsigned positive integer value expected"));
		yyval = cb_int1;
	} else {
		if (cb_get_int (yyvsp[0]) < 1) {
			cb_error (_("unsigned positive integer value expected"));
			yyval = cb_int1;
		} else {
			yyval = yyvsp[0];
		}
	}
  }
#line 28445 "parser.c"
    break;

  case 2786:
#line 17927 "parser.y"
  {
	yyval = yyvsp[0];
  }
#line 28453 "parser.c"
    break;

  case 2787:
#line 17931 "parser.y"
  {
	yyval = cb_int0;
  }
#line 28461 "parser.c"
    break;

  case 2788:
#line 17938 "parser.y"
  {
	if (cb_tree_category (yyvsp[0]) == CB_CATEGORY_NUMERIC) {
		if (CB_LITERAL (yyvsp[0])->sign || CB_LITERAL (yyvsp[0])->scale) {
			cb_error (_("integer value expected"));
		} else {
			int	n = cb_get_int (yyvsp[0]);
			if (n < 1 || n > 256) {
				cb_error (_("invalid CLASS value"));
			}
		}
	}
	yyval = yyvsp[0];
  }
#line 28479 "parser.c"
    break;

  case 2789:
#line 17951 "parser.y"
                                { yyval = cb_space; }
#line 28485 "parser.c"
    break;

  case 2790:
#line 17952 "parser.y"
                                { yyval = cb_zero; }
#line 28491 "parser.c"
    break;

  case 2791:
#line 17953 "parser.y"
                                { yyval = cb_quote; }
#line 28497 "parser.c"
    break;

  case 2792:
#line 17954 "parser.y"
                                { yyval = cb_high; }
#line 28503 "parser.c"
    break;

  case 2793:
#line 17955 "parser.y"
                                { yyval = cb_low; }
#line 28509 "parser.c"
    break;

  case 2794:
#line 17956 "parser.y"
                                { yyval = cb_null; }
#line 28515 "parser.c"
    break;

  case 2795:
#line 17961 "parser.y"
  {
	yyval = yyvsp[0];
  }
#line 28523 "parser.c"
    break;

  case 2796:
#line 17965 "parser.y"
  {
	struct cb_literal	*l;

	if (CB_LITERAL_P (yyvsp[0])) {
		/* We must not alter the original definition */
		l = cobc_parse_malloc (sizeof(struct cb_literal));
		*l = *(CB_LITERAL(yyvsp[0]));
		l->all = 1;
		yyval = CB_TREE (l);
	} else {
		yyval = yyvsp[0];
	}
  }
#line 28541 "parser.c"
    break;

  case 2797:
#line 17982 "parser.y"
  {
	yyval = yyvsp[0];
  }
#line 28549 "parser.c"
    break;

  case 2798:
#line 17986 "parser.y"
  {
	yyval = cb_concat_literals (yyvsp[-2], yyvsp[0]);
  }
#line 28557 "parser.c"
    break;

  case 2799:
#line 17992 "parser.y"
                                { yyval = yyvsp[0]; }
#line 28563 "parser.c"
    break;

  case 2800:
#line 17993 "parser.y"
                                { yyval = cb_space; }
#line 28569 "parser.c"
    break;

  case 2801:
#line 17994 "parser.y"
                                { yyval = cb_zero; }
#line 28575 "parser.c"
    break;

  case 2802:
#line 17995 "parser.y"
                                { yyval = cb_quote; }
#line 28581 "parser.c"
    break;

  case 2803:
#line 17996 "parser.y"
                                { yyval = cb_high; }
#line 28587 "parser.c"
    break;

  case 2804:
#line 17997 "parser.y"
                                { yyval = cb_low; }
#line 28593 "parser.c"
    break;

  case 2805:
#line 17998 "parser.y"
                                { yyval = cb_null; }
#line 28599 "parser.c"
    break;

  case 2806:
#line 18002 "parser.y"
                                { yyval = cb_space; }
#line 28605 "parser.c"
    break;

  case 2807:
#line 18003 "parser.y"
                                { yyval = cb_zero; }
#line 28611 "parser.c"
    break;

  case 2808:
#line 18004 "parser.y"
                                { yyval = cb_high; }
#line 28617 "parser.c"
    break;

  case 2809:
#line 18005 "parser.y"
                                { yyval = cb_low; }
#line 28623 "parser.c"
    break;

  case 2810:
#line 18012 "parser.y"
  {
	yyval = cb_build_intrinsic (yyvsp[-1], NULL, yyvsp[0], 0);
  }
#line 28631 "parser.c"
    break;

  case 2811:
#line 18016 "parser.y"
  {
	yyval = cb_build_intrinsic (yyvsp[-4], CB_LIST_INIT (yyvsp[-2]), yyvsp[0], 0);
  }
#line 28639 "parser.c"
    break;

  case 2812:
#line 18020 "parser.y"
  {
	yyval = cb_build_intrinsic (yyvsp[-4], yyvsp[-2], yyvsp[0], 0);
  }
#line 28647 "parser.c"
    break;

  case 2813:
#line 18024 "parser.y"
  {
	yyval = cb_build_intrinsic (yyvsp[-4], yyvsp[-2], yyvsp[0], 0);
  }
#line 28655 "parser.c"
    break;

  case 2814:
#line 18028 "parser.y"
  {
	yyval = cb_build_intrinsic (yyvsp[-3], yyvsp[-1], NULL, 0);
  }
#line 28663 "parser.c"
    break;

  case 2815:
#line 18032 "parser.y"
  {
	CB_PENDING (_("PHYSICAL argument for LENGTH functions"));
	yyval = cb_build_intrinsic (yyvsp[-4], yyvsp[-2], NULL, 0);
  }
#line 28672 "parser.c"
    break;

  case 2816:
#line 18037 "parser.y"
  {
	yyval = cb_build_intrinsic (yyvsp[-3], yyvsp[-1], NULL, 0);
  }
#line 28680 "parser.c"
    break;

  case 2817:
#line 18041 "parser.y"
  {
	yyval = cb_build_intrinsic (yyvsp[-4], yyvsp[-2], yyvsp[0], 0);
  }
#line 28688 "parser.c"
    break;

  case 2818:
#line 18045 "parser.y"
  {
	yyval = cb_build_intrinsic (yyvsp[-4], yyvsp[-2], yyvsp[0], 0);
  }
#line 28696 "parser.c"
    break;

  case 2819:
#line 18049 "parser.y"
  {
	yyval = cb_build_intrinsic (yyvsp[-4], yyvsp[-2], yyvsp[0], 0);
  }
#line 28704 "parser.c"
    break;

  case 2820:
#line 18053 "parser.y"
  {
	  yyval = cb_build_intrinsic (yyvsp[-4], yyvsp[-2], yyvsp[0], 0);
  }
#line 28712 "parser.c"
    break;

  case 2821:
#line 18057 "parser.y"
  {
	  yyval = cb_build_intrinsic (yyvsp[-4], yyvsp[-2], yyvsp[0], 0);
  }
#line 28720 "parser.c"
    break;

  case 2822:
#line 18061 "parser.y"
  {
	yyval = cb_build_intrinsic (yyvsp[-1], yyvsp[0], NULL, 0);
  }
#line 28728 "parser.c"
    break;

  case 2823:
#line 18065 "parser.y"
  {
	yyval = cb_build_intrinsic (yyvsp[-1], yyvsp[0], NULL, 1);
  }
#line 28736 "parser.c"
    break;

  case 2835:
#line 18092 "parser.y"
  {
	yyval = NULL;
  }
#line 28744 "parser.c"
    break;

  case 2836:
#line 18096 "parser.y"
  {
	yyval = CB_BUILD_PAIR (yyvsp[-2], NULL);
  }
#line 28752 "parser.c"
    break;

  case 2837:
#line 18100 "parser.y"
  {
	yyval = CB_BUILD_PAIR (yyvsp[-3], yyvsp[-1]);
  }
#line 28760 "parser.c"
    break;

  case 2838:
#line 18107 "parser.y"
  {
	yyval = NULL;
  }
#line 28768 "parser.c"
    break;

  case 2839:
#line 18111 "parser.y"
  {
	yyval = yyvsp[-1];
  }
#line 28776 "parser.c"
    break;

  case 2840:
#line 18115 "parser.y"
  {
	yyval = NULL;
  }
#line 28784 "parser.c"
    break;

  case 2841:
#line 18122 "parser.y"
  {
	cb_tree	x;

	x = CB_LIST_INIT (yyvsp[0]);
	yyval = cb_list_add (x, cb_int0);
  }
#line 28795 "parser.c"
    break;

  case 2842:
#line 18129 "parser.y"
  {
	cb_tree	x;

	x = CB_LIST_INIT (yyvsp[-2]);
	yyval = cb_list_add (x, cb_int1);
  }
#line 28806 "parser.c"
    break;

  case 2843:
#line 18136 "parser.y"
  {
	cb_tree	x;

	x = CB_LIST_INIT (yyvsp[-2]);
	yyval = cb_list_add (x, cb_int2);
  }
#line 28817 "parser.c"
    break;

  case 2844:
#line 18145 "parser.y"
  {
	suppress_data_exceptions = 1;
  }
#line 28825 "parser.c"
    break;

  case 2845:
#line 18149 "parser.y"
  {
	suppress_data_exceptions = 0;
	if (CB_NUMERIC_LITERAL_P(yyvsp[0])) {
		cb_error_x (yyvsp[0], _("a non-numeric literal is expected here"));
		yyval = CB_LIST_INIT (cb_error_node);
	} else {
		yyval = CB_LIST_INIT (yyvsp[0]);
	}
  }
#line 28839 "parser.c"
    break;

  case 2846:
#line 18162 "parser.y"
  {
	cb_tree	x;

	x = CB_LIST_INIT (yyvsp[0]);
	yyval = cb_list_add (x, cb_null);
  }
#line 28850 "parser.c"
    break;

  case 2847:
#line 18169 "parser.y"
  {
	cb_tree	x;

	x = CB_LIST_INIT (yyvsp[-2]);
	yyval = cb_list_add (x, yyvsp[0]);
  }
#line 28861 "parser.c"
    break;

  case 2848:
#line 18179 "parser.y"
  {
	cb_tree	x;

	x = CB_LIST_INIT (yyvsp[0]);
	yyval = cb_list_add (x, cb_null);
  }
#line 28872 "parser.c"
    break;

  case 2849:
#line 18186 "parser.y"
  {
	cb_tree	x;

	x = CB_LIST_INIT (yyvsp[-2]);
	yyval = cb_list_add (x, cb_ref (yyvsp[0]));
  }
#line 28883 "parser.c"
    break;

  case 2850:
#line 18196 "parser.y"
  {
	yyval = cb_list_add (yyvsp[0], cb_int0);
  }
#line 28891 "parser.c"
    break;

  case 2851:
#line 18200 "parser.y"
  {
	const int	num_args = cb_list_length (yyvsp[-2]);

	if (num_args == 4) {
		cb_error_x (yyvsp[-2], _("cannot specify offset and SYSTEM-OFFSET at the same time"));
	}

	yyval = cb_list_add (yyvsp[-2], cb_int1);
  }
#line 28905 "parser.c"
    break;

  case 2852:
#line 18213 "parser.y"
  {
	yyval = cb_list_add (yyvsp[0], cb_int0);
  }
#line 28913 "parser.c"
    break;

  case 2853:
#line 18217 "parser.y"
  {
	const int	num_args = cb_list_length (yyvsp[-2]);

	if (num_args == 3) {
		cb_error_x (yyvsp[-2], _("cannot specify offset and SYSTEM-OFFSET at the same time"));
	}

	yyval = cb_list_add (yyvsp[-2], cb_int1);
  }
#line 28927 "parser.c"
    break;

  case 2854:
#line 18231 "parser.y"
  {
	non_const_word = 1;
  }
#line 28935 "parser.c"
    break;

  case 2855:
#line 18239 "parser.y"
                                { yyval = cb_int0; }
#line 28941 "parser.c"
    break;

  case 2856:
#line 18240 "parser.y"
                                { yyval = cb_int1; }
#line 28947 "parser.c"
    break;

  case 2857:
#line 18244 "parser.y"
                                { yyval = NULL; }
#line 28953 "parser.c"
    break;

  case 2858:
#line 18245 "parser.y"
                        { yyval = cb_int0; }
#line 28959 "parser.c"
    break;

  case 2859:
#line 18246 "parser.y"
                        { yyval = cb_int1; }
#line 28965 "parser.c"
    break;

  case 2860:
#line 18250 "parser.y"
                                { yyval = NULL; }
#line 28971 "parser.c"
    break;

  case 2861:
#line 18251 "parser.y"
                                { yyval = cb_int1; }
#line 28977 "parser.c"
    break;

  case 2862:
#line 18256 "parser.y"
  {
	yyval = NULL;
  }
#line 28985 "parser.c"
    break;

  case 2863:
#line 18260 "parser.y"
  {
	yyval = yyvsp[0];
  }
#line 28993 "parser.c"
    break;

  case 2864:
#line 18267 "parser.y"
  {
	yyval = NULL;
  }
#line 29001 "parser.c"
    break;

  case 2865:
#line 18271 "parser.y"
  {
	yyval = yyvsp[0];
  }
#line 29009 "parser.c"
    break;

  case 2866:
#line 18278 "parser.y"
                                { yyval = cb_int0; }
#line 29015 "parser.c"
    break;

  case 2867:
#line 18279 "parser.y"
                                { yyval = cb_int1; }
#line 29021 "parser.c"
    break;

  case 2868:
#line 18280 "parser.y"
                                { yyval = cb_int2; }
#line 29027 "parser.c"
    break;

  case 2869:
#line 18284 "parser.y"
                                { yyval = NULL; }
#line 29033 "parser.c"
    break;

  case 2870:
#line 18285 "parser.y"
                                { yyval = cb_true; }
#line 29039 "parser.c"
    break;

  case 2871:
#line 18289 "parser.y"
                                { yyval = cb_int (cb_flag_optional_file); }
#line 29045 "parser.c"
    break;

  case 2872:
#line 18290 "parser.y"
                                { yyval = cb_int1; }
#line 29051 "parser.c"
    break;

  case 2873:
#line 18291 "parser.y"
                                { yyval = cb_int0; }
#line 29057 "parser.c"
    break;

  case 2874:
#line 18296 "parser.y"
  {
	yyval = cb_int0;
  }
#line 29065 "parser.c"
    break;

  case 2875:
#line 18300 "parser.y"
  {
	if (yyvsp[0]) {
		yyval = yyvsp[0];
	} else {
		yyval = default_rounded_mode;
	}
	cobc_cs_check = 0;
  }
#line 29078 "parser.c"
    break;

  case 2876:
#line 18312 "parser.y"
  {
	yyval = NULL;
	cobc_cs_check = 0;
  }
#line 29087 "parser.c"
    break;

  case 2877:
#line 18317 "parser.y"
  {
	yyval = yyvsp[0];
	cobc_cs_check = 0;
  }
#line 29096 "parser.c"
    break;

  case 2878:
#line 18325 "parser.y"
  {
	yyval = cb_int (COB_STORE_ROUND | COB_STORE_AWAY_FROM_ZERO);
  }
#line 29104 "parser.c"
    break;

  case 2879:
#line 18329 "parser.y"
  {
	yyval = cb_int (COB_STORE_ROUND | COB_STORE_NEAR_AWAY_FROM_ZERO);
  }
#line 29112 "parser.c"
    break;

  case 2880:
#line 18333 "parser.y"
  {
	yyval = cb_int (COB_STORE_ROUND | COB_STORE_NEAR_EVEN);
  }
#line 29120 "parser.c"
    break;

  case 2881:
#line 18337 "parser.y"
  {
	yyval = cb_int (COB_STORE_ROUND | COB_STORE_NEAR_TOWARD_ZERO);
  }
#line 29128 "parser.c"
    break;

  case 2882:
#line 18341 "parser.y"
  {
	yyval = cb_int (COB_STORE_ROUND | COB_STORE_PROHIBITED);
  }
#line 29136 "parser.c"
    break;

  case 2883:
#line 18345 "parser.y"
  {
	yyval = cb_int (COB_STORE_ROUND | COB_STORE_TOWARD_GREATER);
  }
#line 29144 "parser.c"
    break;

  case 2884:
#line 18349 "parser.y"
  {
	yyval = cb_int (COB_STORE_ROUND | COB_STORE_TOWARD_LESSER);
  }
#line 29152 "parser.c"
    break;

  case 2885:
#line 18353 "parser.y"
  {
	yyval = cb_int (COB_STORE_ROUND | COB_STORE_TRUNCATION);
  }
#line 29160 "parser.c"
    break;

  case 2886:
#line 18359 "parser.y"
                                { yyval = NULL; }
#line 29166 "parser.c"
    break;

  case 2887:
#line 18360 "parser.y"
                                { yyval = cb_int1; }
#line 29172 "parser.c"
    break;

  case 2888:
#line 18364 "parser.y"
                                { yyval = NULL; }
#line 29178 "parser.c"
    break;

  case 2889:
#line 18366 "parser.y"
  {
	cb_tree	x;

	x = CB_LIST_INIT (yyvsp[-3]);
	yyval = cb_list_add (x, yyvsp[-1]);
  }
#line 29189 "parser.c"
    break;

  case 2890:
#line 18375 "parser.y"
                                { yyval = NULL; }
#line 29195 "parser.c"
    break;

  case 2891:
#line 18377 "parser.y"
  {
	yyval = yyvsp[0];
  }
#line 29203 "parser.c"
    break;

  case 2892:
#line 18386 "parser.y"
  {
	cobc_repeat_last_token = 1;
  }
#line 29211 "parser.c"
    break;

  case 2893:
#line 18390 "parser.y"
  {
	cobc_repeat_last_token = 1;
  }
#line 29219 "parser.c"
    break;

  case 2894:
#line 18394 "parser.y"
  {
	cobc_repeat_last_token = 0;
  }
#line 29227 "parser.c"
    break;

  case 2895:
#line 18398 "parser.y"
  {
	cobc_repeat_last_token = 0;
  }
#line 29235 "parser.c"
    break;


#line 29239 "parser.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[+*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 18596 "parser.y"
