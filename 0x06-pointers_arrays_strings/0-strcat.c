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
*_strcat - function to concatenates two strings
*
*@dest: destination to print from
*
*@src: newly printed string
*
*Return: nothing
*/

char *_strcat(char *dest, char *src)
{
	char *count;

	count = dest + _strlen(dest);
	while (*src != '\0')
	{
	*count++ = *src++;
	}
	return (dest);
}
