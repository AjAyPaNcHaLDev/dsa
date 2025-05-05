#include "sort.h"
#include <iostream>
using namespace std;
Sort::Sort(int *array,int size)
{
    arr = array;
    max =size;
}
int *Sort::bubbleSort()
{

    for (int i = 0; i < max; i++)
    {
        for (int j = 0; j < max; j++)
        {

            if (arr[i] < arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    return arr;
}