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

void Solution::printResult(const int& inputInteger, const double& inputDouble, const std::string& inputString) {
    std::cout << Solution::calculate(inputInteger) << std::endl;
    std::cout << Solution::calculate(inputDouble) << std::endl;
    std::cout << Solution::calculate(inputString) << std::endl;
}
