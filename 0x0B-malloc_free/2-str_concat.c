#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
*str_concat - function that concatenates two strings.
*
*@s1: first string
*
*@s2: second string
*
*Return: concated strings OR null if both string are null
*
*/

char *str_concat(char *s1, char *s2)
{
	int size;
	char *s;
	unsigned int i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	size = strlen(s1) + strlen(s2) + 1;
	s = malloc(sizeof(char) * size);
	if (s == NULL)
		{
		return (NULL);
		}
	for (i = 0; i < strlen(s1); i++)
		s[i] = s1[i];

	for (i = 0; i < strlen(s2); i++)
		s[strlen(s1) + i] = s2[i];
	return (s);
}
