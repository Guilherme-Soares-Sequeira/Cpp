#include <iostream>
#include <cmath>
#include <iomanip>

double round(double x, unsigned n) {
    return floor(x * pow(10, n) + 0.5) / pow(10, n);
}

int main() {
    std::cout << std::fixed << std::setprecision(8) << round(3.192847425541, 8) << std::endl;
    return 0;
}