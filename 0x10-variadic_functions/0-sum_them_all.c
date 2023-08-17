#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - function that sums given arguemenets
 * @n: the count of arguements
 * Return: int
 **/

int sum_them_all(const unsigned int n, ...)
{
	va_list args;

	va_start(args, n);
	int i;
	int sum = 0;

	for (i = 0; i < n ; i++)
	{
		int x = va_arg(args, int);

		sum += x;
	}
	va_end(args);
	return (sum);
}
