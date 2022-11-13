/*
    - typedef:
        -- Reserved keyword used to create an additional name (alias) for another data type.
        -- New identifier for an existing type helps with readability and reduces typos.
        -- Use when there is a clear benefit
        -- Replaced with "using" (works better with templates)
*/

#include <iostream>
#include <vector>

typedef std::string str;
// OR //
using str2 = std::string;

int main()
{
    str name = "Rishi";
    str2 greeting = "Hello";

    std::cout << name << std::endl;
    std::cout << greeting << std::endl;
}