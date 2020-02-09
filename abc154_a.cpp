#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#define rep(i, n) for (int i=0; i< (n); ++i)
typedef long long ll;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

using namespace std;

int main() {
    int a, b;
    string s, t, u;

    cin >> s >> t;
    cin >> a >> b;
    cin >> u;

    if (s == u) {
        cout << a-1 << " " << b << endl;
    } else if (t == u) {
        cout << a << " " << b-1 << endl;
    }
}
