#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

bool check(int prev_t, int t, int prev_x, int x, int prev_y, int y) {
    int diff_t = t-prev_t;
    int diff_x = abs(prev_x - x);
    int diff_y = abs(prev_y - y);

    if (diff_t == diff_x + diff_y) {
        return true;
    } else if (diff_t < diff_x + diff_y) {
        return false;
    }

    return (diff_x + diff_y - diff_t) % 2 == 0;
}

int main() {
    int n;
    cin >> n;

    int t[n+1], x[n+1], y[n+1];
    // 考え方はOKだったけど、最後落ちた理由は (0, 0) から始まるという前提が抜けていた。
    // 凡ミスもあり3回失敗で15分のペナルティ.
    t[0] = 0;
    x[0] = 0;
    y[0] = 0;
    for (int i=1; i<n+1; i++) {
        cin >> t[i] >> x[i] >> y[i];
    }

    for (int i=0; i<n; i++) {
        if (!check(t[i], t[i+1], x[i], x[i+1], y[i], y[i+1])) {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
}
