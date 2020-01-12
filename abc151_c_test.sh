#!/bin/sh

set -ex

g++ -o ./build/abc151_c -Wall -O2 -std=c++14 ./abc151_c.cpp

./build/abc151_c <<EOF
2 5
1 WA
1 AC
2 WA
2 AC
2 WA
EOF

./build/abc151_c <<EOF
100000 3
7777 AC
7777 AC
7777 AC
EOF

./build/abc151_c <<EOF
6 0
EOF
