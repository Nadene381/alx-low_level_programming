#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * init_dog - A function that initialize a variable of type struct dog
 * @d: variable passed in function
 * @name: variable passed in function
 * @age: variable passed in function
 * @owner: variable passed in function
 * Return: 0
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
