#include <iostream>

int findValueInArray(const int a[], size_t nElem, int value, size_t pos1, size_t pos2){
    for (int i = pos1; i <= pos2; i++) {
        if (a[i] == value) return i;
    }
    return -1;
}

int main(){
    //Random array and values just for testing
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    std::cout << findValueInArray(a, 10, 4, 2, 6) << std::endl;
    return 0;
}