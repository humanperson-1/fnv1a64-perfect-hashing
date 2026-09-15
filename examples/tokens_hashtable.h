/**
 * examples/tokens_hashtable.h
 * AUTO-GENERATED - DO NOT MANUALLY MODIFY; see README.md for usage.
 */

#ifndef STR_HASH_TABLE_
#define STR_HASH_TABLE_

#include    <stddef.h>
#include    <string.h>
#include    <stdint.h>

#include    "hash_table.h"
#include    "tokens.h"

/*-STR-CONSTANTS------------------------------------------------------------------------------------------------------*/

constexpr   uint64_t    STR_OFFSET          =   0xa92fb64e5b7e69ce;             // str hash offset
constexpr   size_t      STR_TBL_S           =   512;                            // str hash table size

constexpr   size_t      STR_MAX_STR         =   9;                              // str hash table max string length

/*-STR-HASH-TABLE-----------------------------------------------------------------------------------------------------*/

const   hash_entry  str_table[STR_TBL_S]    =   {                               // str hash table
    [ 83]   =   { 0x6ef5ccaafcce0a53, "if",        2, { .tok=tok_if,     .grp=tok_kwrd_t  } },
    [375]   =   { 0xfbd4cda70addb577, "elseif",    6, { .tok=tok_elsif,  .grp=tok_kwrd_t  } },
    [483]   =   { 0xc632d698cdbb59e3, "else",      4, { .tok=tok_else,   .grp=tok_kwrd_t  } },
    [333]   =   { 0x1dd05bdebb28b74d, "while",     5, { .tok=tok_while,  .grp=tok_kwrd_t  } },
    [ 89]   =   { 0x9faa59c85a6c7459, "repeat",    6, { .tok=tok_repeat, .grp=tok_kwrd_t  } },
    [323]   =   { 0x7ad38d099dc0fd43, "with",      4, { .tok=tok_with,   .grp=tok_kwrd_t  } },
    [270]   =   { 0xa924d6501996710e, "check",     5, { .tok=tok_check,  .grp=tok_kwrd_t  } },
    [280]   =   { 0x78c582dfb631f918, "continue",  8, { .tok=tok_cntn,   .grp=tok_kwrd_t  } },
    [171]   =   { 0x071e558e12ee9aab, "break",     5, { .tok=tok_break,  .grp=tok_kwrd_t  } },
    [ 96]   =   { 0xb9d3b98573ddba60, "goto",      4, { .tok=tok_goto,   .grp=tok_kwrd_t  } },
    [324]   =   { 0xa5825decb844c744, "return",    6, { .tok=tok_ret,    .grp=tok_kwrd_t  } },
    [419]   =   { 0x7405d4d8ad96ada3, "critical",  8, { .tok=tok_crtcl,  .grp=tok_kwrd_t  } },
    [260]   =   { 0x8ba0ef2220186704, "unroll",    6, { .tok=tok_unroll, .grp=tok_kwrd_t  } },
    [265]   =   { 0x7f24ee13024da509, "alias",     5, { .tok=tok_alias,  .grp=tok_kwrd_t  } },
    [206]   =   { 0xe11e77ff1b38f8ce, "sleep",     5, { .tok=tok_sleep,  .grp=tok_kwrd_t  } },
    [ 65]   =   { 0x8a2f37d6d29d9841, "nop",       3, { .tok=tok_nop,    .grp=tok_kwrd_t  } },
    [283]   =   { 0x63713ad6b0842f1b, "wdr",       3, { .tok=tok_wdr,    .grp=tok_kwrd_t  } },
    [126]   =   { 0x8718dfd66f77527e, "spm",       3, { .tok=tok_spm,    .grp=tok_kwrd_t  } },
    [438]   =   { 0x5c506f335bbf83b6, "BREAK",     5, { .tok=tok_BREAK,  .grp=tok_kwrd_t  } },
    [154]   =   { 0x83bba19ead4c469a, "byte",      4, { .tok=tok_byte,   .grp=tok_dtype_t } },
    [131]   =   { 0x8d14e3097cbabe83, "word",      4, { .tok=tok_word,   .grp=tok_dtype_t } },
    [159]   =   { 0x99725a84a7c93c9f, "ubyte",     5, { .tok=tok_ubyte,  .grp=tok_dtype_t } },
    [197]   =   { 0xd832c624548c46c5, "uword",     5, { .tok=tok_uword,  .grp=tok_dtype_t } },
    [450]   =   { 0x4c92af02bf4f0dc2, "void",      4, { .tok=tok_void,   .grp=tok_dtype_t } },
    [240]   =   { 0x85c7d07a5ef066f0, "frac",      4, { .tok=tok_frac,   .grp=tok_dtype_t } },
    [266]   =   { 0xb55edba7177f570a, "ufrac",     5, { .tok=tok_ufrac,  .grp=tok_dtype_t } },
    [201]   =   { 0xc957a315147982c9, "flash",     5, { .tok=tok_flash,  .grp=tok_dtype_t } },
    [ 18]   =   { 0x9e1df27c1afd8212, "eeprom",    6, { .tok=tok_eeprom, .grp=tok_dtype_t } },
    [ 70]   =   { 0xc7b23ed6bc7be846, "isr",       3, { .tok=tok_isr,    .grp=tok_dtype_t } },
    [411]   =   { 0x97c0706b04d46b9b, "status",    6, { .tok=tok_status, .grp=tok_dtype_t } },
    [454]   =   { 0xa1f5c081c0945dc6, "noreturn",  8, { .tok=tok_noret,  .grp=tok_dtype_t } },
    [  2]   =   { 0xa23846924f1e5a02, "extern",    6, { .tok=tok_extern, .grp=tok_mod_t   } },
    [346]   =   { 0x3981446d04fef55a, "atomic",    6, { .tok=tok_atomic, .grp=tok_mod_t   } },
    [504]   =   { 0x3f32294678854df8, "stack",     5, { .tok=tok_stack,  .grp=tok_mod_t   } },
    [ 92]   =   { 0x4fa0c032b675765c, "constexpr", 9, { .tok=tok_cexpr,  .grp=tok_mod_t   } },
    [439]   =   { 0xb6a4ce386029f7b7, "null",      4, { .tok=tok_null,   .grp=tok_spitm_t } },
    [480]   =   { 0x8ec2a46ec11a0de0, "high",      4, { .tok=tok_high,   .grp=tok_spitm_t } },
    [344]   =   { 0x377867b932028358, "uhigh",     5, { .tok=tok_uhigh,  .grp=tok_spitm_t } },
    [101]   =   { 0xc14f092c1339ac65, "swap",      4, { .tok=tok_swap,   .grp=tok_spitm_t } },
    [250]   =   { 0x8a3e28c2f595e4fa, "fracb",     5, { .tok=tok_fracb,  .grp=tok_spitm_t } },
    [204]   =   { 0x0ccb9fd6ae14c4cc, "abs",       3, { .tok=tok_abs,    .grp=tok_spitm_t } },
    [291]   =   { 0x7160060bd9fc2b23, "strlen",    6, { .tok=tok_strlen, .grp=tok_spitm_t } },
    [162]   =   { 0x218d70d0b44224a2, "sizeof",    6, { .tok=tok_sizeof, .grp=tok_spitm_t } },
    [ 64]   =   { 0xfa7c4e258db11e40, "I",         1, { .tok=tok_I,      .grp=tok_flag_t  } },
    [395]   =   { 0xfa7c61258db1118b, "T",         1, { .tok=tok_T,      .grp=tok_flag_t  } },
    [407]   =   { 0xfa7c4d258db10397, "H",         1, { .tok=tok_H,      .grp=tok_flag_t  } },
    [482]   =   { 0xfa7c64258db111e2, "S",         1, { .tok=tok_S,      .grp=tok_flag_t  } },
    [109]   =   { 0xfa7c5f258db1326d, "V",         1, { .tok=tok_V,      .grp=tok_flag_t  } },
    [421]   =   { 0xfa7c47258db103a5, "N",         1, { .tok=tok_N,      .grp=tok_flag_t  } },
    [345]   =   { 0xfa7c5b258db13d59, "Z",         1, { .tok=tok_Z,      .grp=tok_flag_t  } },
    [178]   =   { 0xfa7c54258db10eb2, "C",         1, { .tok=tok_C,      .grp=tok_flag_t  } },
    [505]   =   { 0xfa7c7b258db1e7f9, "z",         1, { .tok=tok_z,      .grp=tok_reg_t   } },
    [199]   =   { 0xfa7c5d258db134c7, "X",         1, { .tok=tok_x,      .grp=tok_reg_t   } },
    [359]   =   { 0xfa7c7d258db1dd67, "x",         1, { .tok=tok_x,      .grp=tok_reg_t   } },
    [  0]   =   { 0x6ebbf4aafcb16600, "XL",        2, { .tok=tok_xl,     .grp=tok_reg_t   } },
    [224]   =   { 0x6ebbd4aafcb188e0, "Xl",        2, { .tok=tok_xl,     .grp=tok_reg_t   } },
    [352]   =   { 0x6f28b4aafd4e4360, "xL",        2, { .tok=tok_xl,     .grp=tok_reg_t   } },
    [128]   =   { 0x6f28d4aafd4ffa80, "xl",        2, { .tok=tok_xl,     .grp=tok_reg_t   } },
    [372]   =   { 0x6ebbf0aafcb17b74, "XH",        2, { .tok=tok_xh,     .grp=tok_reg_t   } },
    [468]   =   { 0x6ebbd0aafcb185d4, "Xh",        2, { .tok=tok_xh,     .grp=tok_reg_t   } },
    [ 84]   =   { 0x6f28b0aafd4e4054, "xH",        2, { .tok=tok_xh,     .grp=tok_reg_t   } },
    [500]   =   { 0x6f28d0aafd4ff7f4, "xh",        2, { .tok=tok_xh,     .grp=tok_reg_t   } },
    [432]   =   { 0xfa7c5e258db135b0, "Y",         1, { .tok=tok_y,      .grp=tok_reg_t   } },
    [464]   =   { 0xfa7c7e258db1dfd0, "y",         1, { .tok=tok_y,      .grp=tok_reg_t   } },
    [273]   =   { 0x6ebfd2aafcb19311, "YL",        2, { .tok=tok_yl,     .grp=tok_reg_t   } },
    [177]   =   { 0x6ebff2aafcb18ab1, "Yl",        2, { .tok=tok_yl,     .grp=tok_reg_t   } },
    [497]   =   { 0x6f2c12aafd45dff1, "yL",        2, { .tok=tok_yl,     .grp=tok_reg_t   } },
    [ 81]   =   { 0x6f2bf2aafd426451, "yl",        2, { .tok=tok_yl,     .grp=tok_reg_t   } },
    [ 45]   =   { 0x6ebfd6aafcb19e2d, "YH",        2, { .tok=tok_yh,     .grp=tok_reg_t   } },
    [ 77]   =   { 0x6ebff6aafcb1884d, "Yh",        2, { .tok=tok_yh,     .grp=tok_reg_t   } },
    [141]   =   { 0x6f2c16aafd45c28d, "yH",        2, { .tok=tok_yh,     .grp=tok_reg_t   } },
    [365]   =   { 0x6f2bf6aafd426b6d, "yh",        2, { .tok=tok_yh,     .grp=tok_reg_t   } },
    [314]   =   { 0x6eb510aafcb1b33a, "ZL",        2, { .tok=tok_zl,     .grp=tok_reg_t   } },
    [410]   =   { 0x6eb4f0aafcb09d9a, "Zl",        2, { .tok=tok_zl,     .grp=tok_reg_t   } },
    [ 26]   =   { 0x6f21d0aafd40d81a, "zL",        2, { .tok=tok_zl,     .grp=tok_reg_t   } },
    [442]   =   { 0x6f21f0aafd40cfba, "zl",        2, { .tok=tok_zl,     .grp=tok_reg_t   } },
    [246]   =   { 0x6eb514aafcb1bef6, "ZH",        2, { .tok=tok_zh,     .grp=tok_reg_t   } },
    [342]   =   { 0x6eb4f4aafcb08756, "Zh",        2, { .tok=tok_zh,     .grp=tok_reg_t   } },
    [470]   =   { 0x6f21d4aafd40dbd6, "zH",        2, { .tok=tok_zh,     .grp=tok_reg_t   } },
    [374]   =   { 0x6f21f4aafd40b176, "zh",        2, { .tok=tok_zh,     .grp=tok_reg_t   } },
    [390]   =   { 0x6ed09caafcccc586, "R0",        2, { .tok=tok_r0,     .grp=tok_reg_t   } },
    [294]   =   { 0x6f3d1caafd454d26, "r0",        2, { .tok=tok_r0,     .grp=tok_reg_t   } },
    [373]   =   { 0x6ed09daafcccc775, "R1",        2, { .tok=tok_r1,     .grp=tok_reg_t   } },
    [149]   =   { 0x6f3d1daafd454e95, "r1",        2, { .tok=tok_r1,     .grp=tok_reg_t   } },
    [ 56]   =   { 0x6ed09eaafcccc238, "R2",        2, { .tok=tok_r2,     .grp=tok_reg_t   } },
    [ 88]   =   { 0x6f3d1eaafd454a58, "r2",        2, { .tok=tok_r2,     .grp=tok_reg_t   } },
    [495]   =   { 0x6ed09faafcccc1ef, "R3",        2, { .tok=tok_r3,     .grp=tok_reg_t   } },
    [271]   =   { 0x6f3d1faafd45490f, "r3",        2, { .tok=tok_r3,     .grp=tok_reg_t   } },
    [202]   =   { 0x6ed098aafccccaca, "R4",        2, { .tok=tok_r4,     .grp=tok_reg_t   } },
    [106]   =   { 0x6f3d18aafd45526a, "r4",        2, { .tok=tok_r4,     .grp=tok_reg_t   } },
    [441]   =   { 0x6ed099aafccccdb9, "R5",        2, { .tok=tok_r5,     .grp=tok_reg_t   } },
    [473]   =   { 0x6f3d19aafd4555d9, "r5",        2, { .tok=tok_r5,     .grp=tok_reg_t   } },
    [364]   =   { 0x6ed09aaafccccf6c, "R6",        2, { .tok=tok_r6,     .grp=tok_reg_t   } },
    [140]   =   { 0x6f3d1aaafd45548c, "r6",        2, { .tok=tok_r6,     .grp=tok_reg_t   } },
    [211]   =   { 0x6ed09baafcccccd3, "R7",        2, { .tok=tok_r7,     .grp=tok_reg_t   } },
    [115]   =   { 0x6f3d1baafd455473, "r7",        2, { .tok=tok_r7,     .grp=tok_reg_t   } },
    [110]   =   { 0x6ed0a4aafcccc26e, "R8",        2, { .tok=tok_r8,     .grp=tok_reg_t   } },
    [398]   =   { 0x6f3d24aafd457b8e, "r8",        2, { .tok=tok_r8,     .grp=tok_reg_t   } },
    [477]   =   { 0x6ed0a5aafccccddd, "R9",        2, { .tok=tok_r9,     .grp=tok_reg_t   } },
    [381]   =   { 0x6f3d25aafd45457d, "r9",        2, { .tok=tok_r9,     .grp=tok_reg_t   } },
    [459]   =   { 0x68d6d7d62ef853cb, "R10",       3, { .tok=tok_r10,    .grp=tok_reg_t   } },
    [427]   =   { 0x7d2c77d69f5955ab, "r10",       3, { .tok=tok_r10,    .grp=tok_reg_t   } },
    [188]   =   { 0x68d6d6d62ef854bc, "R11",       3, { .tok=tok_r11,    .grp=tok_reg_t   } },
    [ 28]   =   { 0x7d2c76d69f59561c, "r11",       3, { .tok=tok_r11,    .grp=tok_reg_t   } },
    [353]   =   { 0x68d6d5d62ef85561, "R12",       3, { .tok=tok_r12,    .grp=tok_reg_t   } },
    [193]   =   { 0x7d2c75d69f596ac1, "r12",       3, { .tok=tok_r12,    .grp=tok_reg_t   } },
    [466]   =   { 0x68d6d4d62ef8abd2, "R13",       3, { .tok=tok_r13,    .grp=tok_reg_t   } },
    [434]   =   { 0x7d2c74d69f5969b2, "r13",       3, { .tok=tok_r13,    .grp=tok_reg_t   } },
    [135]   =   { 0x68d6d3d62ef8ae87, "R14",       3, { .tok=tok_r14,    .grp=tok_reg_t   } },
    [103]   =   { 0x7d2c73d69f596867, "r14",       3, { .tok=tok_r14,    .grp=tok_reg_t   } },
    [328]   =   { 0x68d6d2d62ef8a948, "R15",       3, { .tok=tok_r15,    .grp=tok_reg_t   } },
    [296]   =   { 0x7d2c72d69f596b28, "r15",       3, { .tok=tok_r15,    .grp=tok_reg_t   } },
    [ 61]   =   { 0x68d6d1d62ef8a83d, "R16",       3, { .tok=tok_r16,    .grp=tok_reg_t   } },
    [413]   =   { 0x7d2c71d69f59699d, "r16",       3, { .tok=tok_r16,    .grp=tok_reg_t   } },
    [238]   =   { 0x68d6d0d62ef8a8ee, "R17",       3, { .tok=tok_r17,    .grp=tok_reg_t   } },
    [ 78]   =   { 0x7d2c70d69f59664e, "r17",       3, { .tok=tok_r17,    .grp=tok_reg_t   } },
    [339]   =   { 0x68d6cfd62ef8b953, "R18",       3, { .tok=tok_r18,    .grp=tok_reg_t   } },
    [307]   =   { 0x7d2c6fd69f597b33, "r18",       3, { .tok=tok_r18,    .grp=tok_reg_t   } },
    [  4]   =   { 0x68d6ced62ef8ba04, "R19",       3, { .tok=tok_r19,    .grp=tok_reg_t   } },
    [484]   =   { 0x7d2c6ed69f597de4, "r19",       3, { .tok=tok_r19,    .grp=tok_reg_t   } },
    [144]   =   { 0x68da3dd62eeb5a90, "R20",       3, { .tok=tok_r20,    .grp=tok_reg_t   } },
    [112]   =   { 0x7d2fddd69f57d870, "r20",       3, { .tok=tok_r20,    .grp=tok_reg_t   } },
    [ 47]   =   { 0x68da3ed62eeb562f, "R21",       3, { .tok=tok_r21,    .grp=tok_reg_t   } },
    [399]   =   { 0x7d2fded69f57d98f, "r21",       3, { .tok=tok_r21,    .grp=tok_reg_t   } },
    [ 54]   =   { 0x68da3bd62eeb5836, "R22",       3, { .tok=tok_r22,    .grp=tok_reg_t   } },
    [406]   =   { 0x7d2fdbd69f57d996, "r22",       3, { .tok=tok_r22,    .grp=tok_reg_t   } },
    [325]   =   { 0x68da3cd62eeb5945, "R23",       3, { .tok=tok_r23,    .grp=tok_reg_t   } },
    [293]   =   { 0x7d2fdcd69f57df25, "r23",       3, { .tok=tok_r23,    .grp=tok_reg_t   } },
    [452]   =   { 0x68da41d62eeb2fc4, "R24",       3, { .tok=tok_r24,    .grp=tok_reg_t   } },
    [420]   =   { 0x7d2fe1d69f57eda4, "r24",       3, { .tok=tok_r24,    .grp=tok_reg_t   } },
    [275]   =   { 0x68da42d62eeb2d13, "R25",       3, { .tok=tok_r25,    .grp=tok_reg_t   } },
    [243]   =   { 0x7d2fe2d69f57ecf3, "r25",       3, { .tok=tok_r25,    .grp=tok_reg_t   } },
    [378]   =   { 0x68da3fd62eeb557a, "R26",       3, { .tok=tok_r26,    .grp=tok_reg_t   } },
    [218]   =   { 0x7d2fdfd69f57d6da, "r26",       3, { .tok=tok_r26,    .grp=tok_reg_t   } },
    [137]   =   { 0x68da40d62eeb2c89, "R27",       3, { .tok=tok_r27,    .grp=tok_reg_t   } },
    [105]   =   { 0x7d2fe0d69f57ea69, "r27",       3, { .tok=tok_r27,    .grp=tok_reg_t   } },
    [264]   =   { 0x68da45d62eeb3108, "R28",       3, { .tok=tok_r28,    .grp=tok_reg_t   } },
    [232]   =   { 0x7d2fe5d69f57f6e8, "r28",       3, { .tok=tok_r28,    .grp=tok_reg_t   } },
    [ 71]   =   { 0x68da46d62eeb3047, "R29",       3, { .tok=tok_r29,    .grp=tok_reg_t   } },
    [ 39]   =   { 0x7d2fe6d69f57f227, "r29",       3, { .tok=tok_r29,    .grp=tok_reg_t   } },
    [281]   =   { 0x68ddc3d62ee94319, "R30",       3, { .tok=tok_r30,    .grp=tok_reg_t   } },
    [249]   =   { 0x7d3363d69f487cf9, "r30",       3, { .tok=tok_r30,    .grp=tok_reg_t   } },
    [458]   =   { 0x68ddc2d62ee9bdca, "R31",       3, { .tok=tok_r31,    .grp=tok_reg_t   } },
    [426]   =   { 0x7d3362d69f487faa, "r31",       3, { .tok=tok_r31,    .grp=tok_reg_t   } },
    [113]   =   { 0x6ed717aafcf68271, "PC",        2, { .tok=tok_pc,     .grp=tok_ban_t   } },
    [209]   =   { 0x6ed6f7aafcf7a8d1, "Pc",        2, { .tok=tok_pc,     .grp=tok_ban_t   } },
    [337]   =   { 0x6f43d7aafd3e2d51, "pC",        2, { .tok=tok_pc,     .grp=tok_ban_t   } },
    [241]   =   { 0x6f43f7aafd3dc6f1, "pc",        2, { .tok=tok_pc,     .grp=tok_ban_t   } }
};

// str hash table lookup

/*-STR-HASH-FUNCTION--------------------------------------------------------------------------------------------------*/

/**
 * Generates the hash for the str hash table based on a string and number of characters.
 *
 * @param       str             string to hash
 * @param       n               character number
 * @return                      hash
 */
[[nodiscard]] static uint64_t str_hash_fn(const char *str, size_t n) {          // str hash function
    uint64_t    hash    =   STR_OFFSET;
    while (n--) {
        hash    ^=  (unsigned char)*(str++);
        hash    *=  FNV_PRIME_64_HT;
    }
    return  hash ^ (hash >> 32);
}

/*-STR-HASH-TABLE-LOOKUP-FUNCTION-------------------------------------------------------------------------------------*/

/**
 * Performs a lookup in the str hash table based on the provided string and hash.
 * (tok_itm){ .tok=0, .grp=0 } on lookup failure.
 *
 * @param       str             lookup string
 * @param       hash            string hash
 * @return                      table entry
 */
[[nodiscard]] static tok_itm str_hash_lu_h( const char     *const str,
                                            const uint64_t        hash ) {      // str hash table lookup (w/ hash)
    // get table entry
    const   hash_entry  table_entry =   str_table[hash & (STR_TBL_S - 1)];

    // check entry
    if (hash != table_entry.hash)                       return  (tok_itm){ .tok=0, .grp=0 };
    if (memcmp(str, table_entry.str, table_entry.len))  return  (tok_itm){ .tok=0, .grp=0 };

    // return matched item
    return  table_entry.itm;
}

/**
 * Performs a lookup in the str hash table based on the provided string.
 * (tok_itm){ .tok=0, .grp=0 } on lookup failure.
 *
 * @param       str             lookup string
 * @param       n               character number
 * @return                      table entry
 */
[[maybe_unused]] [[nodiscard]]
static tok_itm str_hash_lu(const char *const str, const size_t n) {             // str hash table lookup
    // generate hash and lookup
    return  str_hash_lu_h(str, str_hash_fn(str, n));
}

#endif  /* STR_HASH_TABLE_ */
