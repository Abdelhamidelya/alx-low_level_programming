#include "main.h"

/**
*_strchr - function to search for a char in a string
*
*@s: string to search in
*
*@c: char to search for
*
*Return: a string starting from "c"
*/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
	if (*s == c)
	return (s);
	s++;
	}
	return (0);
}
