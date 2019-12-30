#include <iostream>
#include <string>

using namespace std;

int main() {
    int n, d;
    cin >> n >> d;

    for (int i=1; i<100; i++) {
        n -= 2 * d + 1;
        if (n <= 0) {
            cout << i  << endl;
            return 0;
        }
    }
}
