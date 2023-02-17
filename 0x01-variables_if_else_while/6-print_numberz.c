#include <stdio.h>
/**
 * main - Program that prints numbers
 * Return: 0
 */
int main(void)
{
int c = 0;
while (c < 10)
{
putchar(c + '0');
c++;
}
putchar('\n');
return (0);
}
