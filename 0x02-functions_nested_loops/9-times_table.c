#include "main.h"
/**
 * times_table - Check main code
 * Description: Function that prints 9 time table
 * Return: 0
 */
void times_table(void)
{
int row;
int colum;
int multiplication;
for (row = 0; row <= 9; row++)
{
_putchar('0');
_putchar(',');
_putchar(' ');
for (colum = 1; colum <= 9; colum++)
{
multiplication = (row * colum);
if ((multiplication / 10) > 0)
{
_putchar((multiplication / 10) + '0');
}
else if (colum < 9)
{
_putchar(',');
_putchar(' ');
}
else
{
_putchar(' ');
}
_putchar((multiplication % 10) + '0');
}
_putchar('\n');
}
}
