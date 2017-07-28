#ifndef __PERSON_H_INCLUDED__
#define __PERSON_H_INCLUDED__

#include<iostream>

class Person {
    private:
        int age;
    public:
        explicit Person(const int& initialAge);
        int getAge() const;
};

#endif
