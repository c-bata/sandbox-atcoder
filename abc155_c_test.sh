#!/bin/sh

set -ex

g++ -o ./build/abc155_c -Wall -O2 -std=c++14 ./abc155_c.cpp

./build/abc155_c <<EOF
1 2 3
foo
EOF
