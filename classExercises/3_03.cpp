#include <iostream>
#include <cmath>

double heronsSqrt(double n, double delta, double nMaxIter) {
    int iterator = 0;
    double rq = 1, dif;
    do {
        double rqn;
        rqn = (rq + n / static_cast <double> (rq)) / 2.0;
        dif =  rqn*rqn - static_cast<double> (n);
        if (dif < 0) dif *= -1;
        rq = rqn;
        iterator++;
        std::cout << "The iterator is: " << iterator << " and rq = " << rq << "\n";
    } while (iterator < nMaxIter && dif > delta);
    return rq;
}

int main() {
    std::cout << heronsSqrt(7, 0.0001, 200) << std::endl;
    return 0;
}