#include "solution.h"

double Solution::amountFromPercent(const double& mealCost, const int& percent) const {
    if(std::abs(mealCost - 0.0) < 0.0001 || percent == 0) {
        return 0;
    }
    return (mealCost * percent) / 100;
}

double Solution::totalCost(const double& mealCost, const int& tipPercent, const int& taxPercent) {
    double tip = amountFromPercent(mealCost, tipPercent);
    double tax = amountFromPercent(mealCost, taxPercent);

    return mealCost + tip + tax;
}

std::string Solution::formattedResult(const double& mealCost, const int& tipPercent, const int& taxPercent) {
    double roundedValue = round(Solution::totalCost(mealCost, tipPercent, taxPercent));
    std::stringstream stream;
    stream << "The total meal cost is " << roundedValue << " dollars." << std::endl; 
    return stream.str();
}
void Solution::printResult(const double& mealCost, const int& tipPercent, const int& taxPercent) {
    std::cout << Solution::formattedResult(mealCost, tipPercent, taxPercent);
}
