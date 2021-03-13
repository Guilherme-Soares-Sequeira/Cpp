#include <iostream>
#include <cmath>

int isItPrime(int aNum) {
    if (aNum < 2) return 0;   
    double aSqrt = sqrt(aNum);
    for (int i = 2; i <= aSqrt; i++ ) {
        if (aNum % i == 0) {
            return 0;
        }
    }
    return 1;
}


int main() {
    for (int i = 0; i < 1000; i++) {
        if (isItPrime(i)) {
            std::cout << i << "\n";
        }
    }
    std::cout << std::endl;
}