#include "lists.h"
/**
* delete_dnodeint_at_index - deletes the node at index index of linked list.
* @head: double pointer passed in function
* @index: variable passed in function
* Return: 1 if it succeeded, -1 if it failed
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *c = *head;
unsigned int count = 0;
while (*head == NULL)
return (-1);
if (index == 0)
{
*head = c->next;
if (c->next != NULL)
c->next->prev = NULL;
free(c);
return (1);
}
while (c != NULL)
{
if (count == index)
{
if (c->prev != NULL)
c->prev->next = c->next;
if (c->next != NULL)
c->next->prev = c->prev;
free(c);
return (1);
}
c = c->next;
count++;
}
return (-1);
}
