/*
    - Nested loop means a loop statement inside another loop statement. 
    - That is why nested loops are also called as "loop inside loop".
    - Syntax:
        loop (condition) 
        {
            loop (condition) 
            {
                // statement of inside loop
            }
            // statement of outer loop
        }
*/

#include <iostream>

using namespace std;

int main()
{
    for (int i = 1; i <= 3; i++)      // performs inner loop thrice ie prints 1-10 thrice
    {
        for (int j = 1; j <= 10; j++) // prints 1-10
        {
            cout << j << " ";
        }
        cout << endl;
    }
}