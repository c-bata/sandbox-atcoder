#!/bin/sh

set -ex

g++ -o ./build/abc149_c -Wall -O2 -std=c++14 ./abc149_c.cpp

./build/abc149_c <<EOF
1 2 3
foo
EOF
