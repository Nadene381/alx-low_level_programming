#include "lists.h"
/**
* sum_dlistint - Returns the sum of all the data of a linked list.
* @head: pointer passed in function
* Return: 0 if the list is empty
*/
int sum_dlistint(dlistint_t *head)
{
int sum = 0;
dlistint_t *c = head;
while (c != NULL)
{
sum += c->n;
c = c->next;
}
return (sum);
}
