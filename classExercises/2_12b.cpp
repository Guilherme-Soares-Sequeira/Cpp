#include <iostream>
#include <cmath>
#include <iomanip>

//Quick iterative factorial function, returns unsigned long long because factorial scales very fast
unsigned long long int factorial(int num) {
    if (num <= 0) return 1;
    else if (num == 1) return 1;

    unsigned long long result = 1;
    for (int i = num; i > 1; i--) {
        result *= i;
    }
    return result;
}

int main() {
    std::cout << "Please enter the precision you want: ";
    double precision;
    std::cin >> precision;
    
    long double result = 1.0;
    int i = 1;
    long double previousResult;
    long double difference;
    std::cout << std::setprecision(floor(abs(log10(precision)))) << std::fixed;
    do {
        previousResult = result;
        result += (static_cast<long double> (1.0)/factorial(i));
        i++;
        difference = (result - previousResult < 0) ? -1 * (result - previousResult) : result - previousResult;
        std::cout << "previous result = " << previousResult << "; result = " << result << "; difference = " << difference << std::endl;
    } while (difference > precision);
    std::cout << "e to the " << precision << " precision is " << result << std::endl;
    return 0;
}