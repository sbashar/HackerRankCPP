#include<iostream>
#include "solution.h"

using namespace std;

int main() {
    // Input variables
    int numberOfTestCases;
    std::string inputString;

    // Read input
    cin >> numberOfTestCases;
    getline(cin, inputString);

    Solution solution;

    // Print solution
    solution.printResult(numberOfTestCases, inputString);

    return 0;
}
