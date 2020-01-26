#include <iostream>
#include <vector>
#include <stack>
#include <math.h>

#define rep(i, n) for (int i=0; i< (n); ++i)
typedef long long ll;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

using namespace std;

ll count_num2(ll h) {
/*
 * def a(n):
 *     return 0 if n==0 else 1 + 2*a(int(n/2))
 */
    if (h == 0) {
        return 0;
    }
    ll next = floor(h / 2);
    return 1 + 2 * count_num2(next);
}

int main() {
    ll d;
    cin >> d;
    //s.push(d);

    cout << count_num2(d) << endl;
}
