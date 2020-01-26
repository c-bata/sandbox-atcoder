#!/bin/sh

set -ex

g++ -o ./build/abc152_c -Wall -O2 -std=c++14 ./abc152_c.cpp

# 3 これがおかしい
./build/abc152_c <<EOF
5
4 2 5 1 3
EOF

./build/abc152_c <<EOF
4
4 3 2 1
EOF

./build/abc152_c <<EOF
6
1 2 3 4 5 6
EOF

# 4 これがおかしい
./build/abc152_c <<EOF
8
5 7 4 2 6 8 1 3
EOF

./build/abc152_c <<EOF
1
1
EOF
