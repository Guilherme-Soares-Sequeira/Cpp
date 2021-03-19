#include <iostream>
#include <iomanip>

//Quick iterative factorial function, returns unsigned long long because factorial scales very fast
unsigned long long int factorial(int num) {
    if (num <= 0) return 1;
    else if (num == 1) return 1;

    unsigned long long result = 1;
    for (int i = num; i > 1; i--) {
        result *= i;
    }
    return result;
}


int main() {
    //More than 66 terms and overflow occurs
    std::cout << "Please enter the number of terms (max supported is 66): ";
    int terms;
    std::cin >> terms;
    
    if (terms == 0) {
        std::cout << "The sum of the first " << terms << " terms is " << 0 << std::endl;
        return 0;
    }
    else if (terms == 1) {
        std::cout << "The sum of the first " << terms << " terms is " << 1 << std::endl;
        return 0;
    }

    //Trying to delay overflow and minimize inaccuracies
    long double result = 1.0;
    for (int i = 1; i < terms; i++) {
        result += (static_cast<long double> (1.0)/factorial(i));
    }
    std::cout << std::setprecision(15) << "The sum of the first " << terms << " terms is " << result << std::endl;
    return 0;
}