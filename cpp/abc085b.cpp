#include <iostream>
#include <set>

using namespace std;

int main() {
    int n;
    cin >> n;

    int d[n];
    for (int i=0; i<n; i++) {
        cin >> d[i];
    }

    set<int> values;
    for (int i = 0; i < n; i++) {
        values.insert(d[i]);
    }
    cout << values.size() << endl;
}
