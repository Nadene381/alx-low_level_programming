#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
* key_index - Function that gives the index of a key in the hash table's array.
* @key: The key to get the index for.
* @size: The size of the hash table's array.
* Return: The index at which the key/value is stored.
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
unsigned long int hash_value = hash_djb2(key);
unsigned long int index = hash_value % size;
return (index);
}
