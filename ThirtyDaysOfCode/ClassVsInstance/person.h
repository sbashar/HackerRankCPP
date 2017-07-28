#ifndef __PERSON_H_INCLUDED__
#define __PERSON_H_INCLUDED__

#include<string>
#include<iostream>
#include<sstream>
#include<cmath>

class Person {
    public:
        double amountFromPercent(const double& mealCost, const int& percent) const;
        double totalCost(const double& mealCost, const int& tipPercent, const int& taxPercent);
        std::string formattedResult(const double& mealCost, const int& tipPercent, const int& taxPercent);
        void printResult(const double& mealCost, const int& tipPercent, const int& taxPercent);
};

#endif
