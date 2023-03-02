#include "main.h"
/**
 * reverse_array- Check main code
 * Description: Function that reverses the content of an array of integers.
 * Return: 0
 * @a: variable passed in fuction
 * @n: variable passed in fuction
 */
void reverse_array(int *a, int n)
{
int m;
for (m = 0; m < n/2; m++)
{
int temp = a[m];
a[m] = a[n - 1 - m];
a[n - 1 - m] = temp;
}
}
