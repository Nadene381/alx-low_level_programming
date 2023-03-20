#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog - A function that prints a struct dog
 * @d: variable passed in function
 * Return: 0
 */
void print_dog(struct dog *d)
{
char *name1;
float age1;
char *owner1;

name1 = d->name;
age1 = d->age;
owner1 = d->owner;
if (d == NULL)
{
}
else
{
if (name1 == NULL && age1 == '\0' && owner1 == NULL)
{
printf("Name: (nill)\n");
printf("Age: (nill)\n");
printf("Owner: (nill)\n");
}
else
printf("Name: %s\n", name1);
printf("Age: %.5f\n", age1);
printf("Owner: %s\n", owner1);
}
}
