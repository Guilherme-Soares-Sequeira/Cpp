#include <iostream>
#include <cmath>

int GCD (int num1, int num2, int& GCD) {
    do {
        if (num1 == num2) {
            GCD = num1;
            break;
        } 
        else if (num1 == 0) { 
            GCD = num2;
            break;
        }
        else if (num2 == 0) {     
            GCD =  num1;
            break;
        }
        else if (num1 > num2) num1 -= num2;
        else num2 -= num1;
    } while (1);
    return 0;
}

int main() {
    int GreatestCD = 0;
    GCD(100, 90, GreatestCD);
    std::cout << GreatestCD << std::endl;
    return 0;
}