// pseudo-random = NOT truly random but close.

#include <iostream>

using namespace std;

int main()
{
    srand(time(NULL)); // so that random number is not same respective to time 
    // int num = rand(); // 0 to 3276
    int dice1 = (rand() % 6) + 1; // any number % 6 < 6 and +1 to avoid 0 and get 6 
    int dice2 = (rand() % 6) + 1; // use only %7 if 0 to 6 is needed
    int dice3 = (rand() % 6) + 1;
    cout << dice1 << endl;
    cout << dice2 << endl; 
    cout << dice3 << endl;
    int result = dice1 + dice2 + dice3;
    cout << "result = " << result;
}