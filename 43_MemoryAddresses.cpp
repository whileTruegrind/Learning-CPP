/*
    - memory address:
        -- A location in memory where data is stored.
        -- A memory address can be accessed with & (address-of operator)
*/

#include <iostream>
using namespace std;

int main()
{
    string name = "John Doe";
    int age = 19;        // four bytes
    bool student = true; // one byte

    cout << &name << endl;
    cout << &age << endl;
    cout << &student << endl;
}