#include "lists.h"
/**
* free_dlistint - Function that frees a dlistint_t list.
* @head: pointer passed in function
* Return: 0
*/
void free_dlistint(dlistint_t *head)
{
dlistint_t *c = head;
while (c != NULL)
{
dlistint_t *temp = c;
c = c->next;
free(temp);
}
}
