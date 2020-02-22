#!/bin/sh

set -ex

g++ -o ./build/abc156_d -Wall -O2 -std=c++14 ./abc156_d.cpp

./build/abc156_d <<EOF
1 2 3
foo
EOF
