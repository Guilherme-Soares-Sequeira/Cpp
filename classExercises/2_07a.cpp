#include <iostream>
#include <cmath>

int main() {
    std::cout << "Please introduce an integer: ";
    int aNum;
    std::cin >> aNum;
    if (aNum == 2) {
        std::cout << "The number is prime." << std::endl;
        return 0;
    } else if (aNum < 2) {
        std::cout << "The number is not prime." << std::endl;
        return 0;
    }

    double aSqrt = sqrt(aNum);
    for (int i = 2; i <= aSqrt; i++ ) {
        if (aNum % i == 0) {
            std::cout << "The number is not prime" << std::endl;
            return 0;
        }
    }
    std::cout << "The number is prime." << std::endl;
    return 0;
}