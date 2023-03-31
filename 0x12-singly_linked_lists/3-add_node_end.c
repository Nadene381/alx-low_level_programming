#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"
#include <stdbool.h>
/**
* add_node_end - a function that adds a new node at the end of a list_t list.
* @head: pointer to our head
* @str: point to string
* Return: number of nodes
**/

list_t *add_node_end(list_t **head, const char *str)
{
list_t *n, *temp;
n = malloc(sizeof(list_t));
if (n == NULL)
return (NULL);
n->str = strdup(str);
n->len = strlen(str);
n->next = NULL;
temp = *head;
if (temp == NULL)
*head = n;
else
{
while (temp->next != NULL)
{
temp = temp->next;
}
temp->next = n;
}
return (*head);
}
