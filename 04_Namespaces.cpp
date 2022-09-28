/*
    - Namespace:
        -- Provides a solution for preventing name conflicts in large projects. 
        -- Each entity needs a unique name. 
        -- A namespace allows for identically named entities as long as the namespaces are different.
*/

#include <iostream>

namespace first {int x = 1;}
namespace second {int x = 2;}

int main()
{
    /*
    int x = 0;
    std::cout << x << std::endl; // Prints local vale of X
    std::cout << first::x << std::endl; // first Namespace 
    std::cout << second::x << std::endl << std::endl; // Second Namespace
    */
   
    // (OR) //

    using namespace first;
    std::cout << x << std::endl; //prints first namespace
    std::cout << first::x << std::endl; //first Namespace
    std::cout << second::x; //prints second namespace
}