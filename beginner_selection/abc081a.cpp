#include <iostream>
#include <string>

using namespace std;

int main() {
    int cnt = 0;
    string s;

    cin >> s;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '1') {
            cnt++;
        }
    }

    cout << cnt << endl;
}
