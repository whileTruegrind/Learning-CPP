/*
    - A for loop is a repetition control structure that allows you to efficiently write a loop that needs to execute a specific number of times.
    - Syntax:
        for (initialization; condition; update)
        {
            // body of-loop
        }
*/

#include <iostream>

using namespace std;

int main()
{
    for (int i = 1; i <= 10; i++) // prints "Hello" 10 times
    {
        cout << "Hello" << endl;
    } 
}