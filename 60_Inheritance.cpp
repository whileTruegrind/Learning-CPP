/*
    - The capability of a class to derive properties and characteristics from another class is called Inheritance. 
    - Inheritance is one of the most important features of Object-Oriented Programming. 
    - Inheritance is a feature or a process in which, new classes are created from the existing classes. 
    - The new class created is called “derived class” or “child class” and the existing class is known as the “base class” or “parent class”. 
    - The derived class now is said to be inherited from the base class.
    - When we say derived class inherits the base class, it means, the derived class inherits all the properties of the base class, 
    - without changing the properties of base class and may add new features to its own. 
    - These new features in the derived class will not affect the base class. The derived class is the specialized class for the base class.
    - Sub Class: The class that inherits properties from another class is called Subclass or Derived Class. 
    - Super Class: The class whose properties are inherited by a subclass is called Base Class or Superclass. 
*/

#include <iostream>
using namespace std;

class Shape
{
    public:
        double area;
        double volume;
};
class Cube : public Shape
{
    public: 
        double side;
    Cube(double side)
    {
        this -> side = side;
        this -> area = side * side * 6;
        this -> volume = side * side * side;
    }
};
class Sphere : public Shape
{
    public:
        double radius;
    Sphere(double radius)
    {
        this -> radius = radius;
        this -> area = 4 * 3.14159 * (radius*radius);
        this -> volume = (4/3.0) * 3.14159 * (radius * radius * radius);
    }
};

int main()
{
    Cube cube (10);
    cout << "Area of cube = " << cube.area << " (cm^2)\n";
    cout << "Volume of cube = " << cube.volume << " (cm^3)\n\n";

    Sphere sphere (5);
    cout << "Area of sphere = " << sphere.area << " (cm^2)\n";
    cout << "Volume of sphere = " << sphere.volume << " (cm^3)\n";
}

/*
// Another Example
class Animal
{
    public:
        bool alive = true;
        void eat()
        {
            cout << "Eating now\n";
        }
};

class Dog : public Animal 
{
    public:
        void bark()
        {
            cout << "Woof\n";
        }
};
class Cat : public Animal 
{
    public:
        void meow()
        {
            cout << "Meow\n";
        }
};

int main()
{
    Dog dog1;
    cout << dog1.alive << "\n";    // Inherited
    dog1.eat();                     // Inherited
    dog1.bark();

    Cat cat1;
    cout << cat1.alive << "\n";     // Inherited
    cat1.eat();                     // Inherited
    cat1.meow();
}
*/