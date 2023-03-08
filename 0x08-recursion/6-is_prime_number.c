#include "main.h"
/**
 * getPrimNum - Check main code
 * Description: A function that return 1 if the input integer is a prime number
 * Return: 1
 * @n: variable passed in fuction
 */

/**
 * is_prime_number - Check main code
 * Description: A function that checks if number is 0 or 1
 * Return: 1
 * @m: variable passed in fuction
 * @i: variable passed in fuction
 */
int getPrimNum(int m, int i)
{
if (m == i)
return (1);
if (m % i == 0)
return (0);
return (getPrimNum(m, i + 1));
}

int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (getPrimNum(n, 2));
}
