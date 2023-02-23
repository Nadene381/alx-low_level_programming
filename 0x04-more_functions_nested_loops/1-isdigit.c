#include "main.h"
/**
 * int _isdigit(int c) - Check main code
 * Description: Function that check for a digit
 * Return: return 1 if digit and 0 if not
 * @c: variable passed in fuction
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
else
{
return (0);
}
}
