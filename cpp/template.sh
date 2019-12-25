#!/bin/sh

set -e

if [ $# -eq 0 ]; then
  echo "Please specify filename as a first argument."
  exit 1
fi

NAME=${1%.cpp}  # trim suffix
CPP_DIR=$(cd $(dirname $0); pwd)

cat > ${CPP_DIR}/${NAME}.cpp <<EOF
#include <iostream>
#include <string>

using namespace std;

int main() {
    int a, b, c;
    string s;

    cin >> a >> b >> c;
    cin >> s;

    cout << a+b+c << " " << s << endl;
}
EOF

echo "add_executable($NAME $NAME.cpp)" >> ${CPP_DIR}/CMakeLists.txt

cat > ${CPP_DIR}/${NAME}_test.sh <<EOF2
#!/bin/sh

set -ex

g++ -o ./build/${NAME} -Wall -O2 -std=c++14 ./${NAME}.cpp

./build/${NAME} <<EOF
1 2 3
foo
EOF
EOF2

chmod +x ${CPP_DIR}/${NAME}_test.sh
