/*
    - The void keyword indicates that the function should not return a value. 
    - If you want the function to return a value:
        -- use a data type (such as int, string, etc.) instead of void, and use the return keyword inside the function
*/

#include <iostream>
using namespace std;

// EXAMPLE 1:
/*
double areaSquare(double side);

int main()
{
    double side, area;
    cout << "Enter length of side of square: ";
    cin >> side;
    area = areaSquare(side);
    cout << "Area = " << area;
}

double areaSquare(double side)
{
    double area = side * side;
    return area;
}
*/

// EXAMPLE 2:

string fullName(string firstName, string lastName)
{
    return firstName + " " + lastName;
}

int main()
{
    string firstName = "John", lastName = "Doe", name;
    name = fullName(firstName, lastName);
    cout << "Hi " << name;
}