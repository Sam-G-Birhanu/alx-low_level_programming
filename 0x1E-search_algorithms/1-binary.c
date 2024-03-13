#include "search_algos.h"
/**
 * binary_search - performs binary search
 * @array: pointer to the first element of the array
 * @size: size of the array
 * @value: value to be searched
 * Return: returns the index of value
 */

int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;

	if (array == NULL)
		return (-1);
	while (left <= right)
	{
		size_t i;
		size_t middle = left + (right - left) / 2;

		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			if (array[i] == (int)right)
				printf("%d", array[i]);
			else
				printf("%d, ", array[i]);
		}
		printf("\n");
		if (array[middle] == value)
			return (middle);
		else if (array[middle] < value)
			left = middle + 1;
		else
			right = middle - 1;
	}
	return (-1);
}
