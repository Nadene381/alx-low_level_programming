#include <stdio.h>
/**
 * main - Program that prints numbers
 * Return: 0
 */
int main(void)
{
int n = 0;
int m;
int o;
int n1;
int m1;
int o1;

while (n <= 98)
{
m = (n / 10 + '0');
o = (n % 10 + '0');
n1 = 0;
while ( n1 <= 99)
{
m1 = (n1 / 10 + '0');
o1 = (n1 % 10 + '0'); 
if ( n < n1)
{
putchar(m);
putchar(o);
putchar(' ');
putchar(m1);
putchar(o1);
if (n != 98)
{
putchar(',');
putchar(' ');
}
}
n1++;
}
n++;
}
putchar('\n');
return (0);
}
