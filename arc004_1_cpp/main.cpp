#include <iostream>
#include <cstdio>
#include <vector>
#include <cmath>


// https://qiita.com/blackcurrant/items/312ea2471900132fbd6a
// https://gist.github.com/rigibun/7905920


int main() {
    int num;
    std::cin >> num;
    std::vector<int> x_list(num);
    std::vector<int> y_list(num);

    for (int i=0; i<num; i++) {
        int x, y;
        scanf("%d %d", &x, &y);
        x_list[i] = x;
        y_list[i] = y;
    };

    double longest = 0.0;
    for (int i=0; i<num; i++) {
        for (int j=0; j<num; j++) {
            if (i == j) {
                continue;
            }
            double x = std::sqrt(std::pow(x_list[i] - x_list[j], 2) + std::pow(y_list[i] - y_list[j], 2));
            if (x > longest) {
                longest = x;
            };
        }
    }
    std::cout << longest << std::endl;
}
