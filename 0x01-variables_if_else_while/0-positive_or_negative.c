#include <stdlib.h>
#include <time.h>
/* */

/* main - A program that uses if/else if fuction
    Return: 0*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n >0)
	{
	    printf("is positive\n");
	}

	else if(n <0)
	{
	    printf("is negative\n");
	}
	else if(n=0)
	{
	    printf("is zero\n");
	}
	return (0);
}
