#include "main.h"
/**
 * _strspn - Check main code
 * Description: A function that gets the length of a prefix substring.
 * Return: 1
 * @s: variable passed in fuction
 * @accept: variable passed in fuction
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int n, m, k;
for (n = 0; *(s + n) != '\0'; n++)
{
k = 1;
for (m = 0; *(accept + m) != '\0'; m++)
{
if (*(s + n) == *(accept + m))
{
k = 0;
break;
}
}
if (k == 1)
break;
}
return (n);
}
