#include "main.h"
#include <stdlib.h>

/**
*array_range - function that creates an array of integers
*
*@min: range minimal
*
*@max: array max
*
*Return: array of ints or null
*/
int *array_range(int min, int max)
{
	int *arr;
	int count;

	count = 0;
	if (min > max)
	{
		return (NULL);
	}

	arr = malloc(sizeof(int) * (max - min + 1));
	if (arr == NULL)
	{
		return (NULL);
	}

	while (min <= max)
	{
		arr[count] = min;
		min++;
		count++;
	}
	return (arr);
}
