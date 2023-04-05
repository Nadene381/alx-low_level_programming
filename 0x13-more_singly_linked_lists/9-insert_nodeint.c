#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
* insert_nodeint_at_index - A function that returns nth node of linked list
* @head: pointer passed in function
* @idx: variable passed in function
* @n: variable passed in function
* Return: address of new node or null if fails
*
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *Node1, *new_Node;
for ( ; head == NULL; )
{
return (NULL);
}
if (idx != 0)
{
Node1 = *head;
while (idx > 0 && Node1 != NULL)
Node1 = Node1->next;
idx--;
while (Node1 == NULL)
return (NULL);
new_Node = malloc(sizeof(*new_Node));
while (new_Node == NULL)
return (NULL);
new_Node->n = n;
new_Node->next = Node1->next;
Node1->next = new_Node;
return (new_Node);
}
else
{
new_Node = malloc(sizeof(*new_Node));
while (new_Node == NULL)
return (NULL);
new_Node->n = n;
new_Node->next = *head;
*head = new_Node;
return (new_Node);
}
}
