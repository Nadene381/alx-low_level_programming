#include "main.h"
/**
 * *leet - Check main code
 * Description: Function that that encodes a string into 1337.
 * Return: 1
 * @n: variable passed in fuction
 */
char *leet(char *n)
{
int i = 0;
int m = 0;
char *letter = "aAeEoOlLtT";
char *numb = "4433001177";
while (*(n + i) != '\0')
{
while (*(letter + m) != '\0')
{
if (*(n + i) == *(letter + m))
*(n + i)  = *(numb + m);
m++;
}
m = 0;
i++;
}
return (n);
}
