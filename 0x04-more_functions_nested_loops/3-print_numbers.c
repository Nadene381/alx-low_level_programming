#include "main.h"
/**
 * print_numbers - Check main code
 * Description: Function that print numbers 0 - 9
 * Return: 0
 */
void print_numbers(void)
{
int n;
for (n = 0; n <= 9; n++)
{
putchar('0' + n);
}
putchar('\n');
return (0);
}
