#include "main.h"
/**
 * _memcpy - Check main code
 * Description: A function that copies memory area
 * Return: 1
 * @dest: variable passed in fuction
 * @src: variable passed in fuction
 * @n: variable passed in fuction
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int m;
for (m = 0; m < n; m++)
*(dest + m) =  *(src + m);
return (dest);
}
