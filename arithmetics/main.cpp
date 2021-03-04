#include <iostream>

int main() {
    double value_1 = (double)7/2;
    std::cout << value_1 << std::endl;

    int value_2 = (int)7.3;
    std::cout << value_2 << std::endl;

    int value_3 = 8;
    value_3 += 1; //value_3 = value_3 + 1; or value_3++;
    std::cout << value_3 << std::endl;

    int value_4 = 10;
    value_4 /= 5; // value_4 = value_4 / 5;
    std::cout << value_4 << std::endl;

    int value_5 = 15;
    value_5 -= 2; //value_5 = value_5 - 2;
    std::cout << value_5 << std::endl;

    int value_6 = 12%5;
    std::cout << value_6 << std::endl;

    double equation = (5.3/4)+(2*6);
    std::cout << equation << std::endl;


    return 0;
}
