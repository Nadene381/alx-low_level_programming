#include "main.h"
/**
 * print_diagonal- Check main code
 * Description: Function that prints 0 - 14 ten times
 * Return: 0
 */
void print_diagonal(int n)
{
int m;
int k;
for (m = 0; m < n; m++)
{
for (k = 0; k < m; k++)
{
_putchar(' ');
}
_putchar(92);
if (m < (n - 1))
_putchar('\n');
}
_putchar('\n');
}
