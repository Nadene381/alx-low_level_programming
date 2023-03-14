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
char *p;
int i = 0, n = 0, m = 0;
if (s1 != NULL)
for (; s1[i]; i++)
;
if (s2 != NULL)
for (; s2[n]; n++)
;
p = malloc(sizeof(char) * (i + n + 1));
if (p == NULL)
return (NULL);
while (m < i)
{
p[m] = s1[m];
m++;
}
while (m < i + n)
{
p[m] = s2[m - i];
m++;
}
p[m] = '\0';
return (p);
}
