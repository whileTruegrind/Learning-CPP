/*
    - Recursion:
        -- A programming technique where a function invokes itself from within.
        -- Break a complex concept into breakable single step.
    - Iterative vs Recursive:
        -- Advantages: 
            --- Less code and is cleaner
            --- Useful for sorting and searching algorithms
        -- Disadvantages:
            --- Uses more memory
            --- Slower
*/

#include <iostream>
using namespace std;

int factorial(int target); // best and simple example

int main()
{
    int target;
    cout << "Enter number to calculate factorial: ";
    cin >> target;
    cout << target << "! = " << factorial(target);
}

int factorial(int target)
{
    if (target > 1)
    {
        return target * factorial(target - 1);
    }
    else
    {
        return 1;
    }
}