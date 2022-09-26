#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double oppSide, adjSide, hypSide;
    
    cout << "Enter length of opposite side: ";
    cin >> oppSide;

    cout << "Enter length of adjacent side: ";
    cin >> adjSide;

    hypSide = sqrt(pow(oppSide, 2) + pow(adjSide, 2));

    cout << "Hypotenuse = " << hypSide;
}