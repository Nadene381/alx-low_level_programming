#include <stdio.h>

/**
 * main - A program that prints all arguments it receives
 * @argc: number of argument 
 * @argv: array of argunment
 *
 * Return: int
 */
int main(int argc, char *argv[])
{
int n = 0;
if (argc > 0)
{
while (n < argc)
{
printf("%s\n", argv[n]);
n++;
}
}
return (0);
}
