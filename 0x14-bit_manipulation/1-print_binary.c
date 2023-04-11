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
numberOfBits =  (sizeof(unsigned int) * 8 -1);
do {
while(numberOfBits >= 0 && !(n &(1u <<numberOfBits )) )
numberOfBits--;
if (numberOfBits == 0)
{
printf("0\n");
}
for (; numberOfBits >= 0; numberOfBits--)
{
printf("%ld", (n >> numberOfBits) & 1);
}
} while (0);
}
