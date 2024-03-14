#include "search_algos.h"
/**
 * linear_search - Searches for a value in an array using linear search
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: If value is not present in array or if array is NULL, returns -1,
 *         otherwise returns the index where value is located
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, *array);
		if (*array == value)
		{
			return ((int)i);
		}
			printf("Value checked array[%ld] = [%d]\n", i, *array);
			array++;
	}
		return (-1);
}
