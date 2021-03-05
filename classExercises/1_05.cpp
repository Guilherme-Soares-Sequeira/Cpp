#include <iostream>

int main() {
    int hours1 , minutes1, seconds1, hours2, minutes2, seconds2, hoursfinal = 0, minutesfinal = 0, secondsfinal = 0;
    
    std::cout << "Please input a time (hours minutes seconds): ";
    std::cin >>  hours1 >> minutes1 >> seconds1;
    std::cout << "Please input another time (hours minutes seconds): ";
    std::cin >>  hours2 >> minutes2 >> seconds2;
    secondsfinal = (seconds1 + seconds2) % 60;
    if (seconds1 + seconds2 >= 60) minutesfinal = 1;
    minutesfinal = (minutesfinal + minutes1 + minutes2);
    if (minutesfinal >= 60) hoursfinal = 1;
    minutesfinal = minutesfinal % 60;
    hoursfinal = (hoursfinal + hours1 + hours2);
    if (hoursfinal >= 24) std::cout << "Time1 + Time2 = 1 day, " << hoursfinal%24 << " hours, " << minutesfinal << " minutes and " << secondsfinal << " seconds" << std::endl;
    else std::cout << "Time1 + Time2 =  " << hoursfinal << " hours, " << minutesfinal << " minutes and " << secondsfinal << " seconds" << std::endl;
    return 0;
}