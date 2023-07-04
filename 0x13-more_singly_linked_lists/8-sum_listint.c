#include "lists.h"
#include <stdlib.h>

/**
*sum_listint - returns sum of all data from n element of struct of linked list
*
*@head: linked list head
*
*Return: sum of all numbers
*/
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
