#ifndef 2-main.c
#define 2-main.c 
#include <stdio.h>
#include <stdlib.h>
void filename (void)
{
	char filename[] = __FILE__ ;

	printf("%s \n", filename);
	return;
}
#endif
