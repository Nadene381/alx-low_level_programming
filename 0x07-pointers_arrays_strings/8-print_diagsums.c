#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Check main code
 * Description: A function that prints the sum of square matrix integers
 * Return: 1
 * @a: variable passed in fuction
 * @size: variable passed in fuction
 */
void print_diagsums(int *a, int size)
{
int n, s1 = 0, s2 = 0;
for (n = 0; n < (size * size); n++)
{
if (n % (size + 1) == 0)
s1 += *(a + n);
if (n % (size - 1) == 0 && n != 0 && n < size * size - 1)
s2 += *(a + n);
}
printf("%d, %d\n", s1, s2);
}
