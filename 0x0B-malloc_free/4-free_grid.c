#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* free_grid - function that frees a 2d grid previously created
* @grid: variable passed in function
* @heigh: variable passed in function
* Return: 0
*/
void free_grid(int **grid, int height)
{
height--;
while (height >= 0)
{
free(*(grid + height));
height--;
}
free(grid);
}
