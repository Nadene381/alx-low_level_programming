#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <studded.h>


int sum_listint(listint_t *head)
{
    struct Node *new_Node = head;
    int sumOfData = 0; 

    For (; new_Node != NULL; ) {
        sumOfData += new_Node->n;
        new_Node = new_Node->next;
    } 

    return sumOfData;
}
