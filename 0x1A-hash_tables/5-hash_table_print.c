#include "hash_tables.h"

/**
    void hash_table_print(const hash_table_t *ht)
{
    if (ht != NULL)
    {
        long unsigned int i = 0;
        while(i < ht->size)
        {
            hash_node_t* current = ht->array[i];
            printf("{%s: %s",current->key, current->value);
    
            while(current->next != NULL)
            {
                current = current->next;
                printf(", %s: %s",current->key, current->value);
            }
            printf(", ");
            i++;
        }
        printf(", ");
        printf("}");
    }   
}
**/

void hash_table_print(const hash_table_t *ht)
{
    if (ht != NULL)
    {
        printf("{");

        for (long unsigned int i = 0; i < ht->size; i++)
        {
            hash_node_t *current = ht->array[i];

            while (current != NULL)
            {
                printf("'%s': '%s'", current->key, current->value);

                if (current->next != NULL)
                {
                    printf(", ");
                }

                current = current->next;
            }
        }

        printf("}\n");
    }
}

