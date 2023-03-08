#include "main.h"
/**
 * calculate - Check main code
 * Description: A function that calculate the square root
 * Return: 1
 * @x: variable passed in fuction
 * @n: variable passed in fuction
 */
int calculate(int x, int n)
{
if (x * x == n)
return (x);
if (n < 0 || x * x > n)
return (-1);
return (calculate(x + 1);
}
/**
 * _sqrt_recursion - Check main code
 * Description: A function that call square root function
 * Return: 1
 * @n: variable passed in fuction
 */
int _sqrt_recursion(int n)
{
return (calculate(0, n));
}
