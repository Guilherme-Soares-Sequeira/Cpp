#include <iostream>

void readArray(int a[], size_t nElem){
    for(int i = 0; i < nElem; i++) {
        std::cout << "Please enter a number [" << i << "/" << nElem-1 << "]: ";
        std::cin >> a[i];
    }
}



int main(){
    size_t size;
    std::cout << "Please enter the size of the array you pretend to read: ";
    std::cin >> size;
    int anArray[size];
    readArray(anArray, size);
    for (int i=0; i < size; i++) {
        std::cout << anArray[i] << "\n";
    }
    std::cout << std::endl;
    return 0;
}