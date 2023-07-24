#include "main.h"

/**
*print_rev - prints the reverse
*@s: variable
*Return void
*/

void print_rev(char *s){
	int track = 0;
	int i;

	while(*s >= '\0')
	{
		s++;
		track++;
	}

	for(i = track; i >= 0 ; i--)
	{
		putchar(*s--);
	}
}
