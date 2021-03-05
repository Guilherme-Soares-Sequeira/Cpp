#include <iostream>

int main() {
    std::cout << "Please input the 2 coefficients of x, then the 2 coefficients of y and finally the 2 independent variables all separated by a space: ";
    float a, b, c, d, e, f;
    std::cin >> a >> d >> b >> e >> c >> f;
    double x = static_cast<double> (c*e - b*f) / (a*e - b*d), y = static_cast<double> (a*f - c*d) / (a*e - b*d);
    if (a*e - b*d == 0) std::cerr << "impossible system" << std::endl;
    else if (x == y) std::cerr << "inconsistent sytem" << std::endl;
    else std::cout << "x = " << x << "\ny = " << y << std::endl;
}