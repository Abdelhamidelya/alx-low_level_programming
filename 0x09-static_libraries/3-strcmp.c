#include "main.h"
/**
*_strcmp - function to compare two strings
*
*@s1: first string
*
*@s2: second string
*
*Return: the diffrence between the two strings
*/

int _strcmp(char *s1, char *s2)
{
	while (*s1)
	{
	if (*s1 != *s2)
		{
		break;
		}
	s1++;
	s2++;
	}
	return (*s1 - *s2);
}
