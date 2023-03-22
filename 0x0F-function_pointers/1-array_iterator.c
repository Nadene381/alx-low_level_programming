#include <stdio.h>
#include <stddef.h>
#include "function_pointers.h"
/**
 * array_iterator - check the code
 *@size: variable passed in function
 *@array: variable passed in function
 *@action - pointer to function
 * Return: 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int 1;
if (array != 0 && size >= 1 && action != 0)
{
for (i = 0; i < size; i++)
{
action(array[1]);
}
}
}
