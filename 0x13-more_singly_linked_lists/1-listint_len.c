#include "lists.h"
/**
 * listint_len - a function that prints the length of a single linked list
 * @h: a parameter
 * Return: returns count
 **/

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
