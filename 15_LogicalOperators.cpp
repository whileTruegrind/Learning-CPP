/*
    - && = check if two conditions are true
    - || = check if atleast one of two conditions is true
    - !  = reverses the logical state of its operand
*/

#include <iostream>

using namespace std;

void andop();
void orop();
void notop();

int main()
{
    andop();
    orop();
    notop();
}

void andop()
{
    int temp;
    cout << "***AND related function***" << endl;
    cout << "Enter temperature: ";
    cin >> temp;
    temp > 20 && temp < 30 ? cout << "normal temperature" : cout << "Not normal";
    cout << endl;
}

void orop()
{
    int temp;
    cout << "***OR related function***" << endl;
    cout << "Enter temperature: ";
    cin >> temp;
    temp < 0 || temp > 100 ? cout << "extreme" : cout << "Not extreme";
    cout << endl;
}

void notop()
{
    int temp;
    cout << "***NOT related function***" << endl;
    cout << "Enter temperature: ";
    cin >> temp;
    temp != 1 ? cout << "temp is not 1" : cout << "temp is 1";
    cout << endl;
}