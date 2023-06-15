#include "lists.h"
/**
* get_dnodeint_at_index - Function that returns the nth node of a  linked list.
* @head: pointer passed in function
* @index: variable passed in function
* Return: NULL if the node doesnt exist
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *c = head;
unsigned int count = 0;
while (c != NULL)
{
if (count == index)
return (c);
c = c->next;
count++;
}
return (NULL);
}
