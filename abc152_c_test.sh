#!/bin/sh

set -ex

g++ -o ./build/abc152_c -Wall -O2 -std=c++14 ./abc152_c.cpp

./build/abc152_c <<EOF
1 2 3
foo
EOF
