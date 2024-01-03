#include "hash_tables.h"
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    if(key != NULL)
    {
        const unsigned char* k = key;
       unsigned long int index = key_index(key, ht->size);
       if (index > ht->size)
       {
           return 0;
       }
       if (ht->array[index] == NULL)
       {
           array[index] = value;
           return 1;
       }
       else
       {
           *array[index]->next = value;
           return 1;
       }
       }
    else
       {
           return 0;
       }
}
