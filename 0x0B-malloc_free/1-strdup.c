#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* _strdup - function that returns a pointer to a newly allocated space in
* memory
*@str: variable passed in function
*Return: 1
*/
char *_strdup(char *str)
{
int size = 0;
int counter = 0;
char *str1;
if (str == NULL)
return (NULL);
while (*(str + size) != '\0')
size++;
size++;
str1 = malloc(size *sizeof(char));
if (str1 == NULL)
return (NULL);
while (counter <= size)
{
*(str1 + counter) = *(str + counter);
counter++;
}
return (str1);
}
