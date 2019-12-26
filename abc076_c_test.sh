#!/bin/sh

set -ex

g++ -o ./build/abc076_c -Wall -O2 -std=c++14 ./abc076_c.cpp

./build/abc076_c <<EOF
?tc????
coder
EOF

./build/abc076_c <<EOF
??p??d??
abc
EOF
