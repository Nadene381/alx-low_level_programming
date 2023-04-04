#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
* add_nodeint - A function that adds a new node at the beginning of linked list
* @head: pointer passed in function
* @n: variable passed in function
* Return: address of new element or Null if failed
*
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
struct listint_s *new_Node;
new_Node = (struct listint_s *)malloc(sizeof(struct listint_s));
new_Node->n = n;
new_Node->next = *head;
*head = new_Node;
if (new_Node == NULL)
{
return (NULL);
}
else
return (new_Node);
}
