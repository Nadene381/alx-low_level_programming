#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * *_strncat - Check main code
 * Description: Function that takes a pointer to an int
 * Return: 1
 * @n: variable passed in fuction
 * @dest: variable passed in fuction
 * @src: variable passed in fuction
 */
char *_strncat(char *dest, char *src, int n)
{
int lenght = strlen(dest);
int i;
for (i = 0 ; i < n && (src[i] != '\0'); i++)
dest[lenght + i] = src[i];
dest[lenght + i] = '\0';
return (dest);
}
