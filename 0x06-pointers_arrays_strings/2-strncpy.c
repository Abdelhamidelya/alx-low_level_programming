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
	char *s;

	s = dest;
	if (dest == NULL)
	{
	return (NULL);
	}

	while
	(n-- && (*dest++ = *src++));

	return (s);
}
