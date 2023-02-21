include "main.h"
/**
 * main - Program that prints the alphabeth in lowercase
 * Return: 0
 */
int main(void)
{
print_alphabet_x10();
print_alphabet_x10();
print_alphabet_x10();
print_alphabet_x10();
print_alphabet_x10();
print_alphabet_x10();
print_alphabet_x10();
print_alphabet_x10();
print_alphabet_x10();
print_alphabet_x10();
return 0;
}
void print_alphabet_x10(void)
{
char n;
for(n = 'a'; n<= 'z'; n++)
_putchar(n);
_putchar('\n');
}
