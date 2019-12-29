#include <iostream>

using namespace std;

int main() {
    long long a, b, k;

    cin >> a >> b >> k;

    long long takahashi, aoki;
    if (a > k) {
        takahashi = k-a;
        aoki = b;
    } else {
        takahashi = 0;
        aoki = a + b - k;
        if (aoki < 0) {
            aoki = 0;
        }
    }

    cout << takahashi << " " << aoki << endl;
}
