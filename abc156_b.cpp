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

    int i = 1;
    int x = k;
    for (;;) {
        if (x > n) {
            break;
        }
        x *= k;
        i++;
    }

    cout << i << endl;
}
