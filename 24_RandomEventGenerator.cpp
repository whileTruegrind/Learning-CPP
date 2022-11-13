// PRACTICE: Random prize generator

#include <iostream>

using namespace std;

int main()
{
    srand(time(0));
    int randNum = rand() % 5 + 1; // generates random num b/w 1 to 5

    string name;
    cout << "Enter your name: ";
    getline(cin, name);

    cout << name; 
    
    switch (randNum)
    {
        case 1:
            cout << ", you win nothing!";
            break;
        case 2:
            cout << ", you won 10$!";
            break;
        case 3:
            cout << ", you won 100$!";
            break;
        case 4:
            cout << ", you won 10,000$!";
            break;
        case 5:
            cout << ", jackpot! You won 1,000,000$!";
            break;
    }
}