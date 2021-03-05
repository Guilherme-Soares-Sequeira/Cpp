#include <iostream>

int main()  {
    float a, b, c, d, e, f;
    std::cout << "Please input a, b, c, d, e, and f separated by spaces: ";
    std::cin >> a >> b >> c >> d >> e >> f;
    std::cout << "x = " << static_cast<float> (c*e - b*f) / (a*e - b*d) << "\ny = " << static_cast<float> (a*f - c*d) / (a*e - b*d) << std::endl;
}