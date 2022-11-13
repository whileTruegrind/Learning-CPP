#include <iostream>

int main()
{
    const double PI = 3.14159; // const var name all UC considered good practice
    const int LIGHT_SPEED = 299792458;

    /*
    results in an error
    PI = 903.03; 
    LIGHT_SPEED = 69420;
    */

    std::cout << PI << std::endl << LIGHT_SPEED;
}