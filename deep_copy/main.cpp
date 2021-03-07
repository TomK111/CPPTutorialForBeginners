#include <iostream>
using namespace std;

// Box Class
class box {
private:
    int length;
    int* width;
    int height;

public:
    // Constructor
    box()
    {
        width = new int;
    }

    // Function to set the dimensions
    // of the Box
    void set_dimension(int length, int width,
                       int height)
    {
        this->length = length;
        *this->width = width;
        this->height = height;
    }

    // Function to show the dimensions
    // of the Box
    void show_data()
    {
        cout << " Length = " << length
             << "\n Width = " << *width
             << "\n Height = " << height
             << endl;
    }

    // Parameterized Constructors for
    // for implementing deep copy
    box(box& sample)
    {
        length = sample.length;
        width = new int;
        *width = *(sample.width);
        height = sample.height;
    }

    // Destructors
    ~box()
    {
        delete width;
        std::cout << std::endl;
        std::cout << "Destructor called" << std::endl;
    }
};

// Driver Code
int main()
{
    // Object of class first
    box first;

    // Set the dimensions
    first.set_dimension(12, 14, 16);

    // Display the dimensions
    std::cout << std::endl;
    std::cout << "First Box Memory Address: " << &first << std:: endl;
    std::cout << std::endl;
    std::cout << "First Box : " << std::endl;
    first.show_data();

    // When the data will be copied then
    // all the resources will also get
    // allocated to the new object
    box second = first;

    // Display the dimensions
    std::cout << std::endl;
    std::cout << "Second Box Memory Address : " << &second << std::endl;
    std::cout << std::endl;
    std::cout << "Second Box : " << std::endl;
    second.show_data();


    return 0;
}
