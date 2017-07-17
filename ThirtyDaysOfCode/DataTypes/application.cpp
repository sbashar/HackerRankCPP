#include<iostream>
#include<iomanip>
#include "solution.h"

using namespace std;

int main() {
    // Fixed values
    int fixedInteger = 4;
    double fixedDouble = 4.0;
    string fixedString = "HackerRank ";

    // Input variables
    string inputString;
    int inputInteger;
    double inputDouble;

    Solution solution;

    cin >> inputInteger;
    cin >> inputDouble;
    getline(cin >> ws, inputString);

    cout << solution.printResult(inputInteger, inputDouble, inputString, fixedInteger, fixedDouble, fixedString) << endl;

    return 0;
}
