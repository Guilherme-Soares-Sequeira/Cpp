#include <iostream>

int main() {
    int hours1 , minutes1, seconds1, hours2, minutes2, seconds2, hoursfinal = 0, minutesfinal = 0, secondsfinal, daysfinal = 0;
    char sep;

    std::cout << "Please input a time (hours:minutes:seconds): ";
    std::cin >>  hours1 >> sep >> minutes1 >> sep >> seconds1;
    std::cout << "Please input another time (hours:minutes:seconds): ";
    std::cin >>  hours2 >> sep >> minutes2 >> sep >> seconds2;
    
    secondsfinal = seconds1 + seconds2;
    minutesfinal += secondsfinal / 60;
    secondsfinal %= 60;
    
    minutesfinal += minutes1 + minutes2;
    hoursfinal += minutesfinal / 60;
    minutesfinal %= 60;

    hoursfinal += hours1 + hours2;
    daysfinal = hoursfinal / 24;
    hoursfinal %= 24;

    std::string daysmessage = " day, ", hoursmessage = " hour, ", minutesmessage = " minute and ", secondsmessage = " second";
    if (daysfinal != 1) daysmessage.insert(4, "s");
    if (hoursfinal != 1) hoursmessage.insert(5, "s");
    if (minutesfinal != 1) minutesmessage.insert(7, "s");
    if (secondsfinal != 1) secondsmessage.append("s");
    
    if (!daysfinal) std::cout << "Time1 + Time2 =  " << hoursfinal << hoursmessage << minutesfinal << minutesmessage << secondsfinal << secondsmessage << std::endl;
    else std::cout << "Time1 + Time2 = " << daysfinal << daysmessage << hoursfinal << hoursmessage << minutesfinal << minutesmessage << secondsfinal << secondsmessage << std::endl;
    
    return 0;
}