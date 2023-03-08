#include "main.h"
/**
 * factorial- Check main code
 * Description: A function that returns the factorial of num
 * Return: 1
 * @n: variable passed in fuction
 */
int factorial(int n)
{
if (n < 0)
return (-1);
if (n == 0)
return (1);
return (n * factorial(n - 1));
}
