#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
*print_list - function that prints all the elements of a linked list
*@h: linked list head
*Return: number of nodes
*/


size_t print_list(const list_t *h)
{
unsigned int count = 0;
const list_t *current_node  = h;
while (current_node  != NULL)
{
if (current_node->str == NULL)
printf("[0] (nil)\n");
else
{
printf("[%d] %s\n", current_node->len, current_node->str);
}
current_node = current_node->next;
count++;
}
return (count);
}
