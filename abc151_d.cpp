#include <iostream>
#include <string>
#include <queue>

// https://youtu.be/1oLDDdWRu6Y の回答をみて写経。

#define rep(i, n) for (int i=0; i< (n); ++i)
typedef long long ll;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

using namespace std;

typedef pair<int, int> P;
const int di[] = {-1, 0, 1, 0};
const int dj[] = {0, -1, 0, 1};

int main() {
    int H, W;
    int ans = 0;
    cin >> H >> W;

    string sij[H];
    rep(i, H) cin >> sij[i];

    rep(si, H) {
        rep(sj, W) {
            if (sij[si][sj] == '#')
                continue;

            vector<vector<int>> dist(H, vector<int>(W, -1));
            queue<P> q;
            auto update = [&](int i, int j, int x) {  // マス i, j の値を x で上書き
                if (dist[i][j] != -1)
                    return;
                dist[i][j] = x;
                q.push(P(i, j));
            };

            update(si, sj, 0);

            while (!q.empty()) {
                int i = q.front().first;
                int j = q.front().second;
                q.pop();  // これを忘れないこと！

                rep(dir, 4) {
                    int ni = i + di[dir], nj = j+dj[dir];
                    if (ni < 0 || ni >= H || nj < 0 || nj >= W)
                        continue;
                    if (sij[ni][nj] == '#')
                        continue;
                    update(ni, nj, dist[i][j] + 1);
                }
            }

            rep(i, H) {
                rep(j, W) {
                    chmax(ans, dist[i][j]);
                }
            }
        }
    }
    cout << ans << endl;
}
