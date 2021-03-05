#include <iostream>

int main() {
    float arr[3] = {0, 0, 0};
    for (int i = 0; i < 3; i++) {
        std::cout << "Please input a number (" << i+1 << " of 3): ";
        std::cin >> arr[i];
    }
    float max = arr[0], min = arr[0];
    for (int i = 1; i < 3; i++) {
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
    }
    std::cout << "max = " << max << "\nmin = " << min << std::endl;
    return 0;
}