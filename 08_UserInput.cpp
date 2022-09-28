/*
    - cout << (insertion operator)
    - cin >> (extraction operator)
*/

#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    string name;
    int age;

    cout << "Your name?: ";
    // cin >> name; // Doesn't read after space
    getline(cin, name); // use this instead

    cout << "Your age?: ";
    cin >> age;

    cout << "Hi " << name << ", you are " << age << " years old.";   
}