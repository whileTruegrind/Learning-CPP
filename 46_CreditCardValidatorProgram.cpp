// PRACTICE: Credit card validator program

/*
    - Luhn's Algorithm:
        -- 1/ Double every second digit from right to left. If doubled number is 2 digits, split them.
        -- 2/ Add all single digits from step 1.
        -- 3/ Add all odd numbered digits from right to left.
        -- 4/ Sum results from steps 2 & 3
        -- 5/ If step 4 is divisible by 10, # is valid
    - eg.
        6011 0009 9013 9424
        Step 1:
            => [6 1] [0 0] [9 1] [9 2]
            => [12 2] [0 0] [18 2] [18 4]
            => [1 2 2] [0 0] [1 8 2] [1 8 4]
        Step 2:
            => 29
        Step 3:
            => [0 1] [0 9] [0 3] [4 4]
            => 21
        Step 4:
            => 50
        Step 5:
            => if 50 % 10 = 0, valid. else not valid.
*/

#include <iostream>
using namespace std;

int getDigit(const int number);
int sumOddDigits(const string cardNumber);
int sumEvenDigits(const string cardNumber);

int main()
{
    string cardNumber;
    int result = 0;

    cout << "Enter card number: ";
    cin >> cardNumber;

    result = (sumEvenDigits(cardNumber) + sumOddDigits(cardNumber)) % 10;

    if (result == 0)
    {
        cout << "Card Valid!";
    }
    else
    {
        cout << "Card Invalid!";
    }
}

int getDigit(const int number)
{
    return number % 10 + (number / 10 % 10);
}
int sumOddDigits(const string cardNumber)
{
    int sum = 0;
    for(int i = cardNumber.size() - 1; i >= 0; i -= 2)
    {
        sum += cardNumber[i] - '0';
    }
    return sum;
}
int sumEvenDigits(const string cardNumber)
{
    int sum = 0;
    for(int i = cardNumber.size() - 2; i >= 0; i -= 2)
    {
        sum += getDigit((cardNumber[i] - '0') * 2);
    }
    return sum;
}