#include <iostream>

int main() {
    int height;
    std::cin >> height;

    for (int i = 1; i <= height; ++i) {
        for (int j = 0; j < height - i; ++j) std::cout << ' ';
        for (int j = 0; j < 2 * i - 1; ++j)  std::cout << '*';
        std::cout << '\n';
    }


    for (int i = height - 1; i >= 1; --i) {
        for (int j = 0; j < height - i; ++j) std::cout << ' ';
        for (int j = 0; j < 2 * i - 1; ++j)  std::cout << '*';
        std::cout << '\n';
    }
}