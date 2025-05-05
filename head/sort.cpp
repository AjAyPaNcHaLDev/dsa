#include "sort.h"
#include <iostream>
Sort::Sort(int *array, int size)
{
    arr = array;
    max = size;
}
int *Sort::bubbleSort()
{ 
    for (int i = 0; i < max; i++)
    {
        bool isSwaped = false;
        for (int j = 0; j < max; j++)
        {
            if (arr[i] < arr[j])
            {
                std::swap(arr[i], arr[j]);
                isSwaped = true; 
            }

        }
        // If no two elements were swapped, then break
        if (!isSwaped)
            break;
    }
    return arr;
}