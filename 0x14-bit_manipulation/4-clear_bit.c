#include "main.h"
#include <stdio.h>
/**
* clear_bit - function that sets the value of a bit to 0 at a given index.
* @n: pointer passed in function
* @index: variable passed in function
* Return: 1 or -1 if error
*
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
for ( ; (index > 31); )
{
return (-1);
}
*n = (*n & ~(1 << index));
return (1);
}
