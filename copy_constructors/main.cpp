#include <iostream>
class Animal {
private:
    std::string name;
    std::string occupation;
public:
   Animal(){};

   ~Animal(){std::cout << "Destructor called!" << std::endl;};
//    Animal(const Animal& other) {
//        name = other.name,
//        occupation = other.occupation;
//        std::cout << "Animal Created By Copying" << std::endl;
//    };
    void setName(std::string name) {
        this->name = name;
    };

    void setOccupation(std::string occupation) {
        this->occupation = occupation;
    }
    void speak() const {
        std::cout << "My name is " << name << std::endl;
        std::cout << "My occupation is " << occupation << std::endl;
    };
};

int main() {
   Animal animal_one;
   animal_one.setName("Tommy");
   animal_one.setOccupation("Engineer");
   animal_one.speak();

   Animal animal_two(animal_one);
   animal_two.setName("Joe");
   animal_two.speak();

   std::cout << &animal_two << std::endl;
   std::cout << &animal_one << std::endl;


    return 0;
}
