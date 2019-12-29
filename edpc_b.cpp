#include <iostream>
#include <string>

using namespace std;

const long long INF = 1LL << 60;

long long dp[100010];


template<class T> inline bool chmin(T& a, T b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}

template<class T> inline bool chmax(T& a, T b) {
    if (a < b) {
        a = b;
        return true;
    }
    return false;
}

int main() {
    // でかい値で初期化
    //for (long long & i : dp)
    //    i = INF;

    // 初期条件
    dp[0] = 0;

    int n, k;
    cin >> n >> k;

    int h[n];
    for (int i=0; i<n; i++)
        cin >> h[i];

    for (int i=1; i<n; i++) {
        dp[i] = INF;
        for (int j = 0; j<k; j++) {
            if (j+1 > i)
                break;

            chmin(dp[i], dp[i-j-1] + abs(h[i] - h[i-j-1]));
        }
    }

    cout << dp[n-1] << endl;
}
