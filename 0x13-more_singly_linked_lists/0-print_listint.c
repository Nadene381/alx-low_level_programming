#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* print_listint - A function that prints all elements of a linked list
* @h: pointer passed in function
* Return: number of nodes
*
*/
size_t print_listint(const listint_t *h)
{
size_t numNodes = 0;
struct listint_s* i = h;

for(; i!= ((void*)0);)
{
printf("%d\n", i->n);
i = i->next;
numNodes++;
}
return numNodes;
}
