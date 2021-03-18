#include <iostream>

//This function will return the lowest prime that divides 'number'. Note that the number returned is always prime because
//if the number isn't prime then the iterator has already passed through the factos of that number... or it will return itself (a prime)
int fetchPrime(int number) {
    if (number == 2) return 2;
    else if (number == 1) return 1;
    
    for (int i = 2; i <= number; i++) {
        if (number % i == 0) return i;
    }
    return 1;
}


int main() {
    int aNum;
    std::cout << "Please enter an integer: ";
    std::cin >> aNum;

    std::cout << aNum << " = ";
    int primeFactor = fetchPrime(aNum);
    
    
    if (primeFactor == 1) {
        std::cout << 1;
        return 0;
    }
   
    while (aNum > 1) {
        if (primeFactor != 1) {
            std::cout << primeFactor;
            aNum /= primeFactor;
        }
        
        //I decided to do it this way to not have to bother with an x showing up either at the beginning or at the end
        primeFactor = fetchPrime(aNum);
        if (primeFactor != 1) std::cout << "x";
    }
    std::cout << std::endl;
    return 0;
}