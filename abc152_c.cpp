#include <iostream>
#include <string>
#include <vector>

#define rep(i, n) for (int i=0; i< (n); ++i)
typedef long long ll;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

using namespace std;

int main() {
    int n;
    cin >> n;

    int p[n];
    rep(i, n) cin >> p[i];

    //rep(i, n) cout << p[i] << " ";
    //cout << endl;

    int cnt = 0;
    int min = p[0];
    for (int i=0; i< n; i++) {
        if (min >= p[i]) {
            cnt++;
        }
        if (min > p[i])
            min = p[i];
    }
    cout << cnt << endl;
}
/*
    vector<bool> ok(n, false);

    int max = p[0];
    int max_index = 0;
    for (int i=0; i< n; i++) {
        if (max >= p[i]) {
            ok[i] = true;
            ok[max_index] = true;
        }
        if (max < p[i]) {
            max = p[i];
            max_index = i;
        }
    }

    int cnt = 0;
    rep(i, n) {
        if (ok[i])
            cnt++;
    }
 */
