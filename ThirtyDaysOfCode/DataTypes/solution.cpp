#include "solution.h"

std::string Solution::printResult(const int& inputInteger, const double& inputDouble, const std::string& inputString, const int& fixedInteger, const double& fixedDouble, const std::string& fixedString) {
    std::string returnString = inputInteger + fixedInteger + "\n";
    returnString += inputDouble + fixedDouble + "\n";
    returnString += inputString + fixedString + "\n";
    return returnString;
}
