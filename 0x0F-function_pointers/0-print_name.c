#include "function_pointers.h"

/**
 * print_name - a function that prints a name
 * @name: a pointer that points to a string name
 * @f: a pointer that points to a function
 * Return: void
 **/

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
