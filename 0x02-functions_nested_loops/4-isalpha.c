#include "main.h"
/**
 * _isalpha - Check main code
 * Description: Function that uses if statement
 * Return: return 1 if lowercase/uppercase or letter
 c: variable passed in fuction
 */
int _isalpha(int c)
{
char lower, upper;
int isletter = 0;
for (lower = 'a'; lower <= 'z'; lower++)
{
for (upper = 'A'; upper <= 'Z'; upper++)
{
if (c == lower || c == upper)
isletter = 1;
}
}
return (isletter);
}
