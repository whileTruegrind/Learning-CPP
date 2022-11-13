/*
    - enums:
        -- A user defined data type
        -- Consists of paired name-integer constants
        -- Great if you have a set of potential options
*/

#include <iostream>
using namespace std;

enum Day {sunday = 1, monday = 2, tuesday = 3, wednesday = 4, thursday = 5, friday = 6, saturday = 7};

int main()
{
    Day today = sunday;

    switch (today)
    {
        case 1:
            cout << "It's Sunday";
        case 2:
            cout << "It's Monday";
        case 3:
            cout << "It's Tuesday";
        case 4:
            cout << "It's Wednesday";
        case 5:
            cout << "It's Thursday";
        case 6:
            cout << "It's Friday";
        case 7:
            cout << "It's Saturday";
    } 
}