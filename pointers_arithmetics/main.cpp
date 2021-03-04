#include <iostream>

int main() {
    const int N_STRINGS = 5;
    std::string texts[N_STRINGS] = { "one", "two", "three", "four", "five"};

    std::string *p_texts = texts;

    p_texts++;

    std::cout << *p_texts << std::endl;

    std::string *p_end = &texts[N_STRINGS];
    p_texts = &texts[0];

    while(p_texts != p_end) {
        std::cout << *p_texts << std::endl;
        p_texts++;
    }

    std::cout << "______________________" << std::endl;
    p_texts = &texts[0];
    long elements  = (long)(p_end - p_texts);
    std::cout << elements << std::endl;

    p_texts = &texts[0];
    p_texts += N_STRINGS/2;
    std::cout << *p_texts << std::endl;

    return 0;
}
