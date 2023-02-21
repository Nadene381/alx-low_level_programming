#include "main.h"
/**
 * print_alphabet_x10 - Check main code
 * Description: Function that prints the alphabeth in lowercase
 * Return: 0
 */
void print_alphabet_x10(void)
{
char n;
int m;
for (m = 0; m < 10; m++)
{
_putchar('\n');
for (n = 'a'; n <= 'z'; n++)
_putchar(n);
}
}
