//
// Created by tomislav on 3/3/21.
//

#include "Person.h"
#include <strstream>

Person::Person() {
    name = "undefined";
    age = 0;
}

Person::Person(std::string new_name, int new_age) {
    name = new_name;
    age = new_age;
};

Person::Person(std::string new_name, int new_age, std::string new_last_name) {
    name = new_name;
    age = new_age;
    last_name = new_last_name;
}

Person::Person(std::string new_name, int new_age, std::string new_last_name, std::string new_occupation) {
    name = new_name;
    age = new_age;
    last_name = new_last_name;
    occupation = new_occupation;
}

std::string Person::toString() {
    std::strstream ss;
    ss << "First Name: " << name << std::endl;
    ss << "Last Name: " << last_name << std::endl;
    ss << "Age: " << age << std::endl;
    ss << "Occupation: " << occupation << std::endl;
    return ss.str();
}

