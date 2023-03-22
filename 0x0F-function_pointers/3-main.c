#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Check main code 
 * @argc: variable passed in function
 * @argv: variable passed in function
 * Return: int
 */

int main(int argc, char *argv[])
{
char *calc;
char operator;
int num1, num2, answer;
int (*ptr)(int, int);
if (argc != 4)
{
printf("Error\n");
exit(98);
}
operator = argv[2][0];
if ((operator != '*' && operator != '+' && operator != '-'
&& operator != '/'  && operator != '%') || argv[2][1] != '\0')
{
printf("Error\n");
exit(99);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
if ((operator == '/' || operator == '%') && num2 == 0)
{
printf("Error\n");
exit(100);
}
calc = argv[2];
ptr = get_op_func(calc);
answer = (*ptr)(num1, num2);
printf("%d\n", answer);
return (0);
}
