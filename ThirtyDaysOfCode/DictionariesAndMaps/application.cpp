#include<iostream>
#include "solution.h"

using namespace std;

int main() {
    // Input variables
    double mealCost;
    int tipPercent;
    int taxPercent;

    // Read input
    cin >> mealCost;
    cin >> tipPercent;
    cin >> taxPercent;

    Solution solution;

    // Print solution
    solution.printResult(mealCost, tipPercent, taxPercent);

    return 0;
}
