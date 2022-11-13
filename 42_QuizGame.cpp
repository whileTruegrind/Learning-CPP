#include <iostream>

using namespace std;

int main()
{
    string questions[3] =  {{"1 - What is the capital of India?"},
                           {"2 - What is the capital of UAE?"},
                           {"3 - What is the capital of Russia?"}};
    string options[3][4] = {{"A. Chennai", "B. Mumbai", "C. Kolkata", "D. New Delhi"},
                            {"A. Dubai", "B. Riyadh", "C. Abu Dhabi", "D. Kabul"},
                            {"A. London", "B. Berlin", "C. Moscow", "D. Saint Petersburg"}};
    char answers[3] = {'D','C','C'};
    int score = 0;
    char guess;

    for (int i = 0; i < 3; i++)
    {
        cout << questions[i] << endl;
        for (int j = 0; j < 4; j++)
        {
            cout << options[i][j] << endl;
        }
        cout << "Your guess?: ";
        cin >> guess;
        guess = toupper(guess);
        if (guess == answers[i])
        {
            cout << "Correct!" << endl;
            score++;
        }
        else
        {
            cout << "Wrong!" << endl;
            cout << "Answer: " << answers[i] << endl;
        }
        cout << endl;
    }
    cout << "Your score = " << score;
}