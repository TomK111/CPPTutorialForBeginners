#include <iostream>

int main()
{
    const std::string password = "hello";

    std::string input;

    do {
        std::cout << "Enter your password:";
        std::cin >> input;

        if(input != password)
            std::cout << "Wrong Password..." << std::endl;
    } while (input != password);

    std::cout << "Logging in..." << std::endl;
    return 0;
}
