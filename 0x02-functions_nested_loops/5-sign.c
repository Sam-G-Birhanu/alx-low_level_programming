#include "main.h"
/**
 * print_sign - returns 1 and shows + if the input is positive,
 * returns 0 and shows 0 if 0
 * returns -1 and shows - if the input is negative
 * @n: the number to be checked
 *
 *  Return: 1 for positive, 0 for zero, -1 for negative
 */
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('+');
		return (1);
	}
	_putchar('\n');
}
