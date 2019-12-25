#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    int d[n];
    for (int i=0; i<n; i++) {
        cin >> d[i];
    }

    sort(d, d + n, greater<>());

    int prev = -1;
    int cnt = 0;
    for (int i = 0; i < n; ++i) {
        if (prev != d[i]) {
            cnt++;
        }
        prev = d[i];
    }
    cout << cnt << endl;
}
