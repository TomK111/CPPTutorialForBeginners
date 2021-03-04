#include <iostream>

void show_menu(){
    std::cout << "1.Search" << std::endl;
    std::cout << "2.View Record" << std::endl;
    std::cout << "3.Quit" << std::endl;
    std::cout << "Enter Selection (1-3): ";
}

int get_input(){
    int input;
    std::cin >> input;
    return input;
}

void process_input(int option){
    switch(option){
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
}

int main() {
    show_menu();
    int selection = get_input();
    process_input(selection);
    return 0;
}
