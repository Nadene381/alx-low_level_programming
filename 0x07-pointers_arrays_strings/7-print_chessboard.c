#include "main.h"
/**
 * print_chessboardCheck main code
 * Description: A function that prints the chessboard..
 * Return: 0
 * @a: variable passed in fuction
 */
void print_chessboard(char (*a)[8])
{
int i = 0;
int lenght = 0;
for(i = 0; i < 64; i++)
{
if (i % 8 == 0 && i != 0)
{
lenght = i;
_putchar('\n');
}
_putchar((a[i / 8][i - lenght]));
}
_putchar('\n');
}
