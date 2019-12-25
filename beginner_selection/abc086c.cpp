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
