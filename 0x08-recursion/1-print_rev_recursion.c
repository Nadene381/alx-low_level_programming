#include "main.h"
/**
 * _print_rev_recursion - Check main code
 * Description: A function that reverse a string
 * Return: 1
 * @s: variable passed in fuction
 */
void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
return;
}
s++;
_print_rev_recursion(s);
_putchar(*(s - 1));
}
