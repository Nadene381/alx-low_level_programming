#include "main.h"
/**
 * _puts_recursion- Check main code
 * Description: A function that prints a string
 * Return: 1
 * @s: variable passed in fuction
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
return;
}
_putchar(*s);
s++;
_puts_recursion(s);
}
