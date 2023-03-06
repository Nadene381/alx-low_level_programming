#include "main.h"
/**
 * _strpbrk - Check main code
 * Description: A function that  searches a string for any of a set of bytes.
 * Return: 1
 * @s: variable passed in fuction
 * @accept: variable passed in fuction
 */
char *_strpbrk(char *s, char *accept)
{
unsigned int n, m;
for (n = 0; *(s + n) != '\0'; n++)
{
for (m = 0; *(accept + m) != '\0'; m++)
{
if (*(s + n) == *(accept + m))
return (s + n);
}
}
return ('\0');
}
