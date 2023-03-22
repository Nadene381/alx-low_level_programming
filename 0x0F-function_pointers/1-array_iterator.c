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
size_t i;
i = 0;
while (i < size)
{
action(array[i]);
i++;
}
}
