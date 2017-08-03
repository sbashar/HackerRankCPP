#include "solution.h"

std::string Solution::formatResult(const int& inputNumber, const int* const inputArray) const {
    std::stringstream stream;

    for(int i = inputNumber; i > 0; i--) {
        stream << inputArray[i];
    }
    
    stream << std::endl;

    return stream.str();
}
void Solution::printResult(const int& inputNumber, const int* const inputArray) const {
    std::cout << Solution::formatResult(inputNumber, inputArray);
}
