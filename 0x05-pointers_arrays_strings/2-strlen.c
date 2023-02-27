#include "main.h"
/**
 * _strlen - Check main code
 * Description: Function that return length of a string
 * Return: 1
 * @s: variable passed in fuction
 */
int _strlen(char *s)
{
int n = 0;
while(*s != '\0')
{
n++;
s++;
}
return (n); 
_putchar('\n');
}
