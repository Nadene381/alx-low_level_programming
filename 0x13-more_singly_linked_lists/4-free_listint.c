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
struct listint_s *next;
struct listint_s numNodes = *head;
*head = NULL;
for ( ; numNodes != NULL; )
{
next = numNodes->next;
free(numNodes);
numNodes = next;
}
return (0);
}
