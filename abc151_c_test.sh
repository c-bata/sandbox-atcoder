#!/bin/sh

set -ex

g++ -o ./build/abc151_c -Wall -O2 -std=c++14 ./abc151_c.cpp

./build/abc151_c <<EOF
1 2 3
foo
EOF
