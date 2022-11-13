// PRACTICE: Banking

#include <iostream>
#include <iomanip>
using namespace std;

void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main()
{
    double balance = 0;
    int choice, session = 1;

    while (choice != 4)
    {
        cout << "SESSION: " << session << endl;
        cout << "1 - Check balance." << endl;
        cout << "2 - Deposit money." << endl;
        cout << "3 - Withdraw money." << endl;
        cout << "4 - Exit." << endl;
        cout << "What do you want to do?: ";
        cin >> choice;
        
        switch (choice)
        {
            case 1:
                showBalance(balance);
                break;
            case 2:
                balance += deposit();
                break;
            case 3:
                balance -= withdraw(balance);
                break;
            case 4:
                cout << "Bye.";
                break;
            default:
                cout << "Invalid choice.";
        }
        cout << "\n\n";
        session++;
    }
}

void showBalance(double balance)
{
    cout << "Your balance = " << setprecision(2) << fixed << balance << "$";
}

double deposit()
{
    double amount;
    cout << "Enter amount you want to deposit: ";
    cin >> amount;
    cout << amount << "$ deposited.";
    return amount;
}

double withdraw(double balance)
{
    double amount;
    cout << "Enter amount you want to withdraw: ";
    cin >> amount;
    cout << amount << "$ withdrawn.";
    return amount;   
}