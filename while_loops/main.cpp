#include <iostream>

int main()
{
    const std::string password = "hello";
    std::string input;

    while(input != password) {
        std::cout << "Enter your password: ";
        std::cin >> input;
    }

    std::cout << "Logging in...";
    return 0;
}