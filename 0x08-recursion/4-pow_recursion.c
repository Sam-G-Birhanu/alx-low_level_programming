#include "main.h"

/**
 * _pow_recursion - is a function that returns the power of a number
 * @x: is a variable to be raised
 * @y: is the power
 * Return: returns an integer
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
