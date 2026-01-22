#include <iostream>

int main()
{  
    int i = 0;
    std::cin>> i;
    
    for (int j = i - 1; j >= 1; j--) {
        std::cout << j << " * " << j << " = " << j * j << std::endl;
    }
    return 0;
}