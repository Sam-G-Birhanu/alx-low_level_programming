#include "main.h"

/**
 * _puts_recursion - prints the string
 * @s: is the pointer pointing to the string
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return (0);
	}
	_putchar(*s);
	*s++;
	_puts_recursion(s);
}
