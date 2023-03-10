#include <stdio.h>

/**
 * main - A program that prints its name
 * @argc: number of argument 
 * @argv: array of argunment
 *
 * Return: int
 */

int main(int argc, char *argv[])
{
int n;
for (n = 0; n < argc; n++)
{
if (argc == 1)
printf("%s\n", argv[n]);
else
break;
}
return (0);
}
