#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

bool check(int prev_t, int t, int prev_x, int x, int prev_y, int y) {
    int diff_t = t-prev_t;
    //int diff_x = abs(prev_x - x);
    //int diff_y = abs(prev_y - y);

    if (diff_t == 1) {
        if (abs(x - prev_x) == 1 && y-prev_y == 0) return true;
        if (abs(y - prev_y) == 1 && x-prev_x == 0) return true;
        return false;
    }

    if (check(prev_t+1, t, prev_x+1, x, prev_y, y)) return true;
    if (check(prev_t+1, t, prev_x-1, x, prev_y, y)) return true;
    if (check(prev_t+1, t, prev_x, x, prev_y+1, y)) return true;
    if (check(prev_t+1, t, prev_x, x, prev_y-1, y)) return true;
    return false;
}

int main() {
    int n;
    cin >> n;

    int t[n], x[n], y[n];
    for (int i=0; i<n; i++) {
        cin >> t[i] >> x[i] >> y[i];
    }

    for (int i=0; i<n; i++) {
        if (i == 0) {
            continue;
        }

        if (!check(t[i-1], t[i], x[i-1], x[i], y[i-1], y[i])) {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
}
