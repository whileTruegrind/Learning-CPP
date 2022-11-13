/*
    - Null value:
        -- A special value that means something has no value.
        -- When a pointer is holding a null value,
        -- That pointer is not pointing at anything (null pointer)
    - Null ptr
        -- Keyword represents a null pointer literal
        -- Null pointers are helpful when determining if an address was successfully assigned to a pointer.  
*/

#include <iostream>
using namespace std;

int main()
{
    int *pointer = nullptr;
    
    int x = 123;
    pointer = &x;

    if (pointer == nullptr)
    {
        cout << "Address not assigned";
        // cout << *pointer; // DON'T
    }
    else
    {
        cout << "Address assigned" << endl;
        cout << *pointer;
    }
}