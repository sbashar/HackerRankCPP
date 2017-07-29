#include "solution.h"

std::string Solution::formatResult(const int& n) const {
    std::stringstream stream;

    for(int i = 1; i <= 10; i++) {
        stream << n << " x " << i << " = " << n*i << std::endl;
    }

    return stream.str();
}
void Solution::printResult(const int& n) const { 
    std::cout << Solution::formatResult(n);
}
