#include "main.h"
#include <stdio.h>
/**
* print_binary - function that prints the binary representation of a number.
* @n: variable passed in function
* Return: 0
*
*/
void print_binary(unsigned long int n)
{
int value;
int numberOfBits;
numberOfBits = sizeof(unsigned long int) * 8;
int zero = 1;
do {
while (n == 0)
{
putchar('0');
return;
}
for ( ; --numberOfBits >= 0;)
{
value = (n >> numberOfBits) &1;
if (value || !zero)
{
putchar('0' + value);
zero = 0;
}
}
} while (0);
}
