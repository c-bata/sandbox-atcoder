#include <iostream>
#include <string>

using namespace std;

bool is_prime(int n) {
    switch(n){
        case 0: // fall-through
        case 1: return false;
        case 2: return true;
    } // n > 2 が保証された

    if(n%2 == 0) return false;

    // 上で i=2 相当は調べたので、i=3から奇数のみ調べる
    for(unsigned i=3;i*i<=n;i+=2){
        if(n%i == 0) return false;
    }

    return true;
}

int main() {
    int x;
    cin >> x;

    if (x != 2 && x % 2 == 0) x+=1;
    for (int i = x; ; i+=2) {
        if (is_prime(i)) {
            cout << i << endl;
            return 0;
        }
    }
}
