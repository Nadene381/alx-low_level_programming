#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
* free_listint - A function that frees a linked list
* @head: pointer passed in function
* Return: nothing
*
*/
void free_listint(listint_t *head)
{
listint_t *new_Nodes = head;
listint_t *next;
for ( ; new_Nodes != NULL; )
{
next = new_Nodes->next;
free(new_Nodes);
new_Nodes = next;
}
head = NULL;
}
