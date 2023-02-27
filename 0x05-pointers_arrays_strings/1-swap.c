#include "main.h"
/**
 * swap_int - Check main code
 * Description: Function that swaps value of integers
 * Return: 1
 * @a: variable passed in fuction
 * @b: variable passed in fuction
 */
void swap_int(int *a, int *b)
{
int swop = *a;
*a = *b;
*b = swop;
}
