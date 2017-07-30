#include "solution.h"

std::string Solution::evenStringChar(const std::string& inputString) const {
    std::stringstream stream;

    for(unsigned int i = 0; i < inputString.length(); i+= 2) {
        stream << inputString.at(i);
    }

    return stream.str();
}

void Solution::printResult(const int& numberOfTestCases, const std::string& inputString) const {
    (void)numberOfTestCases;
    (void)inputString;
}
