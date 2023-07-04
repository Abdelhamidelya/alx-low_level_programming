#include "lists.h"
#include <stdio.h>
/**
*free_listint2 - function to free a list when head is null
*
*@head: linked list head
*/
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		temp = *head;
		free(*head);
		*head = temp->next;
	}
	*head = NULL;
}
