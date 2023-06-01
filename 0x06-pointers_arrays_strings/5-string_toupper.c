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
*string_toupper - function to print a string in upper case
*
*@s: string to be printed
*
*Return: the string printed in uppercase letters
*
*/
char *string_toupper(char *s)
{
	int len;
	int count;

	len = _strlen(s);

	for (count = 0; count < len; count++)
	if (*(s + count) >= 'a' && *(s + count) <= 'z')
	*(s + count) -= ('a' - 'A');
	return (s);
}
