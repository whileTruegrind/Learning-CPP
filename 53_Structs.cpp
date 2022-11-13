/*
    - Structures:
        -- Structures (also called structs) are a way to group several related variables into one place. 
        -- Each variable in the structure is known as a member of the structure.
        -- Unlike an array, a structure can contain many different data types (int, string, bool, etc.).
*/

#include <iostream>
using namespace std;

struct student
{
    string name;
    double GPA;
    bool enrolled;
};


int main()
{
    student student1;
    student1.name = "Arthur";
    student1.GPA = 9.5;
    student1.enrolled = true;

    student student2;
    student2.name = "John";
    student2.GPA = 7.9;
    student2.enrolled = true;

    student student3;
    student3.name = "Sadie";
    student3.GPA = 8.3;
    student3.enrolled = false;

    cout << "STUDENT 1" << endl;
    cout << "Name: " << student1.name << endl;
    cout << "GPA: " << student1.GPA << endl;
    cout << "Enrolled?: "; 
    student1.enrolled == 1 ? cout << "Yes" : cout << "No"; 
    cout << "\n\n";

    cout << "STUDENT 2" << endl;
    cout << "Name: " << student2.name << endl;
    cout << "GPA: " << student2.GPA << endl;
    cout << "Enrolled?: "; 
    student2.enrolled == 1 ? cout << "Yes" : cout << "No"; 
    cout << "\n\n";

    cout << "STUDENT 3" << endl;
    cout << "Name: " << student3.name << endl;
    cout << "GPA: " << student3.GPA << endl;
    cout << "Enrolled?: "; 
    student3.enrolled == 1 ? cout << "Yes" : cout << "No"; 
    cout << "\n\n";
}