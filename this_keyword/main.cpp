#include <iostream>
#include "Person.h"

int main() {
    Person person;

    Person person1;

    Person person2("Bob", 42);

    Person person3("Sue", 65);

    Person person4("Tomislav", "Kraljic", 23);

    std::cout << person.toString() << std::endl;

    std::cout << person2.toString() << std::endl;

    std::cout << person3.toString() << std::endl;

    std::cout << person4.toString() << std::endl;

    return 0;
}
