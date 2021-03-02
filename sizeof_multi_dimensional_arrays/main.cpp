#include <iostream>

using namespace std;

int main()
{
    std::string animals[][3] = {
            { "fox", "dog", "cat"},
            {"mouse", "sealion", "parriot"}
    };

    for(unsigned int i = 0; i < sizeof(animals)/sizeof(animals[0]); i++) {
        for(unsigned int j = 0; j < sizeof(animals[0])/sizeof(string);j++){
            std::cout << animals[i][j] << " " << std::flush;
        }
        std::cout << std::endl;
    }

    return 0;
}