#include <iostream>
#include <cmath>
#include <vector>

double makeSum(std::vector<double> aVector) {
    double sum = 0;
    for (auto elem : aVector) sum += elem;
    return sum;
}

int main() {
    std::cout << "Please enter the numbers, followed by a '0' to end (not included in the sequence): ";
    int numberOfElements = 0;
    int sum = 0, min, max;
    std::vector<int> elements;
    int aNum;
    std::cin >> aNum;
    int i = 0;
    while (aNum != 0) {
        numberOfElements++;
        if (i == 0) {
            min = aNum;
            max = aNum;
            i++;
        }
        else {
            if (aNum < min) min = aNum;
            if (max < aNum) max = aNum;
        }
        sum += aNum;
        elements.push_back(aNum);
        std::cin >> aNum;
    }
    double mean = static_cast<double> (sum) / numberOfElements;
    std::vector<double> deviations;
    for (auto elem : elements) {
        deviations.push_back(pow(elem - mean, 2));
    }
    double standardDeviation = sqrt(makeSum(deviations) / numberOfElements);
    std::cout << "Sum = " << sum << "; mean = " << mean << "; min = " << min << "; max = " << max << "; standard deviation = " << standardDeviation << std::endl;
}   