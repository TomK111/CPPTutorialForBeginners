#include <iostream>

int main()
{
    int values[3];
    values[0] = 88;
    values[1] = 102;
    values[2] = 53;

    std::cout << values[0] << std::endl;
    std::cout << values[1] << std::endl;
    std::cout << values[2] << std::endl;

    double numbers[4] = {56.45,13.46,93.63, 91.2};

    for(int i = 0; i < 4; i++ ){
        std::cout << "Element at index " << i << ": " << numbers[i] << std::endl;
    }

    int numberArray[8] = {};

    for(int i = 0; i <= 7; i++) {
        std::cout << "Element at Index " << i << ": " << numberArray[i] << std::endl;
    }

    std::string texts[] {"apple", "banana", "orange"};

    for(int i = 0; i < 3; i++)
        std::cout << "Element at Index " << i << ": " << texts[i] << std::endl;


    return 0;
}
