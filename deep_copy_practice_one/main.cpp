#include <iostream>
class Student {
private:
    std::string name;
    int* age;
public:
    Student() {
        age = new int;
    }
    void newStudent(std::string name, int age) {
        this->name = name;
        *this->age = age;
    }

    void showData() {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << *age << std::endl;
    }

    Student(Student& other) {
        name = other.name;
        age = new int;
        *age = *(other.age);
    }

    ~Student(){
        delete age;
        std::cout << std::endl;
        std::cout << "Destructor called!" << std::endl;
    }
};
int main() {
    Student student_one;
    student_one.newStudent("Tommy", 19);
    student_one.showData();
    std::cout << "Memory Address of Student One : " << &student_one << std::endl;

    std::cout << std::endl;
    Student student_two = student_one;
    student_two.showData();
    std::cout << "Memory Address of Student Two: " << &student_two << std::endl;
    return 0;
}
