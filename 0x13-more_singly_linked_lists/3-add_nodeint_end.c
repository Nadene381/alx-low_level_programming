#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
* add_nodeint_end - A function that adds a new node at end of the linked list
* @head: pointer passed in function
* @n: variable passed in function
* Return: address of new element or Null if failed
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new_Node = malloc(sizeof(listint_t));
while (new_Node == NULL)
{
return (NULL);
}
new_Node->n = n;
new_Node->next = NULL;
if (*head == NULL)
{
*head = new_Node;
}
else
{
listint_t *lastNode = *head;
for ( ; lastNode->next != NULL; )
{
lastNode = lastNode->next;
}
lastNode->next = new_Node;
}
return (new_Node);
}
