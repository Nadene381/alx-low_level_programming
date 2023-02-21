#include "main.h"
/**
 * _isalpha - Check main code
 * Description: Function that uses if statement
 * Return: return 1 if lowercase/uppercase or letter
 * c: variable passed in fuction
 */
int _isalpha(int c)
{
char n;
char m;
int returnValue;
for(n = 'a'; n <= 'z'; n++)
{
for(m = 'A'; m <= 'Z'; m++)
{
if (c == n || c == m)
returnValue = 1;
}
}
return (returnValue);
}
