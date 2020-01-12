#!/bin/sh

set -ex

g++ -o ./build/abc151_b -Wall -O2 -std=c++14 ./abc151_b.cpp

./build/abc151_b <<EOF
1 2 3
foo
EOF
