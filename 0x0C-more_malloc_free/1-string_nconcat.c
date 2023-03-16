#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings.
 * @s1: variable passed in function
 * @s2: variable passed in function
 * @n: variable passed in function
 * Return: 1
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *n;
unsigned int p1, p2, m, i;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (p1 = 0; s1[p1] != '\0'; p1++)
;
for (p2 = 0; s2[p2] != '\0'; p2++)
;
if (n > p2)
n = p2;
m = p1 + n;
n = malloc(m + 1);
if (n == NULL)
return (NULL);
for (i = 0; i < m; i++)
if (i < p1)
nt[i] = s1[i];
else
n[i] = s2[i - p1];
n[i] = '\0';
return (n);
}
