/*
Type Conversion:
    Conversion of one data type to another
        Implicit = automatic
        Explicit = Precede value with new data type
*/

#include <iostream>

using namespace std;

int main()
{
    double x = (int) 3.14; // 3.14 => 3
    int y = (char) 100; // 100 => d [https://alpharithms.s3.amazonaws.com/assets/img/ascii-chart/ascii-table-alpharithms-scaled-1024x610.jpg]
    cout << x << endl;
    cout << y << endl;
}