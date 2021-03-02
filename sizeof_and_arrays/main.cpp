#include <iostream>

using namespace std;

int main() {
    int values[] = {4, 2, 6, 5};

    std::cout << sizeof(values) << std::endl;
    std::cout << sizeof(int) << std::endl;

    for (unsigned int i = 0; i < sizeof(values) / sizeof(int); i++) {
        std::cout << values[i] << std::endl;
    }

    std::cout << std::endl;
    return 0;
}