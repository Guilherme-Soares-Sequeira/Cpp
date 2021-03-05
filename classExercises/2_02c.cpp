#include <iostream>
#include <algorithm>

int main() {
    float arr[3] = {0, 0, 0};
    for (int i = 0; i < 3; i++) {
        std::cout << "Please input a positive number (" << i+1 << " of 3): ";
        std::cin >> arr[i];
        if (arr[i] < 0) {
            std::cerr << "Invalid number... please input only positive numbers" << std::endl;
            return -1;
        }
    }

    std::sort(arr, arr+3);
    if (arr[0] + arr[1] < arr[2]) std::cout << "It is not possible to build a triangle whose sides have the lengths that you gave." << std::endl;
    else std::cout << "It is possible to build a triangle whose sides have the lengths that you gave." << std::endl;
    return 0;
}