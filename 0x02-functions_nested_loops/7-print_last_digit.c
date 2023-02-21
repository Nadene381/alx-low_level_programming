#include "main.h"
/**
 * print_last_digit- Check main code
 * Description: Function that prints last digit
 * Return: 1
 * @n: integer passed in function
 */
int print_last_digit(int n)
{
int m;
if (n < 0)
m = -1 * (n % 10);
else
m = n % 10;
_putchar((m % 10) + '0');
return (m % 10);
}
