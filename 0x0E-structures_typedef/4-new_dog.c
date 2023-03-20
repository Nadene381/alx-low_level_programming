#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * _strdup - A function that allocate space to a pointer
 * @str: variable passed in function
 * Return: Pointer
 */
char *_strdup(char *str)
{
int m, i;
char *n;
if (str == NULL)
return (0);
m = 0;
while (*(str + m))
m++;
n = malloc(sizeof(char) * m + 1);
if (n == 0)
return (0);
for (i = 0; i <= m; i++)
{
*(n + i) = *(str + i);
}
return (n);
}
/**
 * new_dog - A function that creates a new dog
 * @name: variable passed in function
 * @age: variable passed in function
 * @owner: variable passed in function
 * Return: 0
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog;
new_dog = malloc(sizeof(struct dog));
if (new_dog == 0 || name == 0 || owner == 0)
return (0);
new_dog->name = _strdup(name);
if (new_dog->name == 0)
{
free(new_dog);
return (0);
}
new_dog->age = age;
new_dog->owner = _strdup(owner);
if (new_dog->owner == 0)
{
free(new_dog);
free(new_dog->name);
return (0);
}
return (new_dog);
}
