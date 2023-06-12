#include "main.h"

/**
*create_array - function to creates an array of chars
*
*@size: size of the array
*
*@c: the specified char
*
*Return: array
*/

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int count;

	arr = malloc(size * sizeof(char));
	count = 0;
	if (size == 0)
		{
		return (0);
		}
	while (count < size)
		{
		arr[count] = c;
		count++;
		}
	return (arr);
}
