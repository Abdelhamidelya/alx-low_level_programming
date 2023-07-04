#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
*free_listint - function that frees a list_t list
*
*@head: var
*/
void free_listint(listint_t *head)
{
	listint_t *temp;


	while (head != NULL)
	{
		temp = head;
		free(head);
		head = temp->next;
	}

}
