#include "main.h"
/**
 * binary_to_uint - a function that takes a number and turns it into its binary form 
 * @b: a paremeter that takes a string to be converted
 * Return: the converted number, or 0
 **/
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = _strlen(*b);
	unsigned int sum = 0;
	for(i = _strlen(*b) - 1;i >= 0;i--)
	{
		while(*b != '\0')
		{
			unsigned int num;
			num = (unsigned int)b;
			sum += num * (2 ** i);
			b--;
		}
	}
}
