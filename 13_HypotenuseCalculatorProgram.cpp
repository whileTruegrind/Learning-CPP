#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double adjacent, opposite, hypotenuse;

    cout << "Enter adjacent side: ";
    cin >> adjacent;

    cout << "Enter opposite side: ";
    cin >> opposite;

    hypotenuse = sqrt(pow(adjacent,2) + pow(opposite,2));

    cout << "Hypotenuse = " << hypotenuse;
}