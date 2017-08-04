#include<iostream>
#include "solution.h"

using namespace std;

int main() {
    // Input variables
    int inputNumber;

    // Read input
    cin >> inputNumber;
    int* inputArray = new int[inputNumber];

    for(int i =0; i < inputNumber; i++) {
        cin >> inputArray[i];
    }

    Solution solution;

    // Print solution
    solution.printResult(inputNumber,inputArray);

    return 0;
}
