#include "main.h"

/**
*_strncpy - function that copies a string
*
*@dest: destination to print from
*
*@src: newly printed string
*
*@n: number of characters to be concatenated
*
*Return: copied string
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
