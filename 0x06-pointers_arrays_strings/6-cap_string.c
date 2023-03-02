#include "main.h"
/**
 * *cap_string- Check main code
 * Description: Function that capitalizes all words of a string
 * Return: 1
 * @n: variable passed in fuction
 */
char *cap_string(char *n)
{
int m;
while (*(n + m) != '\0')
{
if (*(n + 0) >= 'a' && *(n + 0) <= 'z')
{
*(n + 0) = *( + 0) - 32;
}
if (n[m] == ' ' || n[m] == '\t' 
|| n[m] == '\n' || n[m] == ',' 
|| n[m] == ';'  || n[m] == '.' 
|| n[m] == '!'  || n[m] == '?' 
|| n[m] == '\"' || n[m] == '(' 
|| n[m] == ')'  || n[m] == '{' 
|| n[m] == '}')
{
if (*(n + m + 1) >= 'a' && *(n + m + 1) <= 'z')
*(n + m + 1) = *(n + m + 1) - 32;
}
m++;
}
return (n);
}
