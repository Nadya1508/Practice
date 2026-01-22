#include <iostream>

int main() {
    
    double a, b, c, x, y;
    
    if (!(std::cin >> a >> b >> c >> x >> y)) {
        std::cout << "Incorrect input" << std::endl;
        return 0;
    }
    
    if (a <= 0 || b <= 0 || c <= 0 || x <= 0 || y <= 0) {
        std::cout << "Incorrect input";
        return 0;
    }
    
    double brick_small, brick_mid, brick_large;
    
    brick_small = a;
    if (b < brick_small) brick_small = b;
    if (c < brick_small) brick_small = c;
    
    brick_large = a;
    if (b > brick_large) brick_large = b;
    if (c > brick_large) brick_large = c;
    
    brick_mid = a + b + c - brick_small - brick_large;
    
    double min_hole, max_hole;
    
    if (x < y) {
      min_hole = x;
        max_hole = y;
    } else {
        min_hole = y;
        max_hole = x;
    }
    
    if (brick_small <= min_hole && brick_mid <= max_hole) {
        std::cout << "YES" << std::endl;
    } else { 
        std:: cout << "NO" << std::endl;
    }
    
    return 0;
}