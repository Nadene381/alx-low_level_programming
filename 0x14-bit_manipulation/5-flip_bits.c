#include "main.h"
/**
 * flip_bits - a function that returns the number of bits
 *@n: variable passed in function
 *@m: variable passed in function
 *Return: the number of bits needed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int i, k = 0;
i = (n | m) & ~(n & m);
for (; i;)
{
k += (i & 1);
i >>= 1;
}
return (k);
}
