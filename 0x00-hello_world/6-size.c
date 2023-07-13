#include <stdio.h>
/**
 * main -main block
 * Return:0
 */
int main(void)
{
int x;
long int y;
long long int k;
char z;
float w;
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(z));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(x));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(y));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(k));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(w));
return (0);
}
