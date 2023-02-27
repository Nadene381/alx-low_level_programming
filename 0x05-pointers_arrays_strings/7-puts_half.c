#include <string.h>
#include <stdio.h>
#include "main.h"
/**
 * puts_half - Check main code
 * Description: Function that prints half of a string
 * Return: 1
 * @str: variable passed in fuction
 */
void puts_half(char *str)
{
int m;
int i = 0;
char half_of_string[10];
int length_of_the_string = strlen(str);
int n = (length_of_the_string -1) / 2;
if (str[i] != '\0')
{
for(i = n+1, m = 0; i <= length_of_the_string; i++, m++) 
{
half_of_string[m] = str[i];
}
printf("%s", half_of_string);
}
}
