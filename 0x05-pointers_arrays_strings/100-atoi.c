#include "main.h"
/**
 * _atoi - Check main code
 * Description: Function that convert int to string
 * Return: 1 but if no numbers in string return 0
 * @s: variable passed in fuction
 */
int _atoi(char *s)
{
int i = 0;
int n = 0;
int m = 1;
while ((s[i] < '0' || s[i] > '9') && s[i] != 0)
{
if (s[i] == '-')
m *= -1;
i++;
}
while ((s[i] >= '0' && s[i] <= '9') && s[i] != 0)
{
if (n >= 0)
{
n = n * 10 - (s[i] - '0');
i++;
}
else
{
n = n * 10 - (s[i] - '0');
i++;
}
}
m *= -1;
return (n * m);
}
