#include <iostream>
#include <math.h>

int main() {
    float x1, y1, x2, y2, x3, y3;
    std::cout << "Please input the coordinates of the first point (x y) separated by a space: ";
    std::cin >> x1 >> y1;
    std::cout << "Please input the coordinates of the second point (x y) separated by a space: ";
    std::cin >> x2 >> y2;
    std::cout << "Please input the coordinates of the third point (x y) separated by a space: ";
    std::cin >> x3 >> y3;
    double side1 = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2)), side2 = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2)), side3 = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
    double semiperimeter = (side1 + side2 + side3) / 2;
    std::cout << "The area of the triangle is " << sqrt(semiperimeter * (semiperimeter - side1) * (semiperimeter - side2) * (semiperimeter - side3)) << std::endl;
    return 0;
}