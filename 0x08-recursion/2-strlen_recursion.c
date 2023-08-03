#include "main.h"

/**
 * _strlen_recursion - is a function that returns the length of a string
 * @s : is a pointer that points to the string
 * Return: int
 */

int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}
}
