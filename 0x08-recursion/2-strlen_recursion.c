#include "main.h"
/**
 * _strlen_recursion - Check main code
 * Description: A function that returns lenght of string
 * Return: 1
 * @s: variable passed in fuction
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
s++;
return (_strlen_recursion(s) + 1);
}
