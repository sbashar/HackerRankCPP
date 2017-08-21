#include "solution.h"

void Solution::setPhoneBook(const std::string& name, const int phoneNumber) {
    phoneBook.insert(std::make_pair(name,phoneNumber));
}

std::map<std::string,int> Solution::getPhoneBook() const {
    return phoneBook;
}

std::string Solution::searchPhoneBook(const std::string& name) const {
    std::map<std::string,int>::const_iterator it = phoneBook.find(name);
    std::stringstream stream;

    if(it != phoneBook.end()) {
        stream << it->first << "=" << it->second << std::endl;
        return stream.str();
    }

    return "Not found\n";
}

void Solution::printResult() {
    int itemNumber;
    std::string name;
    int phoneNumber;

    //input
    std::cin >> itemNumber;

    for(int i = 0; i < itemNumber; i++) {
        std::cin >> name;
        std::cin >> phoneNumber;
        Solution::setPhoneBook(name, phoneNumber);
    }

    while(getline(std::cin >> std::ws, name)){
        std::cout << Solution::searchPhoneBook(name);
    }
}
