#ifndef __SOLUTION_H_INCLUDED__
#define __SOLUTION_H_INCLUDED__

#include<string>
#include<iostream>
#include<cmath>

class Solution {
    public:
        double amountFromPercent(const double& mealCost, const int& percent) const;
        void printResult(const double& mealCost, const int& tipPercent, const int& taxPercent);
};

#endif
