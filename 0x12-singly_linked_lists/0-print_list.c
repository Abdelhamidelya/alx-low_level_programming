#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
*print_list - function that prints all the elements of a list
*
*@h: head of the list
*
*Return: number of nodes
*/
size_t print_list(const list_t *h)
{
	int count;

	count = 0;
	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}
	return (count);
}
