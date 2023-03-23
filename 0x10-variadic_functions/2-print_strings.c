#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 *print_strings - A function that prints a string
 *@n: integer passed in function
 *@separator: char passed in function
 * Return: 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list m;
unsigned int k = 0;
char *p;
va_start(m, n);
for (k = 0; k < n; k++)
{
p = va_arg(m, char*);
if (p == NULL)
printf("(nil)");
else
{
if (k  < (n - 1) && separator != 0)
printf("%s%s", p, separator);
else
printf("%s", p);
}
}
va_end(m);
putchar('\n');
}
