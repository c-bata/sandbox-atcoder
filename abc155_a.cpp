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
    int a, b, c;

    cin >> a >> b >> c;

    if (a == b && a != c) {
        cout << "Yes" << endl;
        return 0;
    } else if (b == c && b != a) {
        cout << "Yes" << endl;
        return 0;
    } else if (a == c && a != b) {
        cout << "Yes" << endl;
        return 0;
    }
    cout << "No" << endl;
}
