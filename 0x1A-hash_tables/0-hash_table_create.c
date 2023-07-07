#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
* hash_table_create - Function that creates a hash table.
* @size: The size of the array.
* Return: A pointer to hash table, or NULL if an error occurred.
*/
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *hash_table = NULL;
unsigned long int i;
if (size < 1)
return (NULL);
hash_table = malloc(sizeof(hash_table_t));
if (hash_table == NULL)
return (NULL);
hash_table->array = malloc(sizeof(hash_node_t *) * size);
if (hash_table->array == NULL)
{
free(hash_table);
return (NULL);
}
for (i = 0; i < size; i++)
hash_table->array[i] = NULL;
hash_table->size = size;
return (hash_table);
}
