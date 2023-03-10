#include "main.h"
/**
 * _strstr- Check main code
 * Description: A function that locates a substring.
 * Return: 1
 * @haystack: variable passed in fuction
 * @needle: variable passed in fuction
 */
char *_strstr(char *haystack, char *needle)
{
char *n;
char *m;
while (*haystack != '\0')
{
n = haystack;
m = needle;
while (*haystack != '\0' && *m != '\0' && *haystack == *m)
{
haystack++;
m++;
}
if (!*m)
return (n);
haystack = n + 1;
}
return (0);
}
