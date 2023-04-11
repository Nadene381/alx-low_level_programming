#include <stdio.h>
/**
* binary_to_uint - function that converts a binary number to an unsigned int
* @b: pointer passed in function
* Return: converted number or zero
*
*/
unsigned int binary_to_uint(const char *b)
{
int baseTen;
baseTen = 0;
do {
for ( ; (*b != '0' && *b != '1' && *b != '\0'); )
{
return (0);
}
baseTen = (baseTen << 1) + (*b - '0');
b++;
} while (*b != '\0');
return (baseTen);
}

