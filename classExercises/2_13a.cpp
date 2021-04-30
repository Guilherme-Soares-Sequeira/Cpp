#include <iostream>
#include <cmath>
#include <vector>

double makeSum(std::vector<double> aVector) {
    double sum = 0;
    for (auto elem : aVector) sum += elem;
    return sum;
}

int main() {
    std::cout << "Please enter the number of elements: ";
    int numberOfElements;
    std::cin >> numberOfElements;
    int sum = 0, min, max;
    std::vector<int> elements;
    int aNum;
    for (int i = 0; i < numberOfElements; i++) {
        std::cin >> aNum;
        if (i == 0) {
            min = aNum;
            max = aNum;
        }
        else {
            if (aNum < min) min = aNum;
            if (max < aNum) max = aNum;
        }
        sum += aNum;
        elements.push_back(aNum);
    }
    double mean = static_cast<double> (sum) / numberOfElements;
    std::vector<double> deviations;
    for (auto elem : elements) {
        deviations.push_back(pow(elem - mean, 2));
    }
    double standardDeviation = sqrt(makeSum(deviations) / numberOfElements);
    std::cout << "Sum = " << sum << "; mean = " << mean << "; min = " << min << "; max = " << max << "; standard deviation = " << standardDeviation << std::endl;
}   