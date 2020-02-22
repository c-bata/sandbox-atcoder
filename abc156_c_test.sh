#!/bin/sh

set -ex

g++ -o ./build/abc156_c -Wall -O2 -std=c++14 ./abc156_c.cpp

./build/abc156_c <<EOF
1 2 3
foo
EOF
