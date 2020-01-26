#!/bin/sh

set -ex

g++ -o ./build/abc153_c -Wall -O2 -std=c++14 ./abc153_c.cpp

./build/abc153_c <<EOF
1 2 3
foo
EOF
