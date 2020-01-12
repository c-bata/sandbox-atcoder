#include <iostream>
#include <string>

using namespace std;

int H, W;
string Sij[21];
int dp[21][21][21][21];

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

int dist(int h1, int h2, int w1, int w2) {
    if (dp[h1][h2][w1][w2] != -1) {
        return dp[h1][h2][w1][w2];
    }

    if (h1 < 0) {
        return -2;
    } else if (h2>H) {
        return -2;
    } else if (w1 < 0) {
        return -2;
    } else if (w2 > W) {
        return -2;
    }

    if (Sij[h1][w1] == '#' || Sij[h2][w2] == '#') {
        return -2;
    }

    if (h1 == h2 && w1 == w2) {
        return 0;
    }

    if (abs(h1-h2) == 1 && w1 == w2) {
        return 1;
    } else if (h1 == h2 && abs(w1-w2) == 1) {
        return 1;
    }

    if (h1 > 1) {
        chmin(dp[h1-1][h2][w1][w2], dist(h1-1, h2, w1, w2) + 1);
    }
    if (h2 < H-1) {
        chmin(dp[h1][h2+1][w1][w2], dist(h1, h2+1, w1, w2) + 1);
    }
    if (w1 > 1) {
        chmin(dp[h1][h2][w1-1][w2], dist(h1, h2, w1-1, w2) + 1);
    }
    if (w2 < W-1) {
        chmin(dp[h1][h2][w1][w2+1], dist(h1, h2, w1, w2+1) + 1);
    }
    return 0;
}

int main() {
    cin >> H >> W;

    for (int i=0; i<H; i++) {
        cin >> Sij[i];
    }
    memset(dp, -1, sizeof(dp));

    int maxValue = -1;
    for (int h=0; h<H; h++) {
        for (int h2=h; h2<H; h2++) {
            for (int w = 0; w < W; w++) {
                for (int w2 = w; w2 < W; w2++) {
                    if ((h != h2) && (w != w2)) {
                        chmax(maxValue, dist(h, h2, w, w2));
                    }
                }
            }
        }
    }
    cout << maxValue << endl;
}
