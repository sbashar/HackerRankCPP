#ifndef __SOLUTION_H_INCLUDED__
#define __SOLUTION_H_INCLUDED__

#include<string>
#include<iostream>
#include<sstream>
#include<iomanip>

class Solution {
    private:
        const int fixedInteger;
        const double fixedDouble;
        const std::string fixedString;
    public:
        Solution(const int& i, const double& d, const std::string& s);
        int calculate(const int& i) const;
        double calculate(const double& d) const;
        std::string calculate(const std::string& s) const;
        std::string formattedDouble(const double& d) const;
        std::string formattedInt(const int& i) const;
        std::string formattedResult(const int& inputInteger, const double& inputDouble, const std::string& inputString) const;
        void printResult(const int& inputInteger, const double& inputDouble, const std::string& inputString);
};

#endif
