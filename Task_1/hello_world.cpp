#include <iostream>
#include <iomanip>

int main() {
    std:: cout << "Hello, World!" << '\n';
    std:: cout << std::setbase(16) << std::scientific << std::setprecision(4);
    std:: cout << 125;
    std:: cout << 36.23415;
    return 0;
}