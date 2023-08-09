#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - function to print number of changes
 * @argC: length of arguments
 * @argV: collection of args
 * Return: 0 success 1 if fails
 */

int main(int argC, char  *argV[])
{
	int i, m, r;

	int coins[5] = {25, 10, 5, 2, 1};

	if (argC != 2)
	{
		printf("Error\n");
		return (1);
	}

	m = atoi(argV[1]);
	r = 0;

	if (m < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5 && m >= 0; i++)
	{
		while (m >= coins[i])
		{
			r++;
			m -= coins[i];
		}
	}

	printf("%d\n", r);
	return (0);
}
