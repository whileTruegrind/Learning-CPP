/*
    - While loops:
        -- A while loop is a loop that continues to run and execute a while statement as long as a predetermined condition holds true. 
        -- After each iteration, the loop checks that the condition remains true. 
        -- If the condition is now false, the loop terminates.
*/

#include <iostream>

using namespace std;

int main()
{
    string name;

    while (name.empty())
    {
        cout << "Your name?: ";
        getline(cin, name);

        if (name.empty())
        {
            cout << "Please enter a name" << endl;
        }
    }
    cout << "Your name is " << name;
}