#include <iostream>
#include "Person.h"

int main() {
    Person person1("Bob", 42);
    std::cout << person1.toString() << std::endl;

    Person person2("Tomislav", 23);
    std::cout << person2.toString() << std::endl;

    Person person3;
    std::cout << person3.toString() << std::endl;

    return 0;
}
