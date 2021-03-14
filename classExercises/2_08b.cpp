#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    //convenience tab
    std::string aTab = "   ";
    double initialvalue, maxvalue, aStep;
    
    std::cout << "Please enter the initial value, the max value (inclusive) and the step space-separated in degrees: ";
    std::cin >> initialvalue >> maxvalue >> aStep;
    
    //Table setup
    std::cout << "  ang" << aTab << aTab << "sin" << aTab << aTab << aTab << "cos" << aTab << aTab << aTab << "tan" << "\n";
    
    //I chose to use a while loop because for was glitching out (maybe because the iterator must be integer?)
    double theta = initialvalue;
    while (theta <= maxvalue) {
        std::cout << std::fixed << std::setprecision(2);
        std::cout << std::setw(5) << std::right << std::setfill(' ') << theta << aTab;

        std::cout << std::setprecision(6);
        
        double sine = sin(theta * M_PI / 180.0);
        if (sine >= 0) std::cout << "+";
        std::cout << sine << aTab;
        
        double cosine = cos(theta * M_PI / 180.0);
        if (cosine >= 0) std::cout << "+";
        std::cout << cosine << aTab;
        
        if (( static_cast<int> (theta) % 360) == 90 || ( static_cast<int> (theta) % 360) == 270) std::cout << " infinite" << "\n";
        else {
            if (tan(theta * M_PI / 180.0) >= 0) std::cout << "+";
            std::cout << tan(theta * M_PI / 180.0) << "\n";
        }
        theta += aStep;
    }
    std::cout << std::endl;

    return 0;
}