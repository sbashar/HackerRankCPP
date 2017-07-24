#include "solution.h"

double Solution::tip(const double& mealCost, const int& tipPercent) const {
    if(std::abs(mealCost - 0.0) < 0.0001 || tipPercent == 0) {
        return 0;
    }
    return (mealCost * tipPercent) / 100;
}

void Solution::printResult(const double& mealCost, const int& tipPercent, const int& taxPercent) {
    (void)mealCost;
    (void)tipPercent;
    (void)taxPercent;
}
