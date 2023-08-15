#include "dog.h"

/**
 * init_dog - function that initialies a struct
 * @d: a pointer
 * @name: name of the dog
 * @age: age
 * @owner: owner  of the dog
 * Return: return void
 **/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
}
