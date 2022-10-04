// PRACTICE: Rock Paper Scissors game

#include <iostream>
#include <ctime>
using  namespace std;

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main() 
{
    char player;
	char computer;
	player = getUserChoice();
	cout << "Your choice: ";
	showChoice(player);
	computer = getComputerChoice();
	cout << "Computer's choice: ";
	showChoice(computer);
	chooseWinner(player, computer);
}

char getUserChoice()
{
	char player;
	cout << "\n";
	do
    {
		cout << "'r' for rock\n";
		cout << "'p' for paper\n";
		cout << "'s' for scissors\n";
        cout << "Your choice?: ";
		cin >> player;
        if (player != 'r' && player != 'p' && player != 's')
        {
            cout << "Invalid Choice!\n\n";
        }
	} while (player != 'r' && player != 'p' && player != 's');
	return player;
}

char getComputerChoice()
{
	srand(time(0));
	int num = rand() % 3 + 1;
	switch(num)
    {
		case 1: return 'r';
		case 2: return 'p';
		case 3: return 's';
	}
	return 0;
}

void showChoice(char choice)
{
	switch(choice)
    {
		case 'r': cout << "Rock\n"; break;
		case 'p': cout << "Paper\n"; break;
		case 's': cout << "Scissors\n"; break;
	}
}

void chooseWinner(char player, char computer)
{
    switch(player)
    {
		case 'r': 	
            if(computer == 'r')
            {
                cout << "\nIt's a tie!";
            }
            else if(computer == 'p')
            {
                cout << "\nYou lose!";
            }
            else
            {
                cout << "\nYou win!";
            }
            break;
		case 'p': 	
            if(computer == 'r')
            {
                cout << "\nYou win!";
            }
            else if(computer == 'p')
            {
                cout << "\nIt's a tie!";
            }
            else
            {
                cout << "\nYou lose!";
            }
            break;
        case 's':
            if(computer == 'r')
            {
                cout << "\nYou lose!";
            }
            else if(computer == 'p')
            {
                cout << "\nYou win!";
            }
            else
            {
                cout << "\nIt's a tie!";
			}
            break;
	}
} 