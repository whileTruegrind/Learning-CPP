#include <iostream>
using namespace std;

void searchFor(int target, int numbers[],  int size);

int main()
{
    int size, target;
    int numbers[] = {1, 2, 3, 5, 4, 5, 6, 7, 8, 9};
    size = sizeof(numbers)/sizeof(numbers[0]);
    cout << "Element you want to search?: ";
    cin >> target;
    searchFor(target, numbers, size);
}

void searchFor(int target, int numbers[],  int size)
{
    int j = 0;
    for (int i = 0; i < size; i++)
    {
        if (numbers[i] == target)
        {
            cout << target << " is in " << i + 1 << "th position" << endl;
            j++;
        }
    }
    j == 0 ? cout << "Element not found" : cout << "";
}