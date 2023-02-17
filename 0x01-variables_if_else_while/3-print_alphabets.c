#include <stdio.h>
/**
 * main - A program that prints alphabet in lower and uppercase
 * Return: 0
 */
int main(void)
{
char c;
char d;
for (c = 'a'; c <= 'z'; ++c)
{
putchar(c);
}
for (d = 'A'; d <= 'Z'; ++d)
{
putchar(d);
}
putchar('\n');
return (0);
}
