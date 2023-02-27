#include "main.h"
/**
 * reset_to_98 - Check main code
 * Description: Function that takes a pointer to an int
 * Return: 1
 * @n: variable passed in fuction
 */
void reset_to_98(int *n)
{
int *p = *(&n);
*p = 98;
}
