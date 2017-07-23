#include "solution.h"

Solution::Solution(const int& i, const double& d, const std::string& s)
    : fixedInteger(i), fixedDouble(d), fixedString(s) {
}

int Solution::calculate(const int& i) const {
    return fixedInteger + i;
}

double Solution::calculate(const double& d) const {
    return fixedDouble + d;
}

std::string Solution::calculate(const std::string& s) const {
    return fixedString + s;
}

std::string Solution::formattedDouble(const double& d) const {
    std::stringstream stream;
    stream << std::fixed << std::setprecision(1) << Solution::calculate(d);
    return stream.str();
}

std::string Solution::formattedInt(const int& i) const {
    std::stringstream stream;
    stream << Solution::calculate(i);
    return stream.str();
}

std::string Solution::formattedResult(const int& inputInteger, const double& inputDouble, const std::string& inputString) const {
    std::string returnString = ""; 
    returnString += Solution::formattedInt(inputInteger);
    returnString += "\n";
    returnString += Solution::formattedDouble(inputDouble);
    returnString += "\n";
    returnString += Solution::calculate(inputString);
    returnString += "\n";

    return returnString;
}

void Solution::printResult(const int& inputInteger, const double& inputDouble, const std::string& inputString) {
    std::cout << Solution::formattedResult(inputInteger, inputDouble, inputString);
}
