#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#define rep(i, n) for (int i=0; i< (n); ++i)
typedef long long ll;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

using namespace std;

int ctoi(char c) {
    switch (c) {
        case '0': return 0;
        case '1': return 1;
        case '2': return 2;
        case '3': return 3;
        case '4': return 4;
        case '5': return 5;
        case '6': return 6;
        case '7': return 7;
        case '8': return 8;
        case '9': return 9;
        default: return 0;
    }
}

int main() {
    string s;
    cin >> s;

    int digit = s.length();
    //cout << digit << endl;

    int sihei = 0;

    for (int i=digit-1; i>=0; i--) {
        int n = ctoi(s[i]);
        int x = 5 - abs(n - 5);
        sihei += x;

        //cout << ctoi(s[i]) << " " << 5 - abs(n - 5) << endl;
    }
    cout << sihei << endl;
}
