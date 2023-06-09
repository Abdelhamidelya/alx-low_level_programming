#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
*print_listint - function that prints all the elements of a list
*
*@h: head of the list
*
*Return: number of nodes
*/
size_t print_listint(const listint_t *h)
{
	int count;

	count = 0;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
