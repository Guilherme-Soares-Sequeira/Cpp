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
    int counter;
    int i = 2;
    while (counter < 100) {
        if (isItPrime(i)) { 
            std::cout << i << "\n";
            counter++;
        }
        i++;
    }
    std::cout << std::endl;
}