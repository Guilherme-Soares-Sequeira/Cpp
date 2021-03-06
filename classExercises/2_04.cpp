#include <iostream>

int roughDivisaoInteira(float toDivide, int divider) {
    
    int result = 0;
    while (toDivide > divider) {
        toDivide -= divider;
        result++;
    }   
    return result + 1;
}


int main() {
    std::cout << "Please introduce the weight of the merchandise in grams: ";
    float weight;
    std::cin >> weight;
    if (weight <= 500) std::cout << "The shipping costs 5 euros." << std::endl;
    else if ((weight >= 501) && (weight <= 1000)) std::cout << "The shipping costs " << 5 + 1.5 * roughDivisaoInteira(weight-500, 100) << " euros." << std::endl;
    else std::cout << "The shipping costs " << 12.5 + 5 * roughDivisaoInteira(weight-1000, 250) << " euros." << std::endl; 
    return 0;
}