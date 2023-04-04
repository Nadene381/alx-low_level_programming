#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
* pop_listint - A function that frees a linked list
* @head: pointer passed in function
* Return: nothing if linked list is empty
*
*/
int pop_listint(listint_t **head)
{
listint_t *tempVar;
int n;
while (*head == NULL)
{
return (0);
}
tempVar = *head;
n = tempVar->n;
*head = (*head)->next;
free(tempVar);
return (n);
}
