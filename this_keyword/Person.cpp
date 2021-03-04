//
// Created by tomislav on 3/3/21.
//

#include "Person.h"
#include <strstream>

Person::Person() {
    age = 0;
    name = "";
}

Person::Person(std::string name, int age) {
    this->name = name;//this->name refers to name in class
    this->age = age;// this->age refers to age in class
}

Person::Person(std::string name, std::string last_name, int age) {
    this->name = name;
    this->last_name = last_name;
    this->age = age;
}

std::string Person::toString() {
    std::strstream ss;
    ss << "Name: " << name << std::endl;
    ss << "Last Name: " << last_name << std::endl;
    ss << "Age: " << age << std::endl;

    return ss.str();
}
