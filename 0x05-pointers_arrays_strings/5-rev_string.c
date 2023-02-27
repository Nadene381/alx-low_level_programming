#include "main.h"
/**
 * rev_string- Check main code
 * Description: Function that reverse a string
 * Return: 1
 * @s: variable passed in fuction
 */
void rev_string(char *s);
{
int n = 0;
int i;
int m;
char *str1, temp;
while (n >= 0)
{
if (s[n] == '\0')
break;
n++;
}
str1 = s;
for (i = 0; i < (n - 1); i++)
{
for (m = i + 1; m > 0; m--)
{
temp = *(str1 + m);
*(str1 + m) = *(str1 + (m - 1));
*(str1 + (m - 1)) = temp;
}
}
}
