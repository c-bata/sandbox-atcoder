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
    int h, n;

    cin >> h >> n;

    int a[n], b[n];
    pair<double, pair<int, int>>  cospa[n];
    rep(i, n) {
        cin >> a[i] >> b[i];
        pair<int, int> x;
        x.first = a[i];
        x.second = b[i];
        cospa[i].first = (double) a[i] / (double) b[i]; // 魔力あたりの魔法の強さ
        cospa[i].second = x;
    };

    sort(cospa, cospa+n, [](pair<double, pair<int, int>> x, pair<double, pair<int, int>> y) {
        return x.first > y.first;
    });
    rep(i, n) cout << cospa[i].first << " ";
    cout << endl;

    ll sum = 0;
    while (h > 0) {

        int idx = 0;
        for (int i=0; i<n; i++) {
            if (h >= cospa[i].second.first) {
                idx = i;
                break;
            }
            idx = i;
        }

        h -= a[idx];
        sum += b[idx];

        cout << h << " " << idx << " " << sum << endl;
    }
    cout << sum << endl;
}
