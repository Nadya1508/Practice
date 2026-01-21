#include <iostream>
#include <cmath>  

int main() {
    long long K;  
    std::cin >> K;
    
    std::cout << "Мы нашли " << K << " гриб";
    
    long long absK = std::llabs(K);  
    int last_digit = absK % 10;
    int last_two_digit = absK % 100;
    
    if (K == 0) {
        std::cout << "ов";
    }
    else if (last_two_digit >= 11 && last_two_digit <= 14) {
        std::cout << "ов";
    }
    else if (last_digit == 1) {
        
    }
    else if (last_digit >= 2 && last_digit <= 4) {
        std::cout << "а";
    }
    else {
        std::cout << "ов";
    }
    
    std::cout << " в лесу";
    
    return 0;
}