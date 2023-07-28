#include "main.h"

/**
 * print_number - prints an integer.
 * @n: input integer.
 * Return: no return.
 */
void print_number(int n)
{
	unsigned int m, d, count;

	if (n == 0)  /* Handle special case when n is 0 */
	{
		_putchar('0');
		return;
	}

	if (n < 0)
	{
		_putchar('-');
		m = -n;
	}
	else
	{
		m = n;
	}

	d = m;
	count = 1;

	while (d > 9)
	{
		d /= 10;
		count *= 10;
	}

	while (count >= 1)
	{
		_putchar(((m / count) % 10) + '0');
		count /= 10;
	}
}

