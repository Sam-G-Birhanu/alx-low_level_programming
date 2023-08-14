#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the filename
 * Return (0);
 **/

int main(void)
{
	char filename[];
	filename = __FILE__;
	printf("%s\n", filename);
	return (0);
}

#endif
