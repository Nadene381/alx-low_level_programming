#include "main.h"
/**
 * more_numbers - Check main code
 * Description: Function that prints 0 - 14 ten times
 * Return: 0
 */
void more_numbers(void)
{
int n;
int m;
for (m = 0; m <=10; m++)
{
for (n = 0; n <= 14; n++)
{
putchar((n/10) + 48);
putchar((n%10) + 48);
}
putchar('\n');
}
}
