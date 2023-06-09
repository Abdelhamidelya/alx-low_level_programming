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
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	if (s[i] == c)
		return (s + i);
	return (0);
}
