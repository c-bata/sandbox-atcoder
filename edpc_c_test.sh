#!/bin/sh

set -ex

g++ -o ./build/edpc_c -Wall -O2 -std=c++14 ./edpc_c.cpp

./build/edpc_c <<EOF
3
10 40 70
20 50 80
30 60 90
EOF

./build/edpc_c <<EOF
1
100 10 1
EOF

./build/edpc_c <<EOF
7
6 7 8
8 8 3
2 5 2
7 8 6
4 6 8
2 3 4
7 5 1
EOF
