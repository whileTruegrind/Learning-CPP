#include <iostream>

using namespace std;

int main()
{
    double temp;
    char unit;

    cout << "Temperature Conversion Program" << endl;
    cout << "C = Celsius" << endl;
    cout << "F = Fahrenheit" << endl;
    cout << "What would you like to convert to (C or F)?: ";
    cin >> unit;
    
    if (unit == 'F' || unit == 'f')
    {
        cout << "Enter temperature in Celsius: ";
        cin >> temp;
        temp = (1.8 * temp) + 32;
        cout << "Temperature is: " << temp << "F";
    }
    else if (unit == 'C' || unit == 'c')
    {
        cout << "Enter temperature in Fahrenheit: ";
        cin >> temp;
        temp = (temp - 32) / 1.8;
        cout << "Temperature is: " << temp << "C";
    }
    else
    {
        cout << "Invalid Response";
    }
}