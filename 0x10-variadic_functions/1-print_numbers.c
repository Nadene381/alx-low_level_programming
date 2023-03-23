#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - A function that prints numbers
 *@n: integer passed in function
 *@separator: char passed in function
 * Return: 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list m;
unsigned int k = 0;
va_start(m, n);
for (; k < n; k++)
{
if (k < (n - 1)  && separator != 0)
printf("%d%s", va_arg(m, int), separator);
else
printf("%d", va_arg(m, int));
}
va_end(m);
putchar('\n');
}
