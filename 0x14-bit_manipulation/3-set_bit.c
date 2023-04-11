#include <stdio.h>
#include "main.h"
/**
* set_bit - function that sets the value of a bit to 1 at a given index.
* @n: pointer passed in function
* @index: variable passed in function
* Return: 1 or -1 if error
*
*/
int set_bit(unsigned long int *n, unsigned int index)
{
do {
for ( ; ( index > 31); )
{
return (-1);
}
*n = *n | (1 << index);
return (1);
} while (1);
}
