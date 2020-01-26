#include <iostream>
#include <string>
#include <vector>

#define rep(i, n) for (int i=0; i< (n); ++i)
typedef long long ll;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

using namespace std;

int main() {
    int h, a;

    cin >> h >> a;

    int num = 0;
    for (;;) {
        h -= a;
        num++;
        if (h <= 0) {
            break;
        }
    }

    cout << num << endl;
}
