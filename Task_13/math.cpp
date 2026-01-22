#include <iostream>

int main()
{
    int k = 0;
    std::cin >> k;

    for(int i = 1; i < k;i++){
       for(int j = 1;j < k;j++){  
           std::cout << i * j << ((j < k - 1) ? '\t' : '\n');
       }
    }
   return 0; 
}