#include <iostream>
class Animal {
private:
    std::string name;
public:
    void set_name(std::string name) { this->name = name; };
    void speak() const { std::cout << "My name is " << name << std::endl; }
};
int main() {
    const double PI = 3.14;
    std::cout << PI << std::endl;
    Animal animal;
    animal.set_name("Fredy");
    animal.speak();

    int value = 8;

    const int *p_value = &value;
    std::cout << *p_value << std::endl;

    int number = 11;
    p_value = &number;

    std::cout << *p_value << std::endl;
    return 0;
}
