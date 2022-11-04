/*
    - Pass By/Call By Value: 
        -- In this parameter passing method, values of actual parameters are copied to function’s formal parameters and
        -- the two types of parameters are stored in different memory locations. 
        -- So any changes made inside functions are not reflected in actual parameters of the caller.
    - Pass By/Call by Reference: 
        -- Both the actual and formal parameters refer to the same locations, 
        -- so any changes made inside the function are actually reflected in actual parameters of the caller.
*/

#include <iostream>
using namespace std;

void swapByValue(string x, string y);
void swapByReference(string &x, string &y);

int main()
{
    string x = "pepsi";
    string y = "Diet Coke";
    
    swapByValue(x, y);
    cout << "X & Y after swap by value (In main function):" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl << endl;

    swapByReference(x, y);
    cout << "X & Y after swap by reference (In main function):" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
}

void swapByValue(string x, string y)
{
    string temp;
    temp = x;
    x = y;
    y = temp;
}
void swapByReference(string &x, string &y)
{
    string temp;
    temp = x;
    x = y;
    y = temp;
}