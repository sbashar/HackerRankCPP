#ifndef __SOLUTION_H_INCLUDED__
#define __SOLUTION_H_INCLUDED__

#include<string>
#include<iostream>
#include<cmath>

class Solution {
    public:
        double tip(const double& mealCost, const int& tipPercent) const;
        void printResult(const double& mealCost, const int& tipPercent, const int& taxPercent);
};

#endif
