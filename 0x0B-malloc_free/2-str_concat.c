#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* str_concat - a function that concatenates two strings.
* @s1: variable passed in function
* @s2: variable passed in function
* Return: 1
*/
char *str_concat(char *s1, char *s2)
{
char *s;
int i = 0, n = 0, m = 0;
if (s1 != NULL)
for (; s1[i]; i++)
;
if (s2 != NULL)
for (; s2[n]; n++)
;
s = malloc(sizeof(char) * (i + n + 1));
if (s == NULL)
return (NULL);
while (m < i)
{
s[m] = s1[m];
k++;
}
while (m < i + n)
{
s[k] = s2[m - i];
m++;
}
s[m] = '\0';
return (s);
}
