#include "main.h"
/**
 * print_number - Function that prints an integer.
 * @n: variable in function.
 * Return: 0.
 */
void print_number(int n)
{
unsigned int m;
unsigned int k;
unsigned int p;
if (n < 0)
{
_putchar(45);
m = n * -1;
}
else
{
m = n;
}
d = m;
p = 1;
while (k > 9)
{
k /= 10;
p *= 10;
}
for (; p >= 1; p /= 10)
{
_putchar(((m / p) % 10) + 48);
}
}
