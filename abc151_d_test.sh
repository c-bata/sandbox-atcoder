#!/bin/sh

set -ex

g++ -o ./build/abc151_d -Wall -O2 -std=c++14 ./abc151_d.cpp

./build/abc151_d <<EOF
3 3
...
...
...
EOF

./build/abc151_d <<EOF
3 5
...#.
.#.#.
.#...
EOF
