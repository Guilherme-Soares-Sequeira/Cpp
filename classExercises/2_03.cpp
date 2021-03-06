#include <iostream>
#include <bits/stdc++.h>

int main() {
    std::cout << "Please input 2 integer numbers separated by a space: ";
    long int a, b;
    std::cin >> a >> b;
    if (INT_MAX < b + a) std::cerr << "sum overflow" << std::endl;
    else if (INT_MIN > b + a ) std::cerr << "sum underflow" << std::endl;
    else std::cout << "The result of the sum is " << a + b << std::endl;
    return 0;
}