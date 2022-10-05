// Iterating through an array C++ is the concept which involves going through each element one by one.

#include <iostream>
using namespace std;

int main()
{
    string students[] = {"Rick", "Morty", "Summer", "Birdperson"};

    // printing all elements in an array
    int i, size = sizeof(students)/sizeof(students[0]); // sizeof in case number of elements change
    for (i = 0; i < size; i++)
    {
        cout << students[i] << endl;
    }
}