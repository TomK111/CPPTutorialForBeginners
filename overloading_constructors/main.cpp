#include <iostream>
#include "Person.h"

int main() {
    Person person1;
    Person person2("Tomislav");
    Person person3("Tommy", 35);
    Person person4("John", 35, "Doe");
    Person person5("Jane", 32, "Doe", "Software Engineer");
    std::cout << person1.toString() << std::endl;
    std::cout << person2.toString() << std::endl;
    std::cout << person3.toString() << std::endl;
    std::cout << person4.toString() << std::endl;
    std::cout << person5.toString() << std::endl;
    return 0;
}
