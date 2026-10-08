#include <iostream>
#include "Array.h"
using namespace std;

void task6()
{
    int arr[] = { 8, 3, 12, 7, 4, 9 };
    int size = 6;

    int maxEven = 0;
    int minOdd = 0;

    int maxEvenIndex = -1;
    int minOddIndex = -1;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            if (maxEvenIndex == -1 || arr[i] > maxEven)
            {
                maxEven = arr[i];
                maxEvenIndex = i;
            }
        }

        if (arr[i] % 2 != 0)
        {
            if (minOddIndex == -1 || arr[i] < minOdd)
            {
                minOdd = arr[i];
                minOddIndex = i;
            }
        }
    }

    if (maxEvenIndex != -1 && minOddIndex != -1)
    {
        int temp = arr[maxEvenIndex];
        arr[maxEvenIndex] = arr[minOddIndex];
        arr[minOddIndex] = temp;
    }
    else
    {
        for (int i = 0; i < size; i++)
            arr[i] = 0;
    }

    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    cout << endl;
}