#include <stdio.h>
/**
 * main - Program that prints numbers
 * Return: 0
 */
int main(void)
{
int n;
int m = 0;
while (m < 10)
{
n = 0;
while (n < 10)
{
if (m != n && m < n)
{
putchar(m + '0');
putchar(n + '0');
if (n + m != 27)
{
putchar(',');
putchar(' ');
}
}
n++;
}
m++;
}
return (0);
}
