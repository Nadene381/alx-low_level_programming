#include "main.h"
/**
 * *string_toupper - Check main code
 * Description: Function that changes all lowercase letters of a string to uppercase.
 * Return: 1
 * @n: variable passed in fuction
 */
char *string_toupper(char *n)
{
int i;
i = 0;
while (*(n + i) != '\0')
{
if (*(n + i) >= 'a' && *(n + i) <= 'z')
{
*(n + i) = *(n + i)-32;
}
i++;
}
return (n);
}
