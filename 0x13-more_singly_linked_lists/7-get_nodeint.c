#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
* get_nodeint_at_index - A function that returns nth node of linked list
* @head: pointer passed in function
* @index: variable passed in function
* Return: nothing if the node doesnt exit
*
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *new_Node = head;
unsigned int numb;
numb = 1;
for ( ; new_Node != NULL; numb++)
{
while (numb == index)
{
return (new_Node);
}
new_Node = new_Node->next;
}
return (NULL);
}
