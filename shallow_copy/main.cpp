#include <iostream>

class Student {
private:
    std::string name;
    int age;

public:
    void set_dimensions(std::string name, int age)
    {
        this->name = name;
        this->age = age;
    }

    void show_data()
    {
        std::cout << " Name = " << name
             << "\n Age = " << age
             << std::endl;
    }
};

int main()
{
    Student A1, A3;

    std::cout << "A1: " << std::endl;
    A1.set_dimensions("Tommy", 23);
    A1.show_data();


    std::cout << "A2" << std::endl;
    Student A2 = A1;
    A2.show_data();

    A3 = A1;
    std::cout << "A3: " << std::endl;
    A3.show_data();

    std::cout << std::endl;

    std::cout << "Memory Address of A1: " << &A1 << std::endl;

    std::cout << std::endl;

    std::cout << "Memory Address of A2: " << &A2 << std::endl;

    std::cout << std::endl;

    std::cout << "Memory Address of A3: " << &A3 << std::endl;



    return 0;
}
