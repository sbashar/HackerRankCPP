#include "solution.h"

Solution::Solution(const int& i, const double& d, const std::string& s) 
    : fixedInteger(i), fixedDouble(d), fixedString(s) {
}

int Solution::calculateInteger(const int& i) const {
    return fixedInteger + i;
}

double calculateDouble(const double& d) const {
    return fixedDouble + d;
}

std::string& calculateString(const std::string& s) const {
    return fixedString + s;
}
void Solution::printResult(const int& inputInteger, const double& inputDouble, const std::string& inputString) {
}
