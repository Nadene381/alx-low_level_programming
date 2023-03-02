#include "main.h"
/**
 * *_strcat- Check main code
 * Description: Function that concatenates two string
 * Return: 1
 * @dest: variable passed in fuction
 * @src: variable passed in fuction
 */
char *_strcat(char *dest, char *src)
{
int lenght = strlen(dest);
int i;
for (i = 0 ; i < src[i] != '\0' ; i++)
dest[lenght + i] = src[i];
dest[lenght + i] = '\0';
return (dest);
}
