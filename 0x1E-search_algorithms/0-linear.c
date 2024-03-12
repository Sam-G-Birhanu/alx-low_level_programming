#include "search_algos.h"
int linear_search(int *array, size_t size, int value)
{
    /**
     * linear_search - a function that performs linear search
     * @size - a parameter that stores the size of the array
     * @value: the value to be searched
     * Return: returns -1 if value not found, index if found
     **/

	bool found = false;
	int i;

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
