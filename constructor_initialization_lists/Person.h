//
// Created by tomislav on 3/3/21.
//

#ifndef CONSTRUCTOR_INITIALIZATION_LISTS_PERSON_H
#define CONSTRUCTOR_INITIALIZATION_LISTS_PERSON_H
#include <iostream>

class Person {
private:
    std::string name;
    int age;
public:
    Person():name(""), age(0){};
    Person(std::string name, int age) : name(name), age(age){};
    std::string toString();
};


#endif //CONSTRUCTOR_INITIALIZATION_LISTS_PERSON_H
