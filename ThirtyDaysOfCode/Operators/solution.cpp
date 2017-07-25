#include "solution.h"

double Solution::amountFromPercent(const double& mealCost, const int& percent) const {
    if(std::abs(mealCost - 0.0) < 0.0001 || percent == 0) {
        return 0;
    }
    return (mealCost * percent) / 100;
}

void Solution::printResult(const double& mealCost, const int& tipPercent, const int& taxPercent) {
    (void)mealCost;
    (void)tipPercent;
    (void)taxPercent;
}
