#include <stdio.h>

/**
 * main - main function to loop and print all args
 * @argC: total nuumber of args
 * @argV: arguments
 * Return: returns 0 always
*/

int main(int argC, char **argV)
{
	int i;

	for (i = 0; i < argC; i++)
	{
		printf("%s\n", argV[i]);
	}

	return (0);
}
