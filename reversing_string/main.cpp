#include <iostream>

int main() {
    char first_name[] = "Tomislav";
    char n_value = sizeof(first_name) - 1;

    char *p_first_name_starting_point = first_name;
    char *p_first_name_ending_point = first_name + n_value -1;

    while(p_first_name_starting_point < p_first_name_ending_point){
        char save = *p_first_name_starting_point;
        *p_first_name_starting_point = *p_first_name_ending_point;
        *p_first_name_ending_point = save;
        p_first_name_starting_point++;
        p_first_name_ending_point--;
    }

    std::cout << first_name << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;

    char last_name[] = "Kraljic";
    char j_value = sizeof(last_name) - 1;

    char *p_last_name_starting_point = last_name;
    char *p_last_name_ending_point = last_name + j_value - 1;

    while(p_last_name_starting_point < p_last_name_ending_point ){
        char save = *p_last_name_starting_point;
        *p_last_name_starting_point = *p_last_name_ending_point;
        *p_last_name_ending_point = save;
        p_last_name_starting_point++;
        p_last_name_ending_point--;
    }

    std::cout << last_name << std::endl;
    return 0;
}
