#include <iostream>

int main()
{
    //integer
    int age = 19;

    //double (number including decimal)
    double gpa = 2.5;

    //single character
    char grade = 'C';
    
    //boolean
    bool pass = true;

    //string 
    std::string name = "Rishi";
    
    std::cout << "Hello " << name << " you are " << age << " years old, your GPA is " << gpa << " and your grade is " << grade << ". pass?: " << pass; 
}