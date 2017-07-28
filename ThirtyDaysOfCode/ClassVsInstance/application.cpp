#include<iostream>
#include "person.h"

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

    Person person;

    // Print person
    person.printResult(mealCost, tipPercent, taxPercent);

    return 0;
}
