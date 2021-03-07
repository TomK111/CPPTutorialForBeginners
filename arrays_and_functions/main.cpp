#include <iostream>

//Could declare variables here
std:: string numbers[] = {"1","2","3"};

void show_one(const int elements, std::string texts[]){
//    std::cout << sizeof(texts) << std::endl; //returns size of pointer
    for(int i = 0; i < elements; i++){
        std::cout << texts[i] << std::endl;
    }
}

void show_two(const int elements, std::string *texts) {
    for(int i = 0; i <= elements; i++)
        std::cout << texts[i] << std::endl;
}

void show_three(std::string (&texts)[3]){
    for(int i = 0; i < sizeof(texts)/sizeof(std::string); i++)
        std::cout << texts[i] << std::endl;
}

std::string *getArray(){
    // Dont return pointers to local variables
    // std::string texts[] = {"one", "two", "three"};

    return numbers;
}

char *getMemory() {
    char *pMem = new char[100];
    return pMem;
}

void freeMemory(char *pMem) {
    delete [] pMem;
}

int main() {
    std::string texts[] = {"apple", "orange", "banana"};
    std::cout << sizeof(texts) << std::endl;
    std::cout << std::endl;
    show_one(3, texts);
    std::cout << std::endl;
    show_two(3, texts);
    std::cout << std::endl;
    show_three(texts);
    std::cout << std::endl;
    char *pMemory = getMemory();
    freeMemory(pMemory);
    return 0;
}
