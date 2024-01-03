#include "hash_tables.h"

void hash_table_delete(hash_table_t *ht)
{
    if (ht == NULL)
    {
        return; // Ensure that ht is not NULL before attempting to delete
    }

    hash_node_t *current, *next;

    for (unsigned long int i = 0; i < ht->size; i++)
    {
        current = ht->array[i];

        while (current != NULL)
        {
            next = current->next; // Save the next pointer before freeing current
            free(current->value);
            free(current->key);
            free(current);
            current = next;
        }

        ht->array[i] = NULL; // Set the array element to NULL after freeing the linked list
    }

    free(ht->array); // Free the array of pointers
    free(ht);        // Free the hash table structure
}
