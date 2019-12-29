#include <iostream>
#include <string>

using namespace std;

int main() {
    int N, K, R, S, P;
    string t;

    cin >> N >> K;
    cin >> R >> S >> P;
    cin >> t;

    int total_point = 0;
    for (int diff_k=0; diff_k<K; diff_k++) {
        int r_cnt = 0, s_cnt = 0, p_cnt = 0;

        char prev_win = false;
        for (int i=N-1-diff_k; i>=0; i-=K) {

            char hand = t[i];
            int next_index = i + K;
            // 後ろのindexが必ず最善の手をとるようにする。k個前が同じ手が最善でも必ず最善を取る。

            if (hand == 'r') {
                if (prev_win && (next_index < N && t[next_index] == 'r')) {
                    prev_win = false;
                } else {
                    r_cnt++;
                    prev_win = true;
                }
            } else if (hand == 'p') {
                if (prev_win && (next_index < N && t[next_index] == 'p')) {
                    prev_win = false;
                } else {
                    p_cnt++;
                    prev_win = true;
                }
            } else if (hand == 's') {
                if (prev_win && (next_index < N && t[next_index] == 's')) {
                    prev_win = false;
                } else {
                    s_cnt++;
                    prev_win = true;
                }
            }
        }

        total_point += r_cnt * P;
        total_point += p_cnt * S;
        total_point += s_cnt * R;
    }

    cout << total_point << endl;
}
