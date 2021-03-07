#include <iostream>

int main() {
    char first_name[] = "Tomislav";
    std::cout << first_name << std::endl;

    for(int i = 0; i < sizeof(first_name); i++){
        std::cout << i << ": " << first_name[i] << std::endl;
    }

    int j = 0;
    while(true) {
        if(first_name[j] == 0) {
            break;
        }

        std::cout << first_name[j] << std::flush;
        j++;
    }

    std::cout << std::endl;
    std::cout << std::endl;

    char last_name[] = "Kraljic";
    std::cout << last_name << std::endl;

    for(int i = 0; i < sizeof(last_name); i++) {
        std::cout << i << ": " << last_name[i] << std::endl;
    }

    int k = 0;

    while(true) {
        if(last_name[k] == 0) {
            break;
        }

        std::cout << last_name[k] << std::flush;
        k++;
    }

    return 0;
}
