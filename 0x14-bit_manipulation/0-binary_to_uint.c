#include "main.h"
/**
 * binary_to_uint - takes a number and turns it into its binary form
 * @b: a paremeter that takes a string to be converted
 * Return: the converted number, or 0
 **/
unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	unsigned int sum = 0;

	for (i = _strlen(b) - 1; i != (unsigned int)-1; i--)
	{
		if (b[i] == '1')
		{
			sum += 1 << (_strlen(b) - 1 - i);
		}
		else if (b[i] != '0')
		{
			return (0);
		}
	}
	return (sum);
}
