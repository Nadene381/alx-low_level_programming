#include "main.h"
#include <stdio.h>
/**
 * print_array - Check main code
 * Description: Function that prints an array elements
 * Return: 1
 * @a: variable passed in fuction
 * @n: variable passed in fuction
 */
void print_array(int *a, int n)
{
int i;
int m;
for (i = 0; i < n; i++)
{
for (m = 0; m < i; m++)
{
printf(", ");
m += 3;
}
printf("%d", *a);
a++;
}
printf("\n");
}
