#include "main.h"
#include <stdlib.h>
/**
 * array_range - function that creates an array of integers.
 * @min: variable passed in function
 * @max: variable passed in function
 * Return: 1
 */
int *array_range(int min, int max)
{
int *_array;
int i;
if (min > max)
return (NULL);
_array = malloc(sizeof(*_array) * (max - min));
if (_array == NULL)
return (NULL);
for (i = 0; min <= max; i++, min++)
_array[i] = min;
return (_array);
}
