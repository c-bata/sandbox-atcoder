#!/bin/sh

set -ex

g++ -o ./build/abc154_d -Wall -O2 -std=c++14 ./abc154_d.cpp

./build/abc154_d <<EOF
5 3
1 2 2 4 5
EOF


./build/abc154_d <<EOF
4 1
6 6 6 6
EOF

./build/abc154_d <<EOF
10 4
17 13 13 12 15 20 10 13 17 11
EOF
