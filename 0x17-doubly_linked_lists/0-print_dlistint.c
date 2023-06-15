#include <stdio.h>
#include "lists.h"
/**
*print_dlistint - function that prints all the elements of a dlistint_t list.
*@h: variable passed in function
*Return: number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
const dlistint_t *c = h;
size_t count = 0;
while (c != NULL)
{
printf("%d\n", c->n);
c = c->next;
count++;
}
return (count);
}
