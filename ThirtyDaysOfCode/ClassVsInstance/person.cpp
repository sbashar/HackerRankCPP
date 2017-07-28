#include "person.h"

Person::Person(const int& initialAge) : age(initialAge) {
    if(age < 0) {
        age = 0;
        std::cout << "Age is not valid, setting age to 0." << std::endl;
    } 
}

int Person::getAge() const {
    return age;
}
