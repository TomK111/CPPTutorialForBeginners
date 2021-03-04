//
// Created by tomislav on 3/2/21.
//

#include "Person.h"

Person::Person() {
    name = "George";
}

std::string Person::toString() {
    return name;
}

void Person::setName(std::string newName) {
    name = newName;
}

std::string Person::getName() {
    return name;
}
