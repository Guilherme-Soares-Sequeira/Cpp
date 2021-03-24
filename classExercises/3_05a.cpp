#include <iostream>
#include <cmath>

int GCD (int num1, int num2) {
    do {
        if (num1 == num2) return num1;
        else if (num1 == 0) return num2;
        else if (num2 == 0) return num1;
        else if (num1 > num2) num1 -= num2;
        else num2 -= num1;
    } while (1);
}

int main() {
    std::cout << GCD (28, 12) << std::endl;
    return 0;
}