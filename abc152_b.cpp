#include <iostream>
#include <string>
#include <vector>

#define rep(i, n) for (int i=0; i< (n); ++i)
typedef long long ll;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

using namespace std;

int main() {
    int a, b;

    cin >> a >> b;

    long long a_foo = 0;
    rep(i, b) {
        if (a_foo == 0)
            a_foo = a;
        else
            a_foo = a_foo * 10 + a;
    }

    long long b_foo = 0;
    rep(i, a) {
        if (b_foo == 0)
            b_foo = b;
        else
            b_foo = b_foo * 10 + b;
    }

    if (a_foo > b_foo)
        cout << a_foo << endl;
    else
        cout << b_foo << endl;
}
