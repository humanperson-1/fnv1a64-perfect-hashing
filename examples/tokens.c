/**
 * examples/tokens.c
 * Example tokenizer hashing call - output at examples/tokens_hashtable.h
 */

#include    <stddef.h>
#include    <stdint.h>

#include    "general.h"
#include    "file_emit.h"
#include    "tokens.h"

/**
 * Main tokenizer hashing call.
 *
 * @return                      exit code
 */
int main(void) {                                                                // main
    // algorithm setup
    const   size_t              max     =   100'000'000;
    const   uint64_t            seed    =   0;
    const   size_t              offset  =   1;

    // output setup
    const   char        *const  inc     =   "tokens.h";
    const   char        *const  name    =   "str";
    const   char        *const  output  =   "examples/tokens_hashtable.h";

    // hash
    hash_full(str_itms_, arr_s(str_itms_), seed, offset, max, inc, name,  output);
    return  0;
}
