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

    cin >> inputInteger;
    cin >> inputDouble;
    getline(cin >> ws, inputString);

    Solution solution(fixedInteger, fixedDouble, fixedString);

    solution.printResult(inputInteger, inputDouble, inputString);

    return 0;
}
