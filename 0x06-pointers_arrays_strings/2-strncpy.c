#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * *_strncpy-  Check main code
 * Description: Function that copies a string
 * Return: 1
 * @n: variable passed in fuction
 * @dest: variable passed in fuction
 * @src: variable passed in fuction
 */
char *_strncpy(char *dest, char *src, int n)
{
int m;
for (m = 0; m < n && (src[m] != '\0'); m++)
dest[m] = src[m];
for ( ; m < n; m++)
dest[m] = '\0';
return dest;
}
