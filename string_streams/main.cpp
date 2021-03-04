#include <iostream>
#include <strstream>

int main() {
   std::string first_name = "Tomislav";
   std::string last_name = "Kraljic";
   int age = 23;
   int month_born = 06;
   int year_born = 1997;
   int day_born = 15;
   std::string occupation = "Software Engineer";

   std::strstream introduction;
   introduction << "First Name: " << first_name << std::endl;
   introduction << "Last Name: " << last_name << std::endl;
   introduction << "Age: " << age << std::endl;
   introduction << "Month Born: " << month_born << std::endl;
   introduction << "Day Born: " << day_born << std::endl;
   introduction << "Year Born: " << year_born << std::endl;
   introduction << "Occupation: " << occupation << std::endl;

   std::string output = introduction.str();
   std::cout << output << std::endl;
   return 0;
}
