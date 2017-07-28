#include "person.h"

Person::Person(const int& initialAge) : age(initialAge) {
    if(age < 0) {
        age = 0;
        std::cout << "Age is not valid, setting age to 0." << std::endl;
    } 
}

std::string Person::amIOld() const {
    std::string returnString = "You are old.\n";
    if(age < 13) {
       returnString = "You are young.\n"; 
    } else if (age >= 13 && age < 18) {
        returnString = "You are a teenager.\n";
    }
    std::cout << returnString;
    return returnString;
}
