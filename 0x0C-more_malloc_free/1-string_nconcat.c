#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*string_nconcat - function that concatenates two strings.
*
*@s1: first string
*
*@s2: second string
*
*@n: n bytes of s2
*
*Return: concated strings OR null if both string are null
*
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, s1len, s2len;
	char *s;

	if (s2 == NULL)
		s2 = "";
	if (s1 == NULL)
		s1 = "";

	s1len = 0;
	s2len = 0;

	while (s1[s1len] != '\0')
	s1len++;
	while (s2[s2len] != '\0')
	s2len++;

	if (n >= s2len)
		n = s2len;

	s = malloc(sizeof(char) * n + s1len + 1);
	if (s == NULL)
		return (NULL);

	for (i = 0; i < s1len; i++)
		s[i] = s1[i];

	for (i = 0; i < n; i++)
		s[i + s1len] = s2[i];
	s[i + s1len] = '\0';
	return (s);
}
