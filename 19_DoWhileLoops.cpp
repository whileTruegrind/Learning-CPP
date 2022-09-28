/*
    - do while loop:
        -- Executes a block of code first
        -- THEN repeat again if condition is true.
*/

#include <iostream>

using namespace std;

int main()
{
    int number;

    do
    {
        cout << "Enter a positive number: ";
        cin >> number;
    } while (number <= 0); // can't do this while loop without extra lines.
    
    cout << "number = " << number;
}