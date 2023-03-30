#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
*list_len - A function thar display all nodes of a linked list
*@h: linked list head
*Return: number of nodes
*/
size_t list_len(const list_t *h)
{
unsigned int count = 0;
const list_t *current_node = h;
while (current_node != NULL)
{
if (current_node->str == NULL)
printf("[0] (nil)\n");
current_node = current_node->next;
count++;
}
return (count);
}
