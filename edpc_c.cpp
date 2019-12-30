#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int dp[100001][3];

template<class T> inline bool chmax(T& a, T b) {
    if (a < b) {
        a = b;
        return true;
    }
    return false;
}

int main() {
    int n;
    cin >> n;
    memset(dp, 0, sizeof(dp));

    int a[n][3];

    for (int i=0; i<n; i++)
        for (int j=0; j<3; j++)
            cin >> a[i][j];

    for (int i=0; i<n; i++) {
        for (int j = 0; j < 3; ++j) {
            for (int k = 0; k < 3; ++k) {
                if (j == k) continue;
                chmax(dp[i + 1][k], dp[i][j] + a[i][k]);
            }
        }
    }

    //for (int i=0; i<=n; i++) {
    //    cout << dp[i][0] << " " << dp[i][1] << " " << dp[i][2] << endl;
    //}

    int max = 0;
    chmax(max, dp[n][0]);
    chmax(max, dp[n][1]);
    chmax(max, dp[n][2]);
    cout << max << endl;
}
