#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
* sum_listint - A function that returns the sum of all the data
* @head: pointer passed in function
* Return: nothing if linked list is empty
*
*/
int sum_listint(listint_t *head)
{
listint_t *new_Node = head;
int sumOfData = 0;
if (head == NULL)
{
}
for (; new_Node != NULL; )
{
sumOfData += new_Node->n;
new_Node = new_Node->next;
}
return (sumOfData);
}
