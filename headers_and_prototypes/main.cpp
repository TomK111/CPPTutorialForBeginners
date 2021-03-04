#include <iostream>
#include "utils.h"

int main() {
    add_sum(5,10);
    do_something();
    return 0;
}

int add_sum(int a, int b){
     std::cout << a + b << std::endl;
}

void do_something(){
    std::cout << "Hello" << std::endl;
}
