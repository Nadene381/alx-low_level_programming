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
if (d != 0)
{
if (d->name == 0)
printf("Name: (nil)\n");
else
printf("Name: %s\n", d->name);
printf("Age: %.6f\n", d->age);
if (d->owner == 0)
printf("Owner: (nil)\n");
else
printf("Owner: %s\n", d->owner);
}
}
