/*
    - Constructor:
        -- Special method that is automatically called when an object is instantiated
        -- Useful for assigning values to attributes as arguments
*/

#include <iostream>
using namespace std;

class Student
{
    public:
        string name;
        int age;
        double gpa;
    Student(string name, int age, double gpa)
    {
        this -> name = name;
        this -> age = age;
        this -> gpa = gpa;
    }
};

int main()
{
    Student student1("Arthur Morgan", 36, 9.8);
    Student student2("John Marston", 26, 7.3);
    cout << student1.name << endl;
    cout << student1.age << endl;
    cout << student1.gpa << endl;
}