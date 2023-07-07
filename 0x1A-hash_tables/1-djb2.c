#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
* hash_djb2 - Function that implementation of the djb2 algorithm
* @str: String used to generate the hash value
* Return: Hash value
*/
unsigned long int hash_djb2(const unsigned char *str)
{
unsigned long int hash = 5381;
int n;
while ((n = *str++))
{
hash = ((hash << 5) + hash) +n;
}
return (hash);
}
