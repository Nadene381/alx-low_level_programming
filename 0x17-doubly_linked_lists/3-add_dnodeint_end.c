#include "lists.h"
/**
* add_dnodeint_end - Function that adds a new node at the end of a list.
* @head: pointer passed in function
* @n: variable passed in function
* Return: address of the new element, or NULL if it failed
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
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
