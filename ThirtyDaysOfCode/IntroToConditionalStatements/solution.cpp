#include "solution.h"

std::string Solution::calculate(const int& inputNumber) {
    if(inputNumber % 2 != 0) {
        return "Weird";
    } else if( inputNumber >= 6 && inputNumber <= 20) {
            return "Weird";
    }
    return "Not Weird";
}
void Solution::printResult(const int& inputNumber) {
    std::cout << Solution::calculate(inputNumber) << std::endl;
}
