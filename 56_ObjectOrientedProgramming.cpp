/*
    - Object:
        - A collection of attributes and methods
        - They can have characteristics and could perform actions
        - Can be used to mimic real world items
        - Created from a class which acts as a "blue-print"
*/

#include <iostream>
using namespace std;

class Cars 
{
    public:
        string make;
        string model;
        int year;
        string color;
        void accelerate()
        {
            cout << "You stepped on the accelerator";
        }
        void brake()
        {
            cout << "You stepped on the brake";
        }       
};

int main()
{
    Cars car1;

    car1.make = "Volkswagen";
    car1.model = "Polo";
    car1.year = 2022;
    car1.color = "White";

    cout << car1.make << endl;
    cout << car1.model << endl;
    cout << car1.color << endl;
    car1.accelerate(); cout << "\n";
    car1.brake();
}

// Another Example
/*
class Human
{
    public:
        string name;
        string occupation;
        int age;
        void eat()
        {
            cout << "Eating now";
        } 
        void drink()
        {
            cout << "Drinking now";
        }
        void sleep()
        {
            cout << "Sleeping now";
        }
};

int main()
{
    Human human1;
    human1.name = "Edward";
    human1.occupation = "Pirate";
    human1.age = 22;
    
    cout << human1.name << " is " << human1.age << " years old and he is a " << human1.occupation << endl;
    cout << "He is "; human1.eat(); cout << endl;
    cout << "He is "; human1.drink(); cout << endl;
    cout << "He is "; human1.sleep(); cout << endl;

    Human human2;
    human2.name = "Ezio";
    human2.occupation = "Grandmaster Assassin";
    human2.age = 48;
    cout << human2.name << " is " << human2.age << " years old and he is a " << human2.occupation << endl;
    cout << "He is "; human2.eat(); cout << endl;
    cout << "He is "; human2.drink(); cout << endl;
    cout << "He is "; human2.sleep(); cout << endl;
}
*/