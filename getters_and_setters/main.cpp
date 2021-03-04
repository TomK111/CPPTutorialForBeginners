#include <iostream>
#include "Person.h"

int main() {
    Person person;
    person.setName("Georgina");
    std::cout << person.toString() << std::endl;
    std::cout << "Name of Person with Get Method: " << person.getName() << std::endl;
    return 0;
}
