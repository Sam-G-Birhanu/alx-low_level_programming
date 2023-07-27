#include "main.h"

/**
 * reverse_array - reverses the array,
 * @a: array.
 * @n: number.
 * Return: the pointer to dest.
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int arr2[n];

	for (int j = n - 1; j >= 0; j--)
	{
		arr2[i] = *(a + j);
		printf("%d", arr2[i]);
	if (i < n - 1)
	{
		printf(", ");
	}
	i++;
	}
}
