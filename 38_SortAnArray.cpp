#include <iostream>
using namespace std;

void sortArray(int array[], int size);
void printArray(int array[], int size);

int main()
{
    int array[] = {3, 1, 2, 5, 4};
    int size = sizeof(array)/sizeof(array[0]);
    sortArray(array, size);
    printArray(array, size);
}

void sortArray(int array[], int size)
{
    int temp;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j + 1];
                array[j + 1] = array[j];
                array[j] = temp;
            }
        }
    }
}

void printArray(int array[], int size)
{
    cout << "Sorted array: {";
    for (int i = 0; i < size; i++)
    {
        cout << array[i];
        if (i != size - 1)
        {
            cout << ", ";
        }
    }
    cout << "}";
}