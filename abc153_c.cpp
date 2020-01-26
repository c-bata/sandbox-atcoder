#include <iostream>
#include <string>
#include <vector>

#define rep(i, n) for (int i=0; i< (n); ++i)
typedef long long ll;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

using namespace std;

int main() {
    int n, k;

    cin >> n >> k;

    int h[n];
    rep(i, n) cin >> h[i];

    sort(h, h+n, greater<>());
    //rep(i, n) cout << h[i] << endl;

    if (n <= k) {
        // 必殺技は数えない
        cout << 0 << endl;
        return 0;
    }
    ll sum = 0;
    // 0 <= k
    for (int i=k; i<n; i++) {
        sum += h[i];
    }

    cout << sum << endl;
}
