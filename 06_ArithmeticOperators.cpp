#include <iostream>

using std::cout;
using std::endl;

int main()
{
    int sum, difference, product, modulus;
    double quotient;
    
    int x = 200;
    int y = 100;
    int z = 500;
    int $ = 0;

    sum = x + y;
    z += sum; //z = 800
    $++; //$ = 1 

    difference = x - y;
    z-= x; //z = 600
    $--; //$ = 0

    product = x * y;
    z *= y; //z = 60000

    quotient = x / y;
    z /= y; //z = 600

    modulus = x % y;
    z %= 7; // z = 5

    cout << "Sum = " << sum << endl;
    cout << "Difference = " << difference << endl;
    cout << "Product = " << product << endl;
    cout << "Quotient = " << quotient << endl;
    cout << "Modulus = " << modulus << endl;
    cout << "z = " << z << endl;
    cout << "$ = " << $ << endl << endl;

    // ORDER OF PRECEDENCE //
    // Parenthesis > Multiplication > Division > Addition > Subtraction
    int a = 6 - 5 + 4 * 3 / 2; // a = 7
    int b = 6 - (5 + 4) * 3 / 2; // b = -7.5 = -7 (int)
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}