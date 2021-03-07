#include <iostream>
class Animal {
private:
    std::string name;
public:
    Animal(){
        std::cout << "animal created " << std::endl;
    }

    Animal(const Animal& other) {
        name = other.name;
        std::cout << "Animal copied " << std::endl;
    }

    ~Animal(){
        std::cout << "Destructor called" << std::endl;
    }

    void set_name(std::string name){
        this->name = name;
    }

    void speak(){
        std::cout << "My name is: " << name << std::endl;
    }
};
int main() {
    Animal *pAnimal = new Animal[10];
    pAnimal[5].set_name("George");
    pAnimal[5].speak();
    delete [] pAnimal;

    char *pMem = new char[1000];
    delete [] pMem;

   char i;

   for(i = 'a'; i <= 'z'; i++)
       std::cout << i << std::endl;

    return 0;
}
