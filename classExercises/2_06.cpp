#include <iostream>
#include <cmath>


int main() {
    std::cout << "Please introduce the initial deposit, the interest rate (0<=x<=1) and the number of years that have passed since you made the deposit: ";
    double deposit, interestrate, years;
    std::cin >> deposit >> interestrate >> years;
    if (years == 1) std::cout << "The value that you can withdraw from the account after 1 year is: " << deposit * (interestrate+1) << std::endl;
    else std::cout << "The value that you can withdraw from the account after " << years << " years is: " << deposit * pow(interestrate+1, years) << std::endl;
    return 0;
}