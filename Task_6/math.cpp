#include <iostream>

int main() {
    int X, Y;
    std::cin >> X >> Y;
    
    if (X == 0 && Y == 0) {
        std::cout << "ERROR" << std::endl;
    }
    else if (X == 0 || Y == 0) {
        std::cout << "YES" << std::endl;  
    }
    else if (X % Y == 0 || Y % X == 0) {
        std::cout << "YES" << std::endl;
    }
    else {
        std::cout << "NO" << std::endl;
    }
    
    return 0;
}