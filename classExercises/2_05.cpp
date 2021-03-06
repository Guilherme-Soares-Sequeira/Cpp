#include <iostream>
#include <math.h>
#include <iomanip>


int  main() {
    std::cout << "Please introduce the coefficients A, B and C, each separated by a space: ";
    float A, B, C;
    std::cin >> A >> B >> C;
    float sqrtOperand = B*B - 4 * A * C;
    if (sqrtOperand == 0) std::cout << "The equation has 2 equal real roots: " << std::setw(5) << static_cast<float> (-B) / (2*A) << std::setfill('0') << std::endl;
    else if (sqrtOperand > 0) std::cout << "The equation has 2 real roots: " << std::setw(5) << (-B + sqrt(sqrtOperand)) / (2.0 * A) << std::setfill('0') << " and " << (-B - sqrt(sqrtOperand)) / (2.0 * A) << std::setfill('0') << std::endl;
    else {
        float realpart = (-B) / (2.0*A), complexpart = sqrt(-sqrtOperand) / (2.0*A);
        std::cout << "The equation has 2 complex roots: " << std::setw(5) << realpart << std::setfill('0') <<  "+" << std::setw(5)<< complexpart << std::setfill('0') <<"i and " << std::setw(5) << realpart << std::setfill('0') << "-" << std::setw(5) << complexpart << std::setfill('0') << "i" << std::endl;
    }
    return 0;
}