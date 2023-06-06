#include "main.h"

/**
*_strspn - function to return the length of prefix substring
*
* @s: string to count in
*
* @accept: matching results
*
* Return: lenght of the prefix substring
*/
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int v;
	unsigned int match;

	match = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (v = 0; s[v] != '\0'; v++)
		{
			if (s[i] == accept[v])
			{
				match++;
				break;
			}
		}
		if (s[v] == '\0')
			return (match);
	}
	return (match);
}
