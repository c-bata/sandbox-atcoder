#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n+1];
    int b[n+1];
    memset(b, 0, sizeof(b));

    a[0] = 0;
    for (int i=1; i<=n; i++)
        cin >> a[i];

    for (int i=n; i>=1; i--) {
        int num = 0;
        for (int x=i; x<=n; x+=i) {
            num += b[x];
        }
        if (num % 2 == a[i]) {
            b[i] = 0;
        } else {
            b[i] = 1;
        }
    }

    int sum = 0;
    for (int i=1; i<=n; i++)
        sum += b[i];

    if (b[1] == sum % 2) {
        cout << sum << endl;
        bool first = true;
        for (int i=1; i<=n; i++) {
            if (b[i] == 1) {
                if (!first) {
                    cout << " ";
                } else {
                    first = false;
                }
                cout << i;
            }
        }
        if (!first) {
            cout << endl;
        }

        //for (int i=1; i<=n; i++) {
        //    if (i != 1)
        //        cout << " ";
        //    cout << b[i];
        //}
        //cout << endl;
    } else {
        cout << "-1" << endl;
    }
}
