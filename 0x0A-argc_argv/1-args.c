#include <stdio.h>

/**
 * main - entry point funciton
 * @argC:  length of argv
 * @argV: list of strings
 * Return: returns  0 always
*/
int main(int argC __attribute__((unused)), char *argV[])
{
	printf("%s\n", argV[0]);
	return (0);
}
