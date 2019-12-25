#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main() {
    int a, b, c;
    char s[101];

    scanf("%d", &a);
    scanf("%d %d", &b, &c);
    cin >> s;

    std::cout << a+b+c << " " << s << std::endl;
}
