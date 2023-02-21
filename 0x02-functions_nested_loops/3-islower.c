#include "main.h"
/**
 * int _islower(int c) - Check main code
 * Description - Program that prints _putchar
 * Return: 0
 */
int _islower(int c)
{
char n;
int returnValue;
for(n = 'a'; n<= 'z'; n++)
{
if (n == c)
returnValue=1;
}
return (returnValue);
}
