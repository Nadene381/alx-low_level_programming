#include <stdio.h>
/**
 * main - Program that prints alphabeth besides q & e
 * Return: 0
 */
#include <stdio.h>
int main(void)
{
char c = 'a';

while (c <= 'z')
{
if (c != 'e' && c != 'q')
putchar(c);
c++;
}
putchar('\n');
return (0);
}
