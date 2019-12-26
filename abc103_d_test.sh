#!/bin/sh

set -ex

g++ -o ./build/abc103_d -Wall -O2 -std=c++14 ./abc103_d.cpp

./build/abc103_d <<EOF
5 2
1 4
2 5
EOF

./build/abc103_d <<EOF
9 5
1 8
2 7
3 5
4 6
7 9
EOF

./build/abc103_d <<EOF
5 10
1 2
1 3
1 4
1 5
2 3
2 4
2 5
3 4
3 5
4 5
EOF
