#include <iostream>
#include <cmath>

int main() {
    std::cout << "Please enter the number of terms: ";
    int terms;
    std::cin >> terms;
    
    if (terms <= 0) {
        std::cout << "The sum of the first " << terms << " terms is " << 0 << std::endl;
        return 0;
    }
    else if (terms == 1) {
        std::cout << "The sum of the first " << terms << " terms is " << 4 << std::endl;
        return 0;
    }

    double result = 4.0;
    for (int i = 1; i < terms; i++) {
        result += (pow(-1, i) * (4.0/(2*i + 1)));
    }
    std::cout << "The sum of the first " << terms << " terms is " << result << std::endl;
    return 0;
}