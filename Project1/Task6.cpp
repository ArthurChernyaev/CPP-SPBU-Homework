
#include <iostream>

int main() {
    int height;
    std::cin >> height;

    auto row = [&](int i) {
        for (int j = 0; j < height - i; ++j) std::cout << ' ';
        int w = 2 * i - 1;
        for (int p = 0; p < w; ++p)
            std::cout << ((p == 0 || p == w - 1) ? '*' : ' ');
        std::cout << '\n';
        };

    for (int i = 1; i <= height; ++i) row(i);
    for (int i = height - 1; i >= 1; --i) row(i);
}