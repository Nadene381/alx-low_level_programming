#include "main.h"
/**
 * times_table - Check main code
 * Description: Function that prints 9 time table
 * Return: 0
 */
void times_table(void)
{
int m;
int n;
int answer = 0;
for( n=0; n<=10; n++)
{
answer = m * n;
if (answer <10)
{
if (n != 0)
{
//_putchar(' ');
_putchar(' ');
}
_putchar(answer + '0');
}
 else if (answer != 9)
{
_putchar(',');
}
else
{
_putchar(' ');
_putchar((answer / 10) + '0');
_putchar((answer % 10) + '0');
}
_putchar('\n');
}  
}
