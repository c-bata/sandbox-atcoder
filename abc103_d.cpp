#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    pair<int, int> routes[m]; // n個の島においいて、 .first から .second の繋がりを切る

    for (int i=0; i<m; i++)
        cin >> routes[i].first >> routes[i].second;

    sort(routes, routes+m, [](pair<int, int> x, pair<int, int> y) {
        return x.second < y.second;
    });

    int prev_point = routes[0].second;
    int cnt = 1;
    for (int i=1; i<m; i++) {
         if (routes[i].first >= prev_point) {
             cnt++;
             prev_point = routes[i].second;
         }
    }

    //for (int i=0; i<m; i++)
    //    cout << routes[i].first << " " << routes[i].second << endl;
    cout << cnt << endl;
}
