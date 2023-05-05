/**
 * print_binary - a function that prints the binary representation of a number.
 *@n: variable passed in function
 *Return: 0
 */
void print_binary(unsigned long int n)
{
unsigned long int b = 1UL << 63;
int m = 0;
do {
if (n & b)
{
_putchar('1');
m = 1;
}
else if (m)
{
_putchar('0');
}
b >>= 1;
} while (b != 0);
if (!m)
{
_putchar('0');
}
}
