#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* alloc_grid- a function that returns a pointer to a 2d array
* @width: variable passed in function
* @height: variable passed in function
* Return: 1 but if width or heigh is 0 or neg return 0
*/
int **alloc_grid(int width, int height)
{
int **array1;
int i, n, k;
if (width <= 0 || height <= 0)
return (NULL);
array1 = malloc(height * sizeof(int *));
if (array1 == NULL)
return (NULL);
for (i = 0; i < height; i++)
{
array1[i] = malloc(width * sizeof(int));
if (array1[i] == NULL)
{
for (n = 0 ; n <= i; n++)
free(array1[n]);
free(array1);
return (NULL);
}
for (k = 0; k < width; k++)
array1[i][k] = 0;
}
return (array1);
}
