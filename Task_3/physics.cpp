#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
    long double a, t , v0;
    std::cin >> a >> t >> v0;
    
    long double s = v0 * t + (a * t * t) / 2.0L;
    
    std::cout << std::setprecision(20) << s << std::endl;
    
    return 0;
}