#include "main.h"
/**
 * _isalpha - Check main code
 * Description: Function that uses if statement
 * Return: return 1 if lowercase/uppercase or letter
 * @c: variable passed in fuction
 */
int _isalpha(int c)
{
char n, m;
int k = 0;
for (n = 'a'; n <= 'z'; n++)
{
for (m = 'A'; m <= 'Z'; m++)
{
if (c == n || c == m)
k = 1;
}
}
return (k);
}

