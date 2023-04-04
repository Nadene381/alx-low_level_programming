#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
* listint_len - A function that returns the number of elements in a linked list
* @h: pointer passed in function
* Return: number of elements
*
*/
size_t listint_len(const listint_t *h)
{
const listint_t *i = h;
size_t numNodes = 0;

for ( ; i != ((void *)0); )
{
i = i->next;
numNodes++;
}
return (numNodes);
}
