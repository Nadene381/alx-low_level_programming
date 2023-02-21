#include "main.h"
/**
 * int _islower - Check main code
 * Description -Function that uses if statement
 * Return: 0
 */
int _islower(int c)
{
char n;
int returnValue = 0;
for (n = 'a'; n <= 'z'; n++)
{
if (n == c)
returnValue = 1;
else
returnValue = 0;
}
return (returnValue);
}
