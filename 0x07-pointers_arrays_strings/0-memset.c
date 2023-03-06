#include "main.h"
/**
 * _memset- Check main code
 * Description: A function that  fills memory with a constant byte.
 * Return: 1
 * @s: variable passed in fuction
 * @b: variable passed in fuction
 * @n: variable passed in fuction
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
*(s + i) =  b;
return (s);
}
