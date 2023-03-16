#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - function that allocate memory using malloc
 * @b: variable passed in function
 * Return: 1
 */
void *malloc_checked(unsigned int b)
{
void *m;
m = malloc(b);
if (!m && b)
{
exit(98);
}
return (m);
}
