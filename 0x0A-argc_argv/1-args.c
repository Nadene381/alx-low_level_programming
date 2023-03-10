#include <stdio.h>

/**
 * main - A program that prints the number of arguments passed into it.
 * @argc: number of argument 
 * @argv: array of argunment
 *
 * Return: int
 */
int main(int argc, char *argv[])
{
if (argc > 0)
{
argv = argv;
printf("%d\n", argc - 1);
}
return (0);
}
