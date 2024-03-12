#include "search_algos.h"
    /**
     * linear_search - function that performs linear search
     * @array: a pointer that points to the first element
     * @size: a parameter that stores the size of the array
     * @value: the value to be searched
     * Return: returns -1 if value not found, index if found
     **/
int linear_search(int *array, size_t size, int value)
{
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
