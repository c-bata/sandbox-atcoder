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

    int min_x = 100;
    int max_x = 1;
    int x[n];
    rep(i, n) {
        cin >> x[i];
        chmin(min_x, x[i]);
        chmax(max_x, x[i]);
    }

    int min_cost = -1;
    for (int i=min_x; i<=max_x; i++) {
        int cost = 0;
        rep(j, n) {
            cost += (x[j] - i) * (x[j] - i);
        }

        if (min_cost == -1) {
            min_cost = cost;
        } else {
            chmin(min_cost, cost);
        }
    }

    cout << min_cost << endl;
}
