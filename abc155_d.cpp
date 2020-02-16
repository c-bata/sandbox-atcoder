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
    ll n, k;
    cin >> n >> k;

    ll a[n];
    ll abs[n];
    int sign[n];

    int sign_plus_num = 0;
    int sign_minus_num = 0;
    int sign_zero_num = 0;

    vector<int> plus_a(0);
    vector<int> minus_a(0);

    rep(i, n) {
        cin >> a[i];

        abs[i] = llabs(a[i]);

        if (a[i] == 0) {
            sign[i] = 0;
            sign_zero_num++;
        } else if (a[i] > 0) {
            sign[i] = 1;
            sign_plus_num++;
            plus_a.push_back(a[i]);
        } else {
            sign[i] = -1;
            sign_minus_num++;
            minus_a.push_back(a[i]);
        }
    }

    sort(abs, abs+n, greater<>());
    sort(plus_a.begin(), plus_a.end(), greater<>());
    sort(minus_a.begin(), minus_a.end(), less<>());

    int minus_kumiawase = sign_plus_num * sign_minus_num;
    int zero_kumiawase = sign_zero_num * (n - sign_zero_num);
    if (k < minus_kumiawase) {
        // 負の数の中に正解がある
        // ここの計算にはDPが必要そう
    } else if (k < minus_kumiawase + zero_kumiawase) {
        cout << 0 << endl;
    } else {
        // 正の数の中に正解がある。
        // ここの計算にはDPが必要そう
    }

    rep(i, n) cout << abs[i] << endl;
    cout << "foo" << endl;
    rep(i, plus_a.size()) cout << plus_a[i] << endl;
    cout << "foo" << endl;
    rep(i, minus_a.size()) cout << minus_a[i] << endl;
}
