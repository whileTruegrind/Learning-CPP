#include <iostream>

using namespace std;

int main()
{
    string oname = "John Doe";
    string name = oname;

    cout << "Length = " << oname.length() << endl;                     // Returns length of string
    
    cout << "Empty? = " << oname.empty() << endl;                      // Return if string is empty or not
    
    oname.append(" is cool");                                          // appends given string
    cout << "oname after append = " << oname << endl; oname = name;    
    
    cout << "Index 0 = " << oname.at(0) << endl;                       // returns char at given index
    
    oname.insert(0, "@");                                              // inserts char at given index
    cout << "oname after insert = " << oname << endl; oname = name;
    
    cout << "o position = " << oname.find('o') << endl;                // returns position of first "o";
    
    oname.erase(0, 3);                                                 // erases chars between indexes
    cout << "oname after erase = " << oname << endl; oname = name;
    
    oname.clear();                                                     // clears string
    cout << "oname after clear = " << oname << endl; oname = name;
}