#include "main.h"

/**
*print_rev - prints the reverse
*@s: variable
*Return void
*/

void print_rev(char *s)
{
int track = 0;
while(*s >= '\0')
{
s++;
track++;
}
for(int i = track; i >= 0 ; i--)
{
putchar(*s--);
}
}


int main(void)
{
    char *s;

    s = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    print_rev(s);
    return (0);
}
