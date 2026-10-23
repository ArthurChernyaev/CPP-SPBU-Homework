#include <iostream>

int main() {
    int height, count;
    std::cin >> height >> count;

    const int GAP = 1;               

    auto row = [&](int i) {
        for (int j = 0; j < height - i; ++j) std::cout << ' ';
        for (int j = 0; j < 2 * i - 1; ++j)  std::cout << '*';
        };

    for (int rowIdx = 0; rowIdx < 2 * height - 1; ++rowIdx) {
        int i = (rowIdx < height) ? (rowIdx + 1) : (2 * height - 1 - rowIdx);
        for (int r = 0; r < count; ++r) {
            row(i);
            if (r != count - 1)              
                for (int g = 0; g < GAP; ++g) std::cout << ' ';
        }
        std::cout << '\n';
    }
}