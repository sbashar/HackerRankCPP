#include "solution.h"

std::string Solution::evenStringChar(const std::string& inputString) const {
    std::string result = "";

    for(unsigned int i = 0; i < inputString.length(); i+= 2) {
        result += inputString.at(i);
    }

    return result;
}

std::string Solution::oddStringChar(const std::string& inputString) const {
    std::string result = "";

    for(unsigned int i = 1; i < inputString.length(); i+= 2) {
        result += inputString.at(i);
    }

    return result;
}

std::string Solution::formatResult(const std::string& inputString) const {
    std::string result = "";

    result += evenStringChar(inputString);
    result += " ";
    result += oddStringChar(inputString);
    result += "\n";

    return result;
}

void Solution::printResult() const {
    // Input variables
    int numberOfTestCases;
    std::string inputString;

    // Read input
    std::cin >> numberOfTestCases;
    for(int i = 0; i < numberOfTestCases; i++) {
        getline(std::cin >> std::ws, inputString);
        std::cout << formatResult(inputString);
    }
}
