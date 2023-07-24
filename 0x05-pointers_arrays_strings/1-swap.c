#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the values of the two variables
 * @a: is a pointer pointing to the memory address of the variable a
 * @b: is a pointer that points to b
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
