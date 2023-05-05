#include "main.h"
/**
 * get_bit - a function that returns the value of a bit at a given index.
 *@n: variable passed in function
 *@index: variable passed in function
 *Return: the value of the bit at index index or -1 if an error
 */
int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int b;
for (; index >= 64;)
{
return (-1);
}
b = 1UL << index;
return ((n & b) ? 1 : 0);
}
