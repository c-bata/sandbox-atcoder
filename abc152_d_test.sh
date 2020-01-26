#!/bin/sh

set -ex

g++ -o ./build/abc152_d -Wall -O2 -std=c++14 ./abc152_d.cpp

./build/abc152_d <<EOF
1 2 3
foo
EOF
