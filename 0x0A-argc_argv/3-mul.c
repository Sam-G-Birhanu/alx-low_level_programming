#include <stdio.h>
#include <stdlib.h>

/**
 * main - function to multiplay two numbers from
 * arguuments
 * @argC: total number of args
 * @argV: all arguments
 * Return: 0 in success
 * 1 fails
*/

int main(int argC, char *argV[])
{
	int mul;

	if (argC != 3)
	{
		printf("Error\n");
		return (1);
	}

	mul = atoi(argV[1]) * atoi(argV[2]);
	printf("%d\n", mul);
	return (0);
}
