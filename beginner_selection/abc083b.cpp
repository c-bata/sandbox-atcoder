#include <iostream>
#include <string>

using namespace std;

int main() {
    int n, a, b;
    cin >> n >> a >> b;

    int result = 0;
    for (int i=1; i<=n; i++) {
        int sum = 0;

        for (int x=i; x > 0; x /= 10) {
            sum += x % 10;
        }

        if (sum >= a && sum <= b) {
            result+=i;
        };
    }

    cout << result << endl;
}
