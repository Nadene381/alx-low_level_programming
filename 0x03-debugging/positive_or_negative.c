#include <stdio.h>

/**
* main - tests function that prints if integer is positive or negative
* Return: 0
*/

int positive_or_negative(int i)
{ 
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i == 0)
		printf("%d is zero\n", i);
	else if (i < 0)
		printf("%d is negative\n", i);
	return (0);
}
