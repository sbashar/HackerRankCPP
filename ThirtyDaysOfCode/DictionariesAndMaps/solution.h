#ifndef __SOLUTION_H_INCLUDED__
#define __SOLUTION_H_INCLUDED__

#include<string>
#include<iostream>
#include<sstream>
#include<map>

class Solution {
    private:
        std::map<std::string,int> phoneBook; 
    public:
        Solution() : phoneBook() {}
        std::map<std::string,int> getPhoneBook() const;
        void setPhoneBook(const std::string& name, const int phoneNumber);
        void printResult() const;
};

#endif
