//
// Created by tomislav on 3/2/21.
//

#ifndef GETTERS_AND_SETTERS_PERSON_H
#define GETTERS_AND_SETTERS_PERSON_H

#include <iostream>


class Person {
private:
    std::string name;
public:
    Person();
    std::string toString();
    void setName(std::string newName);
    std::string getName();
};


#endif //GETTERS_AND_SETTERS_PERSON_H
