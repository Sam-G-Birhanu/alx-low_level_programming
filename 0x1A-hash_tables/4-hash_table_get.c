#include hash_tables.h

char *hash_table_get(const hash_table_t *ht, const char *key)
{
  if (ht != NULL && key != NULL)
{
  unsigned long int index = key_index((const unsigned char*)key, ht->size);
  hash_node_t* current = ht->array[index];
  if (current == NULL || current->value == NULL)
  return NULL;
  else
  return (current->value)
  
}
else
{
    return NULL;
}
}
