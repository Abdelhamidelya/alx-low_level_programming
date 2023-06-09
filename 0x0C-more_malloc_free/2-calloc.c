#include "main.h"
#include <stdlib.h>

/**
*_calloc - function to allocates memory
*
*@nmemb: elements number
*
*@size: elements size
*
* Return: pointer to array
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int count;

	count = 0;
	if (nmemb == 0 || size == 0)
		return (NULL);
	arr = malloc(nmemb * size);
	if (arr == NULL)
	{
		return (NULL);
	}
	while (count < nmemb * size)
	{
		arr[count] = 0;
		count++;
	}
	return (arr);
}
