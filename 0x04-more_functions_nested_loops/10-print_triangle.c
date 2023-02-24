#include "main.h"
/**
 * print_triangle- Check main code
 * Description: Function that prints #
 * @size: integer passed in function
 * Return: 0
 */
void print_triangle(int size)
{
int n;
int m;
for (n = 0; n < size; n++)
{
for (m = 1; m < (size - n); m++)
_putchar(' ');
for (m--; m < size; m++)
_putchar(35);
if (n < (size - 1))
_putchar('\n');
}
_putchar('\n');
}
