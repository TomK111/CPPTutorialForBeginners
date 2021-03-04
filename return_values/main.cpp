#include <iostream>

void show_menu(){
    std::cout << "1. Search" << std::endl;
    std::cout << "2. View Record" << std::endl;
    std::cout << "3. Quit" << std::endl;
    std::cout << "Enter Selection (1-3): ";
}

int process_selection(){
    int input;
    std::cin >> input;
    return input;
}

int main() {
    show_menu();
    int selection = process_selection();

    switch(selection){
        case 1:
            std::cout << "Searching...." << std::endl;
            break;
        case 2:
            std::cout << "Viewing..." << std::endl;
            break;
        case 3:
            std::cout << "Quitting..." << std::endl;
            break;
        default:
            std::cout << "Please make a valid selection" << std::endl;
            break;
    }
    return 0;
}
