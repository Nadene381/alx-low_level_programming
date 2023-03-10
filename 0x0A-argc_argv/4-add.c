#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
* checkNum - function that checks if the given char is number or not
* @a: variable passed in function
* Return: int
**/
int checkNum(char *a)
{
int n, m, lenght;
n = 0;
m = 0;
lenght = strlen(a);
while (n < lenght)
{
if (a[n] < '0' || a[n] > '9')
{
return (-1);
}
else
m = m * 10 + (a[n] - '0');
n++;
}
return (m);
}
/**
 * main - A program that adds positive numbers.
 * @argc: number of argument
 * @argv: array of argunment
 *
 * Return: int
 */
int main(int argc, char *argv[])
{
int n, m, r;
r = 0;
for (n = 1; n < argc; n++)
{
m = checkNum(argv[n]);
if (m == -1)
{
printf("Error\n");
return (1);
}
r += m;
}
printf("%d\n", r);
return (0);
}
