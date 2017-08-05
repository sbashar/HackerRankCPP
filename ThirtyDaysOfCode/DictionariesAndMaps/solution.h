#ifndef __SOLUTION_H_INCLUDED__
#define __SOLUTION_H_INCLUDED__

#include<string>
#include<iostream>
#include<sstream>
#include<map>

class Solution {
    private:
        std::map<std::string,std::string> phoneBook; 
    public:
        void printResult() const;
};

#endif
