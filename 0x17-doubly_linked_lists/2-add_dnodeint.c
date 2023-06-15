#include "lists.h"
/**
* add_dnodeint - Function that adds a new node at the beginning of a list.
* @head: pointer passed in function
* @n: pointer passed in function
* Return: address of the new element, or NULL if it failed
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *newNode = malloc(sizeof(dlistint_t));
while (newNode == NULL)
return (NULL);
newNode->n = n;
newNode->prev = NULL;
newNode->next = *head;
if (*head != NULL)
(*head)->prev = newNode;
*head = newNode;
return (newNode);
}

