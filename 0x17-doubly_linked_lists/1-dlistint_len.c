#include "lists.h"
/**
* dlistint_len - Function that returns number of elements in a linked list.
* @h: pointer passed in function
* Return: The number of elements (nodes) in the list.
*/
size_t dlistint_len(const dlistint_t *h)
{
const dlistint_t *c = h;
size_t count = 0;
while (c != NULL)
{
count++;
c = c->next;
}
return (count);
}
