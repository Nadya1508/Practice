#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
    double h;
    std::cin >> h;
    
    const double g = 9.8;
    double t = sqrt(2 * h / g);
    
    std::cout << std::setprecision(9) << t << std::endl;
    return 0;
}