#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;

    // 後ろからやるのが正解だったっぽい。
    for (int i = 0; i<s.size(); ) {
        // この条件治すために3回失敗 (CEはペナルティがつかない)。
        // 提出時間に15(5*3)分のペナルティがつく
        if (s.substr((unsigned long)i, 11) == "eraserdream") {
            i += 6;
        } else if (s.substr((unsigned long)i, 10) == "dreamerase") {
            i += 5;
        } else if (s.substr((unsigned long)i, 7) == "dreamer") {
            i += 7;
        } else if (s.substr((unsigned long)i, 6) == "eraser") {
            i += 6;
        } else if (s.substr((unsigned long)i, 5) == "dream") {
            i += 5;
        } else if (s.substr((unsigned long)i, 5) == "erase") {
            i += 5;
        } else {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
}
