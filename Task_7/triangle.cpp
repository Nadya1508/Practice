#include <iostream>

int main() {
    
    double x, y, z;
    std::cin >> x >> y >> z;
    if (x + y > z && y + z > x && x + z > y) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }
    return 0;
}