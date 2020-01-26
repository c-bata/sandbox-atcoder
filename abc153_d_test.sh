#!/bin/sh

set -ex

g++ -o ./build/abc153_d -Wall -O2 -std=c++14 ./abc153_d.cpp

./build/abc153_d <<EOF
2
EOF

./build/abc153_d <<EOF
3
EOF

./build/abc153_d <<EOF
4
EOF

./build/abc153_d <<EOF
5
EOF

./build/abc153_d <<EOF
6
EOF

./build/abc153_d <<EOF
7
EOF

./build/abc153_d <<EOF
8
EOF

./build/abc153_d <<EOF
9
EOF

./build/abc153_d <<EOF
10
EOF

./build/abc153_d <<EOF
11
EOF

./build/abc153_d <<EOF
12
EOF

./build/abc153_d <<EOF
13
EOF

./build/abc153_d <<EOF
14
EOF

./build/abc153_d <<EOF
15
EOF

./build/abc153_d <<EOF
16
EOF

./build/abc153_d <<EOF
1000000000000
EOF
