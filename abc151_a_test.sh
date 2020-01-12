#!/bin/sh

set -ex

g++ -o ./build/abc151_a -Wall -O2 -std=c++14 ./abc151_a.cpp

./build/abc151_a <<EOF
1 2 3
foo
EOF
