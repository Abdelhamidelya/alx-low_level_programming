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
	char *count;

	count = dest;
	while (*src && n--)
	{
	*dest = *src;
	dest++;
	src++;
	}
	return (count);
}
