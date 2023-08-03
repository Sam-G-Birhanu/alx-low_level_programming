#include "main.h"

/**
 * factorial - is a function that returns the factorial of  a number
 * @n: is a variable that reprsents the number
 * Return: returns a type int
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
