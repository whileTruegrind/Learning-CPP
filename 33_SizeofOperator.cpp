/*
    - The sizeof is a keyword, but it is a compile-time operator that determines the size, in bytes, of a variable or data type.
    - The sizeof operator can be used to get the size of classes, structures, unions and any other user defined data type.
*/

#include <iostream>
using namespace std;

int main()
{
    double height = 156.3;
    cout << "Size of height = " << sizeof(height) << " bytes" << " (Max allocated size for double)\n";

    string name = "Joh Doe";
    cout << "Size of name = " << sizeof(name) << " bytes" << " (Size of address where text is stored)\n";

    // method to find number of elements in an array
    int numbers[] = {1,2,3,4,5};
    cout << "Number of elements in numbers = " << sizeof(numbers)/sizeof(numbers[0]);
}