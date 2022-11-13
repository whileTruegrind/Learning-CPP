/*
    - const parameter:
        -- Parameter that is effectively read-only.
        -- Code is more secure and conveys intent.
        -- Useful for references and pointers.
*/

#include <iostream>
using namespace std;

void displayInfo(const string &name, const int &age);

int main()
{
    string name = "Rishi";
    int age = 19;
    displayInfo(name, age);
}

void displayInfo(const string &name, const int &age)
{
    // name = "Not Rishi" // Results in error
    // age = 25 // Results in error
    cout << name << endl;
    cout << age;
}