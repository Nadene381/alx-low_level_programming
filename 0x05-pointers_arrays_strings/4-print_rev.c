#include "main.h"
#include <string.h>
/**
 * print_rev - Check main code
 * Description: Function that prints a string in reverse
 * Return: 1
 * @s: variable passed in fuction
 */
void print_rev(char *s)
{
int n = 0;
while (n >= 0)
{
if (s[n] == '\0')
break;
n++;
}
for (n--; n >= 0; n--)
_putchar(s[n]);
_putchar('\n');
}
