#include <iostream>

class Animal {
public:
    void speak(){
        std::cout << "Greeeee" << std::endl;
    }
};

class Cat : public Animal {
public:
    void jump(){
        std::cout << "Cat jumped!" <<  std::endl;
    }
};

class Indoor_Cat : public Cat {
public:
    void sleep(){
        std::cout << "zzzzzzzzz" << std::endl;
    }
};

class Tiger : public Cat {
public:
    void attack(){
        std::cout << "Attacks!" << std::endl;
    }
};

int main() {
    Animal animal;
    animal.speak();
    std::cout << std::endl;
    Cat cat;
    cat.speak();
    cat.jump();
    std::cout << std::endl;

    Indoor_Cat lazy_cat;
    lazy_cat.sleep();
    lazy_cat.jump();
    lazy_cat.speak();
    std::cout << std::endl;

    Tiger tiger;
    tiger.attack();
    tiger.speak();
    tiger.jump();

    return 0;
}
