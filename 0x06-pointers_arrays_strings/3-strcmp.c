#include "main.h"
/**
 * _strcmp - concatenates two strings,
 * @s1: destination.
 * @s2: source.
 * Return: the pointer to dest.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int value = 0;
	int tf = 1;

	while (*(s2 + i) != '\0' && *(s1 + i) != '\0')
	{
		if (*(s1 + i) == *(s2 + i))
		{
			value = *(s1 + i) - *(s2 + i);
			i++;
		}
		else
		{
			value = *(s1 + i) - *(s2 + i);
			tf = 0;
			break;
		}
	}
	if (*(s2 + i + 1) != '\0' && *(s1 + i + 1) != '\0' && tf == 1)
	{
		value = *(s1 + i) - *(s2 + i);
	}
	else
	{
		value = *(s1 + i) - *(s2 + i);
	}
	return (value);
}
