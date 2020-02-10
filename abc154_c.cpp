#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>

#define rep(i, n) for (int i=0; i< (n); ++i)
typedef long long ll;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

using namespace std;

int main() {
    ll n;
    cin >> n;

    set<int> s;

    int a;
    rep(i, n) {
        cin >> a;
        s.insert(a);
        if (s.size() != i+1) {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;
}
