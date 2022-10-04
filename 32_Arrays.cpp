/*
    - Array:
        -- It is a group of variables of similar data types referred to by a single element.
        -- Its elements are stored in a contiguous memory location.
        -- The size of the array should be mentioned while declaring it.
        -- Array elements are always counted from zero (0) onward.
        -- Array elements can be accessed using the position of the element in the array.
        -- The array can have one or more dimensions.
*/

#include <iostream>
using namespace std;

int main()
{
    // examples
    string cars[] = {"Supra", "Murciélago", "M5", "Polo"};
    int nums[] = {1,2,3,4,5,6,7,8,9};
    char characters[] = {'A','B','C','D'};
    double decimals[] = {0.9,3.4,65.6,43.3};

    // displaying individual elements
    cout << cars[0] << endl; 
    cout << nums[1] << endl;
    cout << characters[2] << endl;
    cout << decimals[3] << endl;
}