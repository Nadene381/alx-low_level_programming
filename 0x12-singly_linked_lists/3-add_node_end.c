#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
* add_node_end - a function that adds a new node at the end of a list_t list.
* @head: pointer to our head
* @str: point to string
* Return: number of nodes
**/

list_t *add_node_end(list_t **head, const char *str)
{
unsigned int count;
list_t *new_node;
list_t *current_node ;

new_node = malloc(sizeof(list_t));
current_node  = *head;

if (new_node == NULL)
{
return (NULL);
}

new_node->str = strdup(str);
if (new_node->str != '\0')
{
for (count = 0; new_node->str[count] != '\0'; count++)
{
;
}
}
new_node->len = count;
if (*head == NULL)
{
*head = new_node;
return (new_node);
}
else
{
current_node  = *head;
while (current_node ->next != NULL)
{
current_node  = current_node ->next;
}

current_node ->next = new_node;
}
return (current_node );
}
