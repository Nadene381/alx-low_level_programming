#include "main.h"
/**
 * clear_bit - a function that sets the value of a bit to 0 at a given index.
 *@n: pointer passed in function
 *@index: variable passed in function
 *Return: 1 or -1 if an error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int b;
for (; index >= 64;)
{
return (-1);
}
b = 1UL << index;
*n &= ~b;
return (1);
}
