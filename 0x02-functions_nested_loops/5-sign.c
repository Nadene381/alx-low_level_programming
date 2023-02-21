#include "main.h"
/**
 * print_sign - Check main code
 * Description: Function that uses if statement
 * Return: return 1 /-1 or 0 depending on the value of n
 * @n: variable passed in fuction
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
else if (n < 0)
{
_putchar(45);
return (-1);
}
else
{
_putchar(48);
return (0);
}
}
