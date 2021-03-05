#include <iostream>
#include <algorithm>

int main() {
    float arr[3] = {0, 0, 0};
    for (int i = 0; i < 3; i++) {
        std::cout << "Please input a number (" << i+1 << " of 3): ";
        std::cin >> arr[i];
    }

    std::sort(arr, arr+3);
    for (int i = 2; i >= 0; i--) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}