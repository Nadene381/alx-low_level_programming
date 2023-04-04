#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
* free_listint2 - A function that frees a linked list
* @head: pointer passed in function
* Return: nothing
*
*/
void free_listint2(listint_t **head)
{
listint_t *next;
listint_t *new_Nodes = *head;
for ( ; new_Nodes != NULL; )
{
next = new_Nodes->next;
free(new_Nodes);
new_Nodes = next;
}
*head = NULL;
}
