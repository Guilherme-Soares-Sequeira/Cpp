#include <iostream>
#include <cmath>

double area(double x1, double y1, double x2, double y2, double x3, double y3) {
    double side1 = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2)), side2 = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2)), side3 = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
    double semiperimeter = (side1 + side2 + side3) / 2;
    return sqrt(semiperimeter * (semiperimeter - side1) * (semiperimeter - side2) * (semiperimeter - side3));
}

double distance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
}

int main() {
    std::cout << area(0,0,2,0,1,3) << "\n";
    std::cout << distance(0,0,4,3) << std::endl;
    return 0;
}