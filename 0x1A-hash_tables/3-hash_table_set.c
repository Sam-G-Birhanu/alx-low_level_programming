#include "hash_tables.h"
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    if(key != NULL)
    {
        
       unsigned long int index = key_index((const unsigned char*)key, ht->size);
       if (index > ht->size)
       {
           return 0;
       }
       if (ht->array[index] == NULL)
       {
           hash_node_t* new_node;
           new_node = (hash_node_t*) malloc(sizeof(hash_node_t));
           if(new_node == NULL)
            return 0;
        new_node->key = strdup(key);
        new_node->value = strdup(value);
        new_node->next = NULL;
        ht->array[index] = new_node;
        return 1;
       }
       else
       {
           hash_node_t* current = ht->array[index];
           hash_node_t* new_node;
           while (current != NULL){
               if(strcmp(current->key, key) == 0)
               {
                  free(current->value);
                  current->value = strdup(value);
                  return 1;
               }
               current = current->next;
           }
           new_node = (hash_node_t*) malloc(sizeof(hash_node_t));
        if(new_node == NULL)
            return 0;
        new_node->key = strdup(key);
        new_node->value = strdup(value);
        new_node->next = ht->array[index];
        ht->array[index] = new_node;
        return 1;
       }
       }
    else
       {
           return 0;
       }
}
