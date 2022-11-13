#include <iostream>
using namespace std;

int main()
{
    string foods[5];
    int size = sizeof(foods)/sizeof(foods[0]);
    string food;
    for(int i = 0; i < size; i++)
    {
        cout << "Enter food #" << i + 1 << " you like/'Q' to quit: ";
        getline(cin, food);
        if(food == "Q")
        {
            break;
        }
        else
        {
            foods[i] = food;
        }
    }
    
    cout << "You like the following food:\n";
    for(int i = 0; !foods[i].empty(); i++)
    {
        cout << foods[i] << '\n';
    }
}