#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
* add_node - function that adds a new node at the beginning of a linked list
* @head: a double pointer to a head node
* @str: string to add
* Return: the address of the new element, or NULL if it failed
*/
list_t *add_node(list_t **head, const char *str)
{
list_t *new;
new = malloc(sizeof(list_t));
if (new == NULL)
return (NULL);
new->str = strdup(str);
new->len = strlen(str);
new->next = *head;
*head = new;
return (*head);
}
