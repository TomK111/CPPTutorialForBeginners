#include <iostream>

void change_string(std::string &name){
    name = "Tomislav";
}


int main() {
    std::string initial_name = "Tom";
    std::cout << initial_name << std::endl;
    change_string(initial_name);
    std::cout << initial_name << std::endl;


    int value_1 = 100;
    int &value_2 = value_1;
    value_2 = 200;

    std::cout << value_1 << std::endl;

    return 0;
}
