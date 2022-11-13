#include <iostream>
using namespace std;

double getTotal(double prices[], int size);

int main()
{
    double prices[] = {1.1, 3.4, 55.4, 332.45, 211.44};
    int size = sizeof(prices)/sizeof(prices[0]);
    double total = getTotal(prices, size);
    
    cout << "Total = " << total << "$";
}

double getTotal(double prices[], int size)
{
    double total = 0;
    for (int i = 0; i < size; i++)
    {
        total += prices[i];
    }
    return total;
}