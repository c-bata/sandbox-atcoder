#!/bin/sh

set -ex

g++ -o ./build/abc152_a -Wall -O2 -std=c++14 ./abc152_a.cpp

./build/abc152_a <<EOF
1 2 3
foo
EOF
