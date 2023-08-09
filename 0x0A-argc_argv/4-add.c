#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define UNUSED(x) (void)(x)

int String_Check(char *s);


/**
 * main - entry function to sum all numbers frm arg
 * @argc: length of args
 * @argv: list of arguments
 * Return: 0 success
*/


int main(int argc, char  *argv[])
{
	int i;
	int add = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (String_Check(argv[i]))
			{
				add += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", add);
		return (0);
	}
	else
	{
		printf("%d\n", 0);
	}
	return (0);

}

/**
 * String_Check - function to check if *argv is string or not
 * @str: characters to be checked
 * Return: 1 if true and 0 if false
 */

int String_Check(char *str)
{
	int i;

	i = 0;
	for (; str[i] != '\0'; i++)
	{
		if (!isdigit(str[i]))
		{
			return (0);
		}
	}
	return (1);
}
