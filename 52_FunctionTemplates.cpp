/*
    - Function Template:
        -- Describes what a function looks like.
        -- Can be used to generate as many overloaded functions as needed
        -- Each using different data types
*/

#include <iostream>
using namespace std;

template <typename T, typename U>

auto maxOf(T x, U y)
{
    return x > y ? x : y;
}

int main()
{
    cout << maxOf('1', '2') << endl;
    cout << maxOf(54, 42) << endl;
    cout << maxOf(6.9, 4.20) << endl;
    cout << maxOf(134, 420.69) << endl;
}