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
        for (int i=N-1-diff_k; i>=0; i-=K) {
            cout << "iは？" << diff_k << " " << i << endl;
            char hand = t[i];
            if (hand == 'r') {
                r_cnt++;
            } else if (hand == 'p') {
                p_cnt++;
            } else if (hand == 's') {
                s_cnt++;
            }
        }

        int max_hand = 0;
        int point = 0;
        if (r_cnt > max_hand) {
            max_hand = r_cnt;
            point = P;
        }
        if (p_cnt >= max_hand && S > point) {
            max_hand = p_cnt;
            point = S;
        }
        if (s_cnt >= max_hand && R > point) {
            max_hand = s_cnt;
            point = R;
        }

        total_point += max_hand * point;
        cout << total_point << " " << max_hand << " " << point << endl;
    }

    cout << total_point << endl;
}
