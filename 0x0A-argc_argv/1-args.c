#include <stdio.h>

/**
 * main - entry point funciton
 * @argC:  length of argv
 * @argV: list of strings
 * Return: returns  0 always
*/


int main(int argC, char *argV[] __attribute__((unused)))
{
	printf("%d\n", argC - 1);
	return (0);
}
