#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - A function that search for an integer
 * @array: variable passed in function
 * @size: variable passed in function
 * @cmp: A pointer to the function
 * Return: int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (array != 0 && cmp != 0)
{
if (size <= 0)
return (-1);
for (i = 0; i < size; i++)
{
if (cmp(array[i]))
return (i);
}
}
return (-1);
}
