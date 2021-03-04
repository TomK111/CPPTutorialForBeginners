//
// Created by tomislav on 3/3/21.
//

#include "Person.h"
#include <iostream>
#include <strstream>

std::string Person::toString() {
    std::strstream ss;
    ss << "Name: " << name << std::endl;
    ss << "Age: " << age << std::endl;

    return ss.str();
}
