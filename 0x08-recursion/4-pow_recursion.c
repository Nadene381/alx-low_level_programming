#include "main.h"
/**
 * factorial- Check main code
 * Description: A function that returns x raised to power y
 * Return: 1
 * @x: variable passed in fuction
 * @y: variable passed in fuction
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
if (y == 0)
{
return (1);
}
return (x * _pow_recursion(x, y - 1));
}
