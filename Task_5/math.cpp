#include <iostream>
#include <iomanip>

int main() {
    
    double a1, a100;
    std::cin >> a1 >> a100;
    
    double d = (a100 - a1) / 99.0;
    
    double a70 = a1 + d * 69.0;
    double sum70 = 70.0 * (a1 + a70) / 2.0;
    
    std::cout << std::setprecision(10) << d << std::endl;
    std::cout << std::setprecision(10) << sum70 << std::endl;
    
    return 0;
}