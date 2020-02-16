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
    int n;
    cin >> n;

    int a[n];

    rep(i, n) cin >> a[i];

    rep(i, n) {
        if (a[i] % 2 == 0) {
            if (!(a[i] % 3 == 0 || a[i] % 5 == 0)) {
                cout << "DENIED" << endl;
                return 0;
            }
        }
    }
    cout << "APPROVED" << endl;
}
