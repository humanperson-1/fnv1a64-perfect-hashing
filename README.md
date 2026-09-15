## **Perfhash**

Generates perfect hashes with a modified FNV-1a 64-bit hash in $2^{\lceil \lg (n) \rceil + o}$ buckets, where $n$ is
the number of items to hash and $o$ is the given offset.

Hash search is multithreaded if enabled, utilizing all CPU cores. The final offset will be whichever offset is found
first, and may not necessarily be deterministic. The offset it is found with will be logged in the comment at the top
of the emitted file, so it can be reproduced by disabling multithreading and starting with that offset.

------------------------------------------------------------------------------------------------------------------------

## **Usage**

The algorithm will output the following message during hashing, where `name` is the hash table name, `items` is the
number of items being hashed, `buckets` is the number of buckets, and `probability` is the estimated probability of
success, per thread trial.

```
[name] : [items] -> [buckets] [probability]
```

To generate the hash tables, you will want to construct a file structured like

```c
/**
 * perfhash/src/impl/example.c
 * Main tokenizer hashing call.
 */

#include    "general.h"
#include    "file_emit.h"
#include    [item_location]

/**
 * Main tokenizer hashing call.
 *
 * @return                      exit code
 */
int main(void) {                                                                // main
    // hash
    hash_full([items], arr_s([items]), [seed], [offset], [max_attempts], [inc_file], [name], [output]);
    return  0;
}
```

where `seed` is the initial seed. The hash item needs to have the string, token, group, stringified token, stringified
group, and whether to treat the string as case-sensitive. Case-insensitive items will hash all case variants of the
provided string, so this is only recommended for short strings.

Look to the examples to see actual code examples and output.

> #### **Requirements**
> 
> - A C23-compliant compiler (gcc 14+, clang 18+; maybe through some black magic MSVC)
> - POSIX thread support, if multithreading; otherwise, compile with `-DNTHREAD` and it should work pretty anywhere.
> - git
> - bash, if running the example script. (the example script is relatively simple, and can probably be done in ~1
command if this is missing) I'm not too sure what version of bash you need, but I think most semi-modern ones work.
> - Samply, if profiling

------------------------------------------------------------------------------------------------------------------------

## **Example Usage**

Run

```bash
git clone https://github.com/realperson-1/perfhash-fnv1a.git
cd perfhash-fnv1a
./perfhash-examples.sh
```

To rehash the example items, and see what compilation calls should look like.

To disable threading, add the `-n` flag. To profile, the `-p` flag (requires samply). To debug, the `-d` flag
(requires LLVM). To set the c compiler, pass it in after the `-c` flag. Pass in the `-h` flag to view more specific
arguments in the example shell script.

------------------------------------------------------------------------------------------------------------------------

## **License**
This repository is under the [MIT License](https://opensource.org/license/mit). See
[LICENSE](https://github.com/realperson-1/perfhash-fnv1a/blob/main/LICENSE) for more information.
