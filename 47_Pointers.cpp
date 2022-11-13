/*
    - Pointers:
        -- Variable that stores a memory address of another variable
        -- Sometimes it is easier to work with an address
    - & address-of operator
    - * dereference operator
*/

#include <iostream>
using namespace std;

int main()
{
    string name = "Rishi";
    string *pName = &name;
    cout << pName << endl;
    cout << *pName << "\n\n";

    int age = 19;
    int *pAge = &age;
    cout << pAge << endl;
    cout << *pAge << "\n\n";

    string freePizzas[] = {"pizza1", "pizza2", "pizza3"}; // freePizzas itself is a pointer
    /*
    // Gives error
    string *pFreePizzas = &freePizzas;
    cout << pFreePizzas;
    */
    // Right way:
    string *pFreePizzas = freePizzas;
    cout << pFreePizzas;
}