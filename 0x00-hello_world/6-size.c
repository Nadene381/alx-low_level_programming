#include <stdio.h>
/**
 * main - Program that prints the size of various types on the computer it is compiled and run on.
 * Return: 0
 */
int main(void)
{
printf("Size of an char : %c byte(s)\n", sizeof(char));
printf("Size of an int  : %d byte(s)\n", sizeof(int));
printf("Size of an long int: %ld byte(s)\n", sizeof(long int));
printf("Size of an long long int: %lld byte(s)\n", sizeof(long long int));
printf("Size of an float: %0.f byte(s)\n", sizeof(float));
return (0);
}
