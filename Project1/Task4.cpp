#include <iostream>

int main() {
    int n, m;
    std::cin >> n >> m;

    for (int i = 1; i <= 2 * n - 1; i++) {
        int stars;

        if (i <= n) {
            stars = 2 * i - 1;
        }
        else {
            stars = 2 * (2 * n - i) - 1;
        }

        for (int j = 0; j < m; j++) {
            for (int k = 0; k < n - (stars + 1) / 2; k++) {
                std::cout << ' ';
            }

            for (int k = 0; k < stars; k++) {
                std::cout << '*';
            }

            std::cout << "  ";
        }

        std::cout << '\n';
    }

    return 0;
}