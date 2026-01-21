#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    long double a, b, c, d;
    cin >> a >> b >> c >> d;

    if (c == 0) {
        cout << "ERROR" << endl;
        return 0;
    }

    long double Z;
    if (c >= d && a < d) {
        Z = a + b / c;
    } else if (c < d && a >= d) {
        Z = a - b / c;
    } else {
        Z = 0;
    }

    cout << setprecision(17) << Z << endl;

    return 0;
}