#include <iostream>

using namespace std;

int main()
{
    string teams[][3] = {{"Dwight","Pam","Michael"},
                        {"Jim", "Stanley", "Angela"},
                        {"Karen", "Kelly", "Erin"}};

    // displaying all elements
    for (int i = 0; i < 3; i++)
    {
        cout << "Team " << i + 1 << ":" << endl;
        for (int j = 0; j < 3; j++)
        {
            cout << teams[i][j] << endl;
        }
        cout << endl;
    }
}