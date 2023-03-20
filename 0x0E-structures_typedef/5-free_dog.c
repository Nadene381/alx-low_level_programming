/**
 * free_dog - A function that frees dogs.
 * @d: pointer in function
 * Return: 1. or-1 if error.
 */
void free_dog(dog_t *d)
{
if (d != 0)
{
free(d->name);
free(d->owner);
free(d);
}
}
