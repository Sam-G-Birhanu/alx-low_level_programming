#include "hash_tables.h"

void hash_table_delete(hash_table_t *ht)
{
    hash_node_t *current;
    hash_node_t *next;
    unsigned long int i;
    if (ht == NULL)
    {
        return;
    }

    for (i = 0; i < ht->size; i++)
    {
        current = ht->array[i];

        while (current != NULL)
        {
            next = current->next;
            free(current->value);
            free(current->key);
            free(current);
            current = next;
        }

        ht->array[i] = NULL;
    }

    free(ht->array);
    free(ht);
}
