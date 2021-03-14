#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    std::string aTab = "   ";
    
    std::cout << "ang" << aTab << aTab << "sin" << aTab << aTab << aTab << "cos" << aTab << aTab << aTab << "tan" << "\n";

    int initialvalue = 0, maxvalue = 90, aStep = 15;
    for (int theta = initialvalue; theta <= maxvalue; theta += aStep) {
        std::cout << std::fixed << std::setprecision(2);
        std::cout << std::setw(3) << std::right << std::setfill(' ') << theta << aTab;

        std::cout << std::setprecision(6);
        
        double sine = sin(theta * M_PI / 180.0);
        if (sine >= 0) std::cout << "+";
        std::cout << sine << aTab;
        
        double cosine = cos(theta * M_PI / 180.0);
        if (cosine >= 0) std::cout << "+";
        std::cout << cosine << aTab;
        
        if ((theta % 360) == 90 || (theta % 360) == 270) std::cout << " infinite" << "\n";
        else {
            if (tan(theta * M_PI / 180.0) >= 0) std::cout << "+";
            std::cout << tan(theta * M_PI / 180.0) << "\n";
        }
    }
    std::cout << std::endl;

    return 0;
}
