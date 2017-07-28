#include "person.h"

double Person::amountFromPercent(const double& mealCost, const int& percent) const {
    if(std::abs(mealCost - 0.0) < 0.0001 || percent == 0) {
        return 0;
    }
    return (mealCost * percent) / 100;
}

double Person::totalCost(const double& mealCost, const int& tipPercent, const int& taxPercent) {
    double tip = amountFromPercent(mealCost, tipPercent);
    double tax = amountFromPercent(mealCost, taxPercent);

    return mealCost + tip + tax;
}

std::string Person::formattedResult(const double& mealCost, const int& tipPercent, const int& taxPercent) {
    double roundedValue = round(Person::totalCost(mealCost, tipPercent, taxPercent));
    std::stringstream stream;
    stream << "The total meal cost is " << roundedValue << " dollars." << std::endl; 
    return stream.str();
}
void Person::printResult(const double& mealCost, const int& tipPercent, const int& taxPercent) {
    std::cout << Person::formattedResult(mealCost, tipPercent, taxPercent);
}
