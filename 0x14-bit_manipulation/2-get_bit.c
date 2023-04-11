#include "main.h"
#include <stdio.h>
/**
* get_bit - unction that returns the value of a bit at a given index.
* @n: pointer passed in function
* @index: variable passed in function
* Return: 1 or -1 if error
*
*/
int get_bit(unsigned long int n, unsigned int index)
{
unsigned int valueOfBit;
do {
for ( ; ( index > 31); )
{
return (-1);
}
valueOfBit = (n >> index) & 1;
return (valueOfBit);
} while (1);
}
