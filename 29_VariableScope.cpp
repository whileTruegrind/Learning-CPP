/*
    - In general, the scope is defined as the extent up to which something can be worked with. 
    - In programming also the scope of a variable is defined as the extent of the program code within 
      which the variable can be accessed or declared or worked with. 
    - There are mainly two types of variable scopes: 
        -- Local Variables
        -- Global Variables
*/

#include<iostream>
using namespace std;

int global = 5;

void display();

int main()
{
    cout << "global before declaring global locally = ";
    display();
    global = 10;
    cout << "global after declaring global locally = ";
    display();
}

void display()
{
    cout << global << endl;
}