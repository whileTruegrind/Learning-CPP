/*  
    - ternary operator ?: = replacement to if/else statement
    - condition ? expression1 : expression2;
        -- expression1 => if
        -- expression2 => else 
*/

#include <iostream>

using namespace std;

int main()
{
    int age;
    
    cout << "Your age?: ";
    cin >> age;

    age >= 18 ? cout << "Welcome" : cout << "Grow up";
}