#ifndef __SOLUTION_H_INCLUDED__
#define __SOLUTION_H_INCLUDED__

#include<string>

class Solution{
    private:
        const int fixedInteger;
        const double fixedDouble;
        const std::string fixedString;
    public:
        Solution(const int& i, const double& d, const std::string& s);
        int calculateInteger(const int& i) const;
        double calculateDouble(const double& d) const;
        std::string calculateString(const std::string& s) const;
        void printResult(const int& inputInteger, const double& inputDouble, const std::string& inputString);
};

#endif
