#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#define rep(i, n) for (int i=0; i< (n); ++i)
typedef long long ll;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

using namespace std;

double kitaichi(int *p, int k, int pos) {
    double max_kitaichi = 0;
    for (int i=pos; i<pos+k; i++) {
        double souwa = (double) (p[i] * (p[i] + 1)) / 2;
        double bunbo = p[i];
        double kitaichi = souwa / bunbo;
        max_kitaichi += kitaichi;
    }
    return max_kitaichi;
}

int main() {
    int n, k;

    cin >> n >> k;

    int p[n];
    rep(i, n) cin >> p[i];

    int sum = 0;
    rep(i, k) {
        sum += p[i];
    }
    int max_pos = 0;
    int max_sum = sum;

    rep(i, n-k-1) {
        //cout << i << " " << sum << " " << kitaichi(p, k, i) << endl;
        sum = sum - p[i] + p[i+k];
        if (max_sum < sum) {
            max_sum = sum;
            max_pos = i+1;
        }
    }

    //cout << max_pos << endl;

    double max_kitaichi = 0;
    for (int i=max_pos; i<max_pos+k; i++) {
        double souwa = (double) (p[i] * (p[i] + 1)) / 2;
        double bunbo = p[i];
        double kitaichi = souwa / bunbo;
        max_kitaichi += kitaichi;
    }

    cout << max_kitaichi << endl;
}
