#!/bin/sh

set -ex

g++ -o ./build/abc156_a -Wall -O2 -std=c++14 ./abc156_a.cpp

./build/abc156_a <<EOF
1 2 3
foo
EOF
