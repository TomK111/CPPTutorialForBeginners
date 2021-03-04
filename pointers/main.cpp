#include <iostream>

void manipulate(double *pointer_value) {
    *pointer_value = 10.53;
    std::cout << "Value of double in manipulate: " << *pointer_value << std::endl;
}

void manipulate_full_name(std::string *first_name, std::string *last_name) {
    *first_name = "Tomislav";
    *last_name = "Kraljic";
}

void manipulate_age(int *pointer_age) {
    *pointer_age = 23;
}


int main() {
    int n_value = 8;
    int* pn_value = &n_value;

    std::cout << "Pointer to int address: " << pn_value << std::endl;

    std::cout << "Int value: " << n_value << std::endl;

    std::cout << "Int value by pointer: " << *pn_value << std::endl;

   std::cout << "-------------------------" << std::endl;

   double dValue = 123.4;
   std::cout << "1. dValue: " << dValue << std::endl;
   manipulate(&dValue);
   std::cout << "2. dValue: " << dValue << std::endl;

   std::cout << std::endl;
   std::cout << std::endl;

  std::string f_name = "Bob";
  std::string l_name = "Dole";
  std::cout << f_name << std::endl;
  std::cout << l_name << std::endl;
  manipulate_full_name(&f_name, &l_name);
  std::cout << f_name << std::endl;
  std::cout << l_name << std::endl;

   std::cout << std::endl;

   std::cout << std::endl;

   int a_age = 50;
   std::cout << "1. a_age: " << a_age << std::endl;
   manipulate_age(&a_age);
   std::cout << "2. a_age: " << a_age << std::endl;


    return 0;
}
