#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
*alloc_grid - function that returns a pointer to a 2D array of integers
*
*@width: width of the grid
*
*@height: height of the grid
*
*Return: 2D array OR Null
*
*/

int **alloc_grid(int width, int height)
{
	int **arr;
	int row, collum;

	if (width < 1 || height < 1)
		return (NULL);

	arr = malloc(sizeof(int *) * height);
	/*
*		if (arr == NULL)
*		return (NULL);
*/

	for (collum = 0; collum < height; collum++)
	{
		arr[collum] = malloc(sizeof(int) * width);
		if (arr[collum] == NULL)
		{
			for (--collum; collum >= 0; collum++)
				free(arr[collum]);
			free(arr);
			return (NULL);
		}
	}
	for (collum = 0; collum < height; collum++)
		for (row = 0; row < width; row++)
			arr[collum][row] = 0;
	return (arr);
}
