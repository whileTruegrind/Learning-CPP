// PRACTICE: Number guessing game

#include <iostream>

using namespace std;

int main()
{
    int answer;
    int guess;
    int tries;

    srand(time(0));
    answer = (rand() % 100) + 1;
    tries = 0;

    while (guess != answer)
    {
        cout << "Your guess (1 - 100)?: ";
        cin >> guess;
        tries++;

        if (guess == answer)
        {
            cout << "Correct!" << ", it took you " << tries << " tries.";
        }
        else if (guess < answer)
        {
            cout << "Try higher\n";
        }
        else
        {
            cout << "Try lower\n";
        }
    }
}