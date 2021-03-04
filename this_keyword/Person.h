//
// Created by tomislav on 3/3/21.
//

#ifndef THIS_KEYWORD_PERSON_H
#define THIS_KEYWORD_PERSON_H
#include <iostream>

class Person {
private:
    std::string name;
    int age;
    std::string last_name;
public:
    Person();
    Person(std::string name, int age);
    Person(std::string name, std::string last_name, int age);
    std::string toString();
};


#endif //THIS_KEYWORD_PERSON_H
