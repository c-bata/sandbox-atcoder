#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

#define MAX_N 101

/*
 * 重さと価値がそれぞれ wi, vi であるような n 個の品物があります。
 * 重さの総和が W を超えないように選んだときの価値の総和の最大値を求めなさい
 *
 * 制約
 * * 1 <= n <= 100
 * * 1 <= wi, vi <= 100
 * * 1 <= W <= 10000
 */

int n, W;
int w[MAX_N], v[MAX_N];
int memo[101][10001];

// i番目以降の品物から重さの総和がj以下となるように選ぶ
int rec(int i, int j) {
    if (memo[i][j] > -1) {
        return memo[i][j];
    }

    int res;
    if (i == n) {
        // 品物はもう残っていない
        res = 0;
    } else if (j < w[i]) {
        // この品物はもう入らないので次の品物を入れてみる
        res = rec(i + 1, j);
    } else {
        // 入れない場合と入れる場合を両方試す
        res = max(rec(i+1, j), rec(i+1, j-w[i]) + v[i]);
    }
    memo[i][j] = res;
    return res;
}

int main() {
    cin >> n >> W;
    for (int i=0; i<n; i++)
        cin >> w[i] >> v[i];

    memset(memo, -1, sizeof(memo));

    int res = rec(0, W);

    for (int i=0; i<10; i++) {
        for (int j=0; j<10;j++)
            printf(" %3d", memo[i][j]);
        cout << endl;
    }
    cout << res << endl;
}
