#include <iostream>
#include <utility>

class Frog {
private:
    std::string name;
private:
    std::string getName() {return name;}
public:
    explicit Frog(std::string name){
        this->name = std::move(name);
    }
    void info() {std::cout << "My name is " << getName() << std::endl;}
};

class Dog {
private:
    std::string name;
private:
    std::string get_name() { return name;}
public:
    explicit Dog(std::string name) {
        this->name = std::move(name);
    }
    void getInformation() {
        std::cout << "My name is: " << get_name() << std::endl;
    }
};

class Cat {
private:
    std::string name;
private:
    std::string getCatName() {return name;}

public:
    explicit Cat(std::string name) {
        this-> name =  std::move(name);
    }

    void getCatInfo() {
        std::cout << "My name is " << getCatName() << std::endl;
    }
};

int main() {
    Frog frog("Freddy");
    frog.info();
    std::cout << std::endl;

    Dog pittie("Beef");
    pittie.getInformation();
    std::cout << std::endl;

    Cat cat("Princess");
    cat.getCatInfo();

    return 0;
}
