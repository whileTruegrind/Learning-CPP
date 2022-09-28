/*
    - break = break out of a loop
    - continue = skip current iteration
*/

#include <iostream>

using namespace std;

int main()
{
    cout << "BREAK:" << endl;
    for (int i = 1; i <= 20; i++)  // stops when it reaches 13
    {
        if (i == 13)
        {
            break;
        }
        cout << i << " ";
    }
    cout << "\nCONTINUE:" << endl;  // skips when 13
    for (int i = 1; i <= 20; i++)
    {
        if (i == 13)
        {
            continue;
        }
        cout << i << " ";
    }
}