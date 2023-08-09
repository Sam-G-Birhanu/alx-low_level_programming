#include <stdio.h>

/**
 * main - main  entry point to print first arg
 * @argC:  length of argv
 * @argV: list of strings
 * Return: always 0
*/
int main(int argC __attribute__((unused)), char *argV[])
{
	printf("%s\n", argV[0]);
	return (0);
}
