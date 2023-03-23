#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - A function that prints anything
 * @format:  all types of arguments passed to the function
 * Return: 0
 */
void print_all(const char * const format, ...)
{
va_list m;
unsigned int k = 0;
char *p;
va_start(m, format);
while (format && format[k])
{
switch (format[k++])
{
case 'c':
printf("%c", va_arg(m, int));
break;
case 'i':
printf("%d", va_arg(m, int));
break;
case 'f':
printf("%f", (float)va_arg(m, double));
break;
case 's':
p = va_arg(m, char *);
if (!p)
p = "(nil)";
printf("%s", p);
break;
default:
continue;
}
if (format[k])
printf(", ");
}
va_end(m);
putchar('\n');
}
