#include <iostream>
#include <cmath>

int main() {
    int n;
    std::cin >> n;
    
    for (int num = 1; num < n; num++){
        int temp = num;
        int digits = 0;
        
        while (temp > 0) {
            digits++;
            temp /= 10;
        }
        
        int sum = 0;
        temp = num;
        while (temp > 0) {
            int digit = temp % 10;
            sum += std::pow(digit, digits);
            temp /= 10;
        }
        
         if (sum == num) {
            std::cout << num << std::endl;
    }
    }
        return 0;
}