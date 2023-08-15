#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - function that frees memory
 * @d: array
 * Description: Free memory for struct
 * Return: void
 **/

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
