#include <iostream>

int main() {
    std::string texts[] = {"one", "two", "three"};

    std::string *pTexts = texts;

    std::cout << sizeof(texts)/sizeof(std::string)<< std::endl;
    for(int i=0; i < sizeof(texts)/sizeof(std::string); i++) {
        std::cout << texts[i] << std::endl;
    }

    std::cout << std::endl;

    for(int i=0; i < sizeof(texts)/sizeof(std::string); i++) {
        std::cout << *pTexts << std::endl;
        pTexts++;
    }

    std::string *pElement = &texts[0];
    std::string *pEnd = &texts[2];

    while(true) {
        std::cout << *pElement << " " << std::flush;

        if(pElement == pEnd){
            break;
        }

        pElement++;

    }

    std::string fruits[] {"apple", "orange", "banana"};

    std::string *pointer_fruits = fruits;

//    for(int i = 0; sizeof(fruits)/sizeof(std::string); i++){
//        std::cout << fruits[i] << std::endl;
//    }
//
//    std::cout << std::endl;
//
//    for(int i = 0; sizeof(fruits)/sizeof(std::string); i++, pointer_fruits++){
//        std::cout << *pointer_fruits << " " << std::endl;
//    }

    std::string *pFruitStart = &fruits[0];
    std::string *pFruitsEnd = &fruits[2];

    while(true) {
        std::cout << *pFruitStart << std::endl;

        if(pFruitStart == pFruitsEnd) {
            break;
        }

        pFruitStart++;
    }

   std::string branches[] = {"army", "marine corps", "navy", "space force", "air force", "coast guard"};
    std::string *p_branches = branches;

//    for(int i = 0; i < sizeof(branches)/sizeof(std::string); i++) {
//        std::cout << *p_branches << std::endl;
//        p_branches++;
//    }

    std::string *p_branch_start = &branches[0];
    std::string *p_branch_end = &branches[5];

    while(true) {
        std::cout << *p_branch_start << std::endl;

        if(p_branch_start == p_branch_end) {
            break;
        }

        p_branch_start++;
    }

//    std::string *pOccupationStartPoint = &occupations[0];
//    std::string *pOccupationEndPoint = &occupations[2];
//
//    while(true) {
//        std::cout << *pOccupationStartPoint << std::flush;
//
//        if(pOccupationStartPoint == pOccupationEndPoint){
//            break;
//        }
//
//        pOccupationStartPoint++;
//    }

    return 0;
}
