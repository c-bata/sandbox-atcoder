#!/bin/sh

set -ex

g++ -o ./build/edpc_b -Wall -O2 -std=c++14 ./edpc_b.cpp

./build/edpc_b <<EOF
5 3
10 30 40 50 20
EOF

./build/edpc_b <<EOF
3 1
10 20 10
EOF

./build/edpc_b <<EOF
2 100
10 10
EOF

./build/edpc_b <<EOF
10 4
40 10 20 70 80 10 20 70 80 60
EOF
