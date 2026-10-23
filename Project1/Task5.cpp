#include <iostream>

int main() {
    int height;
    std::cin >> height;

    auto row = [&](int i) {
        for (int j = 0; j < height - i; ++j) std::cout << ' ';
        for (int k = 0; k < i; ++k) {
            if (k) std::cout << ' ';   
            std::cout << '*';
        }
        std::cout << '\n';
        };

    for (int i = 1; i <= height; ++i) row(i); 
    for (int i = height - 1; i >= 1; --i) row(i);     
}