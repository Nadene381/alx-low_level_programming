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
int lower = 0;
for (i = 'a'; i <= 'z'; i++)
{
if (i == c)
lower = 1;
}
return (lower);
