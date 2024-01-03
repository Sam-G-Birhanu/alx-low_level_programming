#include "hash_tables.h"

char *hash_table_get(const hash_table_t *ht, const char *key)
{
  if (ht != NULL && key != NULL)
{
  unsigned long int index = key_index((const unsigned char*)key, ht->size);
  hash_node_t* current = ht->array[index];
  if (current == NULL || current->value == NULL)
  return NULL;
  else
    while(current != NULL)
      {
        if(strcmp(current->key, key) == 0)
        {
          return (current->value);
        }
        else
          current = current->next;
      }
  return NULL;
}
else
{
    return NULL;
}
}
