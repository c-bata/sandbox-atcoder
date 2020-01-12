#include <iostream>
#include <string>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int p[m];
    string s[m];

    for (int i=0; i<m; i++) {
        cin >> p[i] >> s[i];
    }

    bool is_ac[n+1];
    for (int i=0; i<n+1; i++)
        is_ac[i] = false;

    int success = 0;
    int penalty = 0;
    for (int i=0; i<m; i++) {
        if (is_ac[p[i]]) {
            continue;
        }

        bool current_is_ac =  s[i] == "AC";
        if (current_is_ac) {
            is_ac[p[i]] = true;
            success++;
        } else {
            penalty++;
        }
    }

    cout << success << " " << penalty << endl;
}
