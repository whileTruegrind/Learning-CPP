/*
    - C++ allows the programmer to define their own function. 
    - A user-defined function groups code to perform a specific task and that group of code is given a name (identifier). 
    - When the function is invoked from any part of the program, it all executes the codes defined in the body of the function.
    - Simply: A block of reusable code.
    - FUNCTIONS can't use variables in other functions
*/

#include <iostream>

using namespace std;

/*void singHBD()
{
    cout << "Happy birthday to you" << endl;
}*/

// ANOTHER METHOD, declaring function before main (mandatory)
// and typing function after main to make code look cleaner

void singHBD();

int main()
{
    singHBD();
    singHBD();
    singHBD();
}

void singHBD()
{
    cout << "Happy birthday to you" << endl;
}