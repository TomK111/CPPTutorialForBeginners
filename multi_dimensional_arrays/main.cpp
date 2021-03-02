#include <iostream>

using namespace std;

int main()
{
    string animals[2][3] = {
            {"Fox", "Dog", "Cat"},
            {"Mouse", "Squirrel", "Parrot"}
    };

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            std::cout << animals[i][j] << std::endl;
        }

        std::cout << std::endl;
    }
    return 0;
}
