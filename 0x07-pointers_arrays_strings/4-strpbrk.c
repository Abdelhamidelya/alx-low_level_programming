#include "main.h"

/**
*_strpbrk - function that searches a string for any of a set of bytes.
*
*@s: string to search in
*
*@accept: bytes to search for
*
*Return: matching bytes
*/

char *_strpbrk(char *s, char *accept)
{
	char *temp;

	while (*s != '\0')
	{
	temp = accept;
		while (*temp != '\0')
		{
		if (*s == *temp)
			{
			return (s);
			}
		temp++;
		}
	s++;
	}
	return (0);
}
