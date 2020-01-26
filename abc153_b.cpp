#include <iostream>
#include <string>
#include <vector>

#define rep(i, n) for (int i=0; i< (n); ++i)
typedef long long ll;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

using namespace std;

int main() {
    long long h, n;

    cin >> h >> n;

    int a[n];
    int sum = 0;
    rep(i, n) {
        cin >> a[i];
        sum += a[i];
    }

    if (h <= sum) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}
