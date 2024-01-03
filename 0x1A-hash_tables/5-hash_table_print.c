#include "hash_tables.h"

void hash_table_print(const hash_table_t *ht)
{
    if (ht != NULL)
    {
        long unsigned int i;
        for (i = 0;i < ht->size;i++)
        {
            hash_node_t* current = ht->array[i];
            printf("{'%s': '%s'",current->key, current->value);
    
            while(current->next != NULL)
            {
                printf(", ");
                current = current->next;
                printf("'%s': '%s'",current->key, current->value);
            }
        }
        if (i < ht->size){
            printf(",");
    }
        if (i == ht->size){
            printf("}");
    }
        
}
