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
if (name1 == NULL)
printf("Name: (nill)\n");
else
printf("Name: %s\n", name1);
if (age1 == '\0')
printf("Age: (nill)\n");
else
printf("Age: %.6f\n", age1);
if (owner1 == NULL)
printf("Owner: (nill)\n");
else
printf("Owner: %s\n", owner1);
}
