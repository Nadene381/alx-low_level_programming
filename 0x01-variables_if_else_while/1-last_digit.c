#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - A program that uses if/else if fuction
 * Return: 0
 */
int main(void)
{
int n;
int m = n%10;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (m > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, m);
}
else if (m < 6 && m != 0)
{
printf(" Last digit of %d is %d and is less than 6 and not 0\n", n, m);
}
else if (m == 0)
{
printf(" Last digit of %d is %d and is zero\n", n, m);
}
return (0);
}
