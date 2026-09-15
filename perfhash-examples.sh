#!/usr/bin/env bash
set -euo pipefail;

# go to root
root="$(cd "$(dirname "$0")" && pwd)";
cd "$root";

# cleanup catch
cleanup() {
    rm -f "$root/perfhash.out" "profile.json.gz";
    rm -rf "$root/perfhash.out.dSYM/";
}
trap cleanup EXIT INT TERM;

# argparse
debug_build=0;
profile=0;
nthread=0
cache_line=0;
cache_line_def=0;
compiler="cc";
while getopts ":dpnc:l:h" opt ; do
    case $opt in
        d)
            debug_build=1;
            ;;
        p)
            profile=1;
            ;;
        n)
            nthread=1;
            ;;
        c)
            compiler="$OPTARG";
            ;;
        l)
            cache_line_def=1;
            cache_line="$OPTARG";
            ;;
        h)
            printf "%b\n" "-d for debugging"
            printf "%b\n" "-p to profile"
            printf "%b\n" "-n to disable multithreading"
            printf "%b\n" "-c [compiler] to specify a c compiler"
            printf "%b\n" "-l [line size] to specify cache line size";
            exit 0;
            ;;
        \?)
            printf "%b\n" "perfhash unknown build flag";
            exit 1;
            ;;
    esac
done

# default flags
flags=(
    -std=c23
    -Wall
    -Wextra
    -Wpedantic
    -march=native
    -flto
    -funroll-loops
);

# flag processing
cc="cc";
if (( debug_build )) ; then
    flags+=(
        -Og
        -g
        -fsanitize=address,undefined
        -fno-omit-frame-pointer
    );
else
    flags+=( -O3 );
fi

# profiling
if (( profile )) ; then
    flags+=(
        -g
        -fno-omit-frame-pointer
    )
fi

# threading toggle
if (( !nthread )) ; then
    flags+=( -pthread );
else
    flags+=( -DNTHREAD );
fi

if (( cache_line_def )) ; then
    # cache line size
    flags+=( -DCACHE_LINE_SIZE=$cache_line );
fi

# check compiler
if ! command -v "$compiler" >/dev/null 2>&1 ; then
    printf "%b\n" "c compiler $compiler not found";
    exit 1;
fi

# compilation
$cc ${flags[@]} -Iinc -Iexamples src/*.c examples/tokens.c -o "perfhash.out";

# run
if (( profile )) ; then
    samply record ./perfhash.out || true;
else
    ./perfhash.out;
fi

# clean and exit
cleanup;
exit 0;
