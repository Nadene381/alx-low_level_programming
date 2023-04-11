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
int numberOfBits;
numberOfBits =  (sizeof(n) * 8 - 1);
do {
for (; numberOfBits >= 0; numberOfBits--)
{
printf("%ld", (n >> numberOfBits) &1);
}
putchar('\n');
} while (0);
}
