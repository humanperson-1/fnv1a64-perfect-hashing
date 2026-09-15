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
while getopts ":dpn" opt ; do
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
        \?)
            printf "perfhash unknown build flag\n";
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
    cc="/opt/homebrew/opt/llvm/bin/clang";
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
