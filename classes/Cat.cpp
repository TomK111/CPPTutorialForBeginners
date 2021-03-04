#include <iostream>
#include "Cat.h"

Cat::Cat() {
    std::cout << "Cat created." << std::endl;

    happy = true;
}

Cat::~Cat() {
    std::cout << "Cat Destroyed" << std::endl;
}

void Cat::speak() {
    if (happy)
        std::cout << "Meow" << std::endl;
    else
        std::cout << "Ssssssss" << std::endl;
}

void Cat::make_happy() {
    happy = true;
}

void Cat::make_sad() {
    happy = false;
}

void Cat::jump() {
    std::cout << "The cat jumped!" << std::endl;
}