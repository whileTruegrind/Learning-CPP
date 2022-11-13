/*
    - Abstraction: Hiding unnecessary data from outside a class.
    - getter = function that makes private attribute readable.
    - setter = function that makes a private attribute writable.
*/

#include <iostream>
using namespace std;

class Stove
{
    private:
        int temperature = 0; 
    public:
        Stove(int temperature)                      // setter in constructor
        {
            setTemperature(temperature);
        }
        int getTemperature()                        // Getter  
        {
            return temperature;
        }
        void setTemperature(int temperature)        // Setter
        {
            if (temperature < 0)
            {
                this -> temperature = 0;
            }
            else if (temperature > 100)
            {
                this -> temperature = 100;
            }
            else
            {
                this -> temperature = temperature;
            }
        }
};

int main()
{
    Stove stove(4000); // constructor
    cout << "Temperature = " << stove.getTemperature() << endl;
    stove.setTemperature(-50);
    cout << "Temperature = " << stove.getTemperature() << endl;
    stove.setTemperature(1000);
    cout << "Temperature = " << stove.getTemperature() << endl;
    stove.setTemperature(5);
    cout << "Temperature = " << stove.getTemperature() << endl;
}