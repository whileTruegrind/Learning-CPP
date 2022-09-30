#include <iostream>

using namespace std;

void orderIC(string scoop1);
void orderIC(string scoop1, string scoop2);
void orderIC(string scoop1, string scoop2, string scoop3);

int main()
{
    int scoops;
    string scoop1, scoop2, scoop3;
    cout << "How many scoops?(1-3): ";
    cin >> scoops;
    switch(scoops)
    {
        case 1:
            cout << "Enter your desired flavor: ";
            cin >> scoop1;
            orderIC(scoop1);
            break;
        case 2:
            cout << "Enter scoop 1 flavor: ";
            cin >> scoop1;
            cout << "Enter scoop 2 flavor: ";
            cin >> scoop2;
            orderIC(scoop1,scoop2);
            break;
        case 3:
            cout << "Enter scoop 1 flavor: ";
            cin >> scoop1;
            cout << "Enter scoop 2 flavor: ";
            cin >> scoop2;
            cout << "Enter scoop 3 flavor: ";
            cin >> scoop3;
            orderIC(scoop1,scoop2,scoop3);
            break;
        default:
            cout << "Invalid Response";
    }
}

void orderIC(string scoop1)
{
    cout << scoop1 << " flavoured ice cream is ready.";
}
void orderIC(string scoop1, string scoop2)
{
    cout << scoop1 + " and " + scoop2 << " flavoured ice cream is ready.";
}
void orderIC(string scoop1, string scoop2, string scoop3)
{
    cout << scoop1 + ", " + scoop2 + " and " + scoop3 << " flavoured ice cream is ready.";
}