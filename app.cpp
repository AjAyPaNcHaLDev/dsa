#include <iostream>
#include "head/sort.h"
using namespace std;

int main()
{
    int arr[] = {18, 9, 27, 5, 11, 20};
   int size=sizeof(arr)/sizeof(arr[0]);
    Sort sort(arr,size);
    int *sortedArr = sort.bubbleSort();

    for (int i = 0; i < size; i++)
    {
        cout << "Element: " << sortedArr[i] << endl;
    }

    return 0;
}
