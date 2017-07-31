#ifndef __SOLUTION_H_INCLUDED__
#define __SOLUTION_H_INCLUDED__

#include<string>
#include<iostream>

class Solution {
    public:
        std::string evenStringChar(const std::string& inputString) const;
        std::string oddStringChar(const std::string& inputString) const;
        std::string formatResult(const std::string& inputString) const;
        void printResult() const;
};

#endif
