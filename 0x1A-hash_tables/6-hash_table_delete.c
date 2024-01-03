#include "hash_tables.h"

void hash_table_delete(hash_table_t *ht){
  free_item(new_node);
  free_table(ht);
} 
void free_item(Ht_item* item)
{
    free(item->key);
    free(item->value);
  free(item->next);
    free(item);
}

void free_table(HashTable* table)
{

    for (int i = 0; i < table->size; i++)
    {
        Ht_item* item = table->array[i];

        if (item != NULL)
            free_item(array);
    }

    free(table->array);
    free(table);
}
