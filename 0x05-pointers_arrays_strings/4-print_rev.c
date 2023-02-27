#include "main.h"
/**
 * print_rev - Check main code
 * Description: Function that prints a string in reverse
 * Return: 1
 * @s: variable passed in fuction
 */
void print_rev(char *s)
{
int lenght;
int i;
char *n, *m, temp;
lenght = strlen(s);
n = s;
m = s;
for (i = 0; i < lenght - 1; i++)
m++;
for (i = 0; i < lenght / 2; i++)
{
temp = *m;
*m = *n;
*n = temp;
n++;
m--;
}
}
