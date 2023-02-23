#include <stdio.h>
/**
 * main - Check code
 * Description: Function that prints numbers from 1 -100
 * Return: Fizz, Buzz or fizzBuzz
 */
int main(void)
{
int n;
for (n = 1; n <= 100; n++)
{
if (((n % 3) != 0)  && ((n % 5) != 0))
printf("%d ", n);
if (((n % 3) == 0)  && ((n % 5) == 0))
printf("Fizzbuzz ");
else if ((n % 3) == 0)
printf("Fizz ");
else if ((n % 5) == 0)
printf("Buzz ");
}
return (0);
_putchar('\n');
}
