#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - Function that prints a name
 *@name: variable passed in function
 *@f: pointer to function
 * Return: 0
 */
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;
f(name);
}
