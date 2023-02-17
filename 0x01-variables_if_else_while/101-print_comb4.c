#include <stdio.h>
/**
 * main - Program that prints numbers
 * Return: 0
 */
int main(void)
{
int n;
int m ;
int o = 0;

while (o < 10)
{
m = 0;
while (m < 10)
{ 
n = 0;
while (n < 10)
{
if(n != m && m != o && o < m && m < n)
{
putchar('0' + o);
putchar('0' + m);
putchar('0' + n);

if (n + m + o != 9 + 8 + 7)
{
putchar(',') ;
putchar(' ');
}
}
n++;
}
m++;
}
o++;
}
putchar('\n');
return (0);
}
