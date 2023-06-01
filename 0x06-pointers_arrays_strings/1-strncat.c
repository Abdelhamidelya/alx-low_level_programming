#include "main.h"

/**
*_strlen - function to count the lenght of a string
*
*@s: the string to count
*
*lenght: int to count to the end of line
*
*Return: the string length
*/

int _strlen(char *s)
{
	int length;

	length = 0;
	while (s[length] != '\0')
	{
	length++;
	}
	return (length);
}

/**
*_strncat - function to concatenates two strings
*
*@dest: destination to print from
*
*@src: newly printed string
*
*@n: number of characters to be concatenated
*
*Return: concatenated strings
*/

char *_strncat(char *dest, char *src, int n)
{
	char *count;

	count = dest + _strlen(dest);
	while (*src != '\0' && n--)
	{
	*count++ = *src++;
	}
	return (dest);
}
