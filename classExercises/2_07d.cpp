#include <iostream>
#include <cmath>

int main() {
    unsigned long int aVar = 0;
    aVar--;
    do {
        bool prime = true;
        for (int i = 2; i < sqrt(aVar); i++) {
            std::cout << "I'm working.. i = " << i << "\n";
            if ((aVar % i) == 0) {
                prime = false;
                break;
            }
        }
        if (prime) {
            std::cout << "The max prime that fits is: " << aVar << std::endl;
            break;
        }
        aVar--;
    } while (aVar); 
    return 0;
}