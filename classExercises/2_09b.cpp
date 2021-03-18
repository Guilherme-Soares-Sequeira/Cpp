#include <iostream>

//Fetches the digit in the given index of 'number'
int fetchInt(int index, int number) {
    for (int i = 0; i < index; i++) {
        number /= 10;
    }
    return number % 10;
}



int main() {
    unsigned int aNum;
    
    std::cout << "Please enter an unsigned integer: ";
    std::cin >> aNum;
    
    //dummy variable because I do not want to affect the real thing, and a counter
    int dummyNum = aNum, counter = 1;
    
    //counts how many digits are in the number
    while (dummyNum >= 10) {
        dummyNum /= 10;
        counter++;
    }
    int len = counter;
    //the counter variable will also act as the number of checks I have to do. 
    if (counter % 2 == 1) counter = (counter - 1) / 2;
    else counter /= 2;

    bool isItPalindrome = true;
    for (int i = 0; i < counter; i++) {
        if (fetchInt(i, aNum) != fetchInt(len-1-i, aNum)) isItPalindrome = false;
    }
    
    if (isItPalindrome) std::cout << "Your number is a palindrome" << std::endl;
    else std::cout << "Your number is not a palindrome" << std::endl;

    return 0;
}