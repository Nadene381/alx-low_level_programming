#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - A function that sum of all its parameters.
 *@n: variable passed in function
 * Return: 1
 */
int sum_them_all(const unsigned int n, ...)
{
va_list m;
int i = 0;
unsigned int k = n;
if (n == 0)
return (0);
va_start(m, n);
for (; k > 0; k--)
i += va_arg(m, int);
va_end(m);
return (i);
}
