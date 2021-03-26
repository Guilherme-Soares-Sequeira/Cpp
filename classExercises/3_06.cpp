#include <iostream>
#include <ctime>

int timerFoo(int& iteration, double& start) {
    // iteration is only useful for knowing whether or not it's the first iteration, no need to keep incrementing it later
    if (iteration == 0) {
        start = time(NULL);
        iteration++;
        return 0;
    } else return time(NULL) - start;
}

int main(){
    int iterator = 0;
    double starttime;
    std::cout << timerFoo(iterator, starttime) << "\n";
    //Small test
    std::cout << timerFoo(iterator, starttime) << "\n";
    //random code to make time....
    for(unsigned long int i = 0; i < 10000000000; i++) {
        //Nonsense code
        int a = (i % 2) / 3;
    }
    std::cout << timerFoo(iterator, starttime) << std::endl;
}