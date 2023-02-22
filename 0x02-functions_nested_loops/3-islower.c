#include "main.h"
/**
 * _islower - Check main code
 * Description: Function that uses if statement
 * Return: return 1 if lowercase
 * @c: variable passed in fuction
 */
int _islower(int c)
{
char i;
int m = 0;
for (i = 'a'; i <= 'z'; i++)
{
if (i == c)
m = 1;
}
return (m);
}
