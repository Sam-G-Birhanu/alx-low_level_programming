#include "search_algos.h"
/**
 * linear_search - Searches for a value in an array using linear search algorithm
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: If value is not present in array or if array is NULL, returns -1,
 *         otherwise returns the index where value is located
 */

int linear_search(int *array, size_t size, int value)
{
	bool found = false;
	size_t i;

	if (!value)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (*array == value)
		{
			found = true;
			return (i);
		}
		else
		{
			printf("Value checked array[%d] = [%d]", i, *array);
			printf("\n");
			array++;
		}
	}
	if (!found)
		return (-1);
}
