#include <iostream>
#include <string>

using namespace std;

// サイコロの各目に 2, 3, 5がいくつ含まれるかを保持
int dice[3][6] = {{0,1,0,2,0,1}, {0,0,1,0,0,1}, {0,0,0,0,1,0}};

int main() {
    int n;
    unsigned long long d;
    cin >> n >> d;

    int num[6];

    // 0で初期化
    // memsetで埋められるのは0(bitが全部0)か-1(bitが全部1)だけなので注意
    memset(num, 0, sizeof(num));

    // Dで素因数分解
    while (d % 2 == 0) {
        num[2]++;
        d /= 2;
    }
    while (d % 3 == 0) {
        num[3]++;
        d /= 3;
    }
    while (d % 5 == 0) {
        num[5]++;
        d /= 5;
    }
    if (d > 1) {
        // サイコロの出た目の積には 2, 3, 5の素因数しかないので、それ以外があればダメ。
        // (ex) 7とか14とか21をサイコロの積では表現不可。
        cout << 0.0 << endl;
        return 0;
    }

    // この時点で D = 2^a * 3^b * 5^c と表せることが確定.
    // DPテーブルを用意する。これを考えればサイコロを投げたときの遷移が簡単に書ける。
    // 2^60 ≒ 10^18 なので配列は61要素入れば足りる。3と5はもう少し少ないはずだけど、まぁ計算面倒なので多めに取っておく。
    // 計算量は O(Nabc)
    double dp[101][64][64][64];
    memset(dp, 0, sizeof(dp));
    dp[0][0][0][0] = 1.0;  // サイコロを1回振って、

    // dp[j][k][l] = 2^j * 3^k * 5^l になる確率
    for (int i = 0; i<n; i++) {
        for (int j=1; j<=6; j++) {
            for (int k=)
        }
    }

    printf("%.8f\n", solve());
}
