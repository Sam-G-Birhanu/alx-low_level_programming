#include "hash_tables.h"

void hash_table_print(const hash_table_t *ht)
{
    if (ht != NULL)
    {
        long unsigned int i;
        printf("{");

        for (i = 0; i < ht->size; i++)
        {
            hash_node_t *current = ht->array[i];

            while (current != NULL)
            {
                if (current->key != NULL && current->value != NULL)
                {
                    printf("'%s': '%s'", current->key, current->value);

                    if (current->next != NULL)
                    {
                        printf(", ");
                    }
                }

                current = current->next;
            }
        }

        printf("}\n");
    }
}

