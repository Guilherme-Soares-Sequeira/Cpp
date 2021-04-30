#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    std::cout << "Please enter the precision you want: ";
    double precision;
    std::cin >> precision;
    
    double result = 4.0;
    int i = 1;
    double previousResult;
    double difference;
    std::cout << std::setprecision(floor(abs(log10(precision)))) << std::fixed;
    do {
        previousResult = result;
        result += (pow(-1, i) * (static_cast<double> (4.0)/(2*i + 1)));
        i++;
        difference = (result - previousResult < 0) ? -1 * (result - previousResult) : result - previousResult;
        std::cout << "previous result = " << previousResult << "; result = " << result << "; difference = " << difference << std::endl;
    } while (difference > precision);
    std::cout << "Pi to the " << precision << " precision is " << result << std::endl;
    return 0;