#include "main.h"
/**
 * _islower - Check main code
 * Description: Function that uses if statement
 * Return: return 1 if lowercase
 * @c: variable passed in fuction
 */
int _islower(int c)
{
char n;
int k = 0;
for (n = 'a'; n <= 'z'; n++)
{
if (n == c)
k = 1;
}
return (k);
}
