#include <iostream>
#include <cmath>

using namespace std; 

double exponent (double number, int power) {
    double result = number;

    for (int i = 1; i < power; i++) {
        result *= number;
    }

    return result;
}

int main() {
    cout << exponent (3, 3) << endl;

    return 0;
}

