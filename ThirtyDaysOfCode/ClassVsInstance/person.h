#ifndef __PERSON_H_INCLUDED__
#define __PERSON_H_INCLUDED__

#include<iostream>
#include<string>

class Person {
    private:
        int age;
    public:
        explicit Person(const int& initialAge);
        int getAge() const {
            return age;
        }
        void yearPasses() {
            age++;
        }
        std::string amIOld() const;
};

#endif
