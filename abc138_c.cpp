#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];

    pair<int, int> b[n];

    for (int i=0; i<n; i++) {
        cin >> a[i];
        b[i].first = i;
        b[i].second = a[i];
    }


    sort(b, b+n, [](pair<int, int> x, pair<int, int> y) {
        return x.second > y.second;
    });

    int maxIdx=b[0].first;
    int max=b[0].second;

    for (int i=0; i<n; i++) {
        if (i == maxIdx) {
            cout << b[1].second << endl;
        } else {
            cout << max << endl;
        }
    }
}
