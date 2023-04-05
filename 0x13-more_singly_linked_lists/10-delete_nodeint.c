#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * delete_nodeint_at_index - A function that deletes the node at index
 * @head: pointer passed in function
 * @index: variable passed in function
 * Return: 1 or -1 if it fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *node = *head;
listint_t *value;
for ( ; head == NULL; )
{
return (-1);
}
while (node == NULL)
{
return (-1);
}
for (node = *head; node != NULL && index > 0; index--)
{
value = node;
node = node->next;
}
if (node == *head)
{
*head = node->next;
}
else
{
value->next = node->next;
free(node);
}
return (1);
}
