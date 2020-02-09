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
    int n, k;

    cin >> n >> k;

    int p[n];
    long double kitaichi_arr[n];
    rep(i, n) {
        cin >> p[i];
        kitaichi_arr[i] = ((long double) p[i] * ((long double) p[i] + 1)) / (2 * (long double) p[i]);
    }

    long double kitaichi_i = 0;
    rep(i, k) {
        kitaichi_i += kitaichi_arr[i];
    }

    long double kitaichi_max = kitaichi_i;
    rep(i, n-k) {
        kitaichi_i = kitaichi_i - kitaichi_arr[i] + kitaichi_arr[i+k];
        if (kitaichi_max < kitaichi_i) {
            kitaichi_max = kitaichi_i;
        }
    }

    printf("%.10Lf\n", kitaichi_max);
}
