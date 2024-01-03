#include "hash_tables.h"

void hash_table_print(const hash_table_t *ht)
{
    if (ht != NULL)
    {
        int i = 0;
        while(i < ht->size)
        {
            hash_node_t* current = ht->array[i];
            print("%s: %s",current->key, current->value);
            while(current->next != NULL)
            {
                current = current->next;
                print(", %s: %s",current->key, current->value);
            }
        }
    }
}
