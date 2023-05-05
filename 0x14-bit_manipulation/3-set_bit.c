#include "main.h"
/**
 * set_bit - a function that sets the value of a bit to 1 at a given index.
 *@n: pointer passed in function
 *@index: variable passed in function
 *Return: 1 or -1 if an error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
for (; index >= 64;)
{
return (-1);
}
*n = *n | (1UL << index);
return (1);
}
