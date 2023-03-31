#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
* free_list -  A function that frees a linked list.
* @head: pointer to head
* Return: nothing
**/
void free_list(list_t *head)
{
list_t *m;
while (head != NULL)
{
m = head;
head = head->next;
free(m->str);
free(m);
}
}
