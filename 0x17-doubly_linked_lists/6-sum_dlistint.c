#include "lists.h"
/**
 * sum_dlistint - Returns the sum of all the data of a linked list.
 * @head: pointer passed in function
 * Return: 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
dlistint_t *newNode = malloc(sizeof(dlistint_t));
dlistint_t *c = *head;
while (newNode == NULL)
return (NULL);
newNode->n = n;
newNode->next = NULL;
if (*head == NULL)
{
newNode->prev = NULL;
*head = newNode;
return (newNode);
}
while (c->next != NULL)
c = c->next;
c->next = newNode;
newNode->prev = c;
return (newNode);
}
