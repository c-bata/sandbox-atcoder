#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#define rep(i, n) for (int i=0; i< (n); ++i)
typedef long long ll;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

using namespace std;

double kitaichi(int *p, int k, int pos) {
    double max_kitaichi = 0;
    for (int i=pos; i<pos+k; i++) {
        double souwa = (double) (p[i] * (p[i] + 1)) / 2;
        double bunbo = p[i];
        double kitaichi = souwa / bunbo;
        max_kitaichi += kitaichi;
    }
    return max_kitaichi;
}

int main() {
    int n, k;

    cin >> n >> k;

    int p[n];
    double kitaichi_arr[n];
    rep(i, n) {
        cin >> p[i];
        kitaichi_arr[i] = (double) (p[i] * (p[i] + 1)) / (2 * (double) p[i]);
    }

    double kitaichi_i = 0;
    rep(i, k) {
        kitaichi_i += kitaichi_arr[i];
    }

    double kitaichi_max = kitaichi_i;
    rep(i, n-k) {
        kitaichi_i = kitaichi_i - kitaichi_arr[i] + kitaichi_arr[i+k];
        if (kitaichi_max < kitaichi_i) {
            kitaichi_max = kitaichi_i;
        }
    }

    cout << kitaichi_max << endl;
}
