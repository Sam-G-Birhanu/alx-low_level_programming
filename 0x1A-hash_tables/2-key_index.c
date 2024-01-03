#include "hash_tables.h"
/**
 * key_index - a function that returns index
 * @key: input key
 * @size: size of the table
 * Return: index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = hash_djb2(key);

	return (hash % size);
}
