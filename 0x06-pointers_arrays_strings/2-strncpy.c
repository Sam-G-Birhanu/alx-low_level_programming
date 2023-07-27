#include "main.h"
/**
 * _strncpy - copies a string,
 * @dest: destination.
 * @src: source.
 * @n: a variable specifying the number of characters
 * Return: the pointer to dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int count = 0, count2 = 0;

	while (count2 >= 0 && count2 < n)
	{
		*(dest + count) = *(src + count2);
		if (*(src + count2) == '\0' && *(dest + count) != '\0')
		{
			*(dest + count) = '\0';
			count++;
			continue;
		}
		else if (*(dest + count) == '\0')
		{
			return (dest);
		}
		count++;
		count2++;
	}
	return (dest);
}
