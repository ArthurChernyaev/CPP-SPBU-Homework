
#include <iostream>

int main() {
    int W = 41, H = 21;                
    double XMIN = -1.5, XMAX = 1.5;
    double YMIN = -1.5, YMAX = 1.5;
    double DX = (XMAX - XMIN) / (W - 1);
    double DY = (YMAX - YMIN) / (H - 1); 

    for (int row = 0; row < H; ++row) {
        double y = YMAX - row * DY; 
        for (int col = 0; col < W; ++col) {
            double x = XMIN + col * DX;
            double t = x * x + y * y - 1.0;
            double lhs = t * t * t - x * x * y * y * y;
            std::cout << (lhs <= 0.0 ? '*' : '.');
        }
        std::cout << '\n';
    }
}