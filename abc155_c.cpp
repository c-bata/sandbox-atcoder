#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <cstring>

#define rep(i, n) for (int i=0; i< (n); ++i)
typedef long long ll;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

using namespace std;

int main() {
    int n;
    cin >> n;

    //string s[n];
    //rep(i, n) cin >> s[i];

    map<string, int> m{};
    rep(i, n) {
        string a;
        cin >> a;
        if (m.count(a) == 0) {
            m[a] = 1;
        } else {
            m[a]++;
        }
    }


    string items[m.size()];
    pair<string, int> map_pair[m.size()];
    int i = 0;
    for (auto const& x : m) {
        items[i] = x.first;
        map_pair[i] = x;
        i++;
    }


    sort(map_pair, map_pair+m.size(), [](pair<string, int> x, pair<string, int> y) {
        if (x.second == y.second) {
            return strcmp(x.first.c_str(), y.first.c_str()) < 0;
        }
        return x.second > y.second;
    });

    //rep(j, m.size()) cout << map_pair[j].first << " " << map_pair[j].second << endl;

    int prev = -1;
    rep(j, m.size()) {
        if (j != 0 && map_pair[j].second != prev) {
            return 0;
        }
        cout << map_pair[j].first << endl;
        prev = map_pair[j].second;
    }
}
