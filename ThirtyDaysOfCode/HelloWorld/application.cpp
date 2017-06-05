#include<iostream>
#include "solution.h"

using namespace std;

int main() {
    Solution solution;
    string inputString;
    getline(cin, inputString);
    cout << solution.printResult(inputString) << endl;
    return 0;
}
