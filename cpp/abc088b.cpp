#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }

    //sort(a, a+n, [](int x, int y) { return x > y;});
    //sort(a, a + n, greater<int>());
    sort(a, a + n, greater<>());

    // for (int i = 0; i < n; ++i)
    //     cout << a[i] << " ";

    int alice = 0, bob = 0;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            alice += a[i];
        } else {
            bob += a[i];
        }
    }

    cout << alice-bob << endl;
}
