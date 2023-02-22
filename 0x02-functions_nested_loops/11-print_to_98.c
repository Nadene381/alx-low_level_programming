#include "main.h"
/**
 * print_to_98 - Check main code
 * Description: Function that prints natural numbers from n to 98
 * Return: 1
 * @n: integer passed in function
 */
void print_to_98(int n);
{
if (n <= 98)
{
for (; n <= 98; n++)
{
printf("%d", n);
if (n == 98)
continue;
_putchar('\n');
}
_putchar('\n');
}
else
{
for (; n >= 98; n--)
{
printf("%d", n);
if (n == 98)
continue;
_putchar(", ");
}
_putchar('\n');
}
}
