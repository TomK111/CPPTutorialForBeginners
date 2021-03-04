//
// Created by tomislav on 3/3/21.
//

#ifndef OVERLOADING_CONSTRUCTORS_PERSON_H
#define OVERLOADING_CONSTRUCTORS_PERSON_H

#include <iostream>

class Person {
private:
    std::string name;
    int age;
    std::string last_name;
    std::string occupation;
public:
    Person();
    Person(std::string new_name) {name = new_name; age = 0; };
    Person(std::string new_name, int new_age);
    Person(std::string new_name, int new_age, std::string new_last_name);
    Person(std::string new_name, int new_age, std::string new_last_name, std::string occupation);
    std::string toString();
};


#endif //OVERLOADING_CONSTRUCTORS_PERSON_H
