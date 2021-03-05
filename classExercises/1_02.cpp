#include <iostream>

int main() {
    float A, B, C;
    std::cout << "Please submit 3 space-separated integers: ";
    std::cin >> A >> B >> C;
    float mean = (A + B + C ) / 3; 
    std::cout << "mean = " << mean << "\n";
    std::cout << "A-mean = " << A-mean << "\nB-mean = " << B-mean << "\nC-mean = " << C-mean << std::endl;
}