#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x = 3;
    double y = 4;
    double a, b, c, d, e, f, g, h;

    a = max(x,y);
    cout << "a = " << a << endl;

    b = min(x,y);
    cout << "b = " << b << endl;

    c = pow(2,4);
    cout << "c = " << c << endl;

    d = sqrt(9);
    cout << "d = " << d << endl;

    e = abs(-89);
    cout << "e = " << e << endl;

    f = round(8.6); // Mathematical rounding
    cout << "f = " << f << endl;
    
    g = floor(8.6);
    cout << "g = " << g << endl;

    h = ceil(8.1);
    cout << "h = " << h << endl;
}