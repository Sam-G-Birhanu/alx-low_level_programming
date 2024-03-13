#include "search_algos.h"

int binary_search(int *array, size_t size, int value)
{
    size_t left = 0;
    size_t right = size - 1;
    
    if (array == NULL)
        return -1;
    while (left <= right) {
    for (int i = left; i <= right; i++)
       {
           if(array[i] == right)
                printf("%d", array[i]);
            else
                printf("%d, ", array[i]); 
       }
       printf("\n");
        size_t middle = left + (right - left) / 2;

        if (array[middle] == value)
            return middle;
        else if (array[middle] < value)
            left = middle + 1;
        else
            right = middle - 1;
    }

    return -1;
}