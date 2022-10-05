/*
    - Foreach loop is used to iterate over the elements of a containers (array etc) quickly 
    - without performing initialization, testing and increment/decrement.
*/

#include <iostream>
using namespace std;

int main()
{
    string students[] = {"Rick", "Morty", "Summer"};

    for (string student : students)
    {
        cout << student << endl;
    }
}