#include "main.h"
/**
 * print_array- Check main code
 * Description: Function that copies string pointed by src to bufffer pointed by dest
 * Return: pointer dest
 * @dest: variable passed in fuction
 * @src: variable passed in fuction
 */
char *_strcpy(char *dest, char *src);
{
int n = 0;
while (n >= 0)
{
*(dest + n) = *(src + n);
if (*(src + n) == '\0')
break;
n++;
}
return (dest);
}
