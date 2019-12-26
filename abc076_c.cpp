#include <iostream>
#include <string>

using namespace std;

bool match(string a, string b) {
    for (int i=0; i<a.size(); i++) {
        if (a[i] != '?' && a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    string s;
    string t;

    cin >> s;
    cin >> t;

    if (s.size() < t.size()) {
        cout << "UNRESTORABLE" << endl;
        return 0;
    }

    bool found = false;
    unsigned long substr_len = t.size();
    for (unsigned long i=s.size(); i>=substr_len; i--) {
        string a = s.substr(i-substr_len, i);

        if (match(a, t)) {
            found = true;
            for (int j=0; j<substr_len; j++) {
                if (s[i-substr_len+j] == '?') {
                    s[i-substr_len+j] = t[j];
                }
            }
            i -= substr_len; // bug?
        }
    }

    for (int i=0; i<s.size(); i++) {
        if (s[i] == '?') {
            s[i] = 'a';
        }
    }

    if (!found) {
        cout << "UNRESTORABLE" << endl;
        return 0;
    }
    cout << s << endl;
}
