#include "main.h"
/**
 * _isupper - Check main code
 * Description: Function that uses if statement
 * Return: return 1 if uppercase and 0 if lowercase
 * @c: variable passed in fuction
 */
int _isupper(int c)
{
char i;
for (i = 'A'; i <= 'Z'; i++)
{
if (c == i)
return 1;
else if (c != i)
return 0;
}
}
