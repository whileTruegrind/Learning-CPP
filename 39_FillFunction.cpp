/*
    - fill():
        -- FIlls a range of elements with a specified value
        -- fill(begin, end, value)
*/

#include <iostream>
using namespace std;

int main()
{
    //string foods[5] = {"pizza", "pizza", "pizza", "pizza", "pizza"};
    // instead:
    string foods[10];
    fill(foods, foods + 5, "pizza");
    fill(foods + 5, foods + 10, "fried chicken"); // starting where we left off

    for (string food : foods)
    {
        cout << food << endl;
    }
}