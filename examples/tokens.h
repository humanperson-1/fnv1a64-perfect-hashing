/**
 * examples/tokens.h
 * Example construction of the hash items.
 */

#ifndef     EXAMPLES_TOKENS_
#define     EXAMPLES_TOKENS_

#include    "hash_table.h"

/*-STRING-TOKENS------------------------------------------------------------------------------------------------------*/

#define TOK_KWRD_T      /* str, tok, grp */                                                                            \
    X( "if",        tok_if,     tok_kwrd_t  )                                                                          \
    X( "elseif",    tok_elsif,  tok_kwrd_t  )                                                                          \
    X( "else",      tok_else,   tok_kwrd_t  )                                                                          \
    X( "while",     tok_while,  tok_kwrd_t  )                                                                          \
    X( "repeat",    tok_repeat, tok_kwrd_t  )                                                                          \
    X( "with",      tok_with,   tok_kwrd_t  )                                                                          \
    X( "check",     tok_check,  tok_kwrd_t  )                                                                          \
    X( "continue",  tok_cntn,   tok_kwrd_t  )                                                                          \
    X( "break",     tok_break,  tok_kwrd_t  )                                                                          \
    X( "goto",      tok_goto,   tok_kwrd_t  )                                                                          \
    X( "return",    tok_ret,    tok_kwrd_t  )                                                                          \
    X( "critical",  tok_crtcl,  tok_kwrd_t  )                                                                          \
    X( "unroll",    tok_unroll, tok_kwrd_t  )                                                                          \
    X( "alias",     tok_alias,  tok_kwrd_t  )                                                                          \
    X( "sleep",     tok_sleep,  tok_kwrd_t  )                                                                          \
    X( "nop",       tok_nop,    tok_kwrd_t  )                                                                          \
    X( "wdr",       tok_wdr,    tok_kwrd_t  )                                                                          \
    X( "spm",       tok_spm,    tok_kwrd_t  )                                                                          \
    X( "BREAK",     tok_BREAK,  tok_kwrd_t  )

#define TOK_DTYPE_T     /* str, tok, grp */                                                                            \
    X( "byte",      tok_byte,   tok_dtype_t )                                                                          \
    X( "word",      tok_word,   tok_dtype_t )                                                                          \
    X( "ubyte",     tok_ubyte,  tok_dtype_t )                                                                          \
    X( "uword",     tok_uword,  tok_dtype_t )                                                                          \
    X( "void",      tok_void,   tok_dtype_t )                                                                          \
    X( "frac",      tok_frac,   tok_dtype_t )                                                                          \
    X( "ufrac",     tok_ufrac,  tok_dtype_t )                                                                          \
    X( "flash",     tok_flash,  tok_dtype_t )                                                                          \
    X( "eeprom",    tok_eeprom, tok_dtype_t )                                                                          \
    X( "isr",       tok_isr,    tok_dtype_t )                                                                          \
    X( "status",    tok_status, tok_dtype_t )                                                                          \
    X( "noreturn",  tok_noret,  tok_dtype_t )

#define TOK_MOD_T       /* str, tok, grp */                                                                            \
    X( "extern",    tok_extern, tok_mod_t   )                                                                          \
    X( "atomic",    tok_atomic, tok_mod_t   )                                                                          \
    X( "stack",     tok_stack,  tok_mod_t   )                                                                          \
    X( "constexpr", tok_cexpr,  tok_mod_t   )

#define TOK_SPITM_T     /* str, tok, grp */                                                                            \
    X( "null",      tok_null,   tok_spitm_t )                                                                          \
    X( "high",      tok_high,   tok_spitm_t )                                                                          \
    X( "uhigh",     tok_uhigh,  tok_spitm_t )                                                                          \
    X( "swap",      tok_swap,   tok_spitm_t )                                                                          \
    X( "fracb",     tok_fracb,  tok_spitm_t )                                                                          \
    X( "abs",       tok_abs,    tok_spitm_t )                                                                          \
    X( "strlen",    tok_strlen, tok_spitm_t )                                                                          \
    X( "sizeof",    tok_sizeof, tok_spitm_t )

#define TOK_FLAG_T      /* str, tok, grp */                                                                            \
    X( "I",         tok_I,      tok_flag_t  )                                                                          \
    X( "T",         tok_T,      tok_flag_t  )                                                                          \
    X( "H",         tok_H,      tok_flag_t  )                                                                          \
    X( "S",         tok_S,      tok_flag_t  )                                                                          \
    X( "V",         tok_V,      tok_flag_t  )                                                                          \
    X( "N",         tok_N,      tok_flag_t  )                                                                          \
    X( "Z",         tok_Z,      tok_flag_t  )                                                                          \
    X( "C",         tok_C,      tok_flag_t  )

#define TOK_REG_Z_T     /* str, tok, grp */                                                                            \
    X( "z",         tok_z,      tok_reg_t   )       /* conflicts with the `Z` flag */

#define TOK_REG_T       /* str, tok, grp */                                                                            \
    X( "x",         tok_x,      tok_reg_t   )                                                                          \
    X( "xl",        tok_xl,     tok_reg_t   )                                                                          \
    X( "xh",        tok_xh,     tok_reg_t   )                                                                          \
    X( "y",         tok_y,      tok_reg_t   )                                                                          \
    X( "yl",        tok_yl,     tok_reg_t   )                                                                          \
    X( "yh",        tok_yh,     tok_reg_t   )                                                                          \
 /* X( "z",         tok_z,      tok_reg_t   ) */                                                                       \
    X( "zl",        tok_zl,     tok_reg_t   )                                                                          \
    X( "zh",        tok_zh,     tok_reg_t   )                                                                          \
    X( "r0",        tok_r0,     tok_reg_t   )                                                                          \
    X( "r1",        tok_r1,     tok_reg_t   )                                                                          \
    X( "r2",        tok_r2,     tok_reg_t   )                                                                          \
    X( "r3",        tok_r3,     tok_reg_t   )                                                                          \
    X( "r4",        tok_r4,     tok_reg_t   )                                                                          \
    X( "r5",        tok_r5,     tok_reg_t   )                                                                          \
    X( "r6",        tok_r6,     tok_reg_t   )                                                                          \
    X( "r7",        tok_r7,     tok_reg_t   )                                                                          \
    X( "r8",        tok_r8,     tok_reg_t   )                                                                          \
    X( "r9",        tok_r9,     tok_reg_t   )                                                                          \
    X( "r10",       tok_r10,    tok_reg_t   )                                                                          \
    X( "r11",       tok_r11,    tok_reg_t   )                                                                          \
    X( "r12",       tok_r12,    tok_reg_t   )                                                                          \
    X( "r13",       tok_r13,    tok_reg_t   )                                                                          \
    X( "r14",       tok_r14,    tok_reg_t   )                                                                          \
    X( "r15",       tok_r15,    tok_reg_t   )                                                                          \
    X( "r16",       tok_r16,    tok_reg_t   )                                                                          \
    X( "r17",       tok_r17,    tok_reg_t   )                                                                          \
    X( "r18",       tok_r18,    tok_reg_t   )                                                                          \
    X( "r19",       tok_r19,    tok_reg_t   )                                                                          \
    X( "r20",       tok_r20,    tok_reg_t   )                                                                          \
    X( "r21",       tok_r21,    tok_reg_t   )                                                                          \
    X( "r22",       tok_r22,    tok_reg_t   )                                                                          \
    X( "r23",       tok_r23,    tok_reg_t   )                                                                          \
    X( "r24",       tok_r24,    tok_reg_t   )                                                                          \
    X( "r25",       tok_r25,    tok_reg_t   )                                                                          \
    X( "r26",       tok_r26,    tok_reg_t   )                                                                          \
    X( "r27",       tok_r27,    tok_reg_t   )                                                                          \
    X( "r28",       tok_r28,    tok_reg_t   )                                                                          \
    X( "r29",       tok_r29,    tok_reg_t   )                                                                          \
    X( "r30",       tok_r30,    tok_reg_t   )                                                                          \
    X( "r31",       tok_r31,    tok_reg_t   )

#define TOK_BAN_T       /* str, tok, grp */                                                                            \
    X( "pc",        tok_pc,     tok_ban_t   )

#define TOK_STRC_T      /* macro, enum_t */                                                                            \
    Y( TOK_KWRD_T,  tok_kwrd_t  )                                                                                      \
    Y( TOK_DTYPE_T, tok_dtype_t )                                                                                      \
    Y( TOK_MOD_T,   tok_mod_t   )                                                                                      \
    Y( TOK_SPITM_T, tok_spitm_t )                                                                                      \
    Y( TOK_FLAG_T,  tok_flag_t  )                                                                                      \
    Y( TOK_REG_Z_T, dscrd_00__  )                   /* tok_reg_t in usage */

#define TOK_STRN_T      /* macro, enum_t */                                                                            \
    Y( TOK_REG_T,   tok_reg_t )                                                                                        \
    Y( TOK_BAN_T,   tok_ban_t )

#define TOK_STR_T       TOK_STRC_T  TOK_STRN_T

typedef enum {                                                                  // string token type enum
    str_no_grp=0,
#define Y( _macro, enum_t )     enum_t,
    TOK_STR_T
#undef  Y
} tok_str_t;

typedef enum {                                                                  // string token enum
    str_no_tok=0,
#define Y( macro, _enum_t )     macro
#define X( _str, tok, _grp )    tok,
    TOK_STR_T
#undef  X
#undef  Y
} tok_str_tok;

typedef struct {                                                                // string token struct
            tok_str_t       type;
            tok_str_tok     tok;
} tok_str;

static  const   hash_itm    str_itms_[]     =   {                               // string hash group
#define Y( macro, _enum_t )     macro
#define X( strx, tokx, grpx )   { .str=strx, .tok_str=#tokx, .grp_str=#grpx, .no_case=false },
    TOK_STRC_T
#undef  X
#undef  Y
#define Y( macro, _enum_t )     macro
#define X( strx, tokx, grpx )   { .str=strx, .tok_str=#tokx, .grp_str=#grpx, .no_case=true },
    TOK_STRN_T
#undef  X
#undef  Y
};

#endif   /* EXAMPLES_TOKENS_ */
