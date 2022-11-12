/*
    - Dynamic Memory:
        -- Memory that is allocated after the program is already compiled and running.
        -- Use the "new" operator to allocate memory in the heap rather than the stack.
        -- Useful when we don't know how much memory we will need.
        -- Makes our program more flexible, especially when accepting user input.
*/

#include <iostream>
using namespace std;

int main()
{
    /*
    // Example 1
    int *pNum = NULL;
    pNum = new int;
    *pNum = 21;
    cout << "Address: " << pNum << endl;
    cout << "Value: " << *pNum << endl;
    delete pNum;
    */
    
    char *pGrades = NULL;
    int size;
    
    cout << "How many grades?: ";
    cin >> size;
    pGrades = new char[size];
    
    for (int i = 0; i < size; i++)
    {
        cout << "Enter grade " << i + 1 << ": ";
        cin >> pGrades[i];
    }
    for (int i = 0; i < size; i++)
    {
        cout << pGrades[i] << endl;
    }
}