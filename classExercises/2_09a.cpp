#include <iostream>

int main() {
    int aNum;
    
    std::cout << "Please enter a 3 digit integer: ";
    std::cin >> aNum;
    
    if (aNum % 10 == (aNum / 10) / 10) std::cout << "Your number is a palindrome" << std::endl;
    else std::cout << "Your number is not a palindrome" << std::endl;

    return 0;



}