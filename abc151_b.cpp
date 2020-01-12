#include <iostream>

using namespace std;

int main() {
    int N, K, M;
    cin >> N >> K >> M;

    int A[N];

    int sum = 0;
    for (int i=0; i<N-1; i++) {
        cin >> A[i];
        sum += A[i];
    }

    if (sum + K >= N*M) {
        cout << max(N*M - sum, 0) << endl;
    } else {
        cout << "-1" << endl;
    }
}
