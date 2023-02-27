#include "main.h"
/**
 * puts2- Check main code
 * Description: Function that prints every other character of a string
 * Return: 1
 * @str: variable passed in fuction
 */
void puts2(char *str)
{
int n = 0;
while (n >= 0)
{
if (str[n] == '\0')
{
_putchar('\n');
break;
}
if (n % 2 == 0)
_putchar(str[n]);
n++;
}
}
