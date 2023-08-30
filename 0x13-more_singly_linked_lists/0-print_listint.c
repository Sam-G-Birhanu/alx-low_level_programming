#include "lists.h"

/**
 * print_listint - a function that prints all elements of a list
 * @h: a pointer that points to a struct listint_t
 * Return: size_t, number of nodes posted
 **/
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d", h->n);
		count++;
		h = h->next;
	}
	return (count);
}

