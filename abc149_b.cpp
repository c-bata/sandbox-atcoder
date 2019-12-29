#include <iostream>
#include <string>

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
    }

    cout << takahashi << " " << aoki << endl;
}
