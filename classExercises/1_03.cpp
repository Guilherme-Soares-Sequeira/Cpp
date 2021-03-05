#include <iostream>
#include <math.h>

int main() {
    float ro, radius;
    std::cout << "Please input ro in Kg/m³ and the radius in meters, separated by a space: ";
    std::cin >> ro >> radius;
    std::cout << "The mass of the sphere in Kg is: " << 4.0/3 * ro * M_PI * radius * radius * radius << std::endl;
}