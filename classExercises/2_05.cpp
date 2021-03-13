#include <iostream>
#include <math.h>
#include <iomanip>


int  main() {
    std::cout << "Please introduce the coefficients A, B and C, each separated by a space: ";
    float A, B, C;
    std::cin >> A >> B >> C;
    float sqrtOperand = B*B - 4 * A * C;
    if (sqrtOperand == 0) std::cout << std::fixed << std::setprecision(3) << "The equation has 2 equal real roots: " <<  static_cast<float> (-B) / (2*A) << std::endl;
    else if (sqrtOperand > 0) std::cout << std::fixed << std::setprecision(3) << "The equation has 2 real roots: " << (-B + sqrt(sqrtOperand)) / (2.0 * A) << " and " << (-B - sqrt(sqrtOperand)) / (2.0 * A) <<  std::endl;
    else {
        float realpart = (-B) / (2.0*A), complexpart = sqrt(-sqrtOperand) / (2.0*A);
        std::cout << std::fixed << std::setprecision(3) << "The equation has 2 complex roots: " << realpart << "+" << complexpart  << "i and " << realpart << "-" << complexpart << "i" << std::endl;
    }
    return 0;
}