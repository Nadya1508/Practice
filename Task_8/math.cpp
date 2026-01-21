#include <iostream>

int main() {
    long long X, Y;
    double A, B, C, K;
    
    std::cin >> X >> Y;
    std::cin >> A >> B >> C >> K;
    
    if (X < Y) {
        X = 0;
    } else if (Y < X) {
        Y = 0;
    } else {
        X = 0;
        Y = 0;
    }
    double max_val = A;
    if (B > max_val) max_val = B;
    if (C > max_val) max_val = C;
    
    if (max_val == A) A -= K;
    else if (max_val == B) B -= K;
    else C -= K;
    
    std::cout << X << " " << Y << std::endl;
    std::cout << A << " " << B << " " << C << std::endl;
    
    return 0;
}