#!/bin/sh

set -ex

g++ -o ./build/abc156_e -Wall -O2 -std=c++14 ./abc156_e.cpp

./build/abc156_e <<EOF
1 2 3
foo
EOF
