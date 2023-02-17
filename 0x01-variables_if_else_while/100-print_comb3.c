#include <stdio.h>
/**
 * main - Program that prints numbers
 * Return: 0
 */
int main(void)
{
int n = 0;
int m;
while (n < 10)
{
if(n != m && m < n)
{
putchar(m + '0');
putchar(n + '0');
if (n + n != 27)
{
    putchar(',');
    putchar(' ');
}
}
n++;
}
m++;
putchar('\n');
return (0);
}
