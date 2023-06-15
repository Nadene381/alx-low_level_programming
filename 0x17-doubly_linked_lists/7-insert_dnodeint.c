#include "lists.h"
/**
* insert_dnodeint_at_index - Inserts a new node at a given position.
* @h: double pointer passed in function
* @idx: variable passed in function
* @n: variable passed in function
* Return: address of the new node, or NULL if it failed
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *newNode = malloc(sizeof(dlistint_t));
unsigned int count = 0;
dlistint_t *c = *h;
if (newNode == NULL)
return (NULL);
newNode->n = n;
if (idx == 0)
{
newNode->prev = NULL;
newNode->next = *h;
if (*h != NULL)
(*h)->prev = newNode;
*h = newNode;
return (newNode);
}
while (c != NULL)
{
if (count == idx - 1)
{
newNode->prev = c;
newNode->next = c->next;
if (c->next != NULL)
c->next->prev = newNode;
c->next = newNode;
return (newNode);
}
c = c->next;
count++;
}
free(newNode);
return (NULL);
}

