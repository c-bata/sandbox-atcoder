#include <iostream>
#include <string>

using namespace std;

// 再帰で解いたらtime over. DPとか考えずに素直に全探索で解ける問題.
//int cnt = 0;
//
//void count(int a, int b, int c, int x) {
//    if (x == 0) {
//        cnt++;
//        return;
//    }
//
//    if (a > 0 && x - 500 >= 0) count(a-1, b, c, x-500);
//    if (b > 0 && x - 100 >= 0) count(a, b-1, c, x-100);
//    if (c > 0 && x - 50 >= 0) count(a, b, c-1, x-50);
//}
//
//int main() {
//    int a, b, c, x;
//    cin >> a >> b >> c >> x;
//
//    count(a, b, c, x);
//    cout << cnt << endl;
//}

int main() {
    int A, B, C, X;
    cin >> A >> B >> C >> X;
    int res = 0;
    for (int a = 0; a <= A; ++a) {
        for (int b = 0; b <= B; ++b) {
            for (int c = 0; c <= C; ++c) {
                int total = 500*a + 100*b + 50*c;
                if (total == X) ++res;
            }
        }
    }
    cout << res << endl;
}
