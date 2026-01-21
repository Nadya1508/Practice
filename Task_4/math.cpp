#include <iostream>
#include <iomanip>

int main() {
    
    double b1;
    std::cin >> b1;
    
    const double q = 1.0 / 1001.0;
    
    double sum = b1 / (1.0 - q);
    
    std::cout << std::setprecision(8) << sum << std::endl;
    return 0;
}