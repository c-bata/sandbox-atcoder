#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#define rep(i, n) for (int i=0; i< (n); ++i)
typedef long long ll;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

using namespace std;

int calcNumOfCombination(int n, int r){
    int num = 1;
    for(int i = 1; i <= r; i++){
        num = num * (n - i + 1) / i;
    }
    return num;
}

int main() {
    ll n, a, b;

    cin >> n >> a >> b;

    ll zenbu = 0;
    ll prev = -1;
    ll combi = 0;
    for (int r=1; r<=n; r++) {
        if (prev == -1) {
            combi = n;
        } else {
            ll bunsi = (ll)(n - r + 1);

            ll prev_tmp = prev;
            for (;;) {
                if (prev_tmp > 1000000000 + 7) {
                    prev_tmp %= 1000000000 + 7;
                } else {
                    break;
                }
            }

            combi = prev_tmp * bunsi / (ll)r;
        }
        cout << "debug: " << r << " " << combi << " " << calcNumOfCombination(n, r) << endl;
        prev = combi;

        if (combi > 922337203685477580) {
            cout << "overflow: " << r << " " << combi << endl;
        }

        if (r == a || r == b) {
            continue;
        }

        zenbu += (ll) combi;
        for (;;) {
            if (zenbu > 1000000000 + 7) {
                zenbu %= 1000000000 + 7;
            } else {
                break;
            }
        }
    }

    cout << zenbu << endl;
}
