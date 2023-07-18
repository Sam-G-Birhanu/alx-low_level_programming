#include "main.h"
/**
 * print_sign - returns 1 and shows + if the input is positive,
 * returns 0 and shows 0 if 0
 * returns -1 and shows - if the input is negative
 * @c: the character in AsCII mode
 *
 *  Return: 1 for positive, 0 for zero, -1 for negative
 */
int print_sign(int n)
{
	int j;

	if (n < 0)
	{
		_putchar('-');
		j = -1;
		return (-1);
	}
	else if (n == 0)
        {
                _putchar('0');
		j = 0;
                return (0);
        }
	else (n > 0)
        {
                _putchar('+');
		j = 1;
		return (1);
        }
	_putchar('\n');
}
