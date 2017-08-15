#include "solution.h"

void Solution::setPhoneBook(const std::string& name, const int phoneNumber) {
    phoneBook.insert(std::make_pair(name,phoneNumber));
}

std::map<std::string,int> Solution::getPhoneBook() const {
    return phoneBook;
}

std::string Solution::searchPhoneBook(const std::string& name) const {
    (void)name;
    return "Not found";
}

void Solution::printResult() const {
}
