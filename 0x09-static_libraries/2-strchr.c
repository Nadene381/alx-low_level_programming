#include "main.h"
/**
 * _strchr - Check main code
 * Description: A function that  locates a character in a string.
 * Return: 1
 * @s: variable passed in fuction
 * @c: variable passed in fuction
 */
char *_strchr(char *s, char c)
{
unsigned int i = 0;
for (; *(s + i) != '\0'; i++)
if (*(s + i) == c)
return (s + i);
if (*(s + i) == c)
return (s + i);
return ('\0');
}

